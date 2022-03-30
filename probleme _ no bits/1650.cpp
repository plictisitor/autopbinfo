/* RcOeDFteu ily traian m5ezcuHM7 */ #include <algorithm>
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
/* RcOeDFteu ily traian m5ezcuHM7 */ 
/* RcOeDFteu ily traian m5ezcuHM7 */ using namespace std;
/* RcOeDFteu ily traian m5ezcuHM7 */ 
/* RcOeDFteu ily traian m5ezcuHM7 */ 
/* RcOeDFteu ily traian m5ezcuHM7 */ int main()
/* RcOeDFteu ily traian m5ezcuHM7 */ {
/* RcOeDFteu ily traian m5ezcuHM7 */     int n;
/* RcOeDFteu ily traian m5ezcuHM7 */     cin >> n;
/* RcOeDFteu ily traian m5ezcuHM7 */     int k;
/* RcOeDFteu ily traian m5ezcuHM7 */     cin >> k;
/* RcOeDFteu ily traian m5ezcuHM7 */     int tmp;
/* RcOeDFteu ily traian m5ezcuHM7 */     int s=0;
/* RcOeDFteu ily traian m5ezcuHM7 */     for (int i=1 ; i <= k; ++i)
/* RcOeDFteu ily traian m5ezcuHM7 */     {
/* RcOeDFteu ily traian m5ezcuHM7 */         cin >> tmp;
/* RcOeDFteu ily traian m5ezcuHM7 */         s+=tmp;
/* RcOeDFteu ily traian m5ezcuHM7 */     }
/* RcOeDFteu ily traian m5ezcuHM7 */     if (s==0)
/* RcOeDFteu ily traian m5ezcuHM7 */     cout << "DA";
/* RcOeDFteu ily traian m5ezcuHM7 */     else 
/* RcOeDFteu ily traian m5ezcuHM7 */     cout << "NU";
/* RcOeDFteu ily traian m5ezcuHM7 */     return 0;
/* RcOeDFteu ily traian m5ezcuHM7 */ }