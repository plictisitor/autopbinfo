/* MqDEH5WmL ily traian iCodpYZN4 */ #include <algorithm>
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
/* MqDEH5WmL ily traian iCodpYZN4 */ 
/* MqDEH5WmL ily traian iCodpYZN4 */ using namespace std;
/* MqDEH5WmL ily traian iCodpYZN4 */ ifstream cin("masterpiece001.in");
/* MqDEH5WmL ily traian iCodpYZN4 */ ofstream cout("masterpiece001.out");
/* MqDEH5WmL ily traian iCodpYZN4 */ bitset<400001> a;
/* MqDEH5WmL ily traian iCodpYZN4 */ int nrdiv(int n)
/* MqDEH5WmL ily traian iCodpYZN4 */ {
/* MqDEH5WmL ily traian iCodpYZN4 */     int d = 2 , cnt = 1;
/* MqDEH5WmL ily traian iCodpYZN4 */     int d2=0;
/* MqDEH5WmL ily traian iCodpYZN4 */     while(n%2==0) { d2++; n=n/2;}
/* MqDEH5WmL ily traian iCodpYZN4 */     cnt=d2+1;
/* MqDEH5WmL ily traian iCodpYZN4 */     d=3;
/* MqDEH5WmL ily traian iCodpYZN4 */     while(n > 1)
/* MqDEH5WmL ily traian iCodpYZN4 */     {
/* MqDEH5WmL ily traian iCodpYZN4 */         int p = 0;
/* MqDEH5WmL ily traian iCodpYZN4 */         while(n % d == 0){n/=d;p++;}
/* MqDEH5WmL ily traian iCodpYZN4 */         cnt = cnt * (p+1);
/* MqDEH5WmL ily traian iCodpYZN4 */         d=d+2;
/* MqDEH5WmL ily traian iCodpYZN4 */         if(d * d > n)d = n;
/* MqDEH5WmL ily traian iCodpYZN4 */     }
/* MqDEH5WmL ily traian iCodpYZN4 */     return cnt;
/* MqDEH5WmL ily traian iCodpYZN4 */ }
/* MqDEH5WmL ily traian iCodpYZN4 */ int main()
/* MqDEH5WmL ily traian iCodpYZN4 */ {
/* MqDEH5WmL ily traian iCodpYZN4 */     int n , x , ndmax=0,max = 0 ,min=400000,s=400000,d=0;
/* MqDEH5WmL ily traian iCodpYZN4 */     cin >> n;
/* MqDEH5WmL ily traian iCodpYZN4 */     for(int i = 0 ; i < n ; ++i)
/* MqDEH5WmL ily traian iCodpYZN4 */     {
/* MqDEH5WmL ily traian iCodpYZN4 */         cin >> x;
/* MqDEH5WmL ily traian iCodpYZN4 */         a[x]=1;
/* MqDEH5WmL ily traian iCodpYZN4 */         if(x<s) s=x;
/* MqDEH5WmL ily traian iCodpYZN4 */         if(x>d) d=x;
/* MqDEH5WmL ily traian iCodpYZN4 */     }
/* MqDEH5WmL ily traian iCodpYZN4 */     for(int y=s;y<=d;y++)
/* MqDEH5WmL ily traian iCodpYZN4 */         if(a[y])
/* MqDEH5WmL ily traian iCodpYZN4 */     {
/* MqDEH5WmL ily traian iCodpYZN4 */         int nd=nrdiv(y);
/* MqDEH5WmL ily traian iCodpYZN4 */         if(nd>ndmax)
/* MqDEH5WmL ily traian iCodpYZN4 */         {
/* MqDEH5WmL ily traian iCodpYZN4 */             ndmax = nd;
/* MqDEH5WmL ily traian iCodpYZN4 */             max=min=y;
/* MqDEH5WmL ily traian iCodpYZN4 */         }
/* MqDEH5WmL ily traian iCodpYZN4 */         else if(nd==ndmax)
/* MqDEH5WmL ily traian iCodpYZN4 */                   max=y;
/* MqDEH5WmL ily traian iCodpYZN4 */     }
/* MqDEH5WmL ily traian iCodpYZN4 */     for(int i=min;i<=max;i++)
/* MqDEH5WmL ily traian iCodpYZN4 */         if(a[i] && nrdiv(i)==ndmax)
/* MqDEH5WmL ily traian iCodpYZN4 */             cout<<i<<" ";
/* MqDEH5WmL ily traian iCodpYZN4 */     return 0;
/* MqDEH5WmL ily traian iCodpYZN4 */ }