/* xrFA5rDoC ily traian wg2vfQKQ7 */ #include <algorithm>
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
/* xrFA5rDoC ily traian wg2vfQKQ7 */ int suma(int a[] , int n , int m)
/* xrFA5rDoC ily traian wg2vfQKQ7 */ {
/* xrFA5rDoC ily traian wg2vfQKQ7 */     sort(a , a+n);
/* xrFA5rDoC ily traian wg2vfQKQ7 */     int s=0;
/* xrFA5rDoC ily traian wg2vfQKQ7 */     for(int i = 0 ; m ; ++i)
/* xrFA5rDoC ily traian wg2vfQKQ7 */     {
/* xrFA5rDoC ily traian wg2vfQKQ7 */         s+=a[i];
/* xrFA5rDoC ily traian wg2vfQKQ7 */         m--;
/* xrFA5rDoC ily traian wg2vfQKQ7 */     }
/* xrFA5rDoC ily traian wg2vfQKQ7 */     return s;
/* xrFA5rDoC ily traian wg2vfQKQ7 */ }