/* dOXtTJbwi ily traian wjBXf93Y9 */ #include <algorithm>
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
/* dOXtTJbwi ily traian wjBXf93Y9 */ 
/* dOXtTJbwi ily traian wjBXf93Y9 */ using namespace std;
/* dOXtTJbwi ily traian wjBXf93Y9 */ 
/* dOXtTJbwi ily traian wjBXf93Y9 */ int a[1001], n;
/* dOXtTJbwi ily traian wjBXf93Y9 */ double sum[1001];
/* dOXtTJbwi ily traian wjBXf93Y9 */ 
/* dOXtTJbwi ily traian wjBXf93Y9 */ int main()
/* dOXtTJbwi ily traian wjBXf93Y9 */ {
/* dOXtTJbwi ily traian wjBXf93Y9 */     cin >> n;
/* dOXtTJbwi ily traian wjBXf93Y9 */     for (int i = 1; i <= n; i++)
/* dOXtTJbwi ily traian wjBXf93Y9 */         cin >> a[i];
/* dOXtTJbwi ily traian wjBXf93Y9 */     for (int i = 1; i <= n; i++)
/* dOXtTJbwi ily traian wjBXf93Y9 */     {
/* dOXtTJbwi ily traian wjBXf93Y9 */         sum[i] = sum[i - 1] + a[i];
/* dOXtTJbwi ily traian wjBXf93Y9 */         if(i >= 2) sum[i] = min(sum[i], sum[i - 2] + 1.00 * min(a[i], a[i - 1])/2 + max(a[i], a[i - 1]));
/* dOXtTJbwi ily traian wjBXf93Y9 */         if(i >= 3) sum[i] = min(sum[i], sum[i - 3] + a[i] + a[i - 1] + a[i - 2] - min(a[i], min(a[i - 1], a[i - 2])));
/* dOXtTJbwi ily traian wjBXf93Y9 */     }
/* dOXtTJbwi ily traian wjBXf93Y9 */     cout << fixed << setprecision(1) << sum[n];
/* dOXtTJbwi ily traian wjBXf93Y9 */     return 0;
/* dOXtTJbwi ily traian wjBXf93Y9 */ }