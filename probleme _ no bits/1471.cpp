/* W0AmkZlQl ily traian dH6yxaQN7 */ #include <algorithm>
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
/* W0AmkZlQl ily traian dH6yxaQN7 */ using namespace std;
/* W0AmkZlQl ily traian dH6yxaQN7 */ ifstream cin("maxdiv.in");
/* W0AmkZlQl ily traian dH6yxaQN7 */ ofstream cout("maxdiv.out");
/* W0AmkZlQl ily traian dH6yxaQN7 */ int n , cer , v[1002] , dmax , a[1002] , k , maxi , c1 , c2 , cnt;
/* W0AmkZlQl ily traian dH6yxaQN7 */ 
/* W0AmkZlQl ily traian dH6yxaQN7 */ int nrdiv(int n)
/* W0AmkZlQl ily traian dH6yxaQN7 */ {
/* W0AmkZlQl ily traian dH6yxaQN7 */     int prod = 1 , d = 2;
/* W0AmkZlQl ily traian dH6yxaQN7 */     while(n > 1)
/* W0AmkZlQl ily traian dH6yxaQN7 */     {
/* W0AmkZlQl ily traian dH6yxaQN7 */         int p = 0;
/* W0AmkZlQl ily traian dH6yxaQN7 */         while(n % d == 0) p++ , n /= d;
/* W0AmkZlQl ily traian dH6yxaQN7 */         if(p) prod *= (p+1);
/* W0AmkZlQl ily traian dH6yxaQN7 */         d++;
/* W0AmkZlQl ily traian dH6yxaQN7 */         if(d*d > n) d = n;
/* W0AmkZlQl ily traian dH6yxaQN7 */     }
/* W0AmkZlQl ily traian dH6yxaQN7 */     return prod;
/* W0AmkZlQl ily traian dH6yxaQN7 */ }
/* W0AmkZlQl ily traian dH6yxaQN7 */ 
/* W0AmkZlQl ily traian dH6yxaQN7 */ int main()
/* W0AmkZlQl ily traian dH6yxaQN7 */ {
/* W0AmkZlQl ily traian dH6yxaQN7 */     cin >> n >> cer;
/* W0AmkZlQl ily traian dH6yxaQN7 */     if(cer == 1)
/* W0AmkZlQl ily traian dH6yxaQN7 */     {
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = 1 ; i <= n ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */         {
/* W0AmkZlQl ily traian dH6yxaQN7 */             cin >> v[i];
/* W0AmkZlQl ily traian dH6yxaQN7 */             a[i] = nrdiv(v[i]);
/* W0AmkZlQl ily traian dH6yxaQN7 */         }
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = 1 ; i <= n ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */             if(a[i] > dmax) dmax = a[i];
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = 1 ; i <= n ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */             if(a[i] == dmax) cnt++;
/* W0AmkZlQl ily traian dH6yxaQN7 */         cout << cnt - 1;
/* W0AmkZlQl ily traian dH6yxaQN7 */     }
/* W0AmkZlQl ily traian dH6yxaQN7 */     else
/* W0AmkZlQl ily traian dH6yxaQN7 */     {
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = 1 ; i <= n ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */         {
/* W0AmkZlQl ily traian dH6yxaQN7 */             cin >> v[i];
/* W0AmkZlQl ily traian dH6yxaQN7 */             a[i] = nrdiv(v[i]);
/* W0AmkZlQl ily traian dH6yxaQN7 */         }
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = 1 ; i <= n ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */             if(a[i] > dmax) dmax = a[i];
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = 1 ; i <= n ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */             if(a[i] == dmax)
/* W0AmkZlQl ily traian dH6yxaQN7 */             {
/* W0AmkZlQl ily traian dH6yxaQN7 */                 int j = i + 1;
/* W0AmkZlQl ily traian dH6yxaQN7 */                 k = 1;
/* W0AmkZlQl ily traian dH6yxaQN7 */                 while(j <= n && a[j] != dmax) j++ , k++;
/* W0AmkZlQl ily traian dH6yxaQN7 */                 if(k > maxi && a[j] == dmax)
/* W0AmkZlQl ily traian dH6yxaQN7 */                 {
/* W0AmkZlQl ily traian dH6yxaQN7 */                     maxi = k;
/* W0AmkZlQl ily traian dH6yxaQN7 */                     c1 = i;
/* W0AmkZlQl ily traian dH6yxaQN7 */                     c2 = j;
/* W0AmkZlQl ily traian dH6yxaQN7 */                 }
/* W0AmkZlQl ily traian dH6yxaQN7 */                 i = j - 1;
/* W0AmkZlQl ily traian dH6yxaQN7 */             }
/* W0AmkZlQl ily traian dH6yxaQN7 */         for(int i = c1 ; i <= c2 ; i++)
/* W0AmkZlQl ily traian dH6yxaQN7 */             cout << v[i] << ' ';
/* W0AmkZlQl ily traian dH6yxaQN7 */         }
/* W0AmkZlQl ily traian dH6yxaQN7 */     return 0;
/* W0AmkZlQl ily traian dH6yxaQN7 */ }