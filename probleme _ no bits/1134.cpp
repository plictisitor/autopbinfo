/* 0HAnWHvYe ily traian cg6zAZ2Sb */ #include <algorithm>
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
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ 
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ using namespace std;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ ifstream cin("panda.in");
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ ofstream cout("panda.out");
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ const int di[] = {-1 ,  0 , 1 , 0};
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ const int dj[] = { 0 , -1 , 0 , 1};
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ struct poz
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     int i , j;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ };
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ int a[505][505] , b[505][505] , n , cer , g , f[505][505] , k , s , is , js , dmin = 1000000 , cnt , m , x , y , t;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ queue <poz> Q;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ bool inside(int i , int j)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ int complementare(int a , int b , int s)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ 
/* 0HAnWHvYe ily traian cg6zAZ2Sb */    int m = (1 << s) - 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     x = m & a;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     y = m & b ;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     if((x ^ y) == m) return 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     else return 0;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ 
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ void lee(poz p)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     Q.push(p);
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     b[p.i][p.j] = 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     while(! Q.empty())
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         p = Q.front();
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         for(int i = 0 ; i < 4 ; i ++)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             int inou = p.i + di[i];
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             int jnou = p.j + dj[i];
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             if(inside(inou , jnou) && b[inou][jnou] == 0 && complementare(k , a[inou][jnou] , s))
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 b[inou][jnou] = b[p.i][p.j] + 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 poz qa;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 qa.i = inou , qa.j = jnou;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 Q.push(qa);
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 if(f[inou][jnou] == 1)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                     if(b[inou][jnou] - 1 < dmin)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                     {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                         cnt = 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                         dmin = b[inou][jnou] - 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                     }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                     else if(b[inou][jnou] - 1 == dmin) cnt++;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         Q.pop();
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     cout << dmin << " " << cnt;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ 
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ int main()
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     cin >> cer;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     cin >> n >> m >> t;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     cin >> is >> js >> k >> s;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     for(int i = 1 ; i <= t ; i++)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         int x , y;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         cin >> x >> y;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         f[x][y] = 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     for(int i = 1 ; i <= n ; i++)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         for(int j = 1 ; j <= m ; j++)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             cin >> a[i][j];
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     if(cer == 1)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         for(int i = 1 ; i <= n ; i++)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */             for(int j = 1 ; j <= m ; j++)
/* 0HAnWHvYe ily traian cg6zAZ2Sb */                 if(complementare(k , a[i][j] , s)) cnt++;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         cout << cnt - 1;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     else
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     {
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         poz p;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         p.i = is;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         p.j = js;
/* 0HAnWHvYe ily traian cg6zAZ2Sb */         lee(p);
/* 0HAnWHvYe ily traian cg6zAZ2Sb */     }
/* 0HAnWHvYe ily traian cg6zAZ2Sb */ }