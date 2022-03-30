/* YFrqik5Mw ily traian syVHMzQI5 */ #include <algorithm>
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
/* YFrqik5Mw ily traian syVHMzQI5 */ 
/* YFrqik5Mw ily traian syVHMzQI5 */ using namespace std;
/* YFrqik5Mw ily traian syVHMzQI5 */ 
/* YFrqik5Mw ily traian syVHMzQI5 */ ///ifstream cin("meteoriti.in");
/* YFrqik5Mw ily traian syVHMzQI5 */ //ofstream cout("meteoriti.out");
/* YFrqik5Mw ily traian syVHMzQI5 */ 
/* YFrqik5Mw ily traian syVHMzQI5 */ long long a, b, c, p;
/* YFrqik5Mw ily traian syVHMzQI5 */ 
/* YFrqik5Mw ily traian syVHMzQI5 */ int nrdivP(long long x)
/* YFrqik5Mw ily traian syVHMzQI5 */ {
/* YFrqik5Mw ily traian syVHMzQI5 */     int nrap = 0;
/* YFrqik5Mw ily traian syVHMzQI5 */     for (int i = p; i <= x; i *= p)
/* YFrqik5Mw ily traian syVHMzQI5 */         nrap += x/i;
/* YFrqik5Mw ily traian syVHMzQI5 */     return nrap;
/* YFrqik5Mw ily traian syVHMzQI5 */ }
/* YFrqik5Mw ily traian syVHMzQI5 */ int main()
/* YFrqik5Mw ily traian syVHMzQI5 */ {
/* YFrqik5Mw ily traian syVHMzQI5 */     cin >> a >> b >> c >> p;
/* YFrqik5Mw ily traian syVHMzQI5 */ 
/* YFrqik5Mw ily traian syVHMzQI5 */     cout << nrdivP(a) - nrdivP(b) - nrdivP(c);
/* YFrqik5Mw ily traian syVHMzQI5 */     return 0;
/* YFrqik5Mw ily traian syVHMzQI5 */ }