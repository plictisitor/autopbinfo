/* OXsa0MinX ily traian rBUuCnqWq */ #include <algorithm>
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
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ using namespace std;
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ ifstream cin("paznici.in");
/* OXsa0MinX ily traian rBUuCnqWq */ ofstream cout("paznici.out");
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ const int di[] = {0 , 0 , -1 , 1};
/* OXsa0MinX ily traian rBUuCnqWq */ const int dj[] = {-1 , 1 , 0 , 0};
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ struct poz
/* OXsa0MinX ily traian rBUuCnqWq */ {
/* OXsa0MinX ily traian rBUuCnqWq */     int i , j;
/* OXsa0MinX ily traian rBUuCnqWq */ };
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ int n , m , t , x , y , val , cnt , a[201][201] , b[201][201] , c[201][201];
/* OXsa0MinX ily traian rBUuCnqWq */ char ma[202][202];
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ queue <poz>q;
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ int inside(int i , int j)
/* OXsa0MinX ily traian rBUuCnqWq */ {
/* OXsa0MinX ily traian rBUuCnqWq */     return i >= 1 && i <= n && j >= 1 && j <= m ;
/* OXsa0MinX ily traian rBUuCnqWq */ }
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ void lee(int x , int y , int val)
/* OXsa0MinX ily traian rBUuCnqWq */ {
/* OXsa0MinX ily traian rBUuCnqWq */     for(int i = 1 ; i <= n ; i++)
/* OXsa0MinX ily traian rBUuCnqWq */         for(int j = 1 ; j <= m ; j++)
/* OXsa0MinX ily traian rBUuCnqWq */             a[i][j] = b[i][j];
/* OXsa0MinX ily traian rBUuCnqWq */     a[x][y] = 1;
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */     poz r;
/* OXsa0MinX ily traian rBUuCnqWq */     r.i = x , r.j = y;
/* OXsa0MinX ily traian rBUuCnqWq */     q.push(r);
/* OXsa0MinX ily traian rBUuCnqWq */     while(!q.empty())
/* OXsa0MinX ily traian rBUuCnqWq */     {
/* OXsa0MinX ily traian rBUuCnqWq */         poz nou;
/* OXsa0MinX ily traian rBUuCnqWq */         nou = q.front();
/* OXsa0MinX ily traian rBUuCnqWq */         for(int d = 0 ; d < 4 ; d++)
/* OXsa0MinX ily traian rBUuCnqWq */         {
/* OXsa0MinX ily traian rBUuCnqWq */             int inou = nou.i + di[d];
/* OXsa0MinX ily traian rBUuCnqWq */             int jnou = nou.j + dj[d];
/* OXsa0MinX ily traian rBUuCnqWq */             if(inside(inou , jnou) && a[inou][jnou] == 0 && a[nou.i][nou.j] <= val)
/* OXsa0MinX ily traian rBUuCnqWq */             {
/* OXsa0MinX ily traian rBUuCnqWq */                 a[inou][jnou] = a[nou.i][nou.j] + 1;
/* OXsa0MinX ily traian rBUuCnqWq */                 q.push({inou , jnou});
/* OXsa0MinX ily traian rBUuCnqWq */             }
/* OXsa0MinX ily traian rBUuCnqWq */         }
/* OXsa0MinX ily traian rBUuCnqWq */         q.pop();
/* OXsa0MinX ily traian rBUuCnqWq */     }
/* OXsa0MinX ily traian rBUuCnqWq */     for(int i = 1 ; i <= n ; i++)
/* OXsa0MinX ily traian rBUuCnqWq */         for(int j = 1 ; j <= m ; j++)
/* OXsa0MinX ily traian rBUuCnqWq */             if(c[i][j] == 0) c[i][j] = a[i][j];
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ }
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */ int main()
/* OXsa0MinX ily traian rBUuCnqWq */ {
/* OXsa0MinX ily traian rBUuCnqWq */     cin >> n >> m >> t;
/* OXsa0MinX ily traian rBUuCnqWq */     for(int i = 1 ; i <= n ; i++)
/* OXsa0MinX ily traian rBUuCnqWq */         for(int j = 1 ; j <= m ; j++)
/* OXsa0MinX ily traian rBUuCnqWq */         {
/* OXsa0MinX ily traian rBUuCnqWq */             cin >> ma[i][j];
/* OXsa0MinX ily traian rBUuCnqWq */             if(ma[i][j] == '#') a[i][j] = -1 , b[i][j] = -1;
/* OXsa0MinX ily traian rBUuCnqWq */         }
/* OXsa0MinX ily traian rBUuCnqWq */     for(int i = 1 ; i <= t ; i++)
/* OXsa0MinX ily traian rBUuCnqWq */     {
/* OXsa0MinX ily traian rBUuCnqWq */         cin >> x >> y >> val;
/* OXsa0MinX ily traian rBUuCnqWq */         lee(x , y , val);
/* OXsa0MinX ily traian rBUuCnqWq */ 
/* OXsa0MinX ily traian rBUuCnqWq */     }
/* OXsa0MinX ily traian rBUuCnqWq */     /*for(int i = 1 ; i <= n ; i ++)
/* OXsa0MinX ily traian rBUuCnqWq */     {
/* OXsa0MinX ily traian rBUuCnqWq */         for(int j = 1 ; j <= m ; j++)
/* OXsa0MinX ily traian rBUuCnqWq */             cout << c[i][j] << " ";
/* OXsa0MinX ily traian rBUuCnqWq */         cout << '\n';
/* OXsa0MinX ily traian rBUuCnqWq */     }*/
/* OXsa0MinX ily traian rBUuCnqWq */     for(int i = 1 ; i <= n ; i ++)
/* OXsa0MinX ily traian rBUuCnqWq */         for(int j = 1 ; j <= m ; j++)
/* OXsa0MinX ily traian rBUuCnqWq */             if(c[i][j] == 0) cnt++;
/* OXsa0MinX ily traian rBUuCnqWq */     cout << cnt;
/* OXsa0MinX ily traian rBUuCnqWq */ }