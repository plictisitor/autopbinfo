/* iIBkDt5DJ ily traian KJuMg9Zy0 */ #include <algorithm>
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
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ 
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ using namespace std;
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ 
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ int n , m , x[30] , cnt , p[30] , c , a[30];
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ 
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ int afisare()
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ {
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     for(int i = 1 ; i <= c ; i++)
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         cout << a[x[i]];
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     cout << '\n';
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ }
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ 
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ void back(int k)
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ {
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     for(int i = cnt; i >= x[k - 1] + 1 ; i--)
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     {
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         x[k] = i;
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         if(k == 1 && a[i] == 0);
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         else
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         {
/* iIBkDt5DJ ily traian KJuMg9Zy0 */             if(k == c) afisare();
/* iIBkDt5DJ ily traian KJuMg9Zy0 */             else back(k + 1);
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         }
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     }
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ }
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ 
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ int main()
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ {
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     cin >> n >> c;
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     while(n != 0)
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     {
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         a[++cnt] = n % 10;
/* iIBkDt5DJ ily traian KJuMg9Zy0 */         n /= 10;
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     }
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     sort(a + 1 , a + cnt + 1);
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ 
/* iIBkDt5DJ ily traian KJuMg9Zy0 */     back(1);
/* iIBkDt5DJ ily traian KJuMg9Zy0 */ }