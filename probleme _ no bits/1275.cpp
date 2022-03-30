/* j6PJZRUmD ily traian QkHBs1C8s */ #include <algorithm>
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
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ using namespace std;
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ ifstream cin("jaina.in");
/* j6PJZRUmD ily traian QkHBs1C8s */ ofstream cout("jaina.out");
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ const int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
/* j6PJZRUmD ily traian QkHBs1C8s */ const int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ int n , ip , jp , is , js , t , ii , jj;
/* j6PJZRUmD ily traian QkHBs1C8s */ int a[101][101] , b[101][101];
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ struct poz
/* j6PJZRUmD ily traian QkHBs1C8s */ {
/* j6PJZRUmD ily traian QkHBs1C8s */     int i , j;
/* j6PJZRUmD ily traian QkHBs1C8s */ }v[11];
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ queue <poz> Q;
/* j6PJZRUmD ily traian QkHBs1C8s */ int inside(int i , int j)
/* j6PJZRUmD ily traian QkHBs1C8s */ {
/* j6PJZRUmD ily traian QkHBs1C8s */     return i >= 1 && i <= n && j >= 1 && j <= n;
/* j6PJZRUmD ily traian QkHBs1C8s */ }
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ void lee()
/* j6PJZRUmD ily traian QkHBs1C8s */ {
/* j6PJZRUmD ily traian QkHBs1C8s */     poz r;
/* j6PJZRUmD ily traian QkHBs1C8s */     r.i = ip;
/* j6PJZRUmD ily traian QkHBs1C8s */     r.j = jp;
/* j6PJZRUmD ily traian QkHBs1C8s */     Q.push(r);
/* j6PJZRUmD ily traian QkHBs1C8s */     a[ip][jp] = 1;
/* j6PJZRUmD ily traian QkHBs1C8s */     while(!Q.empty())
/* j6PJZRUmD ily traian QkHBs1C8s */     {
/* j6PJZRUmD ily traian QkHBs1C8s */         r = Q.front();
/* j6PJZRUmD ily traian QkHBs1C8s */         for(int d = 0 ; d < 8 ; d++)
/* j6PJZRUmD ily traian QkHBs1C8s */         {
/* j6PJZRUmD ily traian QkHBs1C8s */             int inou = r.i + di[d];
/* j6PJZRUmD ily traian QkHBs1C8s */             int jnou = r.j + dj[d];
/* j6PJZRUmD ily traian QkHBs1C8s */             if(inside(inou,jnou))
/* j6PJZRUmD ily traian QkHBs1C8s */                 if(b[inou][jnou] == 0)
/* j6PJZRUmD ily traian QkHBs1C8s */                     if(a[inou][jnou] == 0)
/* j6PJZRUmD ily traian QkHBs1C8s */                     {
/* j6PJZRUmD ily traian QkHBs1C8s */                         Q.push({inou , jnou});
/* j6PJZRUmD ily traian QkHBs1C8s */                         a[inou][jnou] = a[r.i][r.j] + 1;
/* j6PJZRUmD ily traian QkHBs1C8s */                     }
/* j6PJZRUmD ily traian QkHBs1C8s */                     else;
/* j6PJZRUmD ily traian QkHBs1C8s */                 else
/* j6PJZRUmD ily traian QkHBs1C8s */                 {
/* j6PJZRUmD ily traian QkHBs1C8s */                     int raza = b[inou][jnou];
/* j6PJZRUmD ily traian QkHBs1C8s */                     if(a[v[raza].i][v[raza].j] == 0)
/* j6PJZRUmD ily traian QkHBs1C8s */                     {
/* j6PJZRUmD ily traian QkHBs1C8s */                         Q.push({v[raza].i , v[raza].j});
/* j6PJZRUmD ily traian QkHBs1C8s */                         a[v[raza].i][v[raza].j] = a[r.i][r.j] + 1;
/* j6PJZRUmD ily traian QkHBs1C8s */                     }
/* j6PJZRUmD ily traian QkHBs1C8s */                 }
/* j6PJZRUmD ily traian QkHBs1C8s */         }
/* j6PJZRUmD ily traian QkHBs1C8s */         Q.pop();
/* j6PJZRUmD ily traian QkHBs1C8s */     }
/* j6PJZRUmD ily traian QkHBs1C8s */ }
/* j6PJZRUmD ily traian QkHBs1C8s */ 
/* j6PJZRUmD ily traian QkHBs1C8s */ int main()
/* j6PJZRUmD ily traian QkHBs1C8s */ {
/* j6PJZRUmD ily traian QkHBs1C8s */     cin >> n >> ip >> jp >> is >> js >> t;
/* j6PJZRUmD ily traian QkHBs1C8s */     for(int i = 1 ; i <= t ; i++)
/* j6PJZRUmD ily traian QkHBs1C8s */         cin >> v[i].i >> v[i].j;
/* j6PJZRUmD ily traian QkHBs1C8s */     for(int i = 1 ; i <= t ; i++)
/* j6PJZRUmD ily traian QkHBs1C8s */     {
/* j6PJZRUmD ily traian QkHBs1C8s */         for(int k = 1 ; k <= n ; k++)
/* j6PJZRUmD ily traian QkHBs1C8s */         {
/* j6PJZRUmD ily traian QkHBs1C8s */             if(b[v[i].i][k] == 0) b[v[i].i][k] = i;
/* j6PJZRUmD ily traian QkHBs1C8s */             if(b[k][v[i].j] == 0) b[k][v[i].j] = i;
/* j6PJZRUmD ily traian QkHBs1C8s */         }
/* j6PJZRUmD ily traian QkHBs1C8s */     }
/* j6PJZRUmD ily traian QkHBs1C8s */     lee();
/* j6PJZRUmD ily traian QkHBs1C8s */     cout << a[is][js] - 1;
/* j6PJZRUmD ily traian QkHBs1C8s */ }