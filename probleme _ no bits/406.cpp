/* NXIUG6coa ily traian 0oCteteV6 */ #include <algorithm>
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
/* NXIUG6coa ily traian 0oCteteV6 */ using namespace std;
/* NXIUG6coa ily traian 0oCteteV6 */ 
/* NXIUG6coa ily traian 0oCteteV6 */ int main()
/* NXIUG6coa ily traian 0oCteteV6 */ {
/* NXIUG6coa ily traian 0oCteteV6 */     int n, cnt = 0;
/* NXIUG6coa ily traian 0oCteteV6 */     cin >> n;
/* NXIUG6coa ily traian 0oCteteV6 */     for(int i = 1; i <= n; ++i){
/* NXIUG6coa ily traian 0oCteteV6 */         int x, sumcif=0;
/* NXIUG6coa ily traian 0oCteteV6 */         cin >> x;
/* NXIUG6coa ily traian 0oCteteV6 */         int cx = x;
/* NXIUG6coa ily traian 0oCteteV6 */         while(x){
/* NXIUG6coa ily traian 0oCteteV6 */             sumcif += x % 10;
/* NXIUG6coa ily traian 0oCteteV6 */             x /= 10;
/* NXIUG6coa ily traian 0oCteteV6 */         }
/* NXIUG6coa ily traian 0oCteteV6 */         x = cx;
/* NXIUG6coa ily traian 0oCteteV6 */         int cn = 1, d = 2;
/* NXIUG6coa ily traian 0oCteteV6 */         while(x > 1){
/* NXIUG6coa ily traian 0oCteteV6 */             int p = 0;
/* NXIUG6coa ily traian 0oCteteV6 */             while(x % d == 0)
/* NXIUG6coa ily traian 0oCteteV6 */                 x/=d, p++;
/* NXIUG6coa ily traian 0oCteteV6 */             cn = cn * (p + 1);
/* NXIUG6coa ily traian 0oCteteV6 */             d++;
/* NXIUG6coa ily traian 0oCteteV6 */             if(d * d > x)
/* NXIUG6coa ily traian 0oCteteV6 */                 d = x;
/* NXIUG6coa ily traian 0oCteteV6 */         }
/* NXIUG6coa ily traian 0oCteteV6 */         if(cn == 2){
/* NXIUG6coa ily traian 0oCteteV6 */             d = 2;
/* NXIUG6coa ily traian 0oCteteV6 */             cn = 1;
/* NXIUG6coa ily traian 0oCteteV6 */             while(sumcif > 1){
/* NXIUG6coa ily traian 0oCteteV6 */                 int p = 0;
/* NXIUG6coa ily traian 0oCteteV6 */                 while(sumcif % d == 0)
/* NXIUG6coa ily traian 0oCteteV6 */                     sumcif/=d, p++;
/* NXIUG6coa ily traian 0oCteteV6 */                 cn = cn * (p + 1);
/* NXIUG6coa ily traian 0oCteteV6 */                 d++;
/* NXIUG6coa ily traian 0oCteteV6 */                 if(d * d > sumcif)
/* NXIUG6coa ily traian 0oCteteV6 */                     d = sumcif;
/* NXIUG6coa ily traian 0oCteteV6 */             }
/* NXIUG6coa ily traian 0oCteteV6 */             if(cn == 2)
/* NXIUG6coa ily traian 0oCteteV6 */                 cnt++;
/* NXIUG6coa ily traian 0oCteteV6 */         }
/* NXIUG6coa ily traian 0oCteteV6 */     }
/* NXIUG6coa ily traian 0oCteteV6 */     cout << cnt;
/* NXIUG6coa ily traian 0oCteteV6 */     return 0;
/* NXIUG6coa ily traian 0oCteteV6 */ }