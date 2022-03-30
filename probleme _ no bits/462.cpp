/* JWcYJmWC6 ily traian zFWpsWIR1 */ #include <algorithm>
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
/* JWcYJmWC6 ily traian zFWpsWIR1 */ using namespace std;
/* JWcYJmWC6 ily traian zFWpsWIR1 */ 
/* JWcYJmWC6 ily traian zFWpsWIR1 */ int nrdiv(int x)
/* JWcYJmWC6 ily traian zFWpsWIR1 */ {
/* JWcYJmWC6 ily traian zFWpsWIR1 */     int d=2, p=0;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     int cnt=0;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     while(x>1)
/* JWcYJmWC6 ily traian zFWpsWIR1 */     {
/* JWcYJmWC6 ily traian zFWpsWIR1 */         p=0;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         while(x%d==0)
/* JWcYJmWC6 ily traian zFWpsWIR1 */         {
/* JWcYJmWC6 ily traian zFWpsWIR1 */             p++;
/* JWcYJmWC6 ily traian zFWpsWIR1 */             x/=d;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         }
/* JWcYJmWC6 ily traian zFWpsWIR1 */         if(p>0)
/* JWcYJmWC6 ily traian zFWpsWIR1 */             cnt++;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         d++;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         if(d*d>x)
/* JWcYJmWC6 ily traian zFWpsWIR1 */             d=x;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     }
/* JWcYJmWC6 ily traian zFWpsWIR1 */     return cnt;
/* JWcYJmWC6 ily traian zFWpsWIR1 */ }
/* JWcYJmWC6 ily traian zFWpsWIR1 */ 
/* JWcYJmWC6 ily traian zFWpsWIR1 */ int main()
/* JWcYJmWC6 ily traian zFWpsWIR1 */ {
/* JWcYJmWC6 ily traian zFWpsWIR1 */     int a, b;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     cin>>a;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     int max=nrdiv(a) , nmax=a;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     while(1)
/* JWcYJmWC6 ily traian zFWpsWIR1 */     {
/* JWcYJmWC6 ily traian zFWpsWIR1 */         cin >> b;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         if(a==b)
/* JWcYJmWC6 ily traian zFWpsWIR1 */             break;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         if(nrdiv(b) > max)
/* JWcYJmWC6 ily traian zFWpsWIR1 */             max=nrdiv(b) , nmax=b;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         else
/* JWcYJmWC6 ily traian zFWpsWIR1 */             if(nrdiv(b) == max)
/* JWcYJmWC6 ily traian zFWpsWIR1 */                 if(b > nmax)
/* JWcYJmWC6 ily traian zFWpsWIR1 */                     nmax = b;
/* JWcYJmWC6 ily traian zFWpsWIR1 */         a=b;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     }
/* JWcYJmWC6 ily traian zFWpsWIR1 */     cout << nmax << ' ' << max;
/* JWcYJmWC6 ily traian zFWpsWIR1 */     return 0;
/* JWcYJmWC6 ily traian zFWpsWIR1 */ }