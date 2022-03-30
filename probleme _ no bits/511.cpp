/* s0jqfPWXf ily traian ljUT1vlV4 */ #include <algorithm>
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
/* s0jqfPWXf ily traian ljUT1vlV4 */ 
/* s0jqfPWXf ily traian ljUT1vlV4 */ using namespace std;
/* s0jqfPWXf ily traian ljUT1vlV4 */ 
/* s0jqfPWXf ily traian ljUT1vlV4 */ int main()
/* s0jqfPWXf ily traian ljUT1vlV4 */ {
/* s0jqfPWXf ily traian ljUT1vlV4 */     int n;
/* s0jqfPWXf ily traian ljUT1vlV4 */     cin >> n;
/* s0jqfPWXf ily traian ljUT1vlV4 */     int a[1001];
/* s0jqfPWXf ily traian ljUT1vlV4 */     int k;
/* s0jqfPWXf ily traian ljUT1vlV4 */     cin >> k;
/* s0jqfPWXf ily traian ljUT1vlV4 */     for (int i = 0 ; i < n; ++i)
/* s0jqfPWXf ily traian ljUT1vlV4 */     cin >> a[i];
/* s0jqfPWXf ily traian ljUT1vlV4 */     sort (a, a+k);
/* s0jqfPWXf ily traian ljUT1vlV4 */     for (int i = 0; i < k; ++i)
/* s0jqfPWXf ily traian ljUT1vlV4 */     cout << a[i] << ' ';
/* s0jqfPWXf ily traian ljUT1vlV4 */     sort (a+k, a+n);
/* s0jqfPWXf ily traian ljUT1vlV4 */     for (int i = n-1 ; i >= k; --i)
/* s0jqfPWXf ily traian ljUT1vlV4 */     cout << a[i] << ' ';
/* s0jqfPWXf ily traian ljUT1vlV4 */     
/* s0jqfPWXf ily traian ljUT1vlV4 */ }