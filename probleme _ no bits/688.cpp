/* u7Id1Jgav ily traian xzoTYAhJy */ #include <algorithm>
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
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ using namespace std;
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ ifstream cin("pixy.in");
/* u7Id1Jgav ily traian xzoTYAhJy */ ofstream cout("pixy.out");
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ const int di[] = {0 , 0 , -1 , 1};
/* u7Id1Jgav ily traian xzoTYAhJy */ const int dj[] = {-1 , 1 , 0 , 0};
/* u7Id1Jgav ily traian xzoTYAhJy */ int n , m , a[501][501] , b[501][501] , c[501][501];
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ char s;
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ struct poz
/* u7Id1Jgav ily traian xzoTYAhJy */ {
/* u7Id1Jgav ily traian xzoTYAhJy */     int i , j;
/* u7Id1Jgav ily traian xzoTYAhJy */ };
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ queue <poz> q;
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ int inside(int i , int j)
/* u7Id1Jgav ily traian xzoTYAhJy */ {
/* u7Id1Jgav ily traian xzoTYAhJy */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* u7Id1Jgav ily traian xzoTYAhJy */ }
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ void lee()
/* u7Id1Jgav ily traian xzoTYAhJy */ {
/* u7Id1Jgav ily traian xzoTYAhJy */     poz r;
/* u7Id1Jgav ily traian xzoTYAhJy */     r.i = 1 , r.j = 1;
/* u7Id1Jgav ily traian xzoTYAhJy */     q.push(r);
/* u7Id1Jgav ily traian xzoTYAhJy */     b[r.i][r.j] = 1;
/* u7Id1Jgav ily traian xzoTYAhJy */     c[r.i][r.j] = 1;
/* u7Id1Jgav ily traian xzoTYAhJy */     while(!q.empty())
/* u7Id1Jgav ily traian xzoTYAhJy */     {
/* u7Id1Jgav ily traian xzoTYAhJy */         poz r;
/* u7Id1Jgav ily traian xzoTYAhJy */         r = q.front();
/* u7Id1Jgav ily traian xzoTYAhJy */         for(int i = 0 ; i < 4 ; i++)
/* u7Id1Jgav ily traian xzoTYAhJy */         {
/* u7Id1Jgav ily traian xzoTYAhJy */             int inou = r.i + di[i];
/* u7Id1Jgav ily traian xzoTYAhJy */             int jnou = r.j + dj[i];
/* u7Id1Jgav ily traian xzoTYAhJy */             if(inside(inou , jnou))
/* u7Id1Jgav ily traian xzoTYAhJy */             {
/* u7Id1Jgav ily traian xzoTYAhJy */                 if(a[inou][jnou] == a[r.i][r.j])
/* u7Id1Jgav ily traian xzoTYAhJy */                 {
/* u7Id1Jgav ily traian xzoTYAhJy */                     if(b[inou][jnou] == 0)
/* u7Id1Jgav ily traian xzoTYAhJy */                     {
/* u7Id1Jgav ily traian xzoTYAhJy */                         c[inou][jnou] = c[r.i][r.j];
/* u7Id1Jgav ily traian xzoTYAhJy */                         b[inou][jnou] = b[r.i][r.j] + 1;
/* u7Id1Jgav ily traian xzoTYAhJy */                         q.push({inou , jnou});
/* u7Id1Jgav ily traian xzoTYAhJy */                     }
/* u7Id1Jgav ily traian xzoTYAhJy */                     else if(c[inou][jnou] > c[r.i][r.j])
/* u7Id1Jgav ily traian xzoTYAhJy */                     {
/* u7Id1Jgav ily traian xzoTYAhJy */                         c[inou][jnou] = c[r.i][r.j];
/* u7Id1Jgav ily traian xzoTYAhJy */                         b[inou][jnou] = b[r.i][r.j] + 1;
/* u7Id1Jgav ily traian xzoTYAhJy */                         q.push({inou , jnou});
/* u7Id1Jgav ily traian xzoTYAhJy */                     }
/* u7Id1Jgav ily traian xzoTYAhJy */                     else if(c[inou][jnou] == c[r.i][r.j] && b[inou][jnou] > b[r.i][r.j] + 1)
/* u7Id1Jgav ily traian xzoTYAhJy */                     {
/* u7Id1Jgav ily traian xzoTYAhJy */                         b[inou][jnou] = b[r.i][r.j] + 1;
/* u7Id1Jgav ily traian xzoTYAhJy */                         q.push({inou , jnou});
/* u7Id1Jgav ily traian xzoTYAhJy */                     }
/* u7Id1Jgav ily traian xzoTYAhJy */                 }
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */                 else if(c[inou][jnou] > c[r.i][r.j]+1)
/* u7Id1Jgav ily traian xzoTYAhJy */                 {
/* u7Id1Jgav ily traian xzoTYAhJy */                     c[inou][jnou] = c[r.i][r.j] + 1;
/* u7Id1Jgav ily traian xzoTYAhJy */                     b[inou][jnou] = b[r.i][r.j] + 1;
/* u7Id1Jgav ily traian xzoTYAhJy */                     q.push({inou , jnou});
/* u7Id1Jgav ily traian xzoTYAhJy */                 }
/* u7Id1Jgav ily traian xzoTYAhJy */                 else if(c[inou][jnou] == c[r.i][r.j]+1 && b[inou][jnou] > b[r.i][r.j] + 1)
/* u7Id1Jgav ily traian xzoTYAhJy */                 {
/* u7Id1Jgav ily traian xzoTYAhJy */                     b[inou][jnou] = b[r.i][r.j] + 1;
/* u7Id1Jgav ily traian xzoTYAhJy */                     q.push({inou , jnou});
/* u7Id1Jgav ily traian xzoTYAhJy */                 }
/* u7Id1Jgav ily traian xzoTYAhJy */             }
/* u7Id1Jgav ily traian xzoTYAhJy */         }
/* u7Id1Jgav ily traian xzoTYAhJy */         q.pop();
/* u7Id1Jgav ily traian xzoTYAhJy */     }
/* u7Id1Jgav ily traian xzoTYAhJy */ }
/* u7Id1Jgav ily traian xzoTYAhJy */ int verif(int cod , int x)
/* u7Id1Jgav ily traian xzoTYAhJy */ {
/* u7Id1Jgav ily traian xzoTYAhJy */     return (cod &(1<<x))!=0;
/* u7Id1Jgav ily traian xzoTYAhJy */ }
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */ int nr1(int n)
/* u7Id1Jgav ily traian xzoTYAhJy */ {
/* u7Id1Jgav ily traian xzoTYAhJy */     int c = 0;
/* u7Id1Jgav ily traian xzoTYAhJy */     while(n != 0)
/* u7Id1Jgav ily traian xzoTYAhJy */     {
/* u7Id1Jgav ily traian xzoTYAhJy */         c += n % 2;
/* u7Id1Jgav ily traian xzoTYAhJy */         n /= 2;
/* u7Id1Jgav ily traian xzoTYAhJy */     }
/* u7Id1Jgav ily traian xzoTYAhJy */     return c;
/* u7Id1Jgav ily traian xzoTYAhJy */ }
/* u7Id1Jgav ily traian xzoTYAhJy */ int main()
/* u7Id1Jgav ily traian xzoTYAhJy */ {
/* u7Id1Jgav ily traian xzoTYAhJy */     cin >> n >> m;
/* u7Id1Jgav ily traian xzoTYAhJy */     for(int i = 1 ; i <= n ; i++)
/* u7Id1Jgav ily traian xzoTYAhJy */         for(int j = 1 ; j <= m ; j++)
/* u7Id1Jgav ily traian xzoTYAhJy */         {
/* u7Id1Jgav ily traian xzoTYAhJy */             cin >> s;
/* u7Id1Jgav ily traian xzoTYAhJy */             a[i][j] = s - 'A';
/* u7Id1Jgav ily traian xzoTYAhJy */             c[i][j] = 1000000000;
/* u7Id1Jgav ily traian xzoTYAhJy */         }
/* u7Id1Jgav ily traian xzoTYAhJy */ 
/* u7Id1Jgav ily traian xzoTYAhJy */     lee();
/* u7Id1Jgav ily traian xzoTYAhJy */     /*for(int i = 1 ; i <= n ; i++)
/* u7Id1Jgav ily traian xzoTYAhJy */     {
/* u7Id1Jgav ily traian xzoTYAhJy */         for(int j = 1 ; j <= m ; j++)
/* u7Id1Jgav ily traian xzoTYAhJy */             cout << b[i][j] << " ";
/* u7Id1Jgav ily traian xzoTYAhJy */         cout << '\n';
/* u7Id1Jgav ily traian xzoTYAhJy */     }
/* u7Id1Jgav ily traian xzoTYAhJy */     cout << '\n';
/* u7Id1Jgav ily traian xzoTYAhJy */     for(int i = 1 ; i <= n ; i++)
/* u7Id1Jgav ily traian xzoTYAhJy */     {
/* u7Id1Jgav ily traian xzoTYAhJy */         for(int j = 1 ; j <= m ; j++)
/* u7Id1Jgav ily traian xzoTYAhJy */             cout << c[i][j] << " ";
/* u7Id1Jgav ily traian xzoTYAhJy */         cout << '\n';
/* u7Id1Jgav ily traian xzoTYAhJy */     }*/
/* u7Id1Jgav ily traian xzoTYAhJy */     cout << c[n][m] - 1 << '\n' << b[n][m] - 1;
/* u7Id1Jgav ily traian xzoTYAhJy */ }