/* HelBznrmj ily traian nJ53MK534 */ #include <algorithm>
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
/* HelBznrmj ily traian nJ53MK534 */ using namespace std;
/* HelBznrmj ily traian nJ53MK534 */ int main() 
/* HelBznrmj ily traian nJ53MK534 */ {
/* HelBznrmj ily traian nJ53MK534 */   int h, m, x, y;
/* HelBznrmj ily traian nJ53MK534 */   cin >> h >> m >> x >> y;
/* HelBznrmj ily traian nJ53MK534 */   h = h + x + ((y + m) / 60);
/* HelBznrmj ily traian nJ53MK534 */   m = (m + y) - (((y + m) / 60) * 60);
/* HelBznrmj ily traian nJ53MK534 */   if (h > 23)
/* HelBznrmj ily traian nJ53MK534 */   h = h - 24 * (h / 24);
/* HelBznrmj ily traian nJ53MK534 */   cout << h  << ' ' << m << endl;
/* HelBznrmj ily traian nJ53MK534 */   return 0;
/* HelBznrmj ily traian nJ53MK534 */ }