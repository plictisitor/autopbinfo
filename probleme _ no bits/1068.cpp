/* wg52iVB7E ily traian Zb1tuTZn4 */ #include <algorithm>
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
/* wg52iVB7E ily traian Zb1tuTZn4 */ 
/* wg52iVB7E ily traian Zb1tuTZn4 */ using namespace std;
/* wg52iVB7E ily traian Zb1tuTZn4 */ 
/* wg52iVB7E ily traian Zb1tuTZn4 */ ifstream cin("suma5.in");
/* wg52iVB7E ily traian Zb1tuTZn4 */ ofstream cout("suma5.out");
/* wg52iVB7E ily traian Zb1tuTZn4 */ 
/* wg52iVB7E ily traian Zb1tuTZn4 */ int n , m[62][62][62] , sum , aux[62][62][62] , cnt , mini , x , y;
/* wg52iVB7E ily traian Zb1tuTZn4 */ 
/* wg52iVB7E ily traian Zb1tuTZn4 */ int main()
/* wg52iVB7E ily traian Zb1tuTZn4 */ {
/* wg52iVB7E ily traian Zb1tuTZn4 */     cin >> n;
/* wg52iVB7E ily traian Zb1tuTZn4 */     while(sum < n) cnt++ , sum += cnt * cnt;
/* wg52iVB7E ily traian Zb1tuTZn4 */     cout <<  cnt << " ";
/* wg52iVB7E ily traian Zb1tuTZn4 */     int i = 1 , j = 1 , k = 1 , p;
/* wg52iVB7E ily traian Zb1tuTZn4 */     for(int x = 1 ; x <= n ; x++)
/* wg52iVB7E ily traian Zb1tuTZn4 */     {
/* wg52iVB7E ily traian Zb1tuTZn4 */         cin >> p;
/* wg52iVB7E ily traian Zb1tuTZn4 */         m[i][j][k] = p;
/* wg52iVB7E ily traian Zb1tuTZn4 */         aux[i][j][k] = x;
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(i == j && i == k) i++ , j = 1 , k = 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */         else if(k == i) j++ , k = 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */         else k++;
/* wg52iVB7E ily traian Zb1tuTZn4 */     }
/* wg52iVB7E ily traian Zb1tuTZn4 */     for(int i = cnt - 1 ; i >= 1 ; i--)
/* wg52iVB7E ily traian Zb1tuTZn4 */         for(int j = 1 ; j <= i ; j++)
/* wg52iVB7E ily traian Zb1tuTZn4 */             for(int k = 1 ; k <= i ; k++)
/* wg52iVB7E ily traian Zb1tuTZn4 */                 m[i][j][k] = m[i][j][k] + min(m[i + 1][j][k] , min(m[i + 1][j + 1][k] , min(m[i + 1][j][k + 1] , m[i + 1][j + 1][k + 1])));
/* wg52iVB7E ily traian Zb1tuTZn4 */ 
/* wg52iVB7E ily traian Zb1tuTZn4 */     cout << m[1][1][1] << endl;
/* wg52iVB7E ily traian Zb1tuTZn4 */     j = 1 , k = 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */     for(int i = 1 ; i <= cnt ; i++)
/* wg52iVB7E ily traian Zb1tuTZn4 */     {
/* wg52iVB7E ily traian Zb1tuTZn4 */         cout << aux[i][j][k] << " ";
/* wg52iVB7E ily traian Zb1tuTZn4 */         int ok = 0;
/* wg52iVB7E ily traian Zb1tuTZn4 */         x = j , y = k , mini = m[i + 1][j][k];
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(m[i + 1][j][k + 1] < mini) mini = m[i + 1][j][k + 1] , ok = 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(m[i + 1][j + 1][k] < mini) mini = m[i + 1][j + 1][k] , ok = 2;
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(m[i + 1][j + 1][k + 1] < mini) mini = m[i + 1][j + 1][k + 1] , ok = 3;
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(ok == 1) y = k + 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(ok == 2) x = j + 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */         if(ok == 3) y = k + 1 , x = j + 1;
/* wg52iVB7E ily traian Zb1tuTZn4 */         j = x , k = y;
/* wg52iVB7E ily traian Zb1tuTZn4 */     }
/* wg52iVB7E ily traian Zb1tuTZn4 */ 
/* wg52iVB7E ily traian Zb1tuTZn4 */ }