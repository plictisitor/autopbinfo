/* gv0oaEEzQ ily traian DCJmm3VcA */ #include <algorithm>
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
/* gv0oaEEzQ ily traian DCJmm3VcA */ using namespace std;
/* gv0oaEEzQ ily traian DCJmm3VcA */ const int di[]={-1 , 0 , 1 , 0};
/* gv0oaEEzQ ily traian DCJmm3VcA */ const int dj[]={0 , 1 , 0 , -1};
/* gv0oaEEzQ ily traian DCJmm3VcA */ int n , m , a[1002][1002] , x[1000001] , y[1000001];
/* gv0oaEEzQ ily traian DCJmm3VcA */ int ip , jp , is , js;
/* gv0oaEEzQ ily traian DCJmm3VcA */ bool inside(int i , int j)
/* gv0oaEEzQ ily traian DCJmm3VcA */ {
/* gv0oaEEzQ ily traian DCJmm3VcA */     return i>=1 && i<=n && j>=1 && j<=m;
/* gv0oaEEzQ ily traian DCJmm3VcA */ }
/* gv0oaEEzQ ily traian DCJmm3VcA */ void lee(int ip , int jp)
/* gv0oaEEzQ ily traian DCJmm3VcA */ {
/* gv0oaEEzQ ily traian DCJmm3VcA */     int st = 1 , dr = 1;
/* gv0oaEEzQ ily traian DCJmm3VcA */     a[ip][jp] = 2;
/* gv0oaEEzQ ily traian DCJmm3VcA */     x[1]=ip;
/* gv0oaEEzQ ily traian DCJmm3VcA */     y[1]=jp;
/* gv0oaEEzQ ily traian DCJmm3VcA */     while(st <= dr)
/* gv0oaEEzQ ily traian DCJmm3VcA */     {
/* gv0oaEEzQ ily traian DCJmm3VcA */         int i= x[st] , j = y[st];
/* gv0oaEEzQ ily traian DCJmm3VcA */         for(int k = 0 ; k < 4 ; k++)
/* gv0oaEEzQ ily traian DCJmm3VcA */         {
/* gv0oaEEzQ ily traian DCJmm3VcA */             int ii = i+di[k];
/* gv0oaEEzQ ily traian DCJmm3VcA */             int jj = j+dj[k];
/* gv0oaEEzQ ily traian DCJmm3VcA */             if(inside(ii , jj) && a[ii][jj]==1)
/* gv0oaEEzQ ily traian DCJmm3VcA */             {
/* gv0oaEEzQ ily traian DCJmm3VcA */                 dr++;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 x[dr]=ii;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 y[dr]=jj;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 a[ii][jj]=2;
/* gv0oaEEzQ ily traian DCJmm3VcA */             }}st++;}
/* gv0oaEEzQ ily traian DCJmm3VcA */ }
/* gv0oaEEzQ ily traian DCJmm3VcA */ int main()
/* gv0oaEEzQ ily traian DCJmm3VcA */ {
/* gv0oaEEzQ ily traian DCJmm3VcA */     int p = 0 , k = 0 , max = 0;
/* gv0oaEEzQ ily traian DCJmm3VcA */     cin >> n >> m;
/* gv0oaEEzQ ily traian DCJmm3VcA */     for(int i = 1 ; i <=n ; ++i)
/* gv0oaEEzQ ily traian DCJmm3VcA */         for(int j = 1 ; j <=m ; ++j)
/* gv0oaEEzQ ily traian DCJmm3VcA */             cin >> a[i][j];
/* gv0oaEEzQ ily traian DCJmm3VcA */     for(int i = 1 ; i <= n ; ++i)
/* gv0oaEEzQ ily traian DCJmm3VcA */         for(int j = 1 ; j <= m ; ++j)
/* gv0oaEEzQ ily traian DCJmm3VcA */             if(a[i][j]==1)
/* gv0oaEEzQ ily traian DCJmm3VcA */             {
/* gv0oaEEzQ ily traian DCJmm3VcA */                 int lat = 0 , col = 0;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 while(a[i][j]==1){lat++;j++;}
/* gv0oaEEzQ ily traian DCJmm3VcA */                 j-=lat;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 while(a[i][j]==1){col++;i++;}
/* gv0oaEEzQ ily traian DCJmm3VcA */                 if(lat * col>max) max=lat*col;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 i-=col;
/* gv0oaEEzQ ily traian DCJmm3VcA */             }
/* gv0oaEEzQ ily traian DCJmm3VcA */     for(int i = 1 ; i <=n ; ++i)
/* gv0oaEEzQ ily traian DCJmm3VcA */     {
/* gv0oaEEzQ ily traian DCJmm3VcA */         if(a[i][1]==1){p++;lee(i,1);}
/* gv0oaEEzQ ily traian DCJmm3VcA */         if(a[i][m]==1){p++;lee(i,m);}
/* gv0oaEEzQ ily traian DCJmm3VcA */     }
/* gv0oaEEzQ ily traian DCJmm3VcA */     for(int i = 1 ; i <=m ; ++i)
/* gv0oaEEzQ ily traian DCJmm3VcA */     {
/* gv0oaEEzQ ily traian DCJmm3VcA */         if(a[1][i]==1){p++;lee(1,i);}
/* gv0oaEEzQ ily traian DCJmm3VcA */         if(a[n][i]==1){p++;lee(n,i);}
/* gv0oaEEzQ ily traian DCJmm3VcA */     }
/* gv0oaEEzQ ily traian DCJmm3VcA */     for(int i = 2 ; i <n ; ++i)
/* gv0oaEEzQ ily traian DCJmm3VcA */         for(int j = 2 ; j <m ; ++j)
/* gv0oaEEzQ ily traian DCJmm3VcA */             if(a[i][j]==1)
/* gv0oaEEzQ ily traian DCJmm3VcA */             {
/* gv0oaEEzQ ily traian DCJmm3VcA */                 k++;
/* gv0oaEEzQ ily traian DCJmm3VcA */                 lee(i,j);
/* gv0oaEEzQ ily traian DCJmm3VcA */             }
/* gv0oaEEzQ ily traian DCJmm3VcA */     cout << k+p << " " << max;
/* gv0oaEEzQ ily traian DCJmm3VcA */     return 0;
/* gv0oaEEzQ ily traian DCJmm3VcA */ }