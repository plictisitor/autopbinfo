/* gzC6M9k6l ily traian FSKSPhdz2 */ #include <algorithm>
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
/* gzC6M9k6l ily traian FSKSPhdz2 */ using namespace std;
/* gzC6M9k6l ily traian FSKSPhdz2 */ 
/* gzC6M9k6l ily traian FSKSPhdz2 */ int fct(int n)
/* gzC6M9k6l ily traian FSKSPhdz2 */ {
/* gzC6M9k6l ily traian FSKSPhdz2 */     if(n == 0)
/* gzC6M9k6l ily traian FSKSPhdz2 */         return 0;
/* gzC6M9k6l ily traian FSKSPhdz2 */     else 
/* gzC6M9k6l ily traian FSKSPhdz2 */         return fct(n - 1) + n * (n + 1);
/* gzC6M9k6l ily traian FSKSPhdz2 */ }
/* gzC6M9k6l ily traian FSKSPhdz2 */ 
/* gzC6M9k6l ily traian FSKSPhdz2 */ int main()
/* gzC6M9k6l ily traian FSKSPhdz2 */ {
/* gzC6M9k6l ily traian FSKSPhdz2 */     int n;
/* gzC6M9k6l ily traian FSKSPhdz2 */     cin >> n;
/* gzC6M9k6l ily traian FSKSPhdz2 */     cout << "Rezultatul este" << ' ' << fct(n);
/* gzC6M9k6l ily traian FSKSPhdz2 */     return 0;
/* gzC6M9k6l ily traian FSKSPhdz2 */ }