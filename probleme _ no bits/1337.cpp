/* T4yG16To8 ily traian hPr2OVr4b */ #include <algorithm>
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
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ using namespace std;
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ ifstream cin("turn.in");
/* T4yG16To8 ily traian hPr2OVr4b */ ofstream cout("turn.out");
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ struct poz
/* T4yG16To8 ily traian hPr2OVr4b */ {
/* T4yG16To8 ily traian hPr2OVr4b */     int i , j , k;
/* T4yG16To8 ily traian hPr2OVr4b */ };
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ const int dj[] = {-1 , 1 ,  0 , 0};
/* T4yG16To8 ily traian hPr2OVr4b */ const int dk[] = { 0 , 0 , -1 , 1};
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ int n , x1 , y1 , z1 , x2 , y2 , z2 , m , p , qu , r;
/* T4yG16To8 ily traian hPr2OVr4b */ int a[101][101][101];
/* T4yG16To8 ily traian hPr2OVr4b */ int b[101][101][101];
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ queue < poz > q;
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ int inside(int i , int j , int k)
/* T4yG16To8 ily traian hPr2OVr4b */ {
/* T4yG16To8 ily traian hPr2OVr4b */     return i >= 1 && i <= n && j >= 1 && j <= n && k >= 1 && k <= n;
/* T4yG16To8 ily traian hPr2OVr4b */ }
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ void lee()
/* T4yG16To8 ily traian hPr2OVr4b */ {
/* T4yG16To8 ily traian hPr2OVr4b */     b[x1][y1][z1]=1;
/* T4yG16To8 ily traian hPr2OVr4b */     poz r;
/* T4yG16To8 ily traian hPr2OVr4b */     r.i = x1 , r.j = y1 , r.k = z1;
/* T4yG16To8 ily traian hPr2OVr4b */     while(!q.empty())
/* T4yG16To8 ily traian hPr2OVr4b */     {
/* T4yG16To8 ily traian hPr2OVr4b */         poz r;
/* T4yG16To8 ily traian hPr2OVr4b */         r = q.front();
/* T4yG16To8 ily traian hPr2OVr4b */         if(a[r.i][r.j][r.k] == -4)
/* T4yG16To8 ily traian hPr2OVr4b */         {
/* T4yG16To8 ily traian hPr2OVr4b */             int inou = r.i;
/* T4yG16To8 ily traian hPr2OVr4b */             if(a[inou][r.j][r.k] == -4 && inou > 1) inou--;
/* T4yG16To8 ily traian hPr2OVr4b */             if(inside(inou , r.j , r.k) && a[inou][r.j][r.k] != -1 && b[inou][r.j][r.k] == 0)
/* T4yG16To8 ily traian hPr2OVr4b */             {
/* T4yG16To8 ily traian hPr2OVr4b */                 q.push({inou , r.j , r.k});
/* T4yG16To8 ily traian hPr2OVr4b */                 b[inou][r.j][r.k] = b[r.i][r.j][r.k] + 1;
/* T4yG16To8 ily traian hPr2OVr4b */             }
/* T4yG16To8 ily traian hPr2OVr4b */         }
/* T4yG16To8 ily traian hPr2OVr4b */         else
/* T4yG16To8 ily traian hPr2OVr4b */         {
/* T4yG16To8 ily traian hPr2OVr4b */             if(a[r.i][r.j][r.k] == -2)
/* T4yG16To8 ily traian hPr2OVr4b */             {
/* T4yG16To8 ily traian hPr2OVr4b */                 int inou = r.i + 1;
/* T4yG16To8 ily traian hPr2OVr4b */                 if(inside(inou , r.j , r.k) && a[inou][r.j][r.k] != -1 && b[inou][r.j][r.k] == 0)
/* T4yG16To8 ily traian hPr2OVr4b */                 {
/* T4yG16To8 ily traian hPr2OVr4b */                     q.push({inou , r.j , r.k});
/* T4yG16To8 ily traian hPr2OVr4b */                     b[inou][r.j][r.k] = b[r.i][r.j][r.k] + 1;
/* T4yG16To8 ily traian hPr2OVr4b */                 }
/* T4yG16To8 ily traian hPr2OVr4b */             }
/* T4yG16To8 ily traian hPr2OVr4b */             else if(a[r.i][r.j][r.k] == -3)
/* T4yG16To8 ily traian hPr2OVr4b */             {
/* T4yG16To8 ily traian hPr2OVr4b */                 int inou = r.i - 1;
/* T4yG16To8 ily traian hPr2OVr4b */                 if(inside(inou , r.j , r.k) && a[inou][r.j][r.k] != -1 && b[inou][r.j][r.k] == 0)
/* T4yG16To8 ily traian hPr2OVr4b */                 {
/* T4yG16To8 ily traian hPr2OVr4b */                     q.push({inou , r.j , r.k});
/* T4yG16To8 ily traian hPr2OVr4b */                     b[inou][r.j][r.k] = b[r.i][r.j][r.k] + 1;
/* T4yG16To8 ily traian hPr2OVr4b */                 }
/* T4yG16To8 ily traian hPr2OVr4b */             }
/* T4yG16To8 ily traian hPr2OVr4b */             for(int d = 0 ; d < 4 ; d++)
/* T4yG16To8 ily traian hPr2OVr4b */                 {
/* T4yG16To8 ily traian hPr2OVr4b */                     int inou = r.i;
/* T4yG16To8 ily traian hPr2OVr4b */                     int jnou = r.j + dj[d];
/* T4yG16To8 ily traian hPr2OVr4b */                     int knou = r.k + dk[d];
/* T4yG16To8 ily traian hPr2OVr4b */                     if(inside(inou , jnou , knou) && a[inou][jnou][knou] != -1 && b[inou][jnou][knou] == 0)
/* T4yG16To8 ily traian hPr2OVr4b */                     {
/* T4yG16To8 ily traian hPr2OVr4b */                         q.push({inou , jnou , knou});
/* T4yG16To8 ily traian hPr2OVr4b */                         b[inou][jnou][knou] = b[r.i][r.j][r.k] + 1;
/* T4yG16To8 ily traian hPr2OVr4b */                     }
/* T4yG16To8 ily traian hPr2OVr4b */                 }
/* T4yG16To8 ily traian hPr2OVr4b */         }
/* T4yG16To8 ily traian hPr2OVr4b */         q.pop();
/* T4yG16To8 ily traian hPr2OVr4b */     }
/* T4yG16To8 ily traian hPr2OVr4b */ }
/* T4yG16To8 ily traian hPr2OVr4b */ 
/* T4yG16To8 ily traian hPr2OVr4b */ int main()
/* T4yG16To8 ily traian hPr2OVr4b */ {
/* T4yG16To8 ily traian hPr2OVr4b */     cin >> n >> m >> p >> qu >> r;
/* T4yG16To8 ily traian hPr2OVr4b */     int x,y,z;
/* T4yG16To8 ily traian hPr2OVr4b */     for(int i = 1 ; i <= m ; i++)
/* T4yG16To8 ily traian hPr2OVr4b */     {
/* T4yG16To8 ily traian hPr2OVr4b */         cin >> x >> y >> z;
/* T4yG16To8 ily traian hPr2OVr4b */         a[x][y][z] = -1;
/* T4yG16To8 ily traian hPr2OVr4b */     }
/* T4yG16To8 ily traian hPr2OVr4b */     for(int i = 1 ; i <= p ; i++)
/* T4yG16To8 ily traian hPr2OVr4b */     {
/* T4yG16To8 ily traian hPr2OVr4b */         cin >> x >> y >> z;
/* T4yG16To8 ily traian hPr2OVr4b */         a[x][y][z] = -2;
/* T4yG16To8 ily traian hPr2OVr4b */     }
/* T4yG16To8 ily traian hPr2OVr4b */     for(int i = 1 ; i <= qu ; i++)
/* T4yG16To8 ily traian hPr2OVr4b */     {
/* T4yG16To8 ily traian hPr2OVr4b */         cin >> x >> y >> z;
/* T4yG16To8 ily traian hPr2OVr4b */         a[x][y][z] = -3;
/* T4yG16To8 ily traian hPr2OVr4b */     }
/* T4yG16To8 ily traian hPr2OVr4b */     for(int i = 1 ; i <= r ; i++)
/* T4yG16To8 ily traian hPr2OVr4b */     {
/* T4yG16To8 ily traian hPr2OVr4b */         cin >> x >> y >> z;
/* T4yG16To8 ily traian hPr2OVr4b */         a[x][y][z] = -4;
/* T4yG16To8 ily traian hPr2OVr4b */     }
/* T4yG16To8 ily traian hPr2OVr4b */     cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
/* T4yG16To8 ily traian hPr2OVr4b */     q.push({x1 , y1 , z1});
/* T4yG16To8 ily traian hPr2OVr4b */     lee();
/* T4yG16To8 ily traian hPr2OVr4b */     cout << b[x2][y2][z2];
/* T4yG16To8 ily traian hPr2OVr4b */     return 0;
/* T4yG16To8 ily traian hPr2OVr4b */ }