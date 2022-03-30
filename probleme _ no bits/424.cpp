/* ObS2dnuuW ily traian v2tjlF2d4 */ #include <algorithm>
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
/* ObS2dnuuW ily traian v2tjlF2d4 */ 
/* ObS2dnuuW ily traian v2tjlF2d4 */ using namespace std;
/* ObS2dnuuW ily traian v2tjlF2d4 */ 
/* ObS2dnuuW ily traian v2tjlF2d4 */ int main()
/* ObS2dnuuW ily traian v2tjlF2d4 */ {
/* ObS2dnuuW ily traian v2tjlF2d4 */     int n, a, b;
/* ObS2dnuuW ily traian v2tjlF2d4 */     cin >> a >> b >> n;
/* ObS2dnuuW ily traian v2tjlF2d4 */     int c;
/* ObS2dnuuW ily traian v2tjlF2d4 */     if(abs(b) > n && abs(a) <= n)
/* ObS2dnuuW ily traian v2tjlF2d4 */         cout << a;
/* ObS2dnuuW ily traian v2tjlF2d4 */     else if(abs(a) <= n && abs(b) <= n){
/* ObS2dnuuW ily traian v2tjlF2d4 */         cout << a << ' ' << b << ' ';
/* ObS2dnuuW ily traian v2tjlF2d4 */         while(abs(b) <= n){
/* ObS2dnuuW ily traian v2tjlF2d4 */             c = a + b;
/* ObS2dnuuW ily traian v2tjlF2d4 */             a = b;
/* ObS2dnuuW ily traian v2tjlF2d4 */             b = c;
/* ObS2dnuuW ily traian v2tjlF2d4 */             if(abs(b) <= n)
/* ObS2dnuuW ily traian v2tjlF2d4 */                 cout << b << ' ';
/* ObS2dnuuW ily traian v2tjlF2d4 */         }
/* ObS2dnuuW ily traian v2tjlF2d4 */     }
/* ObS2dnuuW ily traian v2tjlF2d4 */     return 0;
/* ObS2dnuuW ily traian v2tjlF2d4 */ }