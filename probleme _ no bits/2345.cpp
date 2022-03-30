/* kSLF27oiR ily traian 27HPGrzd6 */ #include <algorithm>
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
/* kSLF27oiR ily traian 27HPGrzd6 */ using namespace std;
/* kSLF27oiR ily traian 27HPGrzd6 */ 
/* kSLF27oiR ily traian 27HPGrzd6 */ ifstream cin("magic3.in");
/* kSLF27oiR ily traian 27HPGrzd6 */ ofstream cout("magic3.out");
/* kSLF27oiR ily traian 27HPGrzd6 */ 
/* kSLF27oiR ily traian 27HPGrzd6 */ int nrdiv(int n)
/* kSLF27oiR ily traian 27HPGrzd6 */ {
/* kSLF27oiR ily traian 27HPGrzd6 */     int prod = 1 , d = 2;
/* kSLF27oiR ily traian 27HPGrzd6 */     while(n > 1)
/* kSLF27oiR ily traian 27HPGrzd6 */     {
/* kSLF27oiR ily traian 27HPGrzd6 */         int p = 0;
/* kSLF27oiR ily traian 27HPGrzd6 */         while(n%d==0) p++ , n /= d;
/* kSLF27oiR ily traian 27HPGrzd6 */         if(p) prod *= (p+1);
/* kSLF27oiR ily traian 27HPGrzd6 */         d++;
/* kSLF27oiR ily traian 27HPGrzd6 */         if(d*d>n) d = n;
/* kSLF27oiR ily traian 27HPGrzd6 */     }
/* kSLF27oiR ily traian 27HPGrzd6 */     return prod;
/* kSLF27oiR ily traian 27HPGrzd6 */ }
/* kSLF27oiR ily traian 27HPGrzd6 */ 
/* kSLF27oiR ily traian 27HPGrzd6 */ int main()
/* kSLF27oiR ily traian 27HPGrzd6 */ {
/* kSLF27oiR ily traian 27HPGrzd6 */     int n , a[1005] , cnt=0 , min = 1000000000;
/* kSLF27oiR ily traian 27HPGrzd6 */     cin >> n;
/* kSLF27oiR ily traian 27HPGrzd6 */     for(int i = 1 ; i <= n ; ++i)
/* kSLF27oiR ily traian 27HPGrzd6 */     {
/* kSLF27oiR ily traian 27HPGrzd6 */         cin >> a[i];
/* kSLF27oiR ily traian 27HPGrzd6 */         if(nrdiv(a[i]) < min) 
/* kSLF27oiR ily traian 27HPGrzd6 */             min = nrdiv(a[i]);
/* kSLF27oiR ily traian 27HPGrzd6 */     }
/* kSLF27oiR ily traian 27HPGrzd6 */     for(int i = 1 ; i <= n ; ++i)
/* kSLF27oiR ily traian 27HPGrzd6 */     {
/* kSLF27oiR ily traian 27HPGrzd6 */         if(nrdiv(a[i]) == min)
/* kSLF27oiR ily traian 27HPGrzd6 */             cnt++;
/* kSLF27oiR ily traian 27HPGrzd6 */     }
/* kSLF27oiR ily traian 27HPGrzd6 */     cout << cnt;
/* kSLF27oiR ily traian 27HPGrzd6 */     return 0;
/* kSLF27oiR ily traian 27HPGrzd6 */ }