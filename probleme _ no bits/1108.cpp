/* DJYQxZQ47 ily traian XGkx9o0N8 */ #include <algorithm>
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
/* DJYQxZQ47 ily traian XGkx9o0N8 */ 
/* DJYQxZQ47 ily traian XGkx9o0N8 */ 
/* DJYQxZQ47 ily traian XGkx9o0N8 */ using namespace std;
/* DJYQxZQ47 ily traian XGkx9o0N8 */ ifstream cin("traseu.in");
/* DJYQxZQ47 ily traian XGkx9o0N8 */ ofstream cout("traseu.out");
/* DJYQxZQ47 ily traian XGkx9o0N8 */ 
/* DJYQxZQ47 ily traian XGkx9o0N8 */ int di[] = {-1 ,  0 ,  0 , 0 , 0 , 1};
/* DJYQxZQ47 ily traian XGkx9o0N8 */ int dj[] = { 0 , -1 ,  0 , 0 , 1 , 0};
/* DJYQxZQ47 ily traian XGkx9o0N8 */ int dk[] = { 0 ,  0 , -1 , 1 , 0 , 0};
/* DJYQxZQ47 ily traian XGkx9o0N8 */ struct poz
/* DJYQxZQ47 ily traian XGkx9o0N8 */ {
/* DJYQxZQ47 ily traian XGkx9o0N8 */     int i , j , k;
/* DJYQxZQ47 ily traian XGkx9o0N8 */ };
/* DJYQxZQ47 ily traian XGkx9o0N8 */ int a[101][101][101] , n , m;
/* DJYQxZQ47 ily traian XGkx9o0N8 */ poz p1 , p2 , dr[1000001];
/* DJYQxZQ47 ily traian XGkx9o0N8 */ queue <poz> Q;
/* DJYQxZQ47 ily traian XGkx9o0N8 */ 
/* DJYQxZQ47 ily traian XGkx9o0N8 */ bool inside(int i , int j , int k)
/* DJYQxZQ47 ily traian XGkx9o0N8 */ {
/* DJYQxZQ47 ily traian XGkx9o0N8 */     return i >= 1 && i <= n && j >= 1 && j <= n && k >= 1 && k <= n;
/* DJYQxZQ47 ily traian XGkx9o0N8 */ }
/* DJYQxZQ47 ily traian XGkx9o0N8 */ void lee(poz p)
/* DJYQxZQ47 ily traian XGkx9o0N8 */ {
/* DJYQxZQ47 ily traian XGkx9o0N8 */     Q.push(p);
/* DJYQxZQ47 ily traian XGkx9o0N8 */     a[p.i][p.j][p.k] = 1;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     while(! Q.empty())
/* DJYQxZQ47 ily traian XGkx9o0N8 */     {
/* DJYQxZQ47 ily traian XGkx9o0N8 */         p = Q.front();
/* DJYQxZQ47 ily traian XGkx9o0N8 */         for(int d = 0 ; d < 6 ; d++)
/* DJYQxZQ47 ily traian XGkx9o0N8 */         {
/* DJYQxZQ47 ily traian XGkx9o0N8 */             int inou = p.i + di[d];
/* DJYQxZQ47 ily traian XGkx9o0N8 */             int jnou = p.j + dj[d];
/* DJYQxZQ47 ily traian XGkx9o0N8 */             int knou = p.k + dk[d];
/* DJYQxZQ47 ily traian XGkx9o0N8 */             if(inside(inou , jnou , knou) && a[inou][jnou][knou] == 0)
/* DJYQxZQ47 ily traian XGkx9o0N8 */             {
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 poz pnou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 pnou.i = inou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 pnou.j = jnou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 pnou.k = knou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 Q.push(pnou);
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 a[inou][jnou][knou] = a[p.i][p.j][p.k] + 1;
/* DJYQxZQ47 ily traian XGkx9o0N8 */             }
/* DJYQxZQ47 ily traian XGkx9o0N8 */ 
/* DJYQxZQ47 ily traian XGkx9o0N8 */         }
/* DJYQxZQ47 ily traian XGkx9o0N8 */         Q.pop();
/* DJYQxZQ47 ily traian XGkx9o0N8 */ 
/* DJYQxZQ47 ily traian XGkx9o0N8 */     }
/* DJYQxZQ47 ily traian XGkx9o0N8 */ }
/* DJYQxZQ47 ily traian XGkx9o0N8 */ int main()
/* DJYQxZQ47 ily traian XGkx9o0N8 */ {
/* DJYQxZQ47 ily traian XGkx9o0N8 */     cin >> n >> m;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     cin >> p1.i >> p1.j >> p1.k >> p2.i >> p2.j >> p2.k;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     for(int i = 1 ; i <= m ; i++)
/* DJYQxZQ47 ily traian XGkx9o0N8 */     {
/* DJYQxZQ47 ily traian XGkx9o0N8 */         int x , y , z;
/* DJYQxZQ47 ily traian XGkx9o0N8 */         cin >> x >> y >> z;
/* DJYQxZQ47 ily traian XGkx9o0N8 */         a[x][y][z] = -1;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     }
/* DJYQxZQ47 ily traian XGkx9o0N8 */     lee(p1);
/* DJYQxZQ47 ily traian XGkx9o0N8 */     cout << a[p2.i][p2.j][p2.k] << '\n';
/* DJYQxZQ47 ily traian XGkx9o0N8 */     int l = 1;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     dr[1] = p2;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     int i , j , k;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     i = p2.i , j = p2.j , k = p2.k;
/* DJYQxZQ47 ily traian XGkx9o0N8 */     while(i != p1.i || j != p1.j || k != p1.k)
/* DJYQxZQ47 ily traian XGkx9o0N8 */     {
/* DJYQxZQ47 ily traian XGkx9o0N8 */         for(int d = 0 ; d < 6 ; d++)
/* DJYQxZQ47 ily traian XGkx9o0N8 */         {
/* DJYQxZQ47 ily traian XGkx9o0N8 */             int inou = i + di[d];
/* DJYQxZQ47 ily traian XGkx9o0N8 */             int jnou = j + dj[d];
/* DJYQxZQ47 ily traian XGkx9o0N8 */             int knou = k + dk[d];
/* DJYQxZQ47 ily traian XGkx9o0N8 */             if(a[inou][jnou][knou] == a[i][j][k] - 1)
/* DJYQxZQ47 ily traian XGkx9o0N8 */             {
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 l++;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 dr[l].i = inou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 dr[l].j = jnou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 dr[l].k = knou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 i = inou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 j = jnou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 k = knou;
/* DJYQxZQ47 ily traian XGkx9o0N8 */                 break;
/* DJYQxZQ47 ily traian XGkx9o0N8 */             }
/* DJYQxZQ47 ily traian XGkx9o0N8 */         }
/* DJYQxZQ47 ily traian XGkx9o0N8 */     }
/* DJYQxZQ47 ily traian XGkx9o0N8 */     for(int i = l ; i >= 1 ; i--)
/* DJYQxZQ47 ily traian XGkx9o0N8 */     {
/* DJYQxZQ47 ily traian XGkx9o0N8 */         cout << dr[i].i << " " << dr[i].j << " " << dr[i].k << '\n';
/* DJYQxZQ47 ily traian XGkx9o0N8 */     }
/* DJYQxZQ47 ily traian XGkx9o0N8 */ }