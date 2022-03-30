/* z6bDcLILg ily traian 6IVb19aZc */ #include <algorithm>
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
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */ #define INF 0x3f3f3f3f
/* z6bDcLILg ily traian 6IVb19aZc */ using namespace std;
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */ ifstream cin("pm.in");
/* z6bDcLILg ily traian 6IVb19aZc */ ofstream cout("pm.out");
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */ int n , m , x , timp[105] , dist[105] , cost[105] , v[105];
/* z6bDcLILg ily traian 6IVb19aZc */ vector <int> G[105];
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */ int dfs(int node)
/* z6bDcLILg ily traian 6IVb19aZc */ {
/* z6bDcLILg ily traian 6IVb19aZc */     if(dist[node] != 0) return dist[node];
/* z6bDcLILg ily traian 6IVb19aZc */     for(auto i : G[node])
/* z6bDcLILg ily traian 6IVb19aZc */         dist[node] = max(dist[node], dfs(i));
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */     dist[node] += cost[node];
/* z6bDcLILg ily traian 6IVb19aZc */     return dist[node];
/* z6bDcLILg ily traian 6IVb19aZc */ }
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */ void dfs2( int node, int val)
/* z6bDcLILg ily traian 6IVb19aZc */ {
/* z6bDcLILg ily traian 6IVb19aZc */     if(timp[node] > val) timp[node] = val;
/* z6bDcLILg ily traian 6IVb19aZc */     for(auto i : G[node])
/* z6bDcLILg ily traian 6IVb19aZc */     {
/* z6bDcLILg ily traian 6IVb19aZc */         if(timp[i] > timp[node] - cost[i])
/* z6bDcLILg ily traian 6IVb19aZc */         dfs2(i , timp[node] - cost[i]);
/* z6bDcLILg ily traian 6IVb19aZc */     }
/* z6bDcLILg ily traian 6IVb19aZc */ }
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */ int main()
/* z6bDcLILg ily traian 6IVb19aZc */ {
/* z6bDcLILg ily traian 6IVb19aZc */     cin >> n;
/* z6bDcLILg ily traian 6IVb19aZc */     for(int i = 1 ; i <= n ; i++)
/* z6bDcLILg ily traian 6IVb19aZc */         cin >> cost[i];
/* z6bDcLILg ily traian 6IVb19aZc */     for(int i = 1 ; i <= n ; i++)
/* z6bDcLILg ily traian 6IVb19aZc */     {
/* z6bDcLILg ily traian 6IVb19aZc */         cin >> m;
/* z6bDcLILg ily traian 6IVb19aZc */         for(int j = 1 ; j <= m ; j++)
/* z6bDcLILg ily traian 6IVb19aZc */         {
/* z6bDcLILg ily traian 6IVb19aZc */             cin >> x;
/* z6bDcLILg ily traian 6IVb19aZc */             G[i].push_back(x);
/* z6bDcLILg ily traian 6IVb19aZc */             v[x] = 1;
/* z6bDcLILg ily traian 6IVb19aZc */         }
/* z6bDcLILg ily traian 6IVb19aZc */     }
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */     for(int i = 1 ; i <= n ; i++)
/* z6bDcLILg ily traian 6IVb19aZc */       if(!v[i]) G[n + 1].push_back(i);
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */     dfs(n + 1);
/* z6bDcLILg ily traian 6IVb19aZc */     cout << dist[n + 1] << '\n';
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */     for(int i = 1 ; i <= n + 1 ; i++)
/* z6bDcLILg ily traian 6IVb19aZc */         timp[i] = INF;
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */     dfs2(n + 1, dist[n + 1]);
/* z6bDcLILg ily traian 6IVb19aZc */ 
/* z6bDcLILg ily traian 6IVb19aZc */     for(int i = 1 ; i <= n ; i++)
/* z6bDcLILg ily traian 6IVb19aZc */         cout << dist[i] - cost[i] << " " << timp[i] << '\n';
/* z6bDcLILg ily traian 6IVb19aZc */     return 0;
/* z6bDcLILg ily traian 6IVb19aZc */ }