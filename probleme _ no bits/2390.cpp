/* XQ2bi5PrY ily traian cUGpHthh9 */ #include <algorithm>
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
/* XQ2bi5PrY ily traian cUGpHthh9 */ using namespace std;
/* XQ2bi5PrY ily traian cUGpHthh9 */ ifstream cin("rj.in");
/* XQ2bi5PrY ily traian cUGpHthh9 */ ofstream cout("rj.out");
/* XQ2bi5PrY ily traian cUGpHthh9 */ int n, m, xr, yr, xj, yj;
/* XQ2bi5PrY ily traian cUGpHthh9 */ int dl[8]={0, 1, 0, -1, -1, 1, -1, 1};
/* XQ2bi5PrY ily traian cUGpHthh9 */ int dc[8]={1, 0, -1, 0, -1, 1,  1,-1};
/* XQ2bi5PrY ily traian cUGpHthh9 */ char l[102][102];
/* XQ2bi5PrY ily traian cUGpHthh9 */ int r[102][102];
/* XQ2bi5PrY ily traian cUGpHthh9 */ void citire(void);
/* XQ2bi5PrY ily traian cUGpHthh9 */ void afisare(int [102][102]);
/* XQ2bi5PrY ily traian cUGpHthh9 */ void parcurge (int, int, int[102][102]);
/* XQ2bi5PrY ily traian cUGpHthh9 */ int main()
/* XQ2bi5PrY ily traian cUGpHthh9 */ {
/* XQ2bi5PrY ily traian cUGpHthh9 */     int j[102][102];
/* XQ2bi5PrY ily traian cUGpHthh9 */     citire();
/* XQ2bi5PrY ily traian cUGpHthh9 */     parcurge(xr, yr, r);
/* XQ2bi5PrY ily traian cUGpHthh9 */     parcurge(xj, yj, j);
/* XQ2bi5PrY ily traian cUGpHthh9 */     afisare(j);
/* XQ2bi5PrY ily traian cUGpHthh9 */     return 0;
/* XQ2bi5PrY ily traian cUGpHthh9 */ }
/* XQ2bi5PrY ily traian cUGpHthh9 */ void citire(void)
/* XQ2bi5PrY ily traian cUGpHthh9 */ {
/* XQ2bi5PrY ily traian cUGpHthh9 */     int i, k;
/* XQ2bi5PrY ily traian cUGpHthh9 */     char c;
/* XQ2bi5PrY ily traian cUGpHthh9 */     cin>>n>>m;
/* XQ2bi5PrY ily traian cUGpHthh9 */     for(i = 0; i <= n + 1 ; i++) l[i][0]=l[i][m+1]='X';
/* XQ2bi5PrY ily traian cUGpHthh9 */     for(i = 0; i <= m + 1 ; i++) l[0][i]=l[n+1][i]='X';
/* XQ2bi5PrY ily traian cUGpHthh9 */     cin.get(c);
/* XQ2bi5PrY ily traian cUGpHthh9 */     for(i = 1 ; i <= n ; i++)
/* XQ2bi5PrY ily traian cUGpHthh9 */         {
/* XQ2bi5PrY ily traian cUGpHthh9 */             for(k = 1 ; k <= m ; k++)
/* XQ2bi5PrY ily traian cUGpHthh9 */             {
/* XQ2bi5PrY ily traian cUGpHthh9 */                 cin.get(c);
/* XQ2bi5PrY ily traian cUGpHthh9 */                 l[i][k]=c;
/* XQ2bi5PrY ily traian cUGpHthh9 */                 if (l[i][k]=='R') {xr=i; yr=k; l[i][k]=' ';}
/* XQ2bi5PrY ily traian cUGpHthh9 */                 if (l[i][k]=='J') {xj=i; yj=k; l[i][k]=' ';}
/* XQ2bi5PrY ily traian cUGpHthh9 */             }
/* XQ2bi5PrY ily traian cUGpHthh9 */             cin.get(c);
/* XQ2bi5PrY ily traian cUGpHthh9 */         }
/* XQ2bi5PrY ily traian cUGpHthh9 */     cin.close();
/* XQ2bi5PrY ily traian cUGpHthh9 */ }
/* XQ2bi5PrY ily traian cUGpHthh9 */ 
/* XQ2bi5PrY ily traian cUGpHthh9 */ void parcurge (int x0, int y0, int d[102][102])
/* XQ2bi5PrY ily traian cUGpHthh9 */ {
/* XQ2bi5PrY ily traian cUGpHthh9 */     struct Punct {int l, c;} C[10005], p;
/* XQ2bi5PrY ily traian cUGpHthh9 */     int inc = 0 , sf = 0 , i , k;
/* XQ2bi5PrY ily traian cUGpHthh9 */     for(i = 0 ; i <= n + 1 ; i++)
/* XQ2bi5PrY ily traian cUGpHthh9 */         for(k = 0 ; k <= m + 1 ; k++) d[i][k]=-1;
/* XQ2bi5PrY ily traian cUGpHthh9 */     C[0].l=x0; C[0].c=y0; d[x0][y0]=1;
/* XQ2bi5PrY ily traian cUGpHthh9 */     while(inc <= sf)
/* XQ2bi5PrY ily traian cUGpHthh9 */         {
/* XQ2bi5PrY ily traian cUGpHthh9 */              p=C[inc++];
/* XQ2bi5PrY ily traian cUGpHthh9 */              for (i=0; i<8; i++)
/* XQ2bi5PrY ily traian cUGpHthh9 */                 if(l[p.l+dl[i]][p.c+dc[i]]==' ' && d[p.l+dl[i]][p.c+dc[i]]==-1)
/* XQ2bi5PrY ily traian cUGpHthh9 */                     {
/* XQ2bi5PrY ily traian cUGpHthh9 */                         d[p.l+dl[i]][p.c+dc[i]]=1+d[p.l][p.c];
/* XQ2bi5PrY ily traian cUGpHthh9 */                         C[++sf].l=p.l+dl[i];
/* XQ2bi5PrY ily traian cUGpHthh9 */                         C[sf].c=p.c+dc[i];
/* XQ2bi5PrY ily traian cUGpHthh9 */                     }
/* XQ2bi5PrY ily traian cUGpHthh9 */         }
/* XQ2bi5PrY ily traian cUGpHthh9 */ }
/* XQ2bi5PrY ily traian cUGpHthh9 */ void afisare(int j[102][102])
/* XQ2bi5PrY ily traian cUGpHthh9 */ {
/* XQ2bi5PrY ily traian cUGpHthh9 */     int tmin=102*102+5, xmin=-1, ymin=-1, i, k;
/* XQ2bi5PrY ily traian cUGpHthh9 */     for(i = 1 ; i <= n ; i++)
/* XQ2bi5PrY ily traian cUGpHthh9 */         for(k = 1; k <= m ; k++)
/* XQ2bi5PrY ily traian cUGpHthh9 */             if(r[i][k]==j[i][k])
/* XQ2bi5PrY ily traian cUGpHthh9 */                 if(r[i][k]<tmin && r[i][k]!=-1)
/* XQ2bi5PrY ily traian cUGpHthh9 */                     {tmin=r[i][k]; xmin=i; ymin=k;}
/* XQ2bi5PrY ily traian cUGpHthh9 */     cout<<tmin<<' '<<xmin<<' '<<ymin<<endl;
/* XQ2bi5PrY ily traian cUGpHthh9 */     cout.close();
/* XQ2bi5PrY ily traian cUGpHthh9 */ }