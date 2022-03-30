/* fJ1TSkhUU ily traian IH6M4gXK5 */ #include <algorithm>
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
/* fJ1TSkhUU ily traian IH6M4gXK5 */ using namespace std;
/* fJ1TSkhUU ily traian IH6M4gXK5 */ ifstream fin("ore.in");
/* fJ1TSkhUU ily traian IH6M4gXK5 */ ofstream fout("ore.out");
/* fJ1TSkhUU ily traian IH6M4gXK5 */ int main()
/* fJ1TSkhUU ily traian IH6M4gXK5 */ {
/* fJ1TSkhUU ily traian IH6M4gXK5 */     long long h1 , h2 , m1 , m2 , s1 , s2 , h , m , s;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     fin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     fout << h1 << ": " << m1 << ": " << s1 << endl;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     fout << h2 << ": " << m2 << ": " << s2 << endl;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     long long x1 = h1 * 3600 + m1 * 60 + s1;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     long long x2 = h2 * 3600 + m2 * 60 + s2;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     fout << x1 << endl << x2 << endl;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     long long y = x1 + x2;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     s = y % 60;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     m = ((y - 3) / 60) % 60;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     y = (y - 3) / 60;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     h = y / 60;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     fout << h << ": " << m << ": " << s;
/* fJ1TSkhUU ily traian IH6M4gXK5 */     return 0;
/* fJ1TSkhUU ily traian IH6M4gXK5 */ }