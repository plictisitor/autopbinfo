/* kUVkZmgYy ily traian meJ38Jmti */ #include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ using namespace std;
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ ifstream cin("nunta.in");
/* kUVkZmgYy ily traian meJ38Jmti */ ofstream cout("nunta.out");
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ int n, m, cnt, nrc, P[20001], jum, sp[10001];
/* kUVkZmgYy ily traian meJ38Jmti */ vector<vector<int>> G(20001);
/* kUVkZmgYy ily traian meJ38Jmti */ pair<int, int> cc[20001];
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ void lee(int nod){
/* kUVkZmgYy ily traian meJ38Jmti */     cnt = 1;
/* kUVkZmgYy ily traian meJ38Jmti */     P[nod] = 1;
/* kUVkZmgYy ily traian meJ38Jmti */     queue<int> Q;
/* kUVkZmgYy ily traian meJ38Jmti */     Q.push(nod);
/* kUVkZmgYy ily traian meJ38Jmti */     while(!Q.empty()){
/* kUVkZmgYy ily traian meJ38Jmti */         int x = Q.front();
/* kUVkZmgYy ily traian meJ38Jmti */         for(auto i:G[x])
/* kUVkZmgYy ily traian meJ38Jmti */             if(!P[i])
/* kUVkZmgYy ily traian meJ38Jmti */                 P[i] = 1, cnt++, Q.push(i);
/* kUVkZmgYy ily traian meJ38Jmti */         Q.pop();
/* kUVkZmgYy ily traian meJ38Jmti */     }
/* kUVkZmgYy ily traian meJ38Jmti */ }
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ bool comp(pair<int, int> a, pair<int, int> b){
/* kUVkZmgYy ily traian meJ38Jmti */     if(a.second != b.second)
/* kUVkZmgYy ily traian meJ38Jmti */         return a.second < b.second;
/* kUVkZmgYy ily traian meJ38Jmti */     return a.first < b.first;
/* kUVkZmgYy ily traian meJ38Jmti */ }
/* kUVkZmgYy ily traian meJ38Jmti */ 
/* kUVkZmgYy ily traian meJ38Jmti */ int main(){
/* kUVkZmgYy ily traian meJ38Jmti */     int x, y;
/* kUVkZmgYy ily traian meJ38Jmti */     cin >> n >> m;
/* kUVkZmgYy ily traian meJ38Jmti */     for(int i = 1; i <= m; ++i){
/* kUVkZmgYy ily traian meJ38Jmti */         cin >> x >> y;
/* kUVkZmgYy ily traian meJ38Jmti */         G[x].push_back(y);
/* kUVkZmgYy ily traian meJ38Jmti */         G[y].push_back(x);
/* kUVkZmgYy ily traian meJ38Jmti */     }
/* kUVkZmgYy ily traian meJ38Jmti */     for(int i = 1; i <= n; ++i)
/* kUVkZmgYy ily traian meJ38Jmti */         if(!P[i]){
/* kUVkZmgYy ily traian meJ38Jmti */             lee(i);
/* kUVkZmgYy ily traian meJ38Jmti */             if(cnt > 1){
/* kUVkZmgYy ily traian meJ38Jmti */                 cc[++nrc].first = i;
/* kUVkZmgYy ily traian meJ38Jmti */                 cc[nrc].second = cnt;
/* kUVkZmgYy ily traian meJ38Jmti */             }
/* kUVkZmgYy ily traian meJ38Jmti */         }
/* kUVkZmgYy ily traian meJ38Jmti */     jum = n / 2 + 1;
/* kUVkZmgYy ily traian meJ38Jmti */     cout << nrc << '\n';
/* kUVkZmgYy ily traian meJ38Jmti */     cnt = 0;
/* kUVkZmgYy ily traian meJ38Jmti */     for(int i = 1; i <= nrc; ++i)
/* kUVkZmgYy ily traian meJ38Jmti */         sp[i] = sp[i-1] + cc[i].second;
/* kUVkZmgYy ily traian meJ38Jmti */     int h = nrc + 1;
/* kUVkZmgYy ily traian meJ38Jmti */     for(int i = 1; i <= nrc; ++i)
/* kUVkZmgYy ily traian meJ38Jmti */         if(sp[i] >= jum && h == nrc + 1)
/* kUVkZmgYy ily traian meJ38Jmti */             h = i;
/* kUVkZmgYy ily traian meJ38Jmti */     for(int i = h; i <= nrc; ++i){
/* kUVkZmgYy ily traian meJ38Jmti */         int j = 0;
/* kUVkZmgYy ily traian meJ38Jmti */         while(sp[i] - sp[j] >= jum)
/* kUVkZmgYy ily traian meJ38Jmti */             j++;
/* kUVkZmgYy ily traian meJ38Jmti */         cnt+=j;
/* kUVkZmgYy ily traian meJ38Jmti */     }
/* kUVkZmgYy ily traian meJ38Jmti */     cout << cnt;
/* kUVkZmgYy ily traian meJ38Jmti */     return 0;
/* kUVkZmgYy ily traian meJ38Jmti */ }