/* YCBIXW04x ily traian FPKU4y9A5 */ #include <algorithm>
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
/* YCBIXW04x ily traian FPKU4y9A5 */ using namespace std;
/* YCBIXW04x ily traian FPKU4y9A5 */ 
/* YCBIXW04x ily traian FPKU4y9A5 */ const unsigned long long lim = -1;
/* YCBIXW04x ily traian FPKU4y9A5 */ 
/* YCBIXW04x ily traian FPKU4y9A5 */ int n, m;
/* YCBIXW04x ily traian FPKU4y9A5 */ 
/* YCBIXW04x ily traian FPKU4y9A5 */ int main() {
/* YCBIXW04x ily traian FPKU4y9A5 */     cin >> n;
/* YCBIXW04x ily traian FPKU4y9A5 */     for (int i = 0; i < n; ++i) {
/* YCBIXW04x ily traian FPKU4y9A5 */         cin >> m;
/* YCBIXW04x ily traian FPKU4y9A5 */         unsigned long long nr = 0;
/* YCBIXW04x ily traian FPKU4y9A5 */         bool ok = 1;
/* YCBIXW04x ily traian FPKU4y9A5 */         for (int a, b, j = 0; j < m; ++j) {
/* YCBIXW04x ily traian FPKU4y9A5 */             cin >> a >> b;
/* YCBIXW04x ily traian FPKU4y9A5 */             if (!ok)
/* YCBIXW04x ily traian FPKU4y9A5 */                 continue;
/* YCBIXW04x ily traian FPKU4y9A5 */             unsigned long long res = a;
/* YCBIXW04x ily traian FPKU4y9A5 */             for (int k = 2; k <= b && ok; ++k) {
/* YCBIXW04x ily traian FPKU4y9A5 */                 if (!res || !a || res <= lim / a)
/* YCBIXW04x ily traian FPKU4y9A5 */                     res *= a;
/* YCBIXW04x ily traian FPKU4y9A5 */                 else
/* YCBIXW04x ily traian FPKU4y9A5 */                     ok = 0;
/* YCBIXW04x ily traian FPKU4y9A5 */             }
/* YCBIXW04x ily traian FPKU4y9A5 */             if (!b)
/* YCBIXW04x ily traian FPKU4y9A5 */                 res = 1;
/* YCBIXW04x ily traian FPKU4y9A5 */             if (!ok)
/* YCBIXW04x ily traian FPKU4y9A5 */                 continue;
/* YCBIXW04x ily traian FPKU4y9A5 */             if (nr <= lim - res)
/* YCBIXW04x ily traian FPKU4y9A5 */                 nr += res;
/* YCBIXW04x ily traian FPKU4y9A5 */             else
/* YCBIXW04x ily traian FPKU4y9A5 */                 ok = 0;
/* YCBIXW04x ily traian FPKU4y9A5 */         }
/* YCBIXW04x ily traian FPKU4y9A5 */         if (ok)
/* YCBIXW04x ily traian FPKU4y9A5 */             cout << nr << "\n";
/* YCBIXW04x ily traian FPKU4y9A5 */         else
/* YCBIXW04x ily traian FPKU4y9A5 */             cout << "Overflow!\n";
/* YCBIXW04x ily traian FPKU4y9A5 */     }
/* YCBIXW04x ily traian FPKU4y9A5 */ }