/* lsvAvVQ6p ily traian jgcpaUGv6 */ #include <algorithm>
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
/* lsvAvVQ6p ily traian jgcpaUGv6 */ 
/* lsvAvVQ6p ily traian jgcpaUGv6 */ using namespace std;
/* lsvAvVQ6p ily traian jgcpaUGv6 */ 
/* lsvAvVQ6p ily traian jgcpaUGv6 */ ifstream cin("pluton.in");
/* lsvAvVQ6p ily traian jgcpaUGv6 */ ofstream cout("pluton.out");
/* lsvAvVQ6p ily traian jgcpaUGv6 */ int n , a[4001] , v[4001] , cnt , lmax , x;
/* lsvAvVQ6p ily traian jgcpaUGv6 */ 
/* lsvAvVQ6p ily traian jgcpaUGv6 */ int pluton(int n)
/* lsvAvVQ6p ily traian jgcpaUGv6 */ {
/* lsvAvVQ6p ily traian jgcpaUGv6 */     int f[10] = {0} , rez = 0;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     while(n) {f[n % 10] ++ ; n /= 10;}
/* lsvAvVQ6p ily traian jgcpaUGv6 */     for(int i = 1 ; i <= 9 ; ++i)
/* lsvAvVQ6p ily traian jgcpaUGv6 */         for(int j = 1 ; j <= f[i] ; ++j)
/* lsvAvVQ6p ily traian jgcpaUGv6 */             rez = rez * 10 + i;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     for(int i = 1 ; i <= f[0] ; ++i) rez *= 10;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     return rez;
/* lsvAvVQ6p ily traian jgcpaUGv6 */ }
/* lsvAvVQ6p ily traian jgcpaUGv6 */ 
/* lsvAvVQ6p ily traian jgcpaUGv6 */ int main()
/* lsvAvVQ6p ily traian jgcpaUGv6 */ {
/* lsvAvVQ6p ily traian jgcpaUGv6 */     int n , l = 1;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     cin >> n;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     for(int i = 0 ; i < n ; ++i)
/* lsvAvVQ6p ily traian jgcpaUGv6 */     {
/* lsvAvVQ6p ily traian jgcpaUGv6 */         cin >> v[i];
/* lsvAvVQ6p ily traian jgcpaUGv6 */         a[i] = pluton(v[i]);
/* lsvAvVQ6p ily traian jgcpaUGv6 */     }
/* lsvAvVQ6p ily traian jgcpaUGv6 */     sort(a , a + n);
/* lsvAvVQ6p ily traian jgcpaUGv6 */     for(int i = 0 ; i < n ; ++i)
/* lsvAvVQ6p ily traian jgcpaUGv6 */         if(a[i] != a[i + 1]) cnt++;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     cout << cnt << '\n';
/* lsvAvVQ6p ily traian jgcpaUGv6 */     cnt = 0;
/* lsvAvVQ6p ily traian jgcpaUGv6 */     for(int i = 0 ; i < n ; ++i)
/* lsvAvVQ6p ily traian jgcpaUGv6 */     {
/* lsvAvVQ6p ily traian jgcpaUGv6 */         if(a[i] != a[i-1]) l = 1;
/* lsvAvVQ6p ily traian jgcpaUGv6 */         else
/* lsvAvVQ6p ily traian jgcpaUGv6 */         {
/* lsvAvVQ6p ily traian jgcpaUGv6 */             l++;
/* lsvAvVQ6p ily traian jgcpaUGv6 */             if(l > lmax) lmax = l , cnt = 0 , x = a[i];
/* lsvAvVQ6p ily traian jgcpaUGv6 */             if(l == lmax) cnt++;
/* lsvAvVQ6p ily traian jgcpaUGv6 */         }
/* lsvAvVQ6p ily traian jgcpaUGv6 */     }
/* lsvAvVQ6p ily traian jgcpaUGv6 */     cout << lmax << '\n' << cnt << '\n';
/* lsvAvVQ6p ily traian jgcpaUGv6 */     for(int i = 0 ; i < n ; ++i)
/* lsvAvVQ6p ily traian jgcpaUGv6 */         if(pluton(v[i]) == x)
/* lsvAvVQ6p ily traian jgcpaUGv6 */             cout << v[i] << ' ';
/* lsvAvVQ6p ily traian jgcpaUGv6 */    