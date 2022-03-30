/* p8gvYIwFy ily traian lcbNBGOp9 */ #include <algorithm>
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
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ using namespace std;
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ vector <int> G[101];
/* p8gvYIwFy ily traian lcbNBGOp9 */ vector <int> H[101];
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ int n , m , x , y , k , c , cnt , d[101] , v[101] , ok , d2[101] , v2[101];
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ void bfs1(int nod)
/* p8gvYIwFy ily traian lcbNBGOp9 */ {
/* p8gvYIwFy ily traian lcbNBGOp9 */     d[nod] = 0;
/* p8gvYIwFy ily traian lcbNBGOp9 */     v[nod] = 1;
/* p8gvYIwFy ily traian lcbNBGOp9 */     queue <int> Q;
/* p8gvYIwFy ily traian lcbNBGOp9 */     Q.push(nod);
/* p8gvYIwFy ily traian lcbNBGOp9 */     while(!Q.empty())
/* p8gvYIwFy ily traian lcbNBGOp9 */     {
/* p8gvYIwFy ily traian lcbNBGOp9 */         int x = Q.front();
/* p8gvYIwFy ily traian lcbNBGOp9 */         for(auto i : G[x])
/* p8gvYIwFy ily traian lcbNBGOp9 */             if(!v[i])
/* p8gvYIwFy ily traian lcbNBGOp9 */             {
/* p8gvYIwFy ily traian lcbNBGOp9 */                 d[i] = d[x] + 1;
/* p8gvYIwFy ily traian lcbNBGOp9 */                 v[i] = 1;
/* p8gvYIwFy ily traian lcbNBGOp9 */                 Q.push(i);
/* p8gvYIwFy ily traian lcbNBGOp9 */             }
/* p8gvYIwFy ily traian lcbNBGOp9 */         Q.pop();
/* p8gvYIwFy ily traian lcbNBGOp9 */     }
/* p8gvYIwFy ily traian lcbNBGOp9 */ }
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ void bfs2(int nod)
/* p8gvYIwFy ily traian lcbNBGOp9 */ {
/* p8gvYIwFy ily traian lcbNBGOp9 */     d2[nod] = 0;
/* p8gvYIwFy ily traian lcbNBGOp9 */     v2[nod] = 1;
/* p8gvYIwFy ily traian lcbNBGOp9 */     queue <int> q;
/* p8gvYIwFy ily traian lcbNBGOp9 */     q.push(nod);
/* p8gvYIwFy ily traian lcbNBGOp9 */     while(!q.empty())
/* p8gvYIwFy ily traian lcbNBGOp9 */     {
/* p8gvYIwFy ily traian lcbNBGOp9 */         int x = q.front();
/* p8gvYIwFy ily traian lcbNBGOp9 */         for(auto i : H[x])
/* p8gvYIwFy ily traian lcbNBGOp9 */             if(!v2[i])
/* p8gvYIwFy ily traian lcbNBGOp9 */             {
/* p8gvYIwFy ily traian lcbNBGOp9 */                 d2[i] = d2[x] + 1;
/* p8gvYIwFy ily traian lcbNBGOp9 */                 v2[i] = 1;
/* p8gvYIwFy ily traian lcbNBGOp9 */                 q.push(i);
/* p8gvYIwFy ily traian lcbNBGOp9 */             }
/* p8gvYIwFy ily traian lcbNBGOp9 */         q.pop();
/* p8gvYIwFy ily traian lcbNBGOp9 */     }
/* p8gvYIwFy ily traian lcbNBGOp9 */ }
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */ int main()
/* p8gvYIwFy ily traian lcbNBGOp9 */ {
/* p8gvYIwFy ily traian lcbNBGOp9 */     cin >> n >> m >> k;
/* p8gvYIwFy ily traian lcbNBGOp9 */     for(int i = 1 ; i <= m ; i++)
/* p8gvYIwFy ily traian lcbNBGOp9 */     {
/* p8gvYIwFy ily traian lcbNBGOp9 */         cin >> x >> y;
/* p8gvYIwFy ily traian lcbNBGOp9 */         G[x].push_back(y);
/* p8gvYIwFy ily traian lcbNBGOp9 */         H[y].push_back(x);
/* p8gvYIwFy ily traian lcbNBGOp9 */     }
/* p8gvYIwFy ily traian lcbNBGOp9 */ 
/* p8gvYIwFy ily traian lcbNBGOp9 */     bfs1(1);
/* p8gvYIwFy ily traian lcbNBGOp9 */     bfs2(1);
/* p8gvYIwFy ily traian lcbNBGOp9 */     for(int i = 1 ; i <= n ; i++)
/* p8gvYIwFy ily traian lcbNBGOp9 */     {
/* p8gvYIwFy ily traian lcbNBGOp9 */         if(d[1] != 0 && d2[i] != 0)
/* p8gvYIwFy ily traian lcbNBGOp9 */         {
/* p8gvYIwFy ily traian lcbNBGOp9 */             if(min(d[i] , d2[i]) == k) cout << i << " " , ok++;
/* p8gvYIwFy ily traian lcbNBGOp9 */             ok++;
/* p8gvYIwFy ily traian lcbNBGOp9 */         }
/* p8gvYIwFy ily traian lcbNBGOp9 */         else if(d[i] != 0 && d[i] == k) cout << i << " " , ok++;
/* p8gvYIwFy ily traian lcbNBGOp9 */         else if(d2[i] != 0 && d2[i] == k) cout << i << " " , ok++;
/* p8gvYIwFy ily traian lcbNBGOp9 */     }
/* p8gvYIwFy ily traian lcbNBGOp9 */     if(ok == 0) cout << "Nu exista";
/* p8gvYIwFy ily traian lcbNBGOp9 */ }