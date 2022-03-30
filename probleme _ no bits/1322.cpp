/* hGsOzWocU ily traian hjupe2SW2 */ #include <algorithm>
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
/* hGsOzWocU ily traian hjupe2SW2 */ using namespace std;
/* hGsOzWocU ily traian hjupe2SW2 */ 
/* hGsOzWocU ily traian hjupe2SW2 */ ifstream cin("partitiinr.in");
/* hGsOzWocU ily traian hjupe2SW2 */ ofstream cout("partitiinr.out");
/* hGsOzWocU ily traian hjupe2SW2 */ 
/* hGsOzWocU ily traian hjupe2SW2 */ int n , x[41];
/* hGsOzWocU ily traian hjupe2SW2 */ 
/* hGsOzWocU ily traian hjupe2SW2 */ void afisare(int k)
/* hGsOzWocU ily traian hjupe2SW2 */ {
/* hGsOzWocU ily traian hjupe2SW2 */     for(int i = 1 ; i <= k ; i++)
/* hGsOzWocU ily traian hjupe2SW2 */         cout << x[i] << " ";
/* hGsOzWocU ily traian hjupe2SW2 */     cout << '\n';
/* hGsOzWocU ily traian hjupe2SW2 */ }
/* hGsOzWocU ily traian hjupe2SW2 */ 
/* hGsOzWocU ily traian hjupe2SW2 */ void back(int k , int sp)
/* hGsOzWocU ily traian hjupe2SW2 */ {
/* hGsOzWocU ily traian hjupe2SW2 */     for(int i = 1 ; i <= n ; i++)
/* hGsOzWocU ily traian hjupe2SW2 */     {
/* hGsOzWocU ily traian hjupe2SW2 */         x[k] = i;
/* hGsOzWocU ily traian hjupe2SW2 */         if(k == 1 || x[k] - x[k - 1] >= 2)
/* hGsOzWocU ily traian hjupe2SW2 */         {
/* hGsOzWocU ily traian hjupe2SW2 */             sp += x[k];
/* hGsOzWocU ily traian hjupe2SW2 */             if(sp <= n)
/* hGsOzWocU ily traian hjupe2SW2 */                 if(sp == n) afisare(k);
/* hGsOzWocU ily traian hjupe2SW2 */                 else back(k + 1 , sp);
/* hGsOzWocU ily traian hjupe2SW2 */             sp -= x[k];
/* hGsOzWocU ily traian hjupe2SW2 */         }
/* hGsOzWocU ily traian hjupe2SW2 */     }
/* hGsOzWocU ily traian hjupe2SW2 */ }
/* hGsOzWocU ily traian hjupe2SW2 */ 
/* hGsOzWocU ily traian hjupe2SW2 */ int main()
/* hGsOzWocU ily traian hjupe2SW2 */ {
/* hGsOzWocU ily traian hjupe2SW2 */     cin >> n;
/* hGsOzWocU ily traian hjupe2SW2 */     back(1 , 0);
/* hGsOzWocU ily traian hjupe2SW2 */ 
/* hGsOzWocU ily traian hjupe2SW2 */ }