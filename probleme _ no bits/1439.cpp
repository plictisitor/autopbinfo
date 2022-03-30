/* jXIZRshgp ily traian HOoINOmD3 */ #include <algorithm>
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
/* jXIZRshgp ily traian HOoINOmD3 */ using namespace std;
/* jXIZRshgp ily traian HOoINOmD3 */ ifstream cin("sir6.in");
/* jXIZRshgp ily traian HOoINOmD3 */ ofstream cout("sir6.out");
/* jXIZRshgp ily traian HOoINOmD3 */ int main()
/* jXIZRshgp ily traian HOoINOmD3 */ {
/* jXIZRshgp ily traian HOoINOmD3 */     int c , n , a[100001] , l = 0 , lmax = 0;
/* jXIZRshgp ily traian HOoINOmD3 */     cin >> c >> n;
/* jXIZRshgp ily traian HOoINOmD3 */     for(int i = 0 ; i < n ; ++i) cin >> a[i];
/* jXIZRshgp ily traian HOoINOmD3 */     if(c == 1)
/* jXIZRshgp ily traian HOoINOmD3 */     {
/* jXIZRshgp ily traian HOoINOmD3 */         for(int i = 0 ; i < n ; ++i)
/* jXIZRshgp ily traian HOoINOmD3 */         {
/* jXIZRshgp ily traian HOoINOmD3 */             if(a[i] == a[i+1]) l++;
/* jXIZRshgp ily traian HOoINOmD3 */             if(l > lmax)lmax = l;
/* jXIZRshgp ily traian HOoINOmD3 */             if(a[i] != a[i+1]) l = 0;
/* jXIZRshgp ily traian HOoINOmD3 */         }
/* jXIZRshgp ily traian HOoINOmD3 */         cout << lmax+1;
/* jXIZRshgp ily traian HOoINOmD3 */     }
/* jXIZRshgp ily traian HOoINOmD3 */     if(c == 2)
/* jXIZRshgp ily traian HOoINOmD3 */     {
/* jXIZRshgp ily traian HOoINOmD3 */         int i = 0 , cnt = 0;
/* jXIZRshgp ily traian HOoINOmD3 */         for(i = 0 ; i < n ; ++i)
/* jXIZRshgp ily traian HOoINOmD3 */         {
/* jXIZRshgp ily traian HOoINOmD3 */             while(a[i] == a[i+1]) cnt++ , i++;
/* jXIZRshgp ily traian HOoINOmD3 */             cout << a[i] << " " << cnt+1<< " ";
/* jXIZRshgp ily traian HOoINOmD3 */             cnt = 0;
/* jXIZRshgp ily traian HOoINOmD3 */         }
/* jXIZRshgp ily traian HOoINOmD3 */     }
/* jXIZRshgp ily traian HOoINOmD3 */ }