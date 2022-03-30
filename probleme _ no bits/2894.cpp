/* z6yFrdgwr ily traian D50cPlM64 */ #include <algorithm>
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
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ using namespace std;
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ ifstream cin("barlog.in");
/* z6yFrdgwr ily traian D50cPlM64 */ ofstream cout("barlog.out");
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ #define MaxN 101
/* z6yFrdgwr ily traian D50cPlM64 */ #define Smax 21
/* z6yFrdgwr ily traian D50cPlM64 */ #define Inf 0x3f3f3f
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ int cer, n, m, Xf, Yf;
/* z6yFrdgwr ily traian D50cPlM64 */ bool ok[MaxN][MaxN];
/* z6yFrdgwr ily traian D50cPlM64 */ char mat[MaxN][MaxN][Smax];
/* z6yFrdgwr ily traian D50cPlM64 */ int dist[MaxN][MaxN] = {Inf} , nr;
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ struct poz
/* z6yFrdgwr ily traian D50cPlM64 */ {
/* z6yFrdgwr ily traian D50cPlM64 */     int i , j;
/* z6yFrdgwr ily traian D50cPlM64 */ };
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ const int di[] = {0, 0, 1, -1};
/* z6yFrdgwr ily traian D50cPlM64 */ const int dj[] = {1, -1, 0, 0};
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ queue <poz>Q;
/* z6yFrdgwr ily traian D50cPlM64 */ int inside(int i , int j)
/* z6yFrdgwr ily traian D50cPlM64 */ {
/* z6yFrdgwr ily traian D50cPlM64 */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* z6yFrdgwr ily traian D50cPlM64 */ }
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ void lee(int i , int j)
/* z6yFrdgwr ily traian D50cPlM64 */ {
/* z6yFrdgwr ily traian D50cPlM64 */     poz x;
/* z6yFrdgwr ily traian D50cPlM64 */     x.i = i;
/* z6yFrdgwr ily traian D50cPlM64 */     x.j = j;
/* z6yFrdgwr ily traian D50cPlM64 */     Q.push(x);
/* z6yFrdgwr ily traian D50cPlM64 */     nr++;
/* z6yFrdgwr ily traian D50cPlM64 */     dist[i][j] = 1;
/* z6yFrdgwr ily traian D50cPlM64 */     while(!Q.empty())
/* z6yFrdgwr ily traian D50cPlM64 */     {
/* z6yFrdgwr ily traian D50cPlM64 */         x = Q.front();
/* z6yFrdgwr ily traian D50cPlM64 */         for(int i = 0 ; i < 4 ; i++)
/* z6yFrdgwr ily traian D50cPlM64 */         {
/* z6yFrdgwr ily traian D50cPlM64 */             int inou = x.i + di[i];
/* z6yFrdgwr ily traian D50cPlM64 */             int jnou = x.j + dj[i];
/* z6yFrdgwr ily traian D50cPlM64 */             if(inside(inou , jnou) && ok[x.i][x.j] == 1 && dist[inou][jnou] == 0)
/* z6yFrdgwr ily traian D50cPlM64 */             {
/* z6yFrdgwr ily traian D50cPlM64 */                 poz y;
/* z6yFrdgwr ily traian D50cPlM64 */                 y.i = inou;
/* z6yFrdgwr ily traian D50cPlM64 */                 y.j = jnou;
/* z6yFrdgwr ily traian D50cPlM64 */                 Q.push(y);
/* z6yFrdgwr ily traian D50cPlM64 */                 dist[inou][jnou] = dist[x.i][x.j] + 1;
/* z6yFrdgwr ily traian D50cPlM64 */                 nr++;
/* z6yFrdgwr ily traian D50cPlM64 */             }
/* z6yFrdgwr ily traian D50cPlM64 */         }
/* z6yFrdgwr ily traian D50cPlM64 */         Q.pop();
/* z6yFrdgwr ily traian D50cPlM64 */     }
/* z6yFrdgwr ily traian D50cPlM64 */ }
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */ bool searchs(char a[], char b[])
/* z6yFrdgwr ily traian D50cPlM64 */ {
/* z6yFrdgwr ily traian D50cPlM64 */     int i = 0, n = strlen(a);
/* z6yFrdgwr ily traian D50cPlM64 */     int indb = 0, lb = strlen(b);
/* z6yFrdgwr ily traian D50cPlM64 */     while (i < n)
/* z6yFrdgwr ily traian D50cPlM64 */     {
/* z6yFrdgwr ily traian D50cPlM64 */         if (a[i] == b[indb])i ++, indb ++;
/* z6yFrdgwr ily traian D50cPlM64 */         else i ++;
/* z6yFrdgwr ily traian D50cPlM64 */         if (indb == lb)return 1;
/* z6yFrdgwr ily traian D50cPlM64 */     }
/* z6yFrdgwr ily traian D50cPlM64 */     return 0;
/* z6yFrdgwr ily traian D50cPlM64 */ }
/* z6yFrdgwr ily traian D50cPlM64 */ int main()
/* z6yFrdgwr ily traian D50cPlM64 */ {
/* z6yFrdgwr ily traian D50cPlM64 */     char cheie[Smax];
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */     cin >> cer >> n >> m;
/* z6yFrdgwr ily traian D50cPlM64 */     for (int i = 1; i <= n; ++ i)
/* z6yFrdgwr ily traian D50cPlM64 */         for (int j = 1; j <= m; ++ j)
/* z6yFrdgwr ily traian D50cPlM64 */             cin >> mat[i][j];
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */     cin >> Xf >> Yf;
/* z6yFrdgwr ily traian D50cPlM64 */     cin >> cheie;
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */     int nr1 = 0;
/* z6yFrdgwr ily traian D50cPlM64 */     for (int i = 1; i <= n; ++ i)
/* z6yFrdgwr ily traian D50cPlM64 */         for (int j = 1; j <= m; ++ j)
/* z6yFrdgwr ily traian D50cPlM64 */         {
/* z6yFrdgwr ily traian D50cPlM64 */             if (searchs(cheie, mat[i][j]))
/* z6yFrdgwr ily traian D50cPlM64 */             {
/* z6yFrdgwr ily traian D50cPlM64 */                 ok[i][j] = 1;
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */             }
/* z6yFrdgwr ily traian D50cPlM64 */         }
/* z6yFrdgwr ily traian D50cPlM64 */         lee(Xf, Yf);
/* z6yFrdgwr ily traian D50cPlM64 */         int dmin = Inf;
/* z6yFrdgwr ily traian D50cPlM64 */         for(int i = 1; i <= n; ++ i)
/* z6yFrdgwr ily traian D50cPlM64 */         {
/* z6yFrdgwr ily traian D50cPlM64 */             if(dist[i][1] != 0 && ok[i][1] == 1)
/* z6yFrdgwr ily traian D50cPlM64 */                 dmin = min(dmin, dist[i][1]);
/* z6yFrdgwr ily traian D50cPlM64 */             if(dist[i][m] != 0 && ok[i][m] == 1)
/* z6yFrdgwr ily traian D50cPlM64 */                 dmin = min(dmin, dist[i][m]);
/* z6yFrdgwr ily traian D50cPlM64 */         }
/* z6yFrdgwr ily traian D50cPlM64 */ 
/* z6yFrdgwr ily traian D50cPlM64 */         for (int i = 1; i <= m; ++ i)
/* z6yFrdgwr ily traian D50cPlM64 */         {
/* z6yFrdgwr ily traian D50cPlM64 */             if(dist[1][i] != 0 && ok[1][i] == 1)
/* z6yFrdgwr ily traian D50cPlM64 */                 dmin = min(dmin, dist[1][i]);
/* z6yFrdgwr ily traian D50cPlM64 */             if(dist[n][i] != 0 && ok[n][i] == 1)
/* z6yFrdgwr ily traian D50cPlM64 */                 dmin = min(dmin, dist[n][i]);
/* z6yFrdgwr ily traian D50cPlM64 */         }
/* z6yFrdgwr ily traian D50cPlM64 */     if(cer == 2)cout << dmin;
/* z6yFrdgwr ily traian D50cPlM64 */     else cout << nr;
/* z6yFrdgwr ily traian D50cPlM64 */     return 0;
/* z6yFrdgwr ily traian D50cPlM64 */ }