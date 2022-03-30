/* AYizekP27 ily traian khM86hcw3 */ #include <algorithm>
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
/* AYizekP27 ily traian khM86hcw3 */ 
/* AYizekP27 ily traian khM86hcw3 */ using namespace std;
/* AYizekP27 ily traian khM86hcw3 */ int main()
/* AYizekP27 ily traian khM86hcw3 */ {
/* AYizekP27 ily traian khM86hcw3 */     int n , k , a[1002] , s = 0;
/* AYizekP27 ily traian khM86hcw3 */     cin >> n;
/* AYizekP27 ily traian khM86hcw3 */     for(int i = 0 ; i < n ; ++i) cin >> a[i];
/* AYizekP27 ily traian khM86hcw3 */     cin >> k;
/* AYizekP27 ily traian khM86hcw3 */     sort(a , a + n);
/* AYizekP27 ily traian khM86hcw3 */     for(int i = 0 ; i < n ; ++i)
/* AYizekP27 ily traian khM86hcw3 */     {
/* AYizekP27 ily traian khM86hcw3 */         if(i < k) a[i] = a[i] * -1;
/* AYizekP27 ily traian khM86hcw3 */         s += a[i];
/* AYizekP27 ily traian khM86hcw3 */     }
/* AYizekP27 ily traian khM86hcw3 */     cout << s;
/* AYizekP27 ily traian khM86hcw3 */     return 0;
/* AYizekP27 ily traian khM86hcw3 */ }