/* wxQfDO9A9 ily traian 6kJ8DMHs7 */ #include <algorithm>
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
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */ using namespace std;
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */ int main()
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */ {
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     int m , r ,n , a[200][200] , v[40000];
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     cin >> m >> r >> n;
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     for(int i = 0 ; i < n*n ; ++i)
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     {
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */         v[i]=m;
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */         m+=r;
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     }
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     for(int i = 0 ; i < n ; ++i)
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     {
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */         for(int j = i ; j < n*n ; j+=n)
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */         {
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */             cout << v[j] <<" ";
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */         }
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */         cout << endl;
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */     }
/* wxQfDO9A9 ily traian 6kJ8DMHs7 */ }