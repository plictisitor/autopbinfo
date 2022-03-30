/* K16PlPmwy ily traian JTkCfpm71 */ #include <algorithm>
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
/* K16PlPmwy ily traian JTkCfpm71 */ 
/* K16PlPmwy ily traian JTkCfpm71 */ using namespace std;
/* K16PlPmwy ily traian JTkCfpm71 */ 
/* K16PlPmwy ily traian JTkCfpm71 */ int main()
/* K16PlPmwy ily traian JTkCfpm71 */ {
/* K16PlPmwy ily traian JTkCfpm71 */     int n;
/* K16PlPmwy ily traian JTkCfpm71 */     cin >> n;
/* K16PlPmwy ily traian JTkCfpm71 */     int a[1001];
/* K16PlPmwy ily traian JTkCfpm71 */     for(int i = 1; i <= n; ++i)
/* K16PlPmwy ily traian JTkCfpm71 */         cin >> a[i];
/* K16PlPmwy ily traian JTkCfpm71 */ 
/* K16PlPmwy ily traian JTkCfpm71 */     int st = 0, dr = 0, lmax = 0;
/* K16PlPmwy ily traian JTkCfpm71 */     for(int i = 1; i <= n; ++i){
/* K16PlPmwy ily traian JTkCfpm71 */         int l = 0;
/* K16PlPmwy ily traian JTkCfpm71 */         for(int j = i; j <= n; ++j)
/* K16PlPmwy ily traian JTkCfpm71 */             if(a[j] == a[i])
/* K16PlPmwy ily traian JTkCfpm71 */                 l = j - i + 1;
/* K16PlPmwy ily traian JTkCfpm71 */         if(l > lmax){
/* K16PlPmwy ily traian JTkCfpm71 */             lmax = l;
/* K16PlPmwy ily traian JTkCfpm71 */             st = i;
/* K16PlPmwy ily traian JTkCfpm71 */             dr = i + l - 1;
/* K16PlPmwy ily traian JTkCfpm71 */         }
/* K16PlPmwy ily traian JTkCfpm71 */     }
/* K16PlPmwy ily traian JTkCfpm71 */ 
/* K16PlPmwy ily traian JTkCfpm71 */     cout << st << " " << dr;
/* K16PlPmwy ily traian JTkCfpm71 */ 
/* K16PlPmwy ily traian JTkCfpm71 */     return 0;
/* K16PlPmwy ily traian JTkCfpm71 */ }