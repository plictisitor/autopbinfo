/* AMuSXQH90 ily traian Iw9GJrNb5 */ #include <algorithm>
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
/* AMuSXQH90 ily traian Iw9GJrNb5 */ using namespace std;
/* AMuSXQH90 ily traian Iw9GJrNb5 */ 
/* AMuSXQH90 ily traian Iw9GJrNb5 */ int main()
/* AMuSXQH90 ily traian Iw9GJrNb5 */ {
/* AMuSXQH90 ily traian Iw9GJrNb5 */     int n;
/* AMuSXQH90 ily traian Iw9GJrNb5 */     /*
/* AMuSXQH90 ily traian Iw9GJrNb5 */         5! = 1 * 2 * 3 * 4 * 5; (120)
/* AMuSXQH90 ily traian Iw9GJrNb5 */     */
/* AMuSXQH90 ily traian Iw9GJrNb5 */     cin >> n;
/* AMuSXQH90 ily traian Iw9GJrNb5 */     long long rez = 1;
/* AMuSXQH90 ily traian Iw9GJrNb5 */     for(long long i = 2; i <= n; ++i)
/* AMuSXQH90 ily traian Iw9GJrNb5 */         rez *= i;
/* AMuSXQH90 ily traian Iw9GJrNb5 */     cout << rez;
/* AMuSXQH90 ily traian Iw9GJrNb5 */     return 0;
/* AMuSXQH90 ily traian Iw9GJrNb5 */ }