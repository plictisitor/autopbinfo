/* VkZjL1iEu ily traian dfsnBq0rA */ #include <algorithm>
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
/* VkZjL1iEu ily traian dfsnBq0rA */ 
/* VkZjL1iEu ily traian dfsnBq0rA */ 
/* VkZjL1iEu ily traian dfsnBq0rA */ using namespace std;
/* VkZjL1iEu ily traian dfsnBq0rA */ 
/* VkZjL1iEu ily traian dfsnBq0rA */ ifstream cin("genius.in");
/* VkZjL1iEu ily traian dfsnBq0rA */ ofstream cout("genius.out");
/* VkZjL1iEu ily traian dfsnBq0rA */ 
/* VkZjL1iEu ily traian dfsnBq0rA */ int n, m, k, p, P[50001];
/* VkZjL1iEu ily traian dfsnBq0rA */ vector< vector<int> > G(50001);
/* VkZjL1iEu ily traian dfsnBq0rA */ 
/* VkZjL1iEu ily traian dfsnBq0rA */ void lee(int nod){
/* VkZjL1iEu ily traian dfsnBq0rA */     queue<int> Q;
/* VkZjL1iEu ily traian dfsnBq0rA */     Q.push(nod);
/* VkZjL1iEu ily traian dfsnBq0rA */     P[nod] = 1;
/* VkZjL1iEu ily traian dfsnBq0rA */     while(!Q.empty()){
/* VkZjL1iEu ily traian dfsnBq0rA */         int x = Q.front();
/* VkZjL1iEu ily traian dfsnBq0rA */         for(auto i:G[x])
/* VkZjL1iEu ily traian dfsnBq0rA */             if(!P[i])
/* VkZjL1iEu ily traian dfsnBq0rA */                 P[i] = P[x] + 1, Q.push(i);
/* VkZjL1iEu ily traian dfsnBq0rA */         Q.pop();
/* VkZjL1iEu ily traian dfsnBq0rA */     }
/* VkZjL1iEu ily traian dfsnBq0rA */ }
/* VkZjL1iEu ily traian dfsnBq0rA */ 
/* VkZjL1iEu ily traian dfsnBq0rA */ int main(){
/* VkZjL1iEu ily traian dfsnBq0rA */     cin >> n >> m;
/* VkZjL1iEu ily traian dfsnBq0rA */     int x, y;
/* VkZjL1iEu ily traian dfsnBq0rA */     for(int i = 1; i <= m; ++i){
/* VkZjL1iEu ily traian dfsnBq0rA */         cin >> x >> y;
/* VkZjL1iEu ily traian dfsnBq0rA */         G[x].push_back(y);
/* VkZjL1iEu ily traian dfsnBq0rA */         G[y].push_back(x);
/* VkZjL1iEu ily traian dfsnBq0rA */     }
/* VkZjL1iEu ily traian dfsnBq0rA */     cin >> k >> p;
/* VkZjL1iEu ily traian dfsnBq0rA */     lee(k);
/* VkZjL1iEu ily traian dfsnBq0rA */     bool ok = true;
/* VkZjL1iEu ily traian dfsnBq0rA */     int maxi = 0;
/* VkZjL1iEu ily traian dfsnBq0rA */     for(int i = 1; i <= n; ++i){
/* VkZjL1iEu ily traian dfsnBq0rA */         maxi = max(maxi, P[i]);
/* VkZjL1iEu ily traian dfsnBq0rA */         if(!P[i])
/* VkZjL1iEu ily traian dfsnBq0rA */             ok = false;
/* VkZjL1iEu ily traian dfsnBq0rA */     }
/* VkZjL1iEu ily traian dfsnBq0rA */     if(ok)
/* VkZjL1iEu ily traian dfsnBq0rA */         cout << maxi + p - 1;
/* VkZjL1iEu ily traian dfsnBq0rA */     else
/* VkZjL1iEu ily traian dfsnBq0rA */         cout << -1;
/* VkZjL1iEu ily traian dfsnBq0rA */     return 0;
/* VkZjL1iEu ily traian dfsnBq0rA */ }