/* BywCK3JiO ily traian lphN7zby7 */ #include <algorithm>
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
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */ using namespace std;
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */ ifstream cin("countsub.in");
/* BywCK3JiO ily traian lphN7zby7 */ ofstream cout("countsub.out");
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */ int n , St[1001] , Dr[1001] , val[1001] , T[1001] , k , x , cnt;
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */ void RSD(int p)
/* BywCK3JiO ily traian lphN7zby7 */ {
/* BywCK3JiO ily traian lphN7zby7 */     if(p > 0)
/* BywCK3JiO ily traian lphN7zby7 */     {
/* BywCK3JiO ily traian lphN7zby7 */         cnt++;
/* BywCK3JiO ily traian lphN7zby7 */         RSD(St[p]);
/* BywCK3JiO ily traian lphN7zby7 */         RSD(Dr[p]);
/* BywCK3JiO ily traian lphN7zby7 */     }
/* BywCK3JiO ily traian lphN7zby7 */ }
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */  int main()
/* BywCK3JiO ily traian lphN7zby7 */ {
/* BywCK3JiO ily traian lphN7zby7 */     cin >> n;
/* BywCK3JiO ily traian lphN7zby7 */     for(int i = 1 ; i <= n ; i++)
/* BywCK3JiO ily traian lphN7zby7 */     {
/* BywCK3JiO ily traian lphN7zby7 */         cin >> val[i] >> St[i] >> Dr[i];
/* BywCK3JiO ily traian lphN7zby7 */         T[St[i]] = i;
/* BywCK3JiO ily traian lphN7zby7 */         T[Dr[i]] = i;
/* BywCK3JiO ily traian lphN7zby7 */     }
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */     cin >> k;
/* BywCK3JiO ily traian lphN7zby7 */     for(int i = 1 ; i <= k ; i++)
/* BywCK3JiO ily traian lphN7zby7 */     {
/* BywCK3JiO ily traian lphN7zby7 */         cin >> x;
/* BywCK3JiO ily traian lphN7zby7 */         cnt = 0;
/* BywCK3JiO ily traian lphN7zby7 */         RSD(x);
/* BywCK3JiO ily traian lphN7zby7 */         cout << cnt << '\n';
/* BywCK3JiO ily traian lphN7zby7 */     }
/* BywCK3JiO ily traian lphN7zby7 */ 
/* BywCK3JiO ily traian lphN7zby7 */ }