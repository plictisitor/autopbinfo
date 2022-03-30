/* 8xd1FW9Ho ily traian Yj57KfeNH */ #include <algorithm>
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
/* 8xd1FW9Ho ily traian Yj57KfeNH */ 
/* 8xd1FW9Ho ily traian Yj57KfeNH */ using namespace std;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ ifstream cin("rover.in");
/* 8xd1FW9Ho ily traian Yj57KfeNH */ ofstream cout("rover.out");
/* 8xd1FW9Ho ily traian Yj57KfeNH */ const int di[] = {-1 ,  0 , 1 , 0};
/* 8xd1FW9Ho ily traian Yj57KfeNH */ const int dj[] = { 0 , -1 , 0 , 1};
/* 8xd1FW9Ho ily traian Yj57KfeNH */ struct poz
/* 8xd1FW9Ho ily traian Yj57KfeNH */ {
/* 8xd1FW9Ho ily traian Yj57KfeNH */     int i , j;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ };
/* 8xd1FW9Ho ily traian Yj57KfeNH */ int a[505][505] , b[505][505] , n , cer , g;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ queue <poz> Q;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ deque <poz> D;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ bool inside(int i , int j)
/* 8xd1FW9Ho ily traian Yj57KfeNH */ {
/* 8xd1FW9Ho ily traian Yj57KfeNH */     return i >= 1 && i <= n && j >= 1 && j <= n;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ }
/* 8xd1FW9Ho ily traian Yj57KfeNH */ 
/* 8xd1FW9Ho ily traian Yj57KfeNH */ void lee1()
/* 8xd1FW9Ho ily traian Yj57KfeNH */ {
/* 8xd1FW9Ho ily traian Yj57KfeNH */     poz p;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     p.i = 1 , p.j = 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     D.push_back(p);
/* 8xd1FW9Ho ily traian Yj57KfeNH */     b[1][1] = 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     while( ! D.empty())
/* 8xd1FW9Ho ily traian Yj57KfeNH */     {
/* 8xd1FW9Ho ily traian Yj57KfeNH */         p = D.front();
/* 8xd1FW9Ho ily traian Yj57KfeNH */         D.pop_front();
/* 8xd1FW9Ho ily traian Yj57KfeNH */         for(int i = 0 ; i < 4 ; i ++)
/* 8xd1FW9Ho ily traian Yj57KfeNH */         {
/* 8xd1FW9Ho ily traian Yj57KfeNH */             int inou = p.i + di[i];
/* 8xd1FW9Ho ily traian Yj57KfeNH */             int jnou = p.j + dj[i];
/* 8xd1FW9Ho ily traian Yj57KfeNH */             if(inside(inou , jnou) && b[inou][jnou] == 0)
/* 8xd1FW9Ho ily traian Yj57KfeNH */             {
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 if(a[inou][jnou] < g)
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 {
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     b[inou][jnou] = b[p.i][p.j] + 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     poz qa;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     qa.i = inou , qa.j = jnou;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     D.push_back(qa);
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 }
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 else
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 {
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     b[inou][jnou] = b[p.i][p.j];
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     poz qa;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     qa.i = inou , qa.j = jnou;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                     D.push_front(qa);
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 }
/* 8xd1FW9Ho ily traian Yj57KfeNH */             }
/* 8xd1FW9Ho ily traian Yj57KfeNH */         }
/* 8xd1FW9Ho ily traian Yj57KfeNH */     }
/* 8xd1FW9Ho ily traian Yj57KfeNH */ }
/* 8xd1FW9Ho ily traian Yj57KfeNH */ 
/* 8xd1FW9Ho ily traian Yj57KfeNH */ int lee2(int g)
/* 8xd1FW9Ho ily traian Yj57KfeNH */ {
/* 8xd1FW9Ho ily traian Yj57KfeNH */     int b[505][505] = {0};
/* 8xd1FW9Ho ily traian Yj57KfeNH */     poz p;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     p.i = 1 , p.j = 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     Q.push(p);
/* 8xd1FW9Ho ily traian Yj57KfeNH */     b[1][1] = 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     while( ! Q.empty())
/* 8xd1FW9Ho ily traian Yj57KfeNH */     {
/* 8xd1FW9Ho ily traian Yj57KfeNH */         p = Q.front();
/* 8xd1FW9Ho ily traian Yj57KfeNH */         for(int i = 0 ; i < 4 ; i ++)
/* 8xd1FW9Ho ily traian Yj57KfeNH */         {
/* 8xd1FW9Ho ily traian Yj57KfeNH */             int inou = p.i + di[i];
/* 8xd1FW9Ho ily traian Yj57KfeNH */             int jnou = p.j + dj[i];
/* 8xd1FW9Ho ily traian Yj57KfeNH */             if(inside(inou , jnou) && b[inou][jnou] == 0 && a[inou][jnou] >= g)
/* 8xd1FW9Ho ily traian Yj57KfeNH */             {
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 b[inou][jnou] = b[p.i][p.j] + 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 poz qa;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 qa.i = inou , qa.j = jnou;
/* 8xd1FW9Ho ily traian Yj57KfeNH */                 Q.push(qa);
/* 8xd1FW9Ho ily traian Yj57KfeNH */             }
/* 8xd1FW9Ho ily traian Yj57KfeNH */         }
/* 8xd1FW9Ho ily traian Yj57KfeNH */         Q.pop();
/* 8xd1FW9Ho ily traian Yj57KfeNH */     }
/* 8xd1FW9Ho ily traian Yj57KfeNH */     return b[n][n] != 0;
/* 8xd1FW9Ho ily traian Yj57KfeNH */ 
/* 8xd1FW9Ho ily traian Yj57KfeNH */ }
/* 8xd1FW9Ho ily traian Yj57KfeNH */ int main()
/* 8xd1FW9Ho ily traian Yj57KfeNH */ {
/* 8xd1FW9Ho ily traian Yj57KfeNH */     cin >> cer;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     if(cer == 1)
/* 8xd1FW9Ho ily traian Yj57KfeNH */     {
/* 8xd1FW9Ho ily traian Yj57KfeNH */         cin >> n >> g;
/* 8xd1FW9Ho ily traian Yj57KfeNH */         for(int i = 1 ; i <= n ; i++)
/* 8xd1FW9Ho ily traian Yj57KfeNH */             for(int j = 1 ; j <= n ; j++)
/* 8xd1FW9Ho ily traian Yj57KfeNH */             cin >> a[i][j];
/* 8xd1FW9Ho ily traian Yj57KfeNH */         lee1();
/* 8xd1FW9Ho ily traian Yj57KfeNH */         cout << b[n][n] - 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     }
/* 8xd1FW9Ho ily traian Yj57KfeNH */     else
/* 8xd1FW9Ho ily traian Yj57KfeNH */     {
/* 8xd1FW9Ho ily traian Yj57KfeNH */         cin >> n;
/* 8xd1FW9Ho ily traian Yj57KfeNH */         for(int i = 1 ; i <= n ; i++)
/* 8xd1FW9Ho ily traian Yj57KfeNH */             for(int j = 1 ; j <= n ; j++)
/* 8xd1FW9Ho ily traian Yj57KfeNH */             cin >> a[i][j];
/* 8xd1FW9Ho ily traian Yj57KfeNH */         int st = 1 , dr = 10000;
/* 8xd1FW9Ho ily traian Yj57KfeNH */         while(st <= dr)
/* 8xd1FW9Ho ily traian Yj57KfeNH */         {
/* 8xd1FW9Ho ily traian Yj57KfeNH */             int m = (st + dr) / 2;
/* 8xd1FW9Ho ily traian Yj57KfeNH */             if(lee2(m))st = m + 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */             else dr = m - 1;
/* 8xd1FW9Ho ily traian Yj57KfeNH */         }
/* 8xd1FW9Ho ily traian Yj57KfeNH */         cout << dr ;
/* 8xd1FW9Ho ily traian Yj57KfeNH */     }
/* 8xd1FW9Ho ily traian Yj57KfeNH */ }