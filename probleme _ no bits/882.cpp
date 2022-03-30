/* ZsDrfpvNf ily traian UC83iPXmP */ #include <algorithm>
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
/* ZsDrfpvNf ily traian UC83iPXmP */ using namespace std;
/* ZsDrfpvNf ily traian UC83iPXmP */ ifstream cin("lac.in");
/* ZsDrfpvNf ily traian UC83iPXmP */ ofstream cout("lac.out");
/* ZsDrfpvNf ily traian UC83iPXmP */ const int di[]={-1 , 0 , 1 , 0};
/* ZsDrfpvNf ily traian UC83iPXmP */ const int dj[]={0 , 1 , 0 , -1};
/* ZsDrfpvNf ily traian UC83iPXmP */ int n , m , a[1002][1002] , x[1000001] , y[1000001];
/* ZsDrfpvNf ily traian UC83iPXmP */ int ip , jp , is , js;///coordonatele
/* ZsDrfpvNf ily traian UC83iPXmP */ 
/* ZsDrfpvNf ily traian UC83iPXmP */ bool inside(int i , int j)
/* ZsDrfpvNf ily traian UC83iPXmP */ {
/* ZsDrfpvNf ily traian UC83iPXmP */     return i>=1 && i<=n && j>=1 && j<=m;
/* ZsDrfpvNf ily traian UC83iPXmP */ }
/* ZsDrfpvNf ily traian UC83iPXmP */ void lee(int ip , int jp)
/* ZsDrfpvNf ily traian UC83iPXmP */ {
/* ZsDrfpvNf ily traian UC83iPXmP */     int st = 1 , dr = 1;
/* ZsDrfpvNf ily traian UC83iPXmP */     a[ip][jp] = 2;
/* ZsDrfpvNf ily traian UC83iPXmP */     x[1]=ip;
/* ZsDrfpvNf ily traian UC83iPXmP */     y[1]=jp;
/* ZsDrfpvNf ily traian UC83iPXmP */     while(st <= dr)
/* ZsDrfpvNf ily traian UC83iPXmP */     {
/* ZsDrfpvNf ily traian UC83iPXmP */         int i= x[st] , j = y[st];
/* ZsDrfpvNf ily traian UC83iPXmP */         for(int k = 0 ; k < 4 ; k++)
/* ZsDrfpvNf ily traian UC83iPXmP */         {
/* ZsDrfpvNf ily traian UC83iPXmP */             int ii = i+di[k];
/* ZsDrfpvNf ily traian UC83iPXmP */             int jj = j+dj[k];
/* ZsDrfpvNf ily traian UC83iPXmP */             if(inside(ii , jj) && a[ii][jj]==1)
/* ZsDrfpvNf ily traian UC83iPXmP */             {
/* ZsDrfpvNf ily traian UC83iPXmP */                 dr++;
/* ZsDrfpvNf ily traian UC83iPXmP */                 x[dr]=ii;
/* ZsDrfpvNf ily traian UC83iPXmP */                 y[dr]=jj;
/* ZsDrfpvNf ily traian UC83iPXmP */                 a[ii][jj]=2;
/* ZsDrfpvNf ily traian UC83iPXmP */             }
/* ZsDrfpvNf ily traian UC83iPXmP */         }
/* ZsDrfpvNf ily traian UC83iPXmP */         st++;
/* ZsDrfpvNf ily traian UC83iPXmP */     }
/* ZsDrfpvNf ily traian UC83iPXmP */ }
/* ZsDrfpvNf ily traian UC83iPXmP */ int main()
/* ZsDrfpvNf ily traian UC83iPXmP */ {
/* ZsDrfpvNf ily traian UC83iPXmP */     int p = 0 , k = 0;
/* ZsDrfpvNf ily traian UC83iPXmP */     cin >> n >> m;
/* ZsDrfpvNf ily traian UC83iPXmP */     for(int i = 1 ; i <=n ; ++i)
/* ZsDrfpvNf ily traian UC83iPXmP */         for(int j = 1 ; j <=m ; ++j)
/* ZsDrfpvNf ily traian UC83iPXmP */             cin >> a[i][j];
/* ZsDrfpvNf ily traian UC83iPXmP */     for(int i = 1 ; i <=n ; ++i)
/* ZsDrfpvNf ily traian UC83iPXmP */     {
/* ZsDrfpvNf ily traian UC83iPXmP */         if(a[i][1]==1){p++;lee(i,1);}
/* ZsDrfpvNf ily traian UC83iPXmP */         if(a[i][m]==1){p++;lee(i,m);}
/* ZsDrfpvNf ily traian UC83iPXmP */     }
/* ZsDrfpvNf ily traian UC83iPXmP */     for(int i = 1 ; i <=m ; ++i)
/* ZsDrfpvNf ily traian UC83iPXmP */     {
/* ZsDrfpvNf ily traian UC83iPXmP */         if(a[1][i]==1){p++;lee(1,i);}
/* ZsDrfpvNf ily traian UC83iPXmP */         if(a[n][i]==1){p++;lee(n,i);}
/* ZsDrfpvNf ily traian UC83iPXmP */     }
/* ZsDrfpvNf ily traian UC83iPXmP */     for(int i = 2 ; i <n ; ++i)
/* ZsDrfpvNf ily traian UC83iPXmP */     {
/* ZsDrfpvNf ily traian UC83iPXmP */         for(int j = 2 ; j <m ; ++j)
/* ZsDrfpvNf ily traian UC83iPXmP */         {
/* ZsDrfpvNf ily traian UC83iPXmP */             if(a[i][j]==1)
/* ZsDrfpvNf ily traian UC83iPXmP */             {
/* ZsDrfpvNf ily traian UC83iPXmP */                 k++;
/* ZsDrfpvNf ily traian UC83iPXmP */                 lee(i,j);
/* ZsDrfpvNf ily traian UC83iPXmP */             }
/* ZsDrfpvNf ily traian UC83iPXmP */         }
/* ZsDrfpvNf ily traian UC83iPXmP */     }
/* ZsDrfpvNf ily traian UC83iPXmP */     cout << k << " "<<p;
/* ZsDrfpvNf ily traian UC83iPXmP */     return 0;
/* ZsDrfpvNf ily traian UC83iPXmP */ }