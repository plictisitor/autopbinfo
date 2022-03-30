/* zLw6t2gxf ily traian tlfSxjcF8 */ #include <algorithm>
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
/* zLw6t2gxf ily traian tlfSxjcF8 */ using namespace std;
/* zLw6t2gxf ily traian tlfSxjcF8 */ 
/* zLw6t2gxf ily traian tlfSxjcF8 */ int scor(int g,int o)
/* zLw6t2gxf ily traian tlfSxjcF8 */ {
/* zLw6t2gxf ily traian tlfSxjcF8 */     if(g==0 || o==0) return 1;
/* zLw6t2gxf ily traian tlfSxjcF8 */     else return scor(g-1,o)+scor(g,o-1);
/* zLw6t2gxf ily traian tlfSxjcF8 */ }
/* zLw6t2gxf ily traian tlfSxjcF8 */ 
/* zLw6t2gxf ily traian tlfSxjcF8 */ int main()
/* zLw6t2gxf ily traian tlfSxjcF8 */ {
/* zLw6t2gxf ily traian tlfSxjcF8 */     int n , m;
/* zLw6t2gxf ily traian tlfSxjcF8 */     cin >> n >> m;
/* zLw6t2gxf ily traian tlfSxjcF8 */     cout << scor(n , m);
/* zLw6t2gxf ily traian tlfSxjcF8 */ }