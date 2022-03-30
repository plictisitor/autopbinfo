/* ylKHq8zbY ily traian L6Qbklfx8 */ #include <algorithm>
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
/* ylKHq8zbY ily traian L6Qbklfx8 */ 
/* ylKHq8zbY ily traian L6Qbklfx8 */ 
/* ylKHq8zbY ily traian L6Qbklfx8 */ using namespace std;
/* ylKHq8zbY ily traian L6Qbklfx8 */ 
/* ylKHq8zbY ily traian L6Qbklfx8 */ int main()
/* ylKHq8zbY ily traian L6Qbklfx8 */ {
/* ylKHq8zbY ily traian L6Qbklfx8 */     int n;
/* ylKHq8zbY ily traian L6Qbklfx8 */     cin >> n;
/* ylKHq8zbY ily traian L6Qbklfx8 */     long double x;
/* ylKHq8zbY ily traian L6Qbklfx8 */     long double p = 0;
/* ylKHq8zbY ily traian L6Qbklfx8 */     for(int i = 0 ; i < n ; ++i)
/* ylKHq8zbY ily traian L6Qbklfx8 */         cin >> x , p += 1/x;
/* ylKHq8zbY ily traian L6Qbklfx8 */     cout << fixed << setprecision(2) << n/p;
/* ylKHq8zbY ily traian L6Qbklfx8 */     return 0;
/* ylKHq8zbY ily traian L6Qbklfx8 */ }