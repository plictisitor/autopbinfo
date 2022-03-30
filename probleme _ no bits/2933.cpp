/* nSsB0gaj5 ily traian 9axhWQtGE */ #include <algorithm>
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
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ using namespace std;
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ #define inf 0x3f3f3f3f
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ ifstream cin("tollroads.in");
/* nSsB0gaj5 ily traian 9axhWQtGE */ ofstream cout("tollroads.out");
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ int n, m, k, X, t, P[100001];
/* nSsB0gaj5 ily traian 9axhWQtGE */ vector<vector<pair<int, int>>> G(100001);
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ int BFS(int nod){
/* nSsB0gaj5 ily traian 9axhWQtGE */     queue<int> Q;
/* nSsB0gaj5 ily traian 9axhWQtGE */     Q.push(nod);
/* nSsB0gaj5 ily traian 9axhWQtGE */     P[nod] = 0;
/* nSsB0gaj5 ily traian 9axhWQtGE */     while(!Q.empty()){
/* nSsB0gaj5 ily traian 9axhWQtGE */         int nod1 = Q.front();
/* nSsB0gaj5 ily traian 9axhWQtGE */         for(auto x:G[nod1]){
/* nSsB0gaj5 ily traian 9axhWQtGE */             int y = x.first;
/* nSsB0gaj5 ily traian 9axhWQtGE */             int c = x.second;
/* nSsB0gaj5 ily traian 9axhWQtGE */             if(P[y] > P[nod1] + c && P[nod1] + c <= t)
/* nSsB0gaj5 ily traian 9axhWQtGE */                 P[y] = P[nod1] + c, Q.push(y);
/* nSsB0gaj5 ily traian 9axhWQtGE */         }
/* nSsB0gaj5 ily traian 9axhWQtGE */         Q.pop();
/* nSsB0gaj5 ily traian 9axhWQtGE */     }
/* nSsB0gaj5 ily traian 9axhWQtGE */     int c = 0;
/* nSsB0gaj5 ily traian 9axhWQtGE */     for(int i = 1; i <= n; ++i){
/* nSsB0gaj5 ily traian 9axhWQtGE */         if(P[i] <= t)
/* nSsB0gaj5 ily traian 9axhWQtGE */             c++, P[i] = inf;
/* nSsB0gaj5 ily traian 9axhWQtGE */     }
/* nSsB0gaj5 ily traian 9axhWQtGE */     return c-1;
/* nSsB0gaj5 ily traian 9axhWQtGE */ }
/* nSsB0gaj5 ily traian 9axhWQtGE */ 
/* nSsB0gaj5 ily traian 9axhWQtGE */ int main(){
/* nSsB0gaj5 ily traian 9axhWQtGE */     cin >> n >> m >> k;
/* nSsB0gaj5 ily traian 9axhWQtGE */     int a, b, c;
/* nSsB0gaj5 ily traian 9axhWQtGE */     for(int i = 1; i <= m; ++i)
/* nSsB0gaj5 ily traian 9axhWQtGE */         cin >> a >> b >> c, G[a].push_back({b, c}), G[b].push_back({a, c});
/* nSsB0gaj5 ily traian 9axhWQtGE */     for(int i = 1; i <= n; ++i)
/* nSsB0gaj5 ily traian 9axhWQtGE */         P[i] = inf;
/* nSsB0gaj5 ily traian 9axhWQtGE */     for(int i = 1; i <= k; ++i){
/* nSsB0gaj5 ily traian 9axhWQtGE */         cin >> X >> t;
/* nSsB0gaj5 ily traian 9axhWQtGE */         cout << BFS(X) << '\n';
/* nSsB0gaj5 ily traian 9axhWQtGE */     }
/* nSsB0gaj5 ily traian 9axhWQtGE */     return 0;
/* nSsB0gaj5 ily traian 9axhWQtGE */ }