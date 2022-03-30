/* pj6jtJXXq ily traian whOfV9xTg */ #include <algorithm>
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
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ using namespace std;
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ ifstream cin("tsunami.in");
/* pj6jtJXXq ily traian whOfV9xTg */ ofstream cout("tsunami.out");
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ int a[1001][1001] , b[1001][1001] , n , m;
/* pj6jtJXXq ily traian whOfV9xTg */ struct shen
/* pj6jtJXXq ily traian whOfV9xTg */ {
/* pj6jtJXXq ily traian whOfV9xTg */     int i , j;
/* pj6jtJXXq ily traian whOfV9xTg */ };
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ int inside(int i , int j)
/* pj6jtJXXq ily traian whOfV9xTg */ {
/* pj6jtJXXq ily traian whOfV9xTg */     return i<=n && i>= 1 && j <= m && j >= 1;
/* pj6jtJXXq ily traian whOfV9xTg */ }
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ queue<shen> Q;
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ int di[]={1 , 0 , -1 , 0};
/* pj6jtJXXq ily traian whOfV9xTg */ int dj[]={0 , 1 , 0 , -1};
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ void lee(int x , int y)
/* pj6jtJXXq ily traian whOfV9xTg */ {
/* pj6jtJXXq ily traian whOfV9xTg */     shen p;
/* pj6jtJXXq ily traian whOfV9xTg */     p.i=x , p.j=y;
/* pj6jtJXXq ily traian whOfV9xTg */     Q.push(p);
/* pj6jtJXXq ily traian whOfV9xTg */     while(!Q.empty())
/* pj6jtJXXq ily traian whOfV9xTg */     {
/* pj6jtJXXq ily traian whOfV9xTg */         p.i=Q.front().i;
/* pj6jtJXXq ily traian whOfV9xTg */         p.j=Q.front().j;
/* pj6jtJXXq ily traian whOfV9xTg */         for(int k = 0 ; k <= 3 ; ++k)
/* pj6jtJXXq ily traian whOfV9xTg */         {
/* pj6jtJXXq ily traian whOfV9xTg */             int inou=p.i+di[k];
/* pj6jtJXXq ily traian whOfV9xTg */             int jnou=p.j+dj[k];
/* pj6jtJXXq ily traian whOfV9xTg */             if(inside(inou,jnou) && b[inou][jnou]==0)
/* pj6jtJXXq ily traian whOfV9xTg */             {
/* pj6jtJXXq ily traian whOfV9xTg */                 shen pnou;
/* pj6jtJXXq ily traian whOfV9xTg */                 pnou.i=inou;
/* pj6jtJXXq ily traian whOfV9xTg */                 pnou.j=jnou;
/* pj6jtJXXq ily traian whOfV9xTg */                 Q.push(pnou);
/* pj6jtJXXq ily traian whOfV9xTg */                 b[inou][jnou]=2;
/* pj6jtJXXq ily traian whOfV9xTg */             }
/* pj6jtJXXq ily traian whOfV9xTg */         }
/* pj6jtJXXq ily traian whOfV9xTg */         Q.pop();
/* pj6jtJXXq ily traian whOfV9xTg */     }
/* pj6jtJXXq ily traian whOfV9xTg */ }
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ 
/* pj6jtJXXq ily traian whOfV9xTg */ int main()
/* pj6jtJXXq ily traian whOfV9xTg */ {
/* pj6jtJXXq ily traian whOfV9xTg */     int k;
/* pj6jtJXXq ily traian whOfV9xTg */     cin >> n >> m >> k;
/* pj6jtJXXq ily traian whOfV9xTg */     for(int i = 1 ; i <= n ; ++i)
/* pj6jtJXXq ily traian whOfV9xTg */         for(int j = 1 ; j <= m ; ++j)
/* pj6jtJXXq ily traian whOfV9xTg */         {
/* pj6jtJXXq ily traian whOfV9xTg */             cin >> a[i][j];
/* pj6jtJXXq ily traian whOfV9xTg */             if(a[i][j]<k)
/* pj6jtJXXq ily traian whOfV9xTg */                 b[i][j]=0;
/* pj6jtJXXq ily traian whOfV9xTg */             else
/* pj6jtJXXq ily traian whOfV9xTg */                 b[i][j]=1;
/* pj6jtJXXq ily traian whOfV9xTg */         }
/* pj6jtJXXq ily traian whOfV9xTg */     for(int i = 1 ; i <= n ; ++i)
/* pj6jtJXXq ily traian whOfV9xTg */         for(int j = 1 ; j <= m ; ++j)
/* pj6jtJXXq ily traian whOfV9xTg */             if(a[i][j]==0)
/* pj6jtJXXq ily traian whOfV9xTg */                 lee(i , j);
/* pj6jtJXXq ily traian whOfV9xTg */     int cnt=0;
/* pj6jtJXXq ily traian whOfV9xTg */     for(int i = 1 ; i <= n ; ++i)
/* pj6jtJXXq ily traian whOfV9xTg */     {
/* pj6jtJXXq ily traian whOfV9xTg */         for(int j = 1 ; j <= m ; ++j)
/* pj6jtJXXq ily traian whOfV9xTg */         {
/* pj6jtJXXq ily traian whOfV9xTg */             if(a[i][j]!=0 && b[i][j]==2)
/* pj6jtJXXq ily traian whOfV9xTg */                 cnt++;
/* pj6jtJXXq ily traian whOfV9xTg */         }
/* pj6jtJXXq ily traian whOfV9xTg */     }
/* pj6jtJXXq ily traian whOfV9xTg */     cout << cnt;
/* pj6jtJXXq ily traian whOfV9xTg */     return 0;
/* pj6jtJXXq ily traian whOfV9xTg */ }