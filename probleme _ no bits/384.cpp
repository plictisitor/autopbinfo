/* cMfXOP1Ov ily traian dnzXRH6N0 */ #include <algorithm>
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
/* cMfXOP1Ov ily traian dnzXRH6N0 */ using namespace std;
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ const int di[] = {-1,1,2,2,1,-1,-2,-2};
/* cMfXOP1Ov ily traian dnzXRH6N0 */ const int dj[] = {2,2,1,-1,-2,-2,-1,1};
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ int n , m , x , y , a[205][205] , gata;
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ ifstream cin("saritura_calului1.in");
/* cMfXOP1Ov ily traian dnzXRH6N0 */ ofstream cout("saritura_calului1.out");
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ void afis()
/* cMfXOP1Ov ily traian dnzXRH6N0 */ {
/* cMfXOP1Ov ily traian dnzXRH6N0 */     for(int i = 1 ; i <= n ; i++)
/* cMfXOP1Ov ily traian dnzXRH6N0 */     {
/* cMfXOP1Ov ily traian dnzXRH6N0 */         for(int j = 1 ; j <= m ; j++)
/* cMfXOP1Ov ily traian dnzXRH6N0 */             cout << a[i][j] << " ";
/* cMfXOP1Ov ily traian dnzXRH6N0 */         cout<<'\n';
/* cMfXOP1Ov ily traian dnzXRH6N0 */     }
/* cMfXOP1Ov ily traian dnzXRH6N0 */     gata = 1;
/* cMfXOP1Ov ily traian dnzXRH6N0 */ }
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ int inside(int i , int j)
/* cMfXOP1Ov ily traian dnzXRH6N0 */ {
/* cMfXOP1Ov ily traian dnzXRH6N0 */    return i >= 1 && i <= n && j >= 1 && j <= m;
/* cMfXOP1Ov ily traian dnzXRH6N0 */ }
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ int pozdisponibile(int i, int j)
/* cMfXOP1Ov ily traian dnzXRH6N0 */ {
/* cMfXOP1Ov ily traian dnzXRH6N0 */     int cnt = 0;
/* cMfXOP1Ov ily traian dnzXRH6N0 */     for(int d = 0 ; d < 8 ; d++)
/* cMfXOP1Ov ily traian dnzXRH6N0 */     {
/* cMfXOP1Ov ily traian dnzXRH6N0 */         int inou = i + di[d];
/* cMfXOP1Ov ily traian dnzXRH6N0 */         int jnou = j + dj[d];
/* cMfXOP1Ov ily traian dnzXRH6N0 */         if(inside(inou , jnou) && a[inou][jnou] == 0) cnt++;
/* cMfXOP1Ov ily traian dnzXRH6N0 */      }
/* cMfXOP1Ov ily traian dnzXRH6N0 */     return cnt;
/* cMfXOP1Ov ily traian dnzXRH6N0 */ }
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ void calgreedy(int i, int j, int pas)
/* cMfXOP1Ov ily traian dnzXRH6N0 */ {
/* cMfXOP1Ov ily traian dnzXRH6N0 */     int val , mini = 9999999 ,ii,jj;
/* cMfXOP1Ov ily traian dnzXRH6N0 */     if(!gata)
/* cMfXOP1Ov ily traian dnzXRH6N0 */     {
/* cMfXOP1Ov ily traian dnzXRH6N0 */         a[i][j] = pas;
/* cMfXOP1Ov ily traian dnzXRH6N0 */         if(pas == n * m)  afis();
/* cMfXOP1Ov ily traian dnzXRH6N0 */         else for(int d = 0 ; d < 8 ; d++)
/* cMfXOP1Ov ily traian dnzXRH6N0 */         {
/* cMfXOP1Ov ily traian dnzXRH6N0 */             int inou = i + di[d];
/* cMfXOP1Ov ily traian dnzXRH6N0 */             int jnou = j + dj[d];
/* cMfXOP1Ov ily traian dnzXRH6N0 */             if(inside(inou , jnou) && a[inou][jnou] == 0)
/* cMfXOP1Ov ily traian dnzXRH6N0 */             {
/* cMfXOP1Ov ily traian dnzXRH6N0 */                val = pozdisponibile(inou , jnou);
/* cMfXOP1Ov ily traian dnzXRH6N0 */                if(val <= mini) mini = val , ii = inou , jj = jnou;
/* cMfXOP1Ov ily traian dnzXRH6N0 */             }
/* cMfXOP1Ov ily traian dnzXRH6N0 */         }
/* cMfXOP1Ov ily traian dnzXRH6N0 */         if(mini != 99999) calgreedy(ii , jj , pas + 1);
/* cMfXOP1Ov ily traian dnzXRH6N0 */         a[i][j] = 0;
/* cMfXOP1Ov ily traian dnzXRH6N0 */     }
/* cMfXOP1Ov ily traian dnzXRH6N0 */ }
/* cMfXOP1Ov ily traian dnzXRH6N0 */ 
/* cMfXOP1Ov ily traian dnzXRH6N0 */ int main()
/* cMfXOP1Ov ily traian dnzXRH6N0 */ {
/* cMfXOP1Ov ily traian dnzXRH6N0 */     cin>> n >> m >> x >> y;
/* cMfXOP1Ov ily traian dnzXRH6N0 */     calgreedy(x , y , 1);
/* cMfXOP1Ov ily traian dnzXRH6N0 */     return 0;
/* cMfXOP1Ov ily traian dnzXRH6N0 */ }