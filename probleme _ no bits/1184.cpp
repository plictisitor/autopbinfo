/* lvtfk1O8g ily traian YtLPXSiv1 */ #include <algorithm>
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
/* lvtfk1O8g ily traian YtLPXSiv1 */ using namespace std;
/* lvtfk1O8g ily traian YtLPXSiv1 */ 
/* lvtfk1O8g ily traian YtLPXSiv1 */ ifstream cin("epuras.in");
/* lvtfk1O8g ily traian YtLPXSiv1 */ ofstream cout("epuras.out");
/* lvtfk1O8g ily traian YtLPXSiv1 */ 
/* lvtfk1O8g ily traian YtLPXSiv1 */ int n, d[1005][1005], a[1005][1005], mx[1005][1005];
/* lvtfk1O8g ily traian YtLPXSiv1 */ 
/* lvtfk1O8g ily traian YtLPXSiv1 */ int main()
/* lvtfk1O8g ily traian YtLPXSiv1 */ {
/* lvtfk1O8g ily traian YtLPXSiv1 */     cin >> n;
/* lvtfk1O8g ily traian YtLPXSiv1 */     for (int i = 0 ; i <= n ; i++)
/* lvtfk1O8g ily traian YtLPXSiv1 */         for (int j = 0 ; j <= n ; j++)
/* lvtfk1O8g ily traian YtLPXSiv1 */                 d[i][j]=-1000000 , mx[i][j]=-1000000;
/* lvtfk1O8g ily traian YtLPXSiv1 */     for (int i = 1 ; i <= n ; i++)
/* lvtfk1O8g ily traian YtLPXSiv1 */         for (int j = 1 ; j <= n ; j++)
/* lvtfk1O8g ily traian YtLPXSiv1 */             cin >> a[i][j];
/* lvtfk1O8g ily traian YtLPXSiv1 */     d[1][1] = a[1][1];
/* lvtfk1O8g ily traian YtLPXSiv1 */     mx[1][1] = a[1][1];
/* lvtfk1O8g ily traian YtLPXSiv1 */     for (int i = 1 ; i <= n ; i++)
/* lvtfk1O8g ily traian YtLPXSiv1 */         for (int j = 1 ; j <= n ; j++)
/* lvtfk1O8g ily traian YtLPXSiv1 */             if (i!=1 || j !=1)
/* lvtfk1O8g ily traian YtLPXSiv1 */                 d[i][j] = max(mx[i][j-1], mx[i-1][j]) + a[i][j] , mx[i][j] = max(max(mx[i][j-1], mx[i-1][j]), d[i][j]);
/* lvtfk1O8g ily traian YtLPXSiv1 */     cout << d[n][n];
/* lvtfk1O8g ily traian YtLPXSiv1 */     return 0;
/* lvtfk1O8g ily traian YtLPXSiv1 */ }