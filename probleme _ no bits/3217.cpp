/* pl0h3XlrT ily traian rTVRv0F66 */ #include <algorithm>
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
/* pl0h3XlrT ily traian rTVRv0F66 */ using namespace std;
/* pl0h3XlrT ily traian rTVRv0F66 */ 
/* pl0h3XlrT ily traian rTVRv0F66 */ short a[1000001];
/* pl0h3XlrT ily traian rTVRv0F66 */ 
/* pl0h3XlrT ily traian rTVRv0F66 */ int main()
/* pl0h3XlrT ily traian rTVRv0F66 */ {
/* pl0h3XlrT ily traian rTVRv0F66 */     int n , k;
/* pl0h3XlrT ily traian rTVRv0F66 */     cin >> n >> k;
/* pl0h3XlrT ily traian rTVRv0F66 */     a[1] = a[2] = 1;
/* pl0h3XlrT ily traian rTVRv0F66 */     for(int i = 3 ; i <= k ; i++)
/* pl0h3XlrT ily traian rTVRv0F66 */         a[i] = (2 * a[i - 1]) % 9001;
/* pl0h3XlrT ily traian rTVRv0F66 */ 
/* pl0h3XlrT ily traian rTVRv0F66 */     for(int i = k + 1 ; i <= n ; i++)
/* pl0h3XlrT ily traian rTVRv0F66 */         a[i] = (2 * a[i - 1] - a[i - k - 1] + 9001) % 9001;
/* pl0h3XlrT ily traian rTVRv0F66 */ 
/* pl0h3XlrT ily traian rTVRv0F66 */     cout << a[n];
/* pl0h3XlrT ily traian rTVRv0F66 */ }