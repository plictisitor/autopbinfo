/* e3wjIXRrH ily traian ngDRujTI5 */ #include <algorithm>
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
/* e3wjIXRrH ily traian ngDRujTI5 */ using namespace std;
/* e3wjIXRrH ily traian ngDRujTI5 */ 
/* e3wjIXRrH ily traian ngDRujTI5 */ ifstream cin("aur.in");
/* e3wjIXRrH ily traian ngDRujTI5 */ ofstream cout("aur.out");
/* e3wjIXRrH ily traian ngDRujTI5 */ 
/* e3wjIXRrH ily traian ngDRujTI5 */ unsigned char a[900001];
/* e3wjIXRrH ily traian ngDRujTI5 */ int ind;
/* e3wjIXRrH ily traian ngDRujTI5 */ unsigned long long maxi;
/* e3wjIXRrH ily traian ngDRujTI5 */ 
/* e3wjIXRrH ily traian ngDRujTI5 */ int nrcif(int n)
/* e3wjIXRrH ily traian ngDRujTI5 */ {
/* e3wjIXRrH ily traian ngDRujTI5 */     int c = 0;
/* e3wjIXRrH ily traian ngDRujTI5 */     while(n != 0)
/* e3wjIXRrH ily traian ngDRujTI5 */     {
/* e3wjIXRrH ily traian ngDRujTI5 */         c++;
/* e3wjIXRrH ily traian ngDRujTI5 */         n /= 10;
/* e3wjIXRrH ily traian ngDRujTI5 */     }
/* e3wjIXRrH ily traian ngDRujTI5 */     return c;
/* e3wjIXRrH ily traian ngDRujTI5 */ }
/* e3wjIXRrH ily traian ngDRujTI5 */ 
/* e3wjIXRrH ily traian ngDRujTI5 */ int ogl(int n)
/* e3wjIXRrH ily traian ngDRujTI5 */ {
/* e3wjIXRrH ily traian ngDRujTI5 */     int ogl = 0;
/* e3wjIXRrH ily traian ngDRujTI5 */     while(n != 0)
/* e3wjIXRrH ily traian ngDRujTI5 */     {
/* e3wjIXRrH ily traian ngDRujTI5 */         ogl = ogl * 10 + n % 10;
/* e3wjIXRrH ily traian ngDRujTI5 */         n /= 10;
/* e3wjIXRrH ily traian ngDRujTI5 */     }
/* e3wjIXRrH ily traian ngDRujTI5 */     return ogl;
/* e3wjIXRrH ily traian ngDRujTI5 */ }
/* e3wjIXRrH ily traian ngDRujTI5 */ int main()
/* e3wjIXRrH ily traian ngDRujTI5 */ {
/* e3wjIXRrH ily traian ngDRujTI5 */     long long cer , n , k , p , cnt = 0 , x;
/* e3wjIXRrH ily traian ngDRujTI5 */     cin >> cer;
/* e3wjIXRrH ily traian ngDRujTI5 */     if(cer == 1)
/* e3wjIXRrH ily traian ngDRujTI5 */     {
/* e3wjIXRrH ily traian ngDRujTI5 */         int sum = 0;
/* e3wjIXRrH ily traian ngDRujTI5 */         cin >> n;
/* e3wjIXRrH ily traian ngDRujTI5 */         for(int i = 1 ; i <= n ; i++)
/* e3wjIXRrH ily traian ngDRujTI5 */             cin >> x , sum += nrcif(x);
/* e3wjIXRrH ily traian ngDRujTI5 */         cout << sum;
/* e3wjIXRrH ily traian ngDRujTI5 */     }
/* e3wjIXRrH ily traian ngDRujTI5 */     else if(cer == 2)
/* e3wjIXRrH ily traian ngDRujTI5 */     {
/* e3wjIXRrH ily traian ngDRujTI5 */         cin >> n >> k;
/* e3wjIXRrH ily traian ngDRujTI5 */         for(int i = 1 ; i <= n ; i++)
/* e3wjIXRrH ily traian ngDRujTI5 */         {
/* e3wjIXRrH ily traian ngDRujTI5 */             cin >> x;
/* e3wjIXRrH ily traian ngDRujTI5 */             int og = ogl(x);
/* e3wjIXRrH ily traian ngDRujTI5 */             while(x % 10 == 0) 
/* e3wjIXRrH ily traian ngDRujTI5 */             {
/* e3wjIXRrH ily traian ngDRujTI5 */                 cnt++;
/* e3wjIXRrH ily traian ngDRujTI5 */                 x /= 10;
/* e3wjIXRrH ily traian ngDRujTI5 */                 if(cnt == k) cout << 0;
/* e3wjIXRrH ily traian ngDRujTI5 */             }
/* e3wjIXRrH ily traian ngDRujTI5 */             while(og != 0)
/* e3wjIXRrH ily traian ngDRujTI5 */             {
/* e3wjIXRrH ily traian ngDRujTI5 */                 cnt++;
/* e3wjIXRrH ily traian ngDRujTI5 */                 if(cnt == k) cout << og % 10;
/* e3wjIXRrH ily traian ngDRujTI5 */                 og /= 10;
/* e3wjIXRrH ily traian ngDRujTI5 */             }
/* e3wjIXRrH ily traian ngDRujTI5 */         }
/* e3wjIXRrH ily traian ngDRujTI5 */     }
/* e3wjIXRrH ily traian ngDRujTI5 */     else
/* e3wjIXRrH ily traian ngDRujTI5 */     {
/* e3wjIXRrH ily traian ngDRujTI5 */         cin >> n >> p;
/* e3wjIXRrH ily traian ngDRujTI5 */         for(int i = 1 ; i <= n ; i++)
/* e3wjIXRrH ily traian ngDRujTI5 */         {
/* e3wjIXRrH ily traian ngDRujTI5 */             cin >> x;
/* e3wjIXRrH ily traian ngDRujTI5 */             int og = ogl(x) , l = 0;
/* e3wjIXRrH ily traian ngDRujTI5 */             while(x % 10 == 0) l++ , x /= 10;
/* e3wjIXRrH ily traian ngDRujTI5 */             while(og != 0)
/* e3wjIXRrH ily traian ngDRujTI5 */             {
/* e3wjIXRrH ily traian ngDRujTI5 */                 a[++ind] = og % 10;
/* e3wjIXRrH ily traian ngDRujTI5 */                 og /= 10;
/* e3wjIXRrH ily traian ngDRujTI5 */             }
/* e3wjIXRrH ily traian ngDRujTI5 */             while(l)
/* e3wjIXRrH ily traian ngDRujTI5 */                 a[++ind] = 0 , l--;
/* e3wjIXRrH ily traian ngDRujTI5 */         }
/* e3wjIXRrH ily traian ngDRujTI5 */         for(int i = 1 ; i <= ind - p + 1; i++)
/* e3wjIXRrH ily traian ngDRujTI5 */         {
/* e3wjIXRrH ily traian ngDRujTI5 */             unsigned long long rez = 0;
/* e3wjIXRrH ily traian ngDRujTI5 */             for(int j = 1 ; j <= p ; j++)
/* e3wjIXRrH ily traian ngDRujTI5 */                     rez = rez * 10 + a[i+j-1];
/* e3wjIXRrH ily traian ngDRujTI5 */             if(rez > maxi) maxi = rez;
/* e3wjIXRrH ily traian ngDRujTI5 */         }
/* e3wjIXRrH ily traian ngDRujTI5 */         cout << maxi;
/* e3wjIXRrH ily traian ngDRujTI5 */     }
/* e3wjIXRrH ily traian ngDRujTI5 */ }