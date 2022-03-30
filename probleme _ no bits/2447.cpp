/* 0SCUQFP67 ily traian yynSLODK3 */ #include <algorithm>
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
/* 0SCUQFP67 ily traian yynSLODK3 */ 
/* 0SCUQFP67 ily traian yynSLODK3 */ using namespace std;
/* 0SCUQFP67 ily traian yynSLODK3 */ 
/* 0SCUQFP67 ily traian yynSLODK3 */ ifstream cin("forus.in");
/* 0SCUQFP67 ily traian yynSLODK3 */ ofstream cout("forus.out");
/* 0SCUQFP67 ily traian yynSLODK3 */ 
/* 0SCUQFP67 ily traian yynSLODK3 */ int n , cer , x , p , cnt , y;
/* 0SCUQFP67 ily traian yynSLODK3 */ int  put , nrmax , val , nrc;
/* 0SCUQFP67 ily traian yynSLODK3 */ 
/* 0SCUQFP67 ily traian yynSLODK3 */ int nrdiv(int n)
/* 0SCUQFP67 ily traian yynSLODK3 */ {
/* 0SCUQFP67 ily traian yynSLODK3 */     int d=2 , prod = 1;
/* 0SCUQFP67 ily traian yynSLODK3 */     while(n > 1)
/* 0SCUQFP67 ily traian yynSLODK3 */     {
/* 0SCUQFP67 ily traian yynSLODK3 */         int p = 0;
/* 0SCUQFP67 ily traian yynSLODK3 */         while(n % d == 0) n /= d , p++;
/* 0SCUQFP67 ily traian yynSLODK3 */         if(p) prod *= (p + 1);
/* 0SCUQFP67 ily traian yynSLODK3 */         d++;
/* 0SCUQFP67 ily traian yynSLODK3 */         if(d * d > n) d = n;
/* 0SCUQFP67 ily traian yynSLODK3 */     }
/* 0SCUQFP67 ily traian yynSLODK3 */     return prod;
/* 0SCUQFP67 ily traian yynSLODK3 */ }
/* 0SCUQFP67 ily traian yynSLODK3 */ 
/* 0SCUQFP67 ily traian yynSLODK3 */ int p10(int n)
/* 0SCUQFP67 ily traian yynSLODK3 */ {
/* 0SCUQFP67 ily traian yynSLODK3 */     int p = 1;
/* 0SCUQFP67 ily traian yynSLODK3 */     for(int i = 1 ; i <= n ; ++i) p *= 10;
/* 0SCUQFP67 ily traian yynSLODK3 */     return p;
/* 0SCUQFP67 ily traian yynSLODK3 */ }
/* 0SCUQFP67 ily traian yynSLODK3 */ 
/* 0SCUQFP67 ily traian yynSLODK3 */ int main()
/* 0SCUQFP67 ily traian yynSLODK3 */ {
/* 0SCUQFP67 ily traian yynSLODK3 */     cin >> cer >> n;
/* 0SCUQFP67 ily traian yynSLODK3 */     if(cer == 1)
/* 0SCUQFP67 ily traian yynSLODK3 */     {
/* 0SCUQFP67 ily traian yynSLODK3 */         for(int i = 1 ; i <= n ; i++)
/* 0SCUQFP67 ily traian yynSLODK3 */         {
/* 0SCUQFP67 ily traian yynSLODK3 */             cin >> x;
/* 0SCUQFP67 ily traian yynSLODK3 */             int zero = 0;
/* 0SCUQFP67 ily traian yynSLODK3 */             while(x != 0)
/* 0SCUQFP67 ily traian yynSLODK3 */             {
/* 0SCUQFP67 ily traian yynSLODK3 */                 if(x % 10 == 0) zero++;
/* 0SCUQFP67 ily traian yynSLODK3 */                 x /= 10;
/* 0SCUQFP67 ily traian yynSLODK3 */             }
/* 0SCUQFP67 ily traian yynSLODK3 */             if(zero == 0) cnt++;
/* 0SCUQFP67 ily traian yynSLODK3 */             }
/* 0SCUQFP67 ily traian yynSLODK3 */         cout << cnt;
/* 0SCUQFP67 ily traian yynSLODK3 */     }
/* 0SCUQFP67 ily traian yynSLODK3 */     else
/* 0SCUQFP67 ily traian yynSLODK3 */     {
/* 0SCUQFP67 ily traian yynSLODK3 */         for(int i = 1 ; i <= n ; i++)
/* 0SCUQFP67 ily traian yynSLODK3 */         {
/* 0SCUQFP67 ily traian yynSLODK3 */             cin >> x;
/* 0SCUQFP67 ily traian yynSLODK3 */             y = log10(x);
/* 0SCUQFP67 ily traian yynSLODK3 */             put = p10(y);
/* 0SCUQFP67 ily traian yynSLODK3 */             nrmax = nrdiv(x);
/* 0SCUQFP67 ily traian yynSLODK3 */             val = x;
/* 0SCUQFP67 ily traian yynSLODK3 */             for(int j = 1 ; j <= y; ++j)
/* 0SCUQFP67 ily traian yynSLODK3 */             {
/* 0SCUQFP67 ily traian yynSLODK3 */                 x = x % put * 10 + x / put;
/* 0SCUQFP67 ily traian yynSLODK3 */                 if(x / put != 0)
/* 0SCUQFP67 ily traian yynSLODK3 */                 {
/* 0SCUQFP67 ily traian yynSLODK3 */                     nrc = nrdiv(x);
/* 0SCUQFP67 ily traian yynSLODK3 */                     if(nrc < nrmax) nrmax = nrc , val = x;
/* 0SCUQFP67 ily traian yynSLODK3 */                     else if(nrc == nrmax && val > x) val = x;
/* 0SCUQFP67 ily traian yynSLODK3 */                 }
/* 0SCUQFP67 ily traian yynSLODK3 */             }
/* 0SCUQFP67 ily traian yynSLODK3 */             cout << val << " ";
/* 0SCUQFP67 ily traian yynSLODK3 */         }
/* 0SCUQFP67 ily traian yynSLODK3 */     }
/* 0SCUQFP67 ily traian yynSLODK3 */     return 0;
/* 0SCUQFP67 ily traian yynSLODK3 */ }