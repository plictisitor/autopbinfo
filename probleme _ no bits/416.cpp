/* PSPAxhG4L ily traian o6AXclje5 */ #include <algorithm>
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
/* PSPAxhG4L ily traian o6AXclje5 */ using namespace std;
/* PSPAxhG4L ily traian o6AXclje5 */ ifstream cin("grade.in");
/* PSPAxhG4L ily traian o6AXclje5 */ ofstream cout("grade.out");
/* PSPAxhG4L ily traian o6AXclje5 */ int n , m , a[101][101] , p , r , e[2500];
/* PSPAxhG4L ily traian o6AXclje5 */ int main()
/* PSPAxhG4L ily traian o6AXclje5 */ {
/* PSPAxhG4L ily traian o6AXclje5 */     cin >> n;
/* PSPAxhG4L ily traian o6AXclje5 */     while(cin >> p >> r)
/* PSPAxhG4L ily traian o6AXclje5 */     {
/* PSPAxhG4L ily traian o6AXclje5 */         a[p][r] = 1;
/* PSPAxhG4L ily traian o6AXclje5 */         a[r][p] = 1;
/* PSPAxhG4L ily traian o6AXclje5 */     }
/* PSPAxhG4L ily traian o6AXclje5 */ 
/* PSPAxhG4L ily traian o6AXclje5 */     for(int i = 1 ; i <= n ; ++i)
/* PSPAxhG4L ily traian o6AXclje5 */         {
/* PSPAxhG4L ily traian o6AXclje5 */             for(int j = 1 ; j <= n ; ++j)
/* PSPAxhG4L ily traian o6AXclje5 */                 if (a[i][j]) e[i]++;
/* PSPAxhG4L ily traian o6AXclje5 */         }
/* PSPAxhG4L ily traian o6AXclje5 */     for(int i = 1 ; i <= n ; ++i)
/* PSPAxhG4L ily traian o6AXclje5 */         {
/* PSPAxhG4L ily traian o6AXclje5 */             cout << e[i] << " ";
/* PSPAxhG4L ily traian o6AXclje5 */         }
/* PSPAxhG4L ily traian o6AXclje5 */     return 0;
/* PSPAxhG4L ily traian o6AXclje5 */ }