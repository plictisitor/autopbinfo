/* blunsBZ7d ily traian oWinQga97 */ #include <algorithm>
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
/* blunsBZ7d ily traian oWinQga97 */ using namespace std;
/* blunsBZ7d ily traian oWinQga97 */ 
/* blunsBZ7d ily traian oWinQga97 */ ifstream cin("teren.in");
/* blunsBZ7d ily traian oWinQga97 */ ofstream cout("teren.out");
/* blunsBZ7d ily traian oWinQga97 */ 
/* blunsBZ7d ily traian oWinQga97 */ int a[200][200] , n , m , t , r , c , x1 , x2 , y1 , y2 , cer , lmax , b[200][200];
/* blunsBZ7d ily traian oWinQga97 */ 
/* blunsBZ7d ily traian oWinQga97 */ void umplere(int x1 , int y1 , int x2 , int y2)
/* blunsBZ7d ily traian oWinQga97 */ {
/* blunsBZ7d ily traian oWinQga97 */     for(int i = x1 ; i <= x2 ; i++)
/* blunsBZ7d ily traian oWinQga97 */         for(int j = y1 ; j <= y2 ; j++)
/* blunsBZ7d ily traian oWinQga97 */             a[i][j]++;
/* blunsBZ7d ily traian oWinQga97 */ }
/* blunsBZ7d ily traian oWinQga97 */ 
/* blunsBZ7d ily traian oWinQga97 */ int main()
/* blunsBZ7d ily traian oWinQga97 */ {
/* blunsBZ7d ily traian oWinQga97 */     cin >> cer;
/* blunsBZ7d ily traian oWinQga97 */     cin >> n >> m >> t >> r >> c;
/* blunsBZ7d ily traian oWinQga97 */     for(int i = 1 ; i <= t ; i++)
/* blunsBZ7d ily traian oWinQga97 */     {
/* blunsBZ7d ily traian oWinQga97 */         cin >> x1 >> y1 >> x2 >> y2;
/* blunsBZ7d ily traian oWinQga97 */         umplere(x1 , y1 , x2 , y2);
/* blunsBZ7d ily traian oWinQga97 */     }
/* blunsBZ7d ily traian oWinQga97 */     /*for(int i = 1 ; i <= n ; i++)
/* blunsBZ7d ily traian oWinQga97 */     {
/* blunsBZ7d ily traian oWinQga97 */         for(int j = 1 ; j <= m ; j++)
/* blunsBZ7d ily traian oWinQga97 */             cout << a[i][j] << " ";
/* blunsBZ7d ily traian oWinQga97 */             cout << '\n';
/* blunsBZ7d ily traian oWinQga97 */     }*/
/* blunsBZ7d ily traian oWinQga97 */     if(cer == 1) cout << a[r][c];
/* blunsBZ7d ily traian oWinQga97 */     else if(cer == 2)
/* blunsBZ7d ily traian oWinQga97 */     {
/* blunsBZ7d ily traian oWinQga97 */         int maxi = 0;
/* blunsBZ7d ily traian oWinQga97 */         for(int i = 1 ; i <= n ; i++)
/* blunsBZ7d ily traian oWinQga97 */         {
/* blunsBZ7d ily traian oWinQga97 */             for(int j = 1 ; j <= m ; j++)
/* blunsBZ7d ily traian oWinQga97 */                 if(a[i][j] > maxi) maxi = a[i][j];
/* blunsBZ7d ily traian oWinQga97 */         }
/* blunsBZ7d ily traian oWinQga97 */         cout << maxi;
/* blunsBZ7d ily traian oWinQga97 */     }
/* blunsBZ7d ily traian oWinQga97 */     else
/* blunsBZ7d ily traian oWinQga97 */     {
/* blunsBZ7d ily traian oWinQga97 */         for(int i = 1 ; i <= n ; i++)
/* blunsBZ7d ily traian oWinQga97 */         {
/* blunsBZ7d ily traian oWinQga97 */             for(int j = 1 ; j <= m ; j++)
/* blunsBZ7d ily traian oWinQga97 */                 if(a[i][j] == 0)
/* blunsBZ7d ily traian oWinQga97 */                 {
/* blunsBZ7d ily traian oWinQga97 */                     b[i][j] = min(min(b[i][j-1] , b[i-1][j]) , b[i-1][j-1]) + 1;
/* blunsBZ7d ily traian oWinQga97 */                     lmax = max(lmax, b[i][j]);
/* blunsBZ7d ily traian oWinQga97 */                 }
/* blunsBZ7d ily traian oWinQga97 */         }
/* blunsBZ7d ily traian oWinQga97 */         cout << lmax*lmax;
/* blunsBZ7d ily traian oWinQga97 */     }
/* blunsBZ7d ily traian oWinQga97 */ 
/* blunsBZ7d ily traian oWinQga97 */ }