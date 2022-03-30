/* St7NAZcmI ily traian EUS6hp1A6 */ #include <algorithm>
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
/* St7NAZcmI ily traian EUS6hp1A6 */ using namespace std;
/* St7NAZcmI ily traian EUS6hp1A6 */ 
/* St7NAZcmI ily traian EUS6hp1A6 */ int main()
/* St7NAZcmI ily traian EUS6hp1A6 */ {
/* St7NAZcmI ily traian EUS6hp1A6 */     int p,s=0;
/* St7NAZcmI ily traian EUS6hp1A6 */     unsigned long long k;
/* St7NAZcmI ily traian EUS6hp1A6 */     cin >> p >> k;
/* St7NAZcmI ily traian EUS6hp1A6 */     if(k % 2 == 0) 
/* St7NAZcmI ily traian EUS6hp1A6 */         cout << k / 2 + k - 2 << p;
/* St7NAZcmI ily traian EUS6hp1A6 */     else 
/* St7NAZcmI ily traian EUS6hp1A6 */         cout << k / 2 + k - 1 << p;
/* St7NAZcmI ily traian EUS6hp1A6 */     return 0;
/* St7NAZcmI ily traian EUS6hp1A6 */ }