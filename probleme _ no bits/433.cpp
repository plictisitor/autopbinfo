/* gZyP0kKwW ily traian SLfCgYJ37 */ #include <algorithm>
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
/* gZyP0kKwW ily traian SLfCgYJ37 */ #define inf 999999999
/* gZyP0kKwW ily traian SLfCgYJ37 */ using namespace std;
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */ ifstream cin("cladire3.in");
/* gZyP0kKwW ily traian SLfCgYJ37 */ ofstream cout("cladire3.out");
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */ int n , m , a[205][205] , cnt , s[205][205];
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */ int main()
/* gZyP0kKwW ily traian SLfCgYJ37 */ {
/* gZyP0kKwW ily traian SLfCgYJ37 */     cin >> n >> m;
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */     for(int i = 0 ; i <= n + 1; i++)
/* gZyP0kKwW ily traian SLfCgYJ37 */         for(int j = 0 ; j <= m + 1; j++)
/* gZyP0kKwW ily traian SLfCgYJ37 */             a[i][j] = inf;
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */     for(int i = 1 ; i <= n ; i++)
/* gZyP0kKwW ily traian SLfCgYJ37 */         for(int j = 1 ; j <= m ; j++)
/* gZyP0kKwW ily traian SLfCgYJ37 */             cin >> a[i][j];
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */     for(int i = n ; i >= 1 ; i--)
/* gZyP0kKwW ily traian SLfCgYJ37 */         for(int j = 1 ; j <= m ; j++)
/* gZyP0kKwW ily traian SLfCgYJ37 */             if(i != n  || j != 1) a[i][j] +=  min(a[i + 1][j] , a[i][j - 1]);
/* gZyP0kKwW ily traian SLfCgYJ37 */ 
/* gZyP0kKwW ily traian SLfCgYJ37 */     cout << a[1][m] << '\n';
/* gZyP0kKwW ily traian SLfCgYJ37 */     return 0;
/* gZyP0kKwW ily traian SLfCgYJ37 */ }