/* UWnTuzUv1 ily traian ULWzbXCR4 */ #include <algorithm>
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
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ using namespace std;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ ifstream cin("palat.in");
/* UWnTuzUv1 ily traian ULWzbXCR4 */ ofstream cout("palat.out");
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ #define Inf 100000001
/* UWnTuzUv1 ily traian ULWzbXCR4 */ #define Max 1006
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ struct poz
/* UWnTuzUv1 ily traian ULWzbXCR4 */ {
/* UWnTuzUv1 ily traian ULWzbXCR4 */     int i , j;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ };
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ const int di[] = {-1 , 1 , 0 ,  0};
/* UWnTuzUv1 ily traian ULWzbXCR4 */ const int dj[] = {0 ,  0 ,  -1 , 1};
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ int n , m , d[Max][Max];
/* UWnTuzUv1 ily traian ULWzbXCR4 */ bool a[Max][Max];
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ queue < pair<int, poz> >Q;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ vector< pair<int, int> > fat;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ poz ileana;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ int inside(int i , int j)
/* UWnTuzUv1 ily traian ULWzbXCR4 */ {
/* UWnTuzUv1 ily traian ULWzbXCR4 */     return i >= 1 && i <= n && j >= 1 && j <=m;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ }
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */ void lee(int i , int j)
/* UWnTuzUv1 ily traian ULWzbXCR4 */ {
/* UWnTuzUv1 ily traian ULWzbXCR4 */     poz x;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     x.i = i;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     x.j = j;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     a[i][j] = 1;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     Q.push(make_pair(0, x));
/* UWnTuzUv1 ily traian ULWzbXCR4 */     while(!Q.empty())
/* UWnTuzUv1 ily traian ULWzbXCR4 */     {
/* UWnTuzUv1 ily traian ULWzbXCR4 */         x = Q.front().second;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */         if (Q.front().first < d[x.i][x.j])
/* UWnTuzUv1 ily traian ULWzbXCR4 */             continue;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */         for(int i = 0 ; i < 4 ; i++)
/* UWnTuzUv1 ily traian ULWzbXCR4 */         {
/* UWnTuzUv1 ily traian ULWzbXCR4 */             int inou = x.i + di[i];
/* UWnTuzUv1 ily traian ULWzbXCR4 */             int jnou = x.j + dj[i];
/* UWnTuzUv1 ily traian ULWzbXCR4 */             if(inside(inou , jnou) && (d[inou][jnou] > d[x.i][x.j] + 1 || d[inou][jnou] == 0) && a[inou][jnou] != 1)
/* UWnTuzUv1 ily traian ULWzbXCR4 */             {
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 poz y;
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 y.i = inou;
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 y.j = jnou;
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 d[inou][jnou] = d[x.i][x.j] + 1;
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 Q.push(make_pair(d[inou][jnou], y));
/* UWnTuzUv1 ily traian ULWzbXCR4 */             }
/* UWnTuzUv1 ily traian ULWzbXCR4 */         }
/* UWnTuzUv1 ily traian ULWzbXCR4 */         Q.pop();
/* UWnTuzUv1 ily traian ULWzbXCR4 */     }
/* UWnTuzUv1 ily traian ULWzbXCR4 */ }
/* UWnTuzUv1 ily traian ULWzbXCR4 */ int main()
/* UWnTuzUv1 ily traian ULWzbXCR4 */ {
/* UWnTuzUv1 ily traian ULWzbXCR4 */     char c;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     cin >> n >> m;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     for(int i = 1 ; i <= n ; i++)
/* UWnTuzUv1 ily traian ULWzbXCR4 */         for(int j = 1 ; j <= m ; j++)
/* UWnTuzUv1 ily traian ULWzbXCR4 */         {
/* UWnTuzUv1 ily traian ULWzbXCR4 */             cin >> c;
/* UWnTuzUv1 ily traian ULWzbXCR4 */             if (c == '_')a[i][j] = 0;
/* UWnTuzUv1 ily traian ULWzbXCR4 */             else if (c == 'Z')a[i][j] = 1;
/* UWnTuzUv1 ily traian ULWzbXCR4 */             else if (c == 'F')
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 fat.push_back(make_pair(i, j));
/* UWnTuzUv1 ily traian ULWzbXCR4 */             else
/* UWnTuzUv1 ily traian ULWzbXCR4 */                 ileana.i = i, ileana.j = j;
/* UWnTuzUv1 ily traian ULWzbXCR4 */         }
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */     lee(ileana.i , ileana.j);
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */     int mindist = Inf;
/* UWnTuzUv1 ily traian ULWzbXCR4 */     poz rez;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ 
/* UWnTuzUv1 ily traian ULWzbXCR4 */     sort(fat.begin(), fat.end());
/* UWnTuzUv1 ily traian ULWzbXCR4 */     for (int i = fat.size() - 1; i >= 0; -- i)
/* UWnTuzUv1 ily traian ULWzbXCR4 */         if (d[fat[i].first][fat[i].second] < mindist && d[fat[i].first][fat[i].second] != 0)
/* UWnTuzUv1 ily traian ULWzbXCR4 */         {
/* UWnTuzUv1 ily traian ULWzbXCR4 */             mindist = d[fat[i].first][fat[i].second];
/* UWnTuzUv1 ily traian ULWzbXCR4 */             rez.i = fat[i].first;
/* UWnTuzUv1 ily traian ULWzbXCR4 */             rez.j = fat[i].second;
/* UWnTuzUv1 ily traian ULWzbXCR4 */         }
/* UWnTuzUv1 ily traian ULWzbXCR4 */     cout << rez.i << ' ' << rez.j;
/* UWnTuzUv1 ily traian ULWzbXCR4 */ }