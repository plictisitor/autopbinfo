/* Rtw7tS4qU ily traian I7iFV0Gv3 */ #include <algorithm>
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
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ using namespace std;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ ifstream cin("meteoriti.in");
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ ofstream cout("meteoriti.out");
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ 
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ int n , m , nr , x1 , x2 , y1 , y2 , add , maxi , cnt;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ int a[2002][2002], numar;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ 
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ struct poz{int i , j;};
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ 
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ bool inside(int i , int j)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     return (i>=1 && i<=n && j>=1 && j<=m);
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ }
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ int x, y;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ inline void Fill()
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     if (!inside(x, y))return;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     if (a[x][y] != maxi)return;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     a[x][y] = -1;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     numar ++;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     x ++;Fill();x --;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     y ++;Fill();y--;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     x --;Fill();x ++;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     y --;Fill();y ++;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ }
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ int main()
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     cin >> n >> m >> nr;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     for (int i = 1; i <= nr; i ++)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         cin >> x1 >> y1 >> x2 >> y2 >> add;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         a[x1][y1] += add;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         a[x1][y2 + 1] -= add;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         a[x2 + 1][y1] -= add;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         a[x2 + 1][y2 + 1] += add;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     }
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     for(int i = 1 ; i <= n ; ++i)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         for(int j = 1 ; j <= m ; ++j)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */             a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ 
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     int mx = 0;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     for(int i = 1 ; i <= n ; ++i)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         for(int j = 1 ; j <= m ; ++j)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */             if(a[i][j] > maxi) maxi = a[i][j];
/* Rtw7tS4qU ily traian I7iFV0Gv3 */             if(a[i][j] == 0) cnt++;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         }
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     }
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     for(int i = 1 ; i <= n ; ++i)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */         for(int j = 1 ; j <= m ; ++j)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */             if(a[i][j] == maxi)
/* Rtw7tS4qU ily traian I7iFV0Gv3 */             {
/* Rtw7tS4qU ily traian I7iFV0Gv3 */                 numar = 0;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */                 x = i; y = j;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */                 Fill();
/* Rtw7tS4qU ily traian I7iFV0Gv3 */                 mx = max(numar, mx);
/* Rtw7tS4qU ily traian I7iFV0Gv3 */             }
/* Rtw7tS4qU ily traian I7iFV0Gv3 */          cout << mx << " " << cnt;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */     return 0;
/* Rtw7tS4qU ily traian I7iFV0Gv3 */ }