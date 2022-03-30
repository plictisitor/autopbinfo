/* oPojOAvKx ily traian UxM48Fqs7 */ #include <algorithm>
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
/* oPojOAvKx ily traian UxM48Fqs7 */ 
/* oPojOAvKx ily traian UxM48Fqs7 */ using namespace std;
/* oPojOAvKx ily traian UxM48Fqs7 */ 
/* oPojOAvKx ily traian UxM48Fqs7 */ ifstream cin("parap.in");
/* oPojOAvKx ily traian UxM48Fqs7 */ ofstream cout("parap.out");
/* oPojOAvKx ily traian UxM48Fqs7 */ 
/* oPojOAvKx ily traian UxM48Fqs7 */ long long n , x , cnt = 1 , a[100001] , sum;
/* oPojOAvKx ily traian UxM48Fqs7 */ 
/* oPojOAvKx ily traian UxM48Fqs7 */ long long frecv(long long x)
/* oPojOAvKx ily traian UxM48Fqs7 */ {
/* oPojOAvKx ily traian UxM48Fqs7 */     long long f[15] = {0} , nr = 0;
/* oPojOAvKx ily traian UxM48Fqs7 */     while(x != 0)
/* oPojOAvKx ily traian UxM48Fqs7 */     {
/* oPojOAvKx ily traian UxM48Fqs7 */         f[x % 10]++;
/* oPojOAvKx ily traian UxM48Fqs7 */         x /= 10;
/* oPojOAvKx ily traian UxM48Fqs7 */     }
/* oPojOAvKx ily traian UxM48Fqs7 */     for(int i = 0 ; i <= 9 ; i++)
/* oPojOAvKx ily traian UxM48Fqs7 */         nr = nr * 10 + f[i] % 2;
/* oPojOAvKx ily traian UxM48Fqs7 */     return nr;
/* oPojOAvKx ily traian UxM48Fqs7 */ }
/* oPojOAvKx ily traian UxM48Fqs7 */ 
/* oPojOAvKx ily traian UxM48Fqs7 */ int main()
/* oPojOAvKx ily traian UxM48Fqs7 */ {
/* oPojOAvKx ily traian UxM48Fqs7 */     cin >> n;
/* oPojOAvKx ily traian UxM48Fqs7 */     for(int i = 1 ; i <= n ; i++)
/* oPojOAvKx ily traian UxM48Fqs7 */     {
/* oPojOAvKx ily traian UxM48Fqs7 */         cin >> x;
/* oPojOAvKx ily traian UxM48Fqs7 */         a[i] = frecv(x);
/* oPojOAvKx ily traian UxM48Fqs7 */     }
/* oPojOAvKx ily traian UxM48Fqs7 */     sort(a + 1 , a + n + 1);
/* oPojOAvKx ily traian UxM48Fqs7 */     for(int i = 2 ; i <= n ; i++)
/* oPojOAvKx ily traian UxM48Fqs7 */         if(a[i] == a[i - 1]) cnt++;
/* oPojOAvKx ily traian UxM48Fqs7 */         else
/* oPojOAvKx ily traian UxM48Fqs7 */         {
/* oPojOAvKx ily traian UxM48Fqs7 */             sum = sum + cnt * (cnt - 1) / 2;
/* oPojOAvKx ily traian UxM48Fqs7 */             cnt = 1;
/* oPojOAvKx ily traian UxM48Fqs7 */         }
/* oPojOAvKx ily traian UxM48Fqs7 */     sum = sum + cnt * (cnt - 1) / 2;
/* oPojOAvKx ily traian UxM48Fqs7 */     cnt = 1;
/* oPojOAvKx ily traian UxM48Fqs7 */     cout << sum;
/* oPojOAvKx ily traian UxM48Fqs7 */ }