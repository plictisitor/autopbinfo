/* wKWtuXTcZ ily traian wXd2cEk62 */ #include <algorithm>
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
/* wKWtuXTcZ ily traian wXd2cEk62 */ using namespace std;
/* wKWtuXTcZ ily traian wXd2cEk62 */ 
/* wKWtuXTcZ ily traian wXd2cEk62 */ int c[3000];
/* wKWtuXTcZ ily traian wXd2cEk62 */ 
/* wKWtuXTcZ ily traian wXd2cEk62 */ int main()
/* wKWtuXTcZ ily traian wXd2cEk62 */ {
/* wKWtuXTcZ ily traian wXd2cEk62 */     int p = 1;
/* wKWtuXTcZ ily traian wXd2cEk62 */     for(int i = 100 ; i <= 999 ; ++i)
/* wKWtuXTcZ ily traian wXd2cEk62 */     {
/* wKWtuXTcZ ily traian wXd2cEk62 */         int ci = i;
/* wKWtuXTcZ ily traian wXd2cEk62 */         c[p+2]=ci%10;
/* wKWtuXTcZ ily traian wXd2cEk62 */         ci/=10;
/* wKWtuXTcZ ily traian wXd2cEk62 */         c[p+1]=ci%10;
/* wKWtuXTcZ ily traian wXd2cEk62 */         ci/=10;
/* wKWtuXTcZ ily traian wXd2cEk62 */         c[p]=ci;
/* wKWtuXTcZ ily traian wXd2cEk62 */         p+=3;
/* wKWtuXTcZ ily traian wXd2cEk62 */     }
/* wKWtuXTcZ ily traian wXd2cEk62 */     int n;
/* wKWtuXTcZ ily traian wXd2cEk62 */     cin >> n;
/* wKWtuXTcZ ily traian wXd2cEk62 */     int x;
/* wKWtuXTcZ ily traian wXd2cEk62 */     for(int i = 1 ; i <= n ; ++i)
/* wKWtuXTcZ ily traian wXd2cEk62 */         cin >> x, cout << c[x] << ' ';
/* wKWtuXTcZ ily traian wXd2cEk62 */     return 0;
/* wKWtuXTcZ ily traian wXd2cEk62 */ }