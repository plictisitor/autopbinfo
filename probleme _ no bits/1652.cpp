/* zIz7NuANX ily traian 91xbzCTO9 */ #include <algorithm>
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
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */ using namespace std;
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */ const int Inf = 0x3f3f3f3f;
/* zIz7NuANX ily traian 91xbzCTO9 */ int n , m , cnt , c[101][101] , a[101][101] , x , y , w;
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */ void Floyd_Warshall()
/* zIz7NuANX ily traian 91xbzCTO9 */ {
/* zIz7NuANX ily traian 91xbzCTO9 */     for (int k = 1; k <= n; ++k)
/* zIz7NuANX ily traian 91xbzCTO9 */         for (int i = 1; i <= n; ++i)
/* zIz7NuANX ily traian 91xbzCTO9 */             for (int j = 1; j <= n; ++j)
/* zIz7NuANX ily traian 91xbzCTO9 */                 if (i != j && c[i][j] > c[i][k] + c[k][j])
/* zIz7NuANX ily traian 91xbzCTO9 */                     c[i][j] = c[i][k] + c[k][j];
/* zIz7NuANX ily traian 91xbzCTO9 */ }
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */ int main()
/* zIz7NuANX ily traian 91xbzCTO9 */ {
/* zIz7NuANX ily traian 91xbzCTO9 */     cin >> n >> m;
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */     for (int i = 1; i <= n; ++i)
/* zIz7NuANX ily traian 91xbzCTO9 */         for (int j = 1; j <= n; ++j)
/* zIz7NuANX ily traian 91xbzCTO9 */             if (i != j) c[i][j] = Inf;
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */     for(int i = 1 ; i <= m ; i++)
/* zIz7NuANX ily traian 91xbzCTO9 */     {
/* zIz7NuANX ily traian 91xbzCTO9 */         cin >> x >> y >> w;
/* zIz7NuANX ily traian 91xbzCTO9 */         c[x][y] = w;
/* zIz7NuANX ily traian 91xbzCTO9 */         a[x][y] = w;
/* zIz7NuANX ily traian 91xbzCTO9 */     }
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */     Floyd_Warshall();
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */     for (int i = 1; i <= n; ++i)
/* zIz7NuANX ily traian 91xbzCTO9 */        for (int j = 1; j <= n; ++j)
/* zIz7NuANX ily traian 91xbzCTO9 */             if(a[i][j] == c[i][j] && a[i][j] != 0) cnt++;
/* zIz7NuANX ily traian 91xbzCTO9 */ 
/* zIz7NuANX ily traian 91xbzCTO9 */     cout << cnt;
/* zIz7NuANX ily traian 91xbzCTO9 */ }