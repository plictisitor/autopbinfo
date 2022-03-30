/* N1FjSGmdl ily traian nqbbhVDF1 */ #include <algorithm>
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
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ using namespace std;
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ ifstream cin("spion1.in");
/* N1FjSGmdl ily traian nqbbhVDF1 */ ofstream cout("spion1.out");
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ #define mod 100003
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ int E[1000001];
/* N1FjSGmdl ily traian nqbbhVDF1 */ int C[100001];
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ void ciur(int E[] , int n)
/* N1FjSGmdl ily traian nqbbhVDF1 */ {
/* N1FjSGmdl ily traian nqbbhVDF1 */     for(int i = 2 ; i <= n ; i++) E[i] = 1;
/* N1FjSGmdl ily traian nqbbhVDF1 */     for(int i = 2 ; i * i <= n ; i++)
/* N1FjSGmdl ily traian nqbbhVDF1 */         if(E[i] == 1)
/* N1FjSGmdl ily traian nqbbhVDF1 */             for(int j = i*i ; j <= n ; j += i) E[j] = 0;
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ }
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ int np(int n , int x)
/* N1FjSGmdl ily traian nqbbhVDF1 */ {
/* N1FjSGmdl ily traian nqbbhVDF1 */     ///la ce putere apare x in n faactorial
/* N1FjSGmdl ily traian nqbbhVDF1 */     int p = x , val = 0;
/* N1FjSGmdl ily traian nqbbhVDF1 */     while(n >= p)
/* N1FjSGmdl ily traian nqbbhVDF1 */     {
/* N1FjSGmdl ily traian nqbbhVDF1 */         val += n / p;
/* N1FjSGmdl ily traian nqbbhVDF1 */         p *= x;
/* N1FjSGmdl ily traian nqbbhVDF1 */     }
/* N1FjSGmdl ily traian nqbbhVDF1 */     return val;
/* N1FjSGmdl ily traian nqbbhVDF1 */ }
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ unsigned long long xlan(int x , int n)
/* N1FjSGmdl ily traian nqbbhVDF1 */ {
/* N1FjSGmdl ily traian nqbbhVDF1 */     if(n == 0) return 1;
/* N1FjSGmdl ily traian nqbbhVDF1 */     else
/* N1FjSGmdl ily traian nqbbhVDF1 */     {
/* N1FjSGmdl ily traian nqbbhVDF1 */         unsigned long long p = xlan(x , n / 2);
/* N1FjSGmdl ily traian nqbbhVDF1 */         if(n % 2 == 0) p = p * p % mod;
/* N1FjSGmdl ily traian nqbbhVDF1 */         else p = p * p * x % mod;
/* N1FjSGmdl ily traian nqbbhVDF1 */         return p;
/* N1FjSGmdl ily traian nqbbhVDF1 */     }
/* N1FjSGmdl ily traian nqbbhVDF1 */ }
/* N1FjSGmdl ily traian nqbbhVDF1 */ int main()
/* N1FjSGmdl ily traian nqbbhVDF1 */ {
/* N1FjSGmdl ily traian nqbbhVDF1 */     int cer;
/* N1FjSGmdl ily traian nqbbhVDF1 */     char s[100001];
/* N1FjSGmdl ily traian nqbbhVDF1 */     ciur(E , 100001);
/* N1FjSGmdl ily traian nqbbhVDF1 */     cin >> cer >> s;
/* N1FjSGmdl ily traian nqbbhVDF1 */     int i = 0 , cnt = 0 , n = strlen(s);
/* N1FjSGmdl ily traian nqbbhVDF1 */     while(s[i] != '\0')
/* N1FjSGmdl ily traian nqbbhVDF1 */     {
/* N1FjSGmdl ily traian nqbbhVDF1 */         if(s[i] == 'E') cnt++;
/* N1FjSGmdl ily traian nqbbhVDF1 */         i++;
/* N1FjSGmdl ily traian nqbbhVDF1 */     }
/* N1FjSGmdl ily traian nqbbhVDF1 */     if(cer == 1) cout << cnt + 1;
/* N1FjSGmdl ily traian nqbbhVDF1 */     else
/* N1FjSGmdl ily traian nqbbhVDF1 */     {
/* N1FjSGmdl ily traian nqbbhVDF1 */         unsigned long long k = 1;
/* N1FjSGmdl ily traian nqbbhVDF1 */         for(int i = 2 ; i <= n ; i++)
/* N1FjSGmdl ily traian nqbbhVDF1 */             if(E[i]) C[i] = np(n , i);
/* N1FjSGmdl ily traian nqbbhVDF1 */         for(int i = 2 ; i <= cnt ; i++)
/* N1FjSGmdl ily traian nqbbhVDF1 */             if(E[i]) C[i] -= np(cnt , i);
/* N1FjSGmdl ily traian nqbbhVDF1 */         for(int i = 2 ; i <= n - cnt ; i++)
/* N1FjSGmdl ily traian nqbbhVDF1 */             if(E[i]) C[i] -= np(n - cnt , i);
/* N1FjSGmdl ily traian nqbbhVDF1 */         for(int i = 2 ; i <= n; i++)
/* N1FjSGmdl ily traian nqbbhVDF1 */             k = k * xlan(i , C[i]) % mod;
/* N1FjSGmdl ily traian nqbbhVDF1 */         cout << k;
/* N1FjSGmdl ily traian nqbbhVDF1 */     }
/* N1FjSGmdl ily traian nqbbhVDF1 */ 
/* N1FjSGmdl ily traian nqbbhVDF1 */ }