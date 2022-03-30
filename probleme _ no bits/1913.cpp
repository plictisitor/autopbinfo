/* 0dMPfrds2 ily traian Hs9dng27C */ #include <algorithm>
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
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ using namespace std;
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ ifstream cin("mr.in");
/* 0dMPfrds2 ily traian Hs9dng27C */ ofstream cout("mr.out");
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ const int di[] = {0 , 0 , -1 , 1};
/* 0dMPfrds2 ily traian Hs9dng27C */ const int dj[] = {-1 , 1 , 0 , 0};
/* 0dMPfrds2 ily traian Hs9dng27C */ int n , m , t , x1 , y1 , x2 , y2 , b[101][101];
/* 0dMPfrds2 ily traian Hs9dng27C */ struct poz
/* 0dMPfrds2 ily traian Hs9dng27C */ {
/* 0dMPfrds2 ily traian Hs9dng27C */     int i , j;
/* 0dMPfrds2 ily traian Hs9dng27C */ };
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ struct per
/* 0dMPfrds2 ily traian Hs9dng27C */ {
/* 0dMPfrds2 ily traian Hs9dng27C */     int it , jt , nr;
/* 0dMPfrds2 ily traian Hs9dng27C */ }a[101][101];
/* 0dMPfrds2 ily traian Hs9dng27C */ queue <poz> q;
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ int inside(int i , int j)
/* 0dMPfrds2 ily traian Hs9dng27C */ {
/* 0dMPfrds2 ily traian Hs9dng27C */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* 0dMPfrds2 ily traian Hs9dng27C */ }
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ void lee()
/* 0dMPfrds2 ily traian Hs9dng27C */ {
/* 0dMPfrds2 ily traian Hs9dng27C */     poz r;
/* 0dMPfrds2 ily traian Hs9dng27C */     r.i = 1 , r.j = 1;
/* 0dMPfrds2 ily traian Hs9dng27C */     b[r.i][r.j] = 1;
/* 0dMPfrds2 ily traian Hs9dng27C */     q.push(r);
/* 0dMPfrds2 ily traian Hs9dng27C */     while(!q.empty())
/* 0dMPfrds2 ily traian Hs9dng27C */     {
/* 0dMPfrds2 ily traian Hs9dng27C */         poz r;
/* 0dMPfrds2 ily traian Hs9dng27C */         r = q.front();
/* 0dMPfrds2 ily traian Hs9dng27C */         if(a[r.i][r.j].it)
/* 0dMPfrds2 ily traian Hs9dng27C */         {
/* 0dMPfrds2 ily traian Hs9dng27C */             int inou = a[r.i][r.j].it;
/* 0dMPfrds2 ily traian Hs9dng27C */             int jnou = a[r.i][r.j].jt;
/* 0dMPfrds2 ily traian Hs9dng27C */             if(a[inou][jnou].nr != -1 && (b[inou][jnou] > b[r.i][r.j] + 1 || b[inou][jnou] == 0))
/* 0dMPfrds2 ily traian Hs9dng27C */             {
/* 0dMPfrds2 ily traian Hs9dng27C */                 b[inou][jnou] = b[r.i][r.j] + 1;
/* 0dMPfrds2 ily traian Hs9dng27C */                 q.push({inou , jnou});
/* 0dMPfrds2 ily traian Hs9dng27C */             }
/* 0dMPfrds2 ily traian Hs9dng27C */         }
/* 0dMPfrds2 ily traian Hs9dng27C */         for(int d = 0 ; d < 4 ; d++)
/* 0dMPfrds2 ily traian Hs9dng27C */         {
/* 0dMPfrds2 ily traian Hs9dng27C */             int inou = r.i + di[d];
/* 0dMPfrds2 ily traian Hs9dng27C */             int jnou = r.j + dj[d];
/* 0dMPfrds2 ily traian Hs9dng27C */             if(inside(inou , jnou) && a[inou][jnou].nr != -1 && b[inou][jnou] == 0)
/* 0dMPfrds2 ily traian Hs9dng27C */             {
/* 0dMPfrds2 ily traian Hs9dng27C */                 b[inou][jnou] = b[r.i][r.j] + 1;
/* 0dMPfrds2 ily traian Hs9dng27C */                 q.push({inou , jnou});
/* 0dMPfrds2 ily traian Hs9dng27C */             }
/* 0dMPfrds2 ily traian Hs9dng27C */         }
/* 0dMPfrds2 ily traian Hs9dng27C */         q.pop();
/* 0dMPfrds2 ily traian Hs9dng27C */     }
/* 0dMPfrds2 ily traian Hs9dng27C */ }
/* 0dMPfrds2 ily traian Hs9dng27C */ 
/* 0dMPfrds2 ily traian Hs9dng27C */ int main()
/* 0dMPfrds2 ily traian Hs9dng27C */ {
/* 0dMPfrds2 ily traian Hs9dng27C */     cin >> n >> m;
/* 0dMPfrds2 ily traian Hs9dng27C */     for(int i = 1 ; i <= n ; i++)
/* 0dMPfrds2 ily traian Hs9dng27C */         for(int j = 1 ; j <= m ; j++)
/* 0dMPfrds2 ily traian Hs9dng27C */             cin >> a[i][j].nr;
/* 0dMPfrds2 ily traian Hs9dng27C */     cin >> t;
/* 0dMPfrds2 ily traian Hs9dng27C */     for(int i = 0 ; i < t ; i++)
/* 0dMPfrds2 ily traian Hs9dng27C */     {
/* 0dMPfrds2 ily traian Hs9dng27C */         cin >> x1 >> y1 >> x2 >> y2;
/* 0dMPfrds2 ily traian Hs9dng27C */         a[x1][y1].it = x2;
/* 0dMPfrds2 ily traian Hs9dng27C */         a[x1][y1].jt = y2;
/* 0dMPfrds2 ily traian Hs9dng27C */         a[x2][y2].it = x1;
/* 0dMPfrds2 ily traian Hs9dng27C */         a[x2][y2].jt = y1;
/* 0dMPfrds2 ily traian Hs9dng27C */     }
/* 0dMPfrds2 ily traian Hs9dng27C */     lee();
/* 0dMPfrds2 ily traian Hs9dng27C */     cout << b[n][m] - 1;
/* 0dMPfrds2 ily traian Hs9dng27C */ }