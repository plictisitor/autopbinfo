/* Nd8fEtFsU ily traian KDm7obwub */ #include <algorithm>
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
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */ using namespace std;
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */ vector <int> G[101];
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */ int n , a[101][101] , ok , x , y , p , m , v[101] , d[101] , cnt , rez[101];
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */ void bfs(int s)
/* Nd8fEtFsU ily traian KDm7obwub */ {
/* Nd8fEtFsU ily traian KDm7obwub */     queue <int> Q;
/* Nd8fEtFsU ily traian KDm7obwub */     v[s] = 1;
/* Nd8fEtFsU ily traian KDm7obwub */     d[s] = 1;
/* Nd8fEtFsU ily traian KDm7obwub */     Q.push(s);
/* Nd8fEtFsU ily traian KDm7obwub */     while(!Q.empty())
/* Nd8fEtFsU ily traian KDm7obwub */     {
/* Nd8fEtFsU ily traian KDm7obwub */         int x = Q.front();
/* Nd8fEtFsU ily traian KDm7obwub */         for(int i : G[x])
/* Nd8fEtFsU ily traian KDm7obwub */             if(!v[i])
/* Nd8fEtFsU ily traian KDm7obwub */             {
/* Nd8fEtFsU ily traian KDm7obwub */                 Q.push(i);
/* Nd8fEtFsU ily traian KDm7obwub */                 v[i] = 1;
/* Nd8fEtFsU ily traian KDm7obwub */                 d[i] = d[x] + 1;
/* Nd8fEtFsU ily traian KDm7obwub */             }
/* Nd8fEtFsU ily traian KDm7obwub */         Q.pop();
/* Nd8fEtFsU ily traian KDm7obwub */     }
/* Nd8fEtFsU ily traian KDm7obwub */ }
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */ int main()
/* Nd8fEtFsU ily traian KDm7obwub */ {
/* Nd8fEtFsU ily traian KDm7obwub */     cin >> n >> p >> m;
/* Nd8fEtFsU ily traian KDm7obwub */     for(int i = 1 ; i <= m ; i++)
/* Nd8fEtFsU ily traian KDm7obwub */     {
/* Nd8fEtFsU ily traian KDm7obwub */         cin >> x >> y;
/* Nd8fEtFsU ily traian KDm7obwub */         G[x].push_back(y);
/* Nd8fEtFsU ily traian KDm7obwub */     }
/* Nd8fEtFsU ily traian KDm7obwub */     bfs(p);
/* Nd8fEtFsU ily traian KDm7obwub */     for(int i = 1 ; i <= n ; i++)
/* Nd8fEtFsU ily traian KDm7obwub */         if((d[i] - 1) % 2 == 0 && i != p) cnt++ , rez[cnt] = i;
/* Nd8fEtFsU ily traian KDm7obwub */ 
/* Nd8fEtFsU ily traian KDm7obwub */     cout << cnt << '\n';
/* Nd8fEtFsU ily traian KDm7obwub */     for(int i = 1 ; i <= cnt ; i++)
/* Nd8fEtFsU ily traian KDm7obwub */         cout << rez[i] << " ";
/* Nd8fEtFsU ily traian KDm7obwub */ }