/* sHQziBndl ily traian tvbYBtIz0 */ #include <algorithm>
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
/* sHQziBndl ily traian tvbYBtIz0 */ using namespace std;
/* sHQziBndl ily traian tvbYBtIz0 */ 
/* sHQziBndl ily traian tvbYBtIz0 */ ifstream cin("binar.in");
/* sHQziBndl ily traian tvbYBtIz0 */ ofstream cout("binar.out");
/* sHQziBndl ily traian tvbYBtIz0 */ 
/* sHQziBndl ily traian tvbYBtIz0 */ int n , a[1000001] , b[1000001];
/* sHQziBndl ily traian tvbYBtIz0 */ 
/* sHQziBndl ily traian tvbYBtIz0 */ int binar(int x)
/* sHQziBndl ily traian tvbYBtIz0 */ {
/* sHQziBndl ily traian tvbYBtIz0 */     int cnt = 0;
/* sHQziBndl ily traian tvbYBtIz0 */     while(x)
/* sHQziBndl ily traian tvbYBtIz0 */     {
/* sHQziBndl ily traian tvbYBtIz0 */         if(x%2)
/* sHQziBndl ily traian tvbYBtIz0 */             cnt++;
/* sHQziBndl ily traian tvbYBtIz0 */         x/=2;
/* sHQziBndl ily traian tvbYBtIz0 */     }
/* sHQziBndl ily traian tvbYBtIz0 */     return cnt;
/* sHQziBndl ily traian tvbYBtIz0 */ }
/* sHQziBndl ily traian tvbYBtIz0 */ 
/* sHQziBndl ily traian tvbYBtIz0 */ int main()
/* sHQziBndl ily traian tvbYBtIz0 */ {
/* sHQziBndl ily traian tvbYBtIz0 */     int t;
/* sHQziBndl ily traian tvbYBtIz0 */     cin >> t >> n;
/* sHQziBndl ily traian tvbYBtIz0 */     for(int i = 1 ; i <= n ; ++i)
/* sHQziBndl ily traian tvbYBtIz0 */     {
/* sHQziBndl ily traian tvbYBtIz0 */         cin >> a[i];
/* sHQziBndl ily traian tvbYBtIz0 */         b[i]=binar(a[i]);
/* sHQziBndl ily traian tvbYBtIz0 */     }
/* sHQziBndl ily traian tvbYBtIz0 */     int max=0 , max1 = 0;
/* sHQziBndl ily traian tvbYBtIz0 */     for(int i = 1 ; i <= n ; ++i)
/* sHQziBndl ily traian tvbYBtIz0 */         if(b[i] > max)
/* sHQziBndl ily traian tvbYBtIz0 */             max = b[i];
/* sHQziBndl ily traian tvbYBtIz0 */     for(int i = 1 ; i <= n ; ++i)
/* sHQziBndl ily traian tvbYBtIz0 */         if(b[i]==max && a[i] > max1)
/* sHQziBndl ily traian tvbYBtIz0 */             max1=a[i];
/* sHQziBndl ily traian tvbYBtIz0 */     if(t==1)
/* sHQziBndl ily traian tvbYBtIz0 */         cout << max1;
/* sHQziBndl ily traian tvbYBtIz0 */     else
/* sHQziBndl ily traian tvbYBtIz0 */     {
/* sHQziBndl ily traian tvbYBtIz0 */         int l = 1 , lmax = 1 , start = 1;
/* sHQziBndl ily traian tvbYBtIz0 */         for(int i = 2 ; i <= n ; ++i)
/* sHQziBndl ily traian tvbYBtIz0 */         {
/* sHQziBndl ily traian tvbYBtIz0 */             if(b[i]==b[i-1])
/* sHQziBndl ily traian tvbYBtIz0 */             {
/* sHQziBndl ily traian tvbYBtIz0 */                 l++;
/* sHQziBndl ily traian tvbYBtIz0 */                 if(l > lmax)
/* sHQziBndl ily traian tvbYBtIz0 */                     lmax = l , start=i-lmax+1;
/* sHQziBndl ily traian tvbYBtIz0 */             }
/* sHQziBndl ily traian tvbYBtIz0 */             else
/* sHQziBndl ily traian tvbYBtIz0 */                 l=1;
/* sHQziBndl ily traian tvbYBtIz0 */         }
/* sHQziBndl ily traian tvbYBtIz0 */         cout << lmax << ' ' << start;
/* sHQziBndl ily traian tvbYBtIz0 */     }
/* sHQziBndl ily traian tvbYBtIz0 */     return 0;
/* sHQziBndl ily traian tvbYBtIz0 */ }