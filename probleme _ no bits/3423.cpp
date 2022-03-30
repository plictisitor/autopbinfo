/* bQKRMc1j6 ily traian j84sskGk1 */ #include <algorithm>
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
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */ using namespace std;
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */ vector <int> G[101];
/* bQKRMc1j6 ily traian j84sskGk1 */ vector <int> H[101];
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */ int n , m , x , y , k , S[101] , D[101] , c , cnt , maxi , f[101];
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */ void dfs_succ(int nod , int val)
/* bQKRMc1j6 ily traian j84sskGk1 */ {
/* bQKRMc1j6 ily traian j84sskGk1 */     S[nod] = val;
/* bQKRMc1j6 ily traian j84sskGk1 */     for(auto p : G[nod])
/* bQKRMc1j6 ily traian j84sskGk1 */         if(!S[p]) dfs_succ(p , val);
/* bQKRMc1j6 ily traian j84sskGk1 */ }
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */ void dfs_pred(int nod , int val)
/* bQKRMc1j6 ily traian j84sskGk1 */ {
/* bQKRMc1j6 ily traian j84sskGk1 */     D[nod] = val;
/* bQKRMc1j6 ily traian j84sskGk1 */     for(auto p : H[nod])
/* bQKRMc1j6 ily traian j84sskGk1 */         if(!D[p]) dfs_pred(p , val);
/* bQKRMc1j6 ily traian j84sskGk1 */ }
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */ int main()
/* bQKRMc1j6 ily traian j84sskGk1 */ {
/* bQKRMc1j6 ily traian j84sskGk1 */     cin >> n >> m;
/* bQKRMc1j6 ily traian j84sskGk1 */     for(int i = 1 ; i <= m ; i++)
/* bQKRMc1j6 ily traian j84sskGk1 */     {
/* bQKRMc1j6 ily traian j84sskGk1 */         cin >> x >> y;
/* bQKRMc1j6 ily traian j84sskGk1 */         G[x].push_back(y);
/* bQKRMc1j6 ily traian j84sskGk1 */         H[y].push_back(x);
/* bQKRMc1j6 ily traian j84sskGk1 */     }
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */     for(int i = 1 ; i <= n ; i++)
/* bQKRMc1j6 ily traian j84sskGk1 */         if(!S[i])
/* bQKRMc1j6 ily traian j84sskGk1 */         {
/* bQKRMc1j6 ily traian j84sskGk1 */             c++;
/* bQKRMc1j6 ily traian j84sskGk1 */             dfs_succ(i , c);
/* bQKRMc1j6 ily traian j84sskGk1 */             dfs_pred(i , c);
/* bQKRMc1j6 ily traian j84sskGk1 */             for(int j = 1 ; j <= n ; j++)
/* bQKRMc1j6 ily traian j84sskGk1 */                 if(S[j] != D[j]) S[j] = D[j] = 0;
/* bQKRMc1j6 ily traian j84sskGk1 */         }
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */     for(int i = 1 ; i <= n ; i++)
/* bQKRMc1j6 ily traian j84sskGk1 */         f[S[i]]++;
/* bQKRMc1j6 ily traian j84sskGk1 */     for(int i = 1 ; i <= n ; i++)
/* bQKRMc1j6 ily traian j84sskGk1 */         if(f[i] > maxi) maxi = f[i];
/* bQKRMc1j6 ily traian j84sskGk1 */ 
/* bQKRMc1j6 ily traian j84sskGk1 */     for(int i = 1 ; i <= n ; i++)
/* bQKRMc1j6 ily traian j84sskGk1 */         if(f[i] == maxi)
/* bQKRMc1j6 ily traian j84sskGk1 */         {
/* bQKRMc1j6 ily traian j84sskGk1 */             for(int j = 1 ; j <= n ; j++)
/* bQKRMc1j6 ily traian j84sskGk1 */                 if(S[j] == i) cout << j << " ";
/* bQKRMc1j6 ily traian j84sskGk1 */             cout << '\n';
/* bQKRMc1j6 ily traian j84sskGk1 */         }
/* bQKRMc1j6 ily traian j84sskGk1 */ }