/* BntdufAz7 ily traian JVkNGNK96 */ #include <algorithm>
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
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ using namespace std;
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ ifstream cin("pestelee.in");
/* BntdufAz7 ily traian JVkNGNK96 */ ofstream cout("pestelee.out");
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ #define mod 10007
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ const int di[] = {-1 , 1 , 0 , 0};
/* BntdufAz7 ily traian JVkNGNK96 */ const int dj[] = {0 , 0 , -1 , 1};
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ struct poz
/* BntdufAz7 ily traian JVkNGNK96 */ {
/* BntdufAz7 ily traian JVkNGNK96 */     int i , j;
/* BntdufAz7 ily traian JVkNGNK96 */ };
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ int cer , n , m , a[501][501] , x1 , y1 , x2 , y2 , b[501][501] , d[501][501];
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ bool inside(int i , int j)
/* BntdufAz7 ily traian JVkNGNK96 */ {
/* BntdufAz7 ily traian JVkNGNK96 */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* BntdufAz7 ily traian JVkNGNK96 */ }
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ void lee(int i , int j)
/* BntdufAz7 ily traian JVkNGNK96 */ {
/* BntdufAz7 ily traian JVkNGNK96 */     queue <poz> Q;
/* BntdufAz7 ily traian JVkNGNK96 */     Q.push({i , j});
/* BntdufAz7 ily traian JVkNGNK96 */     b[i][j] = 1;
/* BntdufAz7 ily traian JVkNGNK96 */     d[i][j] = 1;
/* BntdufAz7 ily traian JVkNGNK96 */     while(!Q.empty())
/* BntdufAz7 ily traian JVkNGNK96 */     {
/* BntdufAz7 ily traian JVkNGNK96 */         poz x;
/* BntdufAz7 ily traian JVkNGNK96 */         x = Q.front();
/* BntdufAz7 ily traian JVkNGNK96 */         for(int i = 0 ; i < 4 ; i++)
/* BntdufAz7 ily traian JVkNGNK96 */         {
/* BntdufAz7 ily traian JVkNGNK96 */             int inou = x.i + di[i];
/* BntdufAz7 ily traian JVkNGNK96 */             int jnou = x.j + dj[i];
/* BntdufAz7 ily traian JVkNGNK96 */             if(inside(inou , jnou) && b[inou][jnou] == 0 && a[inou][jnou] == 0)
/* BntdufAz7 ily traian JVkNGNK96 */             {
/* BntdufAz7 ily traian JVkNGNK96 */                 Q.push({inou , jnou});
/* BntdufAz7 ily traian JVkNGNK96 */                 b[inou][jnou] = b[x.i][x.j] + 1;
/* BntdufAz7 ily traian JVkNGNK96 */                 d[inou][jnou] = (d[inou - 1][jnou] % mod + d[inou][jnou - 1] % mod + d[inou + 1][jnou] % mod + d[inou][jnou + 1] % mod) % mod;
/* BntdufAz7 ily traian JVkNGNK96 */             }
/* BntdufAz7 ily traian JVkNGNK96 */         }
/* BntdufAz7 ily traian JVkNGNK96 */         Q.pop();
/* BntdufAz7 ily traian JVkNGNK96 */     }
/* BntdufAz7 ily traian JVkNGNK96 */ }
/* BntdufAz7 ily traian JVkNGNK96 */ 
/* BntdufAz7 ily traian JVkNGNK96 */ int main()
/* BntdufAz7 ily traian JVkNGNK96 */ {
/* BntdufAz7 ily traian JVkNGNK96 */     cin >> n >> m;
/* BntdufAz7 ily traian JVkNGNK96 */     for(int i = 1 ; i <= n ; i++)
/* BntdufAz7 ily traian JVkNGNK96 */         for(int j = 1 ; j <= m ; j++)
/* BntdufAz7 ily traian JVkNGNK96 */             cin >> a[i][j];
/* BntdufAz7 ily traian JVkNGNK96 */     
/* BntdufAz7 ily traian JVkNGNK96 */     cin >> x1 >> y1 >> x2 >> y2;
/* BntdufAz7 ily traian JVkNGNK96 */     cin >> cer;
/* BntdufAz7 ily traian JVkNGNK96 */     
/* BntdufAz7 ily traian JVkNGNK96 */     lee(x1 , y1);
/* BntdufAz7 ily traian JVkNGNK96 */     if(cer == 1) cout << b[x2][y2];
/* BntdufAz7 ily traian JVkNGNK96 */     else cout << d[x2][y2];
/* BntdufAz7 ily traian JVkNGNK96 */ }