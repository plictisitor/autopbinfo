/* IkPWckrHU ily traian uLXNPrRF6 */ #include <algorithm>
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
/* IkPWckrHU ily traian uLXNPrRF6 */ 
/* IkPWckrHU ily traian uLXNPrRF6 */ using namespace std;
/* IkPWckrHU ily traian uLXNPrRF6 */ 
/* IkPWckrHU ily traian uLXNPrRF6 */ int main()
/* IkPWckrHU ily traian uLXNPrRF6 */ {
/* IkPWckrHU ily traian uLXNPrRF6 */     int n;
/* IkPWckrHU ily traian uLXNPrRF6 */     cin >> n;
/* IkPWckrHU ily traian uLXNPrRF6 */     int a[25001];
/* IkPWckrHU ily traian uLXNPrRF6 */     for(int i = 1; i <= n; ++i)
/* IkPWckrHU ily traian uLXNPrRF6 */         cin >> a[i];
/* IkPWckrHU ily traian uLXNPrRF6 */ 
/* IkPWckrHU ily traian uLXNPrRF6 */     int m, x;
/* IkPWckrHU ily traian uLXNPrRF6 */     cin >> m;
/* IkPWckrHU ily traian uLXNPrRF6 */     for(int i = 1; i <= m; ++i){
/* IkPWckrHU ily traian uLXNPrRF6 */         cin >> x;
/* IkPWckrHU ily traian uLXNPrRF6 */         int st = 1, dr = n;
/* IkPWckrHU ily traian uLXNPrRF6 */         bool ok = false;
/* IkPWckrHU ily traian uLXNPrRF6 */         while(st <= dr){
/* IkPWckrHU ily traian uLXNPrRF6 */             int mij = (st + dr) / 2;
/* IkPWckrHU ily traian uLXNPrRF6 */             if(a[mij] == x){
/* IkPWckrHU ily traian uLXNPrRF6 */                 ok = true;
/* IkPWckrHU ily traian uLXNPrRF6 */                 break;
/* IkPWckrHU ily traian uLXNPrRF6 */             }
/* IkPWckrHU ily traian uLXNPrRF6 */             else if(a[mij] < x)
/* IkPWckrHU ily traian uLXNPrRF6 */                 st = mij + 1;
/* IkPWckrHU ily traian uLXNPrRF6 */             else
/* IkPWckrHU ily traian uLXNPrRF6 */                 dr = mij - 1;
/* IkPWckrHU ily traian uLXNPrRF6 */         }
/* IkPWckrHU ily traian uLXNPrRF6 */         if(ok)
/* IkPWckrHU ily traian uLXNPrRF6 */             cout << 1 << ' ';
/* IkPWckrHU ily traian uLXNPrRF6 */         else
/* IkPWckrHU ily traian uLXNPrRF6 */             cout << 0 << ' ';
/* IkPWckrHU ily traian uLXNPrRF6 */     }
/* IkPWckrHU ily traian uLXNPrRF6 */ 
/* IkPWckrHU ily traian uLXNPrRF6 */     return 0;
/* IkPWckrHU ily traian uLXNPrRF6 */ }