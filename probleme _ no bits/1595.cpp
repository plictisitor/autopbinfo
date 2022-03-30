/* efkyRPfRe ily traian Z0D5NuGa0 */ #include <algorithm>
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
/* efkyRPfRe ily traian Z0D5NuGa0 */ using namespace std;
/* efkyRPfRe ily traian Z0D5NuGa0 */ 
/* efkyRPfRe ily traian Z0D5NuGa0 */ ifstream cin("bomboane1.in");
/* efkyRPfRe ily traian Z0D5NuGa0 */ ofstream cout("bomboane1.out");
/* efkyRPfRe ily traian Z0D5NuGa0 */ 
/* efkyRPfRe ily traian Z0D5NuGa0 */ int nrdiv(int n)
/* efkyRPfRe ily traian Z0D5NuGa0 */ {
/* efkyRPfRe ily traian Z0D5NuGa0 */     int cnt=0;
/* efkyRPfRe ily traian Z0D5NuGa0 */     for(int i = 2 ; i * i <= n ; ++i)
/* efkyRPfRe ily traian Z0D5NuGa0 */     {
/* efkyRPfRe ily traian Z0D5NuGa0 */         if(n%i==0)
/* efkyRPfRe ily traian Z0D5NuGa0 */         {
/* efkyRPfRe ily traian Z0D5NuGa0 */             if(i%2==0)
/* efkyRPfRe ily traian Z0D5NuGa0 */                 cnt++;
/* efkyRPfRe ily traian Z0D5NuGa0 */             if((n/i)%2==0)
/* efkyRPfRe ily traian Z0D5NuGa0 */                 cnt++;
/* efkyRPfRe ily traian Z0D5NuGa0 */         }
/* efkyRPfRe ily traian Z0D5NuGa0 */         if(i*i==n && i%2==0)
/* efkyRPfRe ily traian Z0D5NuGa0 */             cnt--;
/* efkyRPfRe ily traian Z0D5NuGa0 */     }
/* efkyRPfRe ily traian Z0D5NuGa0 */     if(n%2==0)
/* efkyRPfRe ily traian Z0D5NuGa0 */         cnt++;
/* efkyRPfRe ily traian Z0D5NuGa0 */     return cnt;
/* efkyRPfRe ily traian Z0D5NuGa0 */ }
/* efkyRPfRe ily traian Z0D5NuGa0 */ 
/* efkyRPfRe ily traian Z0D5NuGa0 */ int main()
/* efkyRPfRe ily traian Z0D5NuGa0 */ {
/* efkyRPfRe ily traian Z0D5NuGa0 */     int a , b;
/* efkyRPfRe ily traian Z0D5NuGa0 */     cin >> a >> b;
/* efkyRPfRe ily traian Z0D5NuGa0 */     int max=0;
/* efkyRPfRe ily traian Z0D5NuGa0 */     if(a%2!=0)
/* efkyRPfRe ily traian Z0D5NuGa0 */         a++;
/* efkyRPfRe ily traian Z0D5NuGa0 */     if(a%4!=0)
/* efkyRPfRe ily traian Z0D5NuGa0 */         a+=2;
/* efkyRPfRe ily traian Z0D5NuGa0 */     for(int i = a ; i <= b ; i+=4)
/* efkyRPfRe ily traian Z0D5NuGa0 */     {
/* efkyRPfRe ily traian Z0D5NuGa0 */         if(nrdiv(i) > max)
/* efkyRPfRe ily traian Z0D5NuGa0 */             max=nrdiv(i);
/* efkyRPfRe ily traian Z0D5NuGa0 */     }
/* efkyRPfRe ily traian Z0D5NuGa0 */     int ok=0;
/* efkyRPfRe ily traian Z0D5NuGa0 */     int rez1=0 , rez2=0 , cnt=0;
/* efkyRPfRe ily traian Z0D5NuGa0 */     for(int i = a ; i <= b ; i+=4)
/* efkyRPfRe ily traian Z0D5NuGa0 */     {
/* efkyRPfRe ily traian Z0D5NuGa0 */         if(nrdiv(i)==max && ok==0)
/* efkyRPfRe ily traian Z0D5NuGa0 */             rez1=i , ok++;
/* efkyRPfRe ily traian Z0D5NuGa0 */         if(nrdiv(i)==max)
/* efkyRPfRe ily traian Z0D5NuGa0 */             rez2=i , cnt++;
/* efkyRPfRe ily traian Z0D5NuGa0 */     }
/* efkyRPfRe ily traian Z0D5NuGa0 */     cout << rez1 << ' ' << rez2 << ' ' << cnt << ' ' << max;
/* efkyRPfRe ily traian Z0D5NuGa0 */     return 0;
/* efkyRPfRe ily traian Z0D5NuGa0 */ }