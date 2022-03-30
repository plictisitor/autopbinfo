/* bWrPm1EPa ily traian 2Vgx8tqd9 */ #include <algorithm>
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
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ using namespace std;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ ifstream cin("roboti.in");
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ ofstream cout("roboti.out");
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ const int di[]={-1 , 0 , 1 , 0};
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ const int dj[]={0 , 1 , 0 , -1};
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ int n , m , a[1002][1002] , x[1000001] , y[1000001];
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ int ip , jp , is , js;///coordonatele
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ 
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ bool inside(int i , int j)
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ {
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     return i>=1 && i<=n && j>=1 && j<=m;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ }
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ int main()
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ {
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     ///citire
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     cin >> n >> m;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     for(int i = 1 ; i <=n ; ++i)
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     {
/* bWrPm1EPa ily traian 2Vgx8tqd9 */         for(int j = 1 ; j <=m ; ++j)
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             cin >> a[i][j];
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     }
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     cin >> ip >> jp >> is >> js;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     ///LEE
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     int st = 1 , dr = 1;///capetele cozii
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     a[ip][jp] = 1;///pornirea
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     x[1]=ip;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     y[1]=jp;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     while(st <= dr && a[is][js]==0)
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     {
/* bWrPm1EPa ily traian 2Vgx8tqd9 */         int i= x[st] , j = y[st];///poz curenta
/* bWrPm1EPa ily traian 2Vgx8tqd9 */         for(int k = 0 ; k < 4 ; k++)
/* bWrPm1EPa ily traian 2Vgx8tqd9 */         {
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             ///caculam pozitiie urmatoare
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             int ii = i+di[k];
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             int jj = j+dj[k];
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             if(inside(ii , jj) && a[ii][jj]==0)
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             {
/* bWrPm1EPa ily traian 2Vgx8tqd9 */                 dr++;///crestem coada
/* bWrPm1EPa ily traian 2Vgx8tqd9 */                 x[dr]=ii;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */                 y[dr]=jj;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */                 a[ii][jj]=a[i][j]+1;///cu 1 mai departe
/* bWrPm1EPa ily traian 2Vgx8tqd9 */             }
/* bWrPm1EPa ily traian 2Vgx8tqd9 */         }
/* bWrPm1EPa ily traian 2Vgx8tqd9 */         st++;///avans in coada
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     }
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     cout << a[is][js]-1;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */     return 0;
/* bWrPm1EPa ily traian 2Vgx8tqd9 */ }