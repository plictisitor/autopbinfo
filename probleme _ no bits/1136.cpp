/* S1QdKYME6 ily traian O6dvHUts0 */ #include <algorithm>
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
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ using namespace std;
/* S1QdKYME6 ily traian O6dvHUts0 */ #define Inf 0x3f3f3f3f
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ ifstream cin("dragoni.in");
/* S1QdKYME6 ily traian O6dvHUts0 */ ofstream cout("dragoni.out");
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ using PI = pair<int , int>;
/* S1QdKYME6 ily traian O6dvHUts0 */ int cer , n , m , x , y , w , dr[1001] , v[1001] , s , D[1001][1001] , d[10001];
/* S1QdKYME6 ily traian O6dvHUts0 */ vector <pair<int , int>> G[801];
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ void dfs(int nod , int dist , int &s)
/* S1QdKYME6 ily traian O6dvHUts0 */ {
/* S1QdKYME6 ily traian O6dvHUts0 */     v[nod] = 1;
/* S1QdKYME6 ily traian O6dvHUts0 */     for(auto x : G[nod])
/* S1QdKYME6 ily traian O6dvHUts0 */         if(!v[x.first] && x.second <= dist)
/* S1QdKYME6 ily traian O6dvHUts0 */         {
/* S1QdKYME6 ily traian O6dvHUts0 */            v[x.first] = 1;
/* S1QdKYME6 ily traian O6dvHUts0 */            if(dr[x.first] > s)
/* S1QdKYME6 ily traian O6dvHUts0 */                 s = dr[x.first];
/* S1QdKYME6 ily traian O6dvHUts0 */            dfs(x.first , dist , s);
/* S1QdKYME6 ily traian O6dvHUts0 */         }
/* S1QdKYME6 ily traian O6dvHUts0 */ }
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ void dijkstra(int s)
/* S1QdKYME6 ily traian O6dvHUts0 */ {
/* S1QdKYME6 ily traian O6dvHUts0 */     priority_queue <PI , vector<PI> , greater<PI>> Q;
/* S1QdKYME6 ily traian O6dvHUts0 */     D[s][s] = 0;
/* S1QdKYME6 ily traian O6dvHUts0 */     Q.push({0 , s});
/* S1QdKYME6 ily traian O6dvHUts0 */     while(!Q.empty())
/* S1QdKYME6 ily traian O6dvHUts0 */     {
/* S1QdKYME6 ily traian O6dvHUts0 */        x = Q.top().second;
/* S1QdKYME6 ily traian O6dvHUts0 */        y = Q.top().first;
/* S1QdKYME6 ily traian O6dvHUts0 */        Q.pop();
/* S1QdKYME6 ily traian O6dvHUts0 */        if(y > D[s][x]) continue;
/* S1QdKYME6 ily traian O6dvHUts0 */        for(auto& i:G[x])
/* S1QdKYME6 ily traian O6dvHUts0 */        {
/* S1QdKYME6 ily traian O6dvHUts0 */            int nodnou = i.first;
/* S1QdKYME6 ily traian O6dvHUts0 */            int costnou = i.second;
/* S1QdKYME6 ily traian O6dvHUts0 */            if(dr[s] >= costnou && D[s][nodnou] > y + costnou)
/* S1QdKYME6 ily traian O6dvHUts0 */            {
/* S1QdKYME6 ily traian O6dvHUts0 */                D[s][nodnou] = y + costnou;
/* S1QdKYME6 ily traian O6dvHUts0 */                Q.push({D[s][nodnou] , nodnou});
/* S1QdKYME6 ily traian O6dvHUts0 */            }
/* S1QdKYME6 ily traian O6dvHUts0 */        }
/* S1QdKYME6 ily traian O6dvHUts0 */     }
/* S1QdKYME6 ily traian O6dvHUts0 */ }
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */ int main()
/* S1QdKYME6 ily traian O6dvHUts0 */ {
/* S1QdKYME6 ily traian O6dvHUts0 */     cin >> cer >> n >> m;
/* S1QdKYME6 ily traian O6dvHUts0 */     for(int i = 1 ; i <= n ; ++i)
/* S1QdKYME6 ily traian O6dvHUts0 */         cin >> dr[i];
/* S1QdKYME6 ily traian O6dvHUts0 */     for(int i = 1 ; i <= m ; ++i)
/* S1QdKYME6 ily traian O6dvHUts0 */     {
/* S1QdKYME6 ily traian O6dvHUts0 */         cin >> x >> y >> w;
/* S1QdKYME6 ily traian O6dvHUts0 */         G[x].push_back({y , w});
/* S1QdKYME6 ily traian O6dvHUts0 */         G[y].push_back({x , w});
/* S1QdKYME6 ily traian O6dvHUts0 */     }
/* S1QdKYME6 ily traian O6dvHUts0 */     if(cer == 1)
/* S1QdKYME6 ily traian O6dvHUts0 */     {
/* S1QdKYME6 ily traian O6dvHUts0 */         dfs(1 , dr[1] , s);
/* S1QdKYME6 ily traian O6dvHUts0 */         cout << s;
/* S1QdKYME6 ily traian O6dvHUts0 */     }
/* S1QdKYME6 ily traian O6dvHUts0 */     else
/* S1QdKYME6 ily traian O6dvHUts0 */     {
/* S1QdKYME6 ily traian O6dvHUts0 */         for(int i = 1 ; i <= n ; i++)
/* S1QdKYME6 ily traian O6dvHUts0 */             for(int j = 1 ; j <= n ; j++)
/* S1QdKYME6 ily traian O6dvHUts0 */                 D[i][j] = Inf;
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */         for(int i = 1 ; i <= n ; i++)
/* S1QdKYME6 ily traian O6dvHUts0 */             dijkstra(i) , d[i] = D[1][i];
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */         /*for(int i = 1 ; i <= n ; i++)
/* S1QdKYME6 ily traian O6dvHUts0 */         {
/* S1QdKYME6 ily traian O6dvHUts0 */             for(int j = 1 ; j <= n ; j++)
/* S1QdKYME6 ily traian O6dvHUts0 */                 cout << D[i][j] << " ";
/* S1QdKYME6 ily traian O6dvHUts0 */             cout << 'n';
/* S1QdKYME6 ily traian O6dvHUts0 */         }*/
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */         for(int i = 1 ; i <= n ; i++)
/* S1QdKYME6 ily traian O6dvHUts0 */         {
/* S1QdKYME6 ily traian O6dvHUts0 */             for(int j = 1 ; j <= n ; j++)
/* S1QdKYME6 ily traian O6dvHUts0 */                 if(d[i] > d[j] + D[j][i])
/* S1QdKYME6 ily traian O6dvHUts0 */                     d[i] = d[j] + D[j][i];
/* S1QdKYME6 ily traian O6dvHUts0 */         }
/* S1QdKYME6 ily traian O6dvHUts0 */         cout << d[n];
/* S1QdKYME6 ily traian O6dvHUts0 */ 
/* S1QdKYME6 ily traian O6dvHUts0 */     }
/* S1QdKYME6 ily traian O6dvHUts0 */ }