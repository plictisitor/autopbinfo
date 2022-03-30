/* BOaMgcoHl ily traian m9H6aZyt4 */ #include <algorithm>
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
/* BOaMgcoHl ily traian m9H6aZyt4 */ using namespace std;
/* BOaMgcoHl ily traian m9H6aZyt4 */ 
/* BOaMgcoHl ily traian m9H6aZyt4 */ int main()
/* BOaMgcoHl ily traian m9H6aZyt4 */ {
/* BOaMgcoHl ily traian m9H6aZyt4 */     int n, m, p;
/* BOaMgcoHl ily traian m9H6aZyt4 */     cin >> n >> m >> p;
/* BOaMgcoHl ily traian m9H6aZyt4 */     int napa = m * n;
/* BOaMgcoHl ily traian m9H6aZyt4 */     cout << p / napa << endl;
/* BOaMgcoHl ily traian m9H6aZyt4 */     p = p - (p/napa) * napa;
/* BOaMgcoHl ily traian m9H6aZyt4 */     cout << p / m << endl;
/* BOaMgcoHl ily traian m9H6aZyt4 */     p = p - p/m * m;
/* BOaMgcoHl ily traian m9H6aZyt4 */     cout << p;
/* BOaMgcoHl ily traian m9H6aZyt4 */     return 0;
/* BOaMgcoHl ily traian m9H6aZyt4 */ }