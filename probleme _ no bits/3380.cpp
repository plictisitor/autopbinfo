/* 8h39jbJnB ily traian xrXgEwJsV */ #include <algorithm>
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
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */ using namespace std;
/* 8h39jbJnB ily traian xrXgEwJsV */ #define inf 9999
/* 8h39jbJnB ily traian xrXgEwJsV */ ifstream cin("castel2.in");
/* 8h39jbJnB ily traian xrXgEwJsV */ ofstream cout("castel2.out");
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */ const int di[] = { 0 , 0 , -1 , 1};
/* 8h39jbJnB ily traian xrXgEwJsV */ const int dj[] = {-1 , 1 ,  0 , 0};
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */ int n , m , k , a[1001][1001] , b[1001][1001];
/* 8h39jbJnB ily traian xrXgEwJsV */ char c;
/* 8h39jbJnB ily traian xrXgEwJsV */ struct poz
/* 8h39jbJnB ily traian xrXgEwJsV */ {
/* 8h39jbJnB ily traian xrXgEwJsV */     int i , j;
/* 8h39jbJnB ily traian xrXgEwJsV */     poz(int i_, int j_)
/* 8h39jbJnB ily traian xrXgEwJsV */     {
/* 8h39jbJnB ily traian xrXgEwJsV */         i = i_;
/* 8h39jbJnB ily traian xrXgEwJsV */         j = j_;
/* 8h39jbJnB ily traian xrXgEwJsV */     }
/* 8h39jbJnB ily traian xrXgEwJsV */     poz(){};
/* 8h39jbJnB ily traian xrXgEwJsV */ };
/* 8h39jbJnB ily traian xrXgEwJsV */ queue <poz> Q;
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */ bool inside(int i , int j)
/* 8h39jbJnB ily traian xrXgEwJsV */ {
/* 8h39jbJnB ily traian xrXgEwJsV */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* 8h39jbJnB ily traian xrXgEwJsV */ }
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */ void lee(int i , int j)
/* 8h39jbJnB ily traian xrXgEwJsV */ {
/* 8h39jbJnB ily traian xrXgEwJsV */     poz x;
/* 8h39jbJnB ily traian xrXgEwJsV */     x.i = i;
/* 8h39jbJnB ily traian xrXgEwJsV */     x.j = j;
/* 8h39jbJnB ily traian xrXgEwJsV */     Q.push(x);
/* 8h39jbJnB ily traian xrXgEwJsV */     b[x.i][x.j] = 1;
/* 8h39jbJnB ily traian xrXgEwJsV */     while(!Q.empty())
/* 8h39jbJnB ily traian xrXgEwJsV */     {
/* 8h39jbJnB ily traian xrXgEwJsV */         poz r;
/* 8h39jbJnB ily traian xrXgEwJsV */         r = Q.front();
/* 8h39jbJnB ily traian xrXgEwJsV */         for(int d = 0 ; d < 4 ; d++)
/* 8h39jbJnB ily traian xrXgEwJsV */         {
/* 8h39jbJnB ily traian xrXgEwJsV */             int inou = r.i + di[d];
/* 8h39jbJnB ily traian xrXgEwJsV */             int jnou = r.j + dj[d];
/* 8h39jbJnB ily traian xrXgEwJsV */             if(inside(inou , jnou) && b[inou][jnou] == 0 && a[inou][jnou] != -1 && a[inou][jnou] != -2)
/* 8h39jbJnB ily traian xrXgEwJsV */             {
/* 8h39jbJnB ily traian xrXgEwJsV */                 Q.push({inou , jnou});
/* 8h39jbJnB ily traian xrXgEwJsV */                 b[inou][jnou] = b[r.i][r.j] + 1;
/* 8h39jbJnB ily traian xrXgEwJsV */             }
/* 8h39jbJnB ily traian xrXgEwJsV */         }
/* 8h39jbJnB ily traian xrXgEwJsV */         Q.pop();
/* 8h39jbJnB ily traian xrXgEwJsV */     }
/* 8h39jbJnB ily traian xrXgEwJsV */ }
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */ int main()
/* 8h39jbJnB ily traian xrXgEwJsV */ {
/* 8h39jbJnB ily traian xrXgEwJsV */     cin >> n >> m >> k;
/* 8h39jbJnB ily traian xrXgEwJsV */     for(int i = 1 ; i <= n ; i++)
/* 8h39jbJnB ily traian xrXgEwJsV */     {
/* 8h39jbJnB ily traian xrXgEwJsV */         for(int j = 1 ; j <= m ; j++)
/* 8h39jbJnB ily traian xrXgEwJsV */         {
/* 8h39jbJnB ily traian xrXgEwJsV */             cin >> c;
/* 8h39jbJnB ily traian xrXgEwJsV */             if(c == '#') a[i][j] = -1;
/* 8h39jbJnB ily traian xrXgEwJsV */             if(c == 'Z') a[i][j] = -2;
/* 8h39jbJnB ily traian xrXgEwJsV */         }
/* 8h39jbJnB ily traian xrXgEwJsV */     }
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */     queue< pair<poz, int> > Q;
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */     for (int i = 1; i <= n; ++ i)
/* 8h39jbJnB ily traian xrXgEwJsV */         for (int j = 1; j <= m; ++ j)
/* 8h39jbJnB ily traian xrXgEwJsV */             if (a[i][j] == -2)///zmeu
/* 8h39jbJnB ily traian xrXgEwJsV */                 Q.push({poz(i, j), 0});
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */     ///leezmeu
/* 8h39jbJnB ily traian xrXgEwJsV */     poz x;
/* 8h39jbJnB ily traian xrXgEwJsV */     int dist;
/* 8h39jbJnB ily traian xrXgEwJsV */     while (!Q.empty())
/* 8h39jbJnB ily traian xrXgEwJsV */     {
/* 8h39jbJnB ily traian xrXgEwJsV */         x = Q.front().first;
/* 8h39jbJnB ily traian xrXgEwJsV */         dist = Q.front().second;
/* 8h39jbJnB ily traian xrXgEwJsV */         Q.pop();
/* 8h39jbJnB ily traian xrXgEwJsV */ 
/* 8h39jbJnB ily traian xrXgEwJsV */         for(int d = 0 ; d < 4 ; d++)
/* 8h39jbJnB ily traian xrXgEwJsV */         {
/* 8h39jbJnB ily traian xrXgEwJsV */             int inou = x.i + di[d];
/* 8h39jbJnB ily traian xrXgEwJsV */             int jnou = x.j + dj[d];
/* 8h39jbJnB ily traian xrXgEwJsV */             if(inside(inou , jnou) && a[inou][jnou] != -1 && a[inou][jnou] != -2 && dist + 1 <= k)
/* 8h39jbJnB ily traian xrXgEwJsV */             {
/* 8h39jbJnB ily traian xrXgEwJsV */                 Q.push({poz(inou , jnou), dist + 1});
/* 8h39jbJnB ily traian xrXgEwJsV */                 a[inou][jnou] = -2;
/* 8h39jbJnB ily traian xrXgEwJsV */             }
/* 8h39jbJnB ily traian xrXgEwJsV */         }
/* 8h39jbJnB ily traian xrXgEwJsV */     }
/* 8h39jbJnB ily traian xrXgEwJsV */     lee(1 , 1);
/* 8h39jbJnB ily traian xrXgEwJsV */     if (b[n][m] == 0) cout << "-1";
/* 8h39jbJnB ily traian xrXgEwJsV */     else cout << b[n][m];
/* 8h39jbJnB ily traian xrXgEwJsV */ }