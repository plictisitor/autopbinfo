/* IYP7pEIix ily traian qoXCS9wD7 */ #include <algorithm>
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
/* IYP7pEIix ily traian qoXCS9wD7 */ #define mod 30103
/* IYP7pEIix ily traian qoXCS9wD7 */ using namespace std;
/* IYP7pEIix ily traian qoXCS9wD7 */ 
/* IYP7pEIix ily traian qoXCS9wD7 */ long long par[100002] , imp[100005] , n;
/* IYP7pEIix ily traian qoXCS9wD7 */ 
/* IYP7pEIix ily traian qoXCS9wD7 */ int main()
/* IYP7pEIix ily traian qoXCS9wD7 */ {
/* IYP7pEIix ily traian qoXCS9wD7 */     cin >> n;
/* IYP7pEIix ily traian qoXCS9wD7 */     par[1] = 4;
/* IYP7pEIix ily traian qoXCS9wD7 */     imp[1] = 5;
/* IYP7pEIix ily traian qoXCS9wD7 */     for(int i = 2 ; i <= n ; i++)
/* IYP7pEIix ily traian qoXCS9wD7 */     {
/* IYP7pEIix ily traian qoXCS9wD7 */         par[i] = (4 * imp[i - 1])%mod;
/* IYP7pEIix ily traian qoXCS9wD7 */         imp[i] = (5 * par[i - 1])%mod;
/* IYP7pEIix ily traian qoXCS9wD7 */     }
/* IYP7pEIix ily traian qoXCS9wD7 */     cout << (par[n] + imp[n])%mod;
/* IYP7pEIix ily traian qoXCS9wD7 */ }
/* IYP7pEIix ily traian qoXCS9wD7 */ 