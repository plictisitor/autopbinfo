/* ZrQnshmsQ ily traian x32Wds4j8 */ #include <algorithm>
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
/* ZrQnshmsQ ily traian x32Wds4j8 */ using namespace std;
/* ZrQnshmsQ ily traian x32Wds4j8 */ ifstream cin("gigelajungeacasa.in");
/* ZrQnshmsQ ily traian x32Wds4j8 */ ofstream cout("gigelajungeacasa.out");
/* ZrQnshmsQ ily traian x32Wds4j8 */ const int di[]={-1 , -1 , -1 , 0 , 1 , 1 , 1 , 0 };
/* ZrQnshmsQ ily traian x32Wds4j8 */ const int dj[]={-1 , 0 , 1 , 1, 1 , 0 , -1 , -1};
/* ZrQnshmsQ ily traian x32Wds4j8 */ int n , m , a[1002][1002] , x[100001] , y[100001] , q , xy , yy , xb , yb , r , p;
/* ZrQnshmsQ ily traian x32Wds4j8 */ int ip , jp , is , js;///coordonatele
/* ZrQnshmsQ ily traian x32Wds4j8 */ 
/* ZrQnshmsQ ily traian x32Wds4j8 */ bool inside(int i , int j)
/* ZrQnshmsQ ily traian x32Wds4j8 */ {
/* ZrQnshmsQ ily traian x32Wds4j8 */     return i>=1 && i<=n && j>=1 && j<=m;
/* ZrQnshmsQ ily traian x32Wds4j8 */ }
/* ZrQnshmsQ ily traian x32Wds4j8 */ int main()
/* ZrQnshmsQ ily traian x32Wds4j8 */ {
/* ZrQnshmsQ ily traian x32Wds4j8 */     ///citire
/* ZrQnshmsQ ily traian x32Wds4j8 */     cin >> n >> m >> q;
/* ZrQnshmsQ ily traian x32Wds4j8 */     cin >> is >> js >> ip >> jp;
/* ZrQnshmsQ ily traian x32Wds4j8 */     cin >> xy >> yy >> xb >> yb;
/* ZrQnshmsQ ily traian x32Wds4j8 */     for(int i = 1 ; i <= q ; ++i) cin >> r >> p , a[r][p]=1;
/* ZrQnshmsQ ily traian x32Wds4j8 */     ///LEE
/* ZrQnshmsQ ily traian x32Wds4j8 */     int st = 1 , dr = 1;///capetele cozii
/* ZrQnshmsQ ily traian x32Wds4j8 */     a[ip][jp] = 1;///pornirea
/* ZrQnshmsQ ily traian x32Wds4j8 */     x[1]=ip;
/* ZrQnshmsQ ily traian x32Wds4j8 */     y[1]=jp;
/* ZrQnshmsQ ily traian x32Wds4j8 */     while(st <= dr && a[is][js]==0)
/* ZrQnshmsQ ily traian x32Wds4j8 */     {
/* ZrQnshmsQ ily traian x32Wds4j8 */         int i= x[st] , j = y[st];///poz curenta
/* ZrQnshmsQ ily traian x32Wds4j8 */         for(int k = 0 ; k < 8 ; k++)
/* ZrQnshmsQ ily traian x32Wds4j8 */         {
/* ZrQnshmsQ ily traian x32Wds4j8 */             ///caculam pozitiie urmatoare
/* ZrQnshmsQ ily traian x32Wds4j8 */             int ii = i+di[k];
/* ZrQnshmsQ ily traian x32Wds4j8 */             int jj = j+dj[k];
/* ZrQnshmsQ ily traian x32Wds4j8 */             if(inside(ii , jj) && a[ii][jj]==0)
/* ZrQnshmsQ ily traian x32Wds4j8 */             {
/* ZrQnshmsQ ily traian x32Wds4j8 */                 dr++;///crestem coada
/* ZrQnshmsQ ily traian x32Wds4j8 */                 x[dr]=ii;
/* ZrQnshmsQ ily traian x32Wds4j8 */                 y[dr]=jj;
/* ZrQnshmsQ ily traian x32Wds4j8 */                 a[ii][jj]=a[i][j]+1;///cu 1 mai departe
/* ZrQnshmsQ ily traian x32Wds4j8 */             }
/* ZrQnshmsQ ily traian x32Wds4j8 */         }
/* ZrQnshmsQ ily traian x32Wds4j8 */         st++;///avans in coada
/* ZrQnshmsQ ily traian x32Wds4j8 */     }
/* ZrQnshmsQ ily traian x32Wds4j8 */     cout << a[is][js]-1;
/* ZrQnshmsQ ily traian x32Wds4j8 */     return 0;
/* ZrQnshmsQ ily traian x32Wds4j8 */ }