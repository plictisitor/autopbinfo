/* iz8pC6dgx ily traian r1xhKWHD3 */ #include <algorithm>
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
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ using namespace std;
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ ifstream cin("sort_div.in");
/* iz8pC6dgx ily traian r1xhKWHD3 */ ofstream cout("sort_div.out");
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ int n;
/* iz8pC6dgx ily traian r1xhKWHD3 */ struct poz
/* iz8pC6dgx ily traian r1xhKWHD3 */ {
/* iz8pC6dgx ily traian r1xhKWHD3 */     int val , nrdiv , control , primacif;
/* iz8pC6dgx ily traian r1xhKWHD3 */ }a[10001];
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ int div(int n)
/* iz8pC6dgx ily traian r1xhKWHD3 */ {
/* iz8pC6dgx ily traian r1xhKWHD3 */     int d = 2 , P = 1;
/* iz8pC6dgx ily traian r1xhKWHD3 */     while(n > 1)
/* iz8pC6dgx ily traian r1xhKWHD3 */     {
/* iz8pC6dgx ily traian r1xhKWHD3 */         int p = 0;
/* iz8pC6dgx ily traian r1xhKWHD3 */         while(n % d == 0) p++ , n /= d;
/* iz8pC6dgx ily traian r1xhKWHD3 */         if(p) P *= (p + 1);
/* iz8pC6dgx ily traian r1xhKWHD3 */         d++;
/* iz8pC6dgx ily traian r1xhKWHD3 */         if(d * d > n) d = n;
/* iz8pC6dgx ily traian r1xhKWHD3 */     }
/* iz8pC6dgx ily traian r1xhKWHD3 */     return P;
/* iz8pC6dgx ily traian r1xhKWHD3 */ }
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ int Pcif(int n)
/* iz8pC6dgx ily traian r1xhKWHD3 */ {
/* iz8pC6dgx ily traian r1xhKWHD3 */     while(n > 9) n /= 10;
/* iz8pC6dgx ily traian r1xhKWHD3 */     return n;
/* iz8pC6dgx ily traian r1xhKWHD3 */ }
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ int comp(poz a , poz b)
/* iz8pC6dgx ily traian r1xhKWHD3 */ {
/* iz8pC6dgx ily traian r1xhKWHD3 */     if(a.nrdiv < b.nrdiv) return 1;
/* iz8pC6dgx ily traian r1xhKWHD3 */     else if(a.nrdiv == b.nrdiv && a.control < b.control) return 1;
/* iz8pC6dgx ily traian r1xhKWHD3 */     else if(a.nrdiv == b.nrdiv && a.control == b.control && a.primacif < b.primacif) return 1;
/* iz8pC6dgx ily traian r1xhKWHD3 */     else if(a.nrdiv == b.nrdiv && a.control == b.control && a.primacif == b.primacif && a.val < b.val) return 1;
/* iz8pC6dgx ily traian r1xhKWHD3 */     else return 0;
/* iz8pC6dgx ily traian r1xhKWHD3 */ }
/* iz8pC6dgx ily traian r1xhKWHD3 */ 
/* iz8pC6dgx ily traian r1xhKWHD3 */ int main()
/* iz8pC6dgx ily traian r1xhKWHD3 */ {
/* iz8pC6dgx ily traian r1xhKWHD3 */     cin >> n;
/* iz8pC6dgx ily traian r1xhKWHD3 */     for(int i = 1 ; i <= n ; i++)
/* iz8pC6dgx ily traian r1xhKWHD3 */     {
/* iz8pC6dgx ily traian r1xhKWHD3 */         cin >> a[i].val;
/* iz8pC6dgx ily traian r1xhKWHD3 */         a[i].nrdiv = div(a[i].val);
/* iz8pC6dgx ily traian r1xhKWHD3 */         a[i].control = a[i].val % 9;
/* iz8pC6dgx ily traian r1xhKWHD3 */         if(a[i].control == 0) a[i].control = 9;
/* iz8pC6dgx ily traian r1xhKWHD3 */         a[i].primacif = Pcif(a[i].val);
/* iz8pC6dgx ily traian r1xhKWHD3 */     }
/* iz8pC6dgx ily traian r1xhKWHD3 */     sort(a + 1 , a + n + 1 , comp);
/* iz8pC6dgx ily traian r1xhKWHD3 */     for(int i = 1 ; i <= n ; i++)
/* iz8pC6dgx ily traian r1xhKWHD3 */         cout << a[i].val << " ";
/* iz8pC6dgx ily traian r1xhKWHD3 */ }