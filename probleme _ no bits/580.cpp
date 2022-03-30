/* komuGpCsK ily traian Pv5ZJpQw3 */ #include <algorithm>
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
/* komuGpCsK ily traian Pv5ZJpQw3 */ 
/* komuGpCsK ily traian Pv5ZJpQw3 */ using namespace std;
/* komuGpCsK ily traian Pv5ZJpQw3 */ 
/* komuGpCsK ily traian Pv5ZJpQw3 */ int n , m , a[101][101];
/* komuGpCsK ily traian Pv5ZJpQw3 */ 
/* komuGpCsK ily traian Pv5ZJpQw3 */ void Warshall()
/* komuGpCsK ily traian Pv5ZJpQw3 */ {
/* komuGpCsK ily traian Pv5ZJpQw3 */     for (int k = 1; k <= n; ++k)
/* komuGpCsK ily traian Pv5ZJpQw3 */         for (int i = 1; i <= n; ++i)
/* komuGpCsK ily traian Pv5ZJpQw3 */             for (int j = 1; j <= n; ++j)
/* komuGpCsK ily traian Pv5ZJpQw3 */                 if (!a[i][j])
/* komuGpCsK ily traian Pv5ZJpQw3 */                     a[i][j] = a[i][k] && a[k][j];
/* komuGpCsK ily traian Pv5ZJpQw3 */ }
/* komuGpCsK ily traian Pv5ZJpQw3 */ 
/* komuGpCsK ily traian Pv5ZJpQw3 */ int main()
/* komuGpCsK ily traian Pv5ZJpQw3 */ {
/* komuGpCsK ily traian Pv5ZJpQw3 */     cin >> n >> m;
/* komuGpCsK ily traian Pv5ZJpQw3 */     int x, y;
/* komuGpCsK ily traian Pv5ZJpQw3 */     for(int i = 1 ; i <= m ; i++)
/* komuGpCsK ily traian Pv5ZJpQw3 */     {
/* komuGpCsK ily traian Pv5ZJpQw3 */         cin >> x >> y;
/* komuGpCsK ily traian Pv5ZJpQw3 */         a[x][y] = 1;
/* komuGpCsK ily traian Pv5ZJpQw3 */     }
/* komuGpCsK ily traian Pv5ZJpQw3 */ 
/* komuGpCsK ily traian Pv5ZJpQw3 */     Warshall();
/* komuGpCsK ily traian Pv5ZJpQw3 */     for (int x = 1; x <= n; ++x)
/* komuGpCsK ily traian Pv5ZJpQw3 */     {
/* komuGpCsK ily traian Pv5ZJpQw3 */         for (int y = 1; y <= n; ++y)
/* komuGpCsK ily traian Pv5ZJpQw3 */             cout << a[x][y] << ' ';
/* komuGpCsK ily traian Pv5ZJpQw3 */         cout << '\n';
/* komuGpCsK ily traian Pv5ZJpQw3 */     }
/* komuGpCsK ily traian Pv5ZJpQw3 */ }