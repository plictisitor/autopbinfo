/* IGHbt2LdZ ily traian Q01WqDxs1 */ #include <algorithm>
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
/* IGHbt2LdZ ily traian Q01WqDxs1 */ using namespace std;
/* IGHbt2LdZ ily traian Q01WqDxs1 */ ifstream cin("colier.in");
/* IGHbt2LdZ ily traian Q01WqDxs1 */ ofstream cout("colier.out");
/* IGHbt2LdZ ily traian Q01WqDxs1 */ int minmax(int n)
/* IGHbt2LdZ ily traian Q01WqDxs1 */ {
/* IGHbt2LdZ ily traian Q01WqDxs1 */     int v[100] , p = 0 , mini = 10 , maxi = 0 , nr = 0 , cntmin = 0 , cntmax = 0;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     while(n != 0)
/* IGHbt2LdZ ily traian Q01WqDxs1 */     {
/* IGHbt2LdZ ily traian Q01WqDxs1 */         v[p]=n%10;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         if(n%10<mini) mini=n%10;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         if(n%10>maxi) maxi=n%10;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         p++;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         n/=10;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     }
/* IGHbt2LdZ ily traian Q01WqDxs1 */     for(int i = p-1 ; i >= 0 ; --i)
/* IGHbt2LdZ ily traian Q01WqDxs1 */     {
/* IGHbt2LdZ ily traian Q01WqDxs1 */         if(v[i]==mini && cntmin==0)
/* IGHbt2LdZ ily traian Q01WqDxs1 */         {
/* IGHbt2LdZ ily traian Q01WqDxs1 */             nr=nr*10+mini;
/* IGHbt2LdZ ily traian Q01WqDxs1 */             cntmin++;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         }
/* IGHbt2LdZ ily traian Q01WqDxs1 */         if(v[i]==maxi && cntmax==0)
/* IGHbt2LdZ ily traian Q01WqDxs1 */         {
/* IGHbt2LdZ ily traian Q01WqDxs1 */             nr=nr*10+maxi;
/* IGHbt2LdZ ily traian Q01WqDxs1 */             cntmax++;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         }
/* IGHbt2LdZ ily traian Q01WqDxs1 */     }
/* IGHbt2LdZ ily traian Q01WqDxs1 */     return nr;
/* IGHbt2LdZ ily traian Q01WqDxs1 */ }
/* IGHbt2LdZ ily traian Q01WqDxs1 */ 
/* IGHbt2LdZ ily traian Q01WqDxs1 */ int main()
/* IGHbt2LdZ ily traian Q01WqDxs1 */ {
/* IGHbt2LdZ ily traian Q01WqDxs1 */     int t , n , a[50001] , tip[50001] , x , cnt = 0;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     cin >> t >> n;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     for(int i = 1 ; i <= n ; ++i)
/* IGHbt2LdZ ily traian Q01WqDxs1 */     {
/* IGHbt2LdZ ily traian Q01WqDxs1 */         cin >> x;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         a[i]=minmax(x);
/* IGHbt2LdZ ily traian Q01WqDxs1 */     }
/* IGHbt2LdZ ily traian Q01WqDxs1 */     for(int i = 1 ; i <= n ; ++i)
/* IGHbt2LdZ ily traian Q01WqDxs1 */     {
/* IGHbt2LdZ ily traian Q01WqDxs1 */         if(a[i]/10 < a[i]%10)
/* IGHbt2LdZ ily traian Q01WqDxs1 */         {
/* IGHbt2LdZ ily traian Q01WqDxs1 */             cnt++;
/* IGHbt2LdZ ily traian Q01WqDxs1 */             tip[i]=1;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         }
/* IGHbt2LdZ ily traian Q01WqDxs1 */         else tip[i]=2;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     }
/* IGHbt2LdZ ily traian Q01WqDxs1 */     if(t==1) cout << cnt;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     if(t==2)
/* IGHbt2LdZ ily traian Q01WqDxs1 */     {
/* IGHbt2LdZ ily traian Q01WqDxs1 */         cnt=n;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         for(int i = 1 ; i <= n ; ++i)
/* IGHbt2LdZ ily traian Q01WqDxs1 */         {
/* IGHbt2LdZ ily traian Q01WqDxs1 */             if(tip[i]!=tip[i%n+1])
/* IGHbt2LdZ ily traian Q01WqDxs1 */                 cnt--;
/* IGHbt2LdZ ily traian Q01WqDxs1 */         }
/* IGHbt2LdZ ily traian Q01WqDxs1 */         cout << n-cnt;
/* IGHbt2LdZ ily traian Q01WqDxs1 */     }
/* IGHbt2LdZ ily traian Q01WqDxs1 */     return 0;
/* IGHbt2LdZ ily traian Q01WqDxs1 */ }