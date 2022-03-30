/* qYNj741R6 ily traian s3wsfgqrO */ #include <algorithm>
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
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */ using namespace std;
/* qYNj741R6 ily traian s3wsfgqrO */ ifstream cin("labir.in");
/* qYNj741R6 ily traian s3wsfgqrO */ ofstream cout("labir.out");
/* qYNj741R6 ily traian s3wsfgqrO */ const int di[] = {0 , 0 , -1 , 1};
/* qYNj741R6 ily traian s3wsfgqrO */ const int dj[] = {-1 , 1 , 0 , 0};
/* qYNj741R6 ily traian s3wsfgqrO */ int n , m , k , ip , jp , is , js , x , y;
/* qYNj741R6 ily traian s3wsfgqrO */ int X[5002] , Y[5002] , C1[5002] , C2[5002];
/* qYNj741R6 ily traian s3wsfgqrO */ unsigned short b[5001][5001];
/* qYNj741R6 ily traian s3wsfgqrO */ bitset <5002>a[5002];
/* qYNj741R6 ily traian s3wsfgqrO */ struct poz
/* qYNj741R6 ily traian s3wsfgqrO */ {
/* qYNj741R6 ily traian s3wsfgqrO */     int i , j;
/* qYNj741R6 ily traian s3wsfgqrO */ };
/* qYNj741R6 ily traian s3wsfgqrO */ poz v[50002];
/* qYNj741R6 ily traian s3wsfgqrO */ bool inside(int i ,  int j)
/* qYNj741R6 ily traian s3wsfgqrO */ {
/* qYNj741R6 ily traian s3wsfgqrO */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* qYNj741R6 ily traian s3wsfgqrO */ }
/* qYNj741R6 ily traian s3wsfgqrO */ int comprimare(int i , int j)
/* qYNj741R6 ily traian s3wsfgqrO */ {
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */ }
/* qYNj741R6 ily traian s3wsfgqrO */ deque <poz> D;
/* qYNj741R6 ily traian s3wsfgqrO */ int lee(poz str)
/* qYNj741R6 ily traian s3wsfgqrO */ {
/* qYNj741R6 ily traian s3wsfgqrO */     poz p;
/* qYNj741R6 ily traian s3wsfgqrO */     p.i = str.i , p.j = str.j;
/* qYNj741R6 ily traian s3wsfgqrO */     D.push_back(p);
/* qYNj741R6 ily traian s3wsfgqrO */     b[ip][jp] = 1;
/* qYNj741R6 ily traian s3wsfgqrO */     while(! D.empty())
/* qYNj741R6 ily traian s3wsfgqrO */     {
/* qYNj741R6 ily traian s3wsfgqrO */         p = D.front();
/* qYNj741R6 ily traian s3wsfgqrO */         D.pop_front();
/* qYNj741R6 ily traian s3wsfgqrO */         for(int i = 0 ; i < 4 ; i ++)
/* qYNj741R6 ily traian s3wsfgqrO */         {
/* qYNj741R6 ily traian s3wsfgqrO */             int inou = p.i + di[i];
/* qYNj741R6 ily traian s3wsfgqrO */             int jnou = p.j + dj[i];
/* qYNj741R6 ily traian s3wsfgqrO */             if(inside(inou , jnou) && b[inou][jnou] == 0)
/* qYNj741R6 ily traian s3wsfgqrO */             {
/* qYNj741R6 ily traian s3wsfgqrO */                 if(a[inou][jnou] == 1)
/* qYNj741R6 ily traian s3wsfgqrO */                 {
/* qYNj741R6 ily traian s3wsfgqrO */                     b[inou][jnou] = b[p.i][p.j] + 1;
/* qYNj741R6 ily traian s3wsfgqrO */                     D.push_back({inou , jnou});
/* qYNj741R6 ily traian s3wsfgqrO */                 }
/* qYNj741R6 ily traian s3wsfgqrO */                 else
/* qYNj741R6 ily traian s3wsfgqrO */                 {
/* qYNj741R6 ily traian s3wsfgqrO */                     b[inou][jnou] = b[p.i][p.j];
/* qYNj741R6 ily traian s3wsfgqrO */                     D.push_front({inou , jnou});
/* qYNj741R6 ily traian s3wsfgqrO */                 }
/* qYNj741R6 ily traian s3wsfgqrO */             }
/* qYNj741R6 ily traian s3wsfgqrO */         }
/* qYNj741R6 ily traian s3wsfgqrO */     }
/* qYNj741R6 ily traian s3wsfgqrO */     return b[is][js] - 1;
/* qYNj741R6 ily traian s3wsfgqrO */ }
/* qYNj741R6 ily traian s3wsfgqrO */ int main()
/* qYNj741R6 ily traian s3wsfgqrO */ {
/* qYNj741R6 ily traian s3wsfgqrO */     cin >> n >> m;
/* qYNj741R6 ily traian s3wsfgqrO */     cin >> ip >> jp >> is >> js;
/* qYNj741R6 ily traian s3wsfgqrO */     cin >> k;
/* qYNj741R6 ily traian s3wsfgqrO */     for(int i = 1 ; i <= k ; i++)
/* qYNj741R6 ily traian s3wsfgqrO */     {
/* qYNj741R6 ily traian s3wsfgqrO */         cin >> x >> y;
/* qYNj741R6 ily traian s3wsfgqrO */         X[x] = 1;
/* qYNj741R6 ily traian s3wsfgqrO */         Y[y] = 1;
/* qYNj741R6 ily traian s3wsfgqrO */         v[i] = {x , y};
/* qYNj741R6 ily traian s3wsfgqrO */     }
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */     for(int i = 1 ; i <= n ; i++)
/* qYNj741R6 ily traian s3wsfgqrO */     {
/* qYNj741R6 ily traian s3wsfgqrO */         if(X[i] == 0 && (X[i-1] == 0 || X[i-1] == -1) && i != ip && i != is)
/* qYNj741R6 ily traian s3wsfgqrO */         {
/* qYNj741R6 ily traian s3wsfgqrO */             X[i] = -1;
/* qYNj741R6 ily traian s3wsfgqrO */             C1[i] = 1;
/* qYNj741R6 ily traian s3wsfgqrO */         }
/* qYNj741R6 ily traian s3wsfgqrO */     }
/* qYNj741R6 ily traian s3wsfgqrO */     for(int i = 1 ; i <= m ; i++)
/* qYNj741R6 ily traian s3wsfgqrO */     {
/* qYNj741R6 ily traian s3wsfgqrO */         if(Y[i] == 0 && (Y[i-1] == 0 || Y[i-1] == -1) && i != jp && i != js)
/* qYNj741R6 ily traian s3wsfgqrO */         {
/* qYNj741R6 ily traian s3wsfgqrO */             Y[i] = -1;
/* qYNj741R6 ily traian s3wsfgqrO */             C2[i] = 1;
/* qYNj741R6 ily traian s3wsfgqrO */         }
/* qYNj741R6 ily traian s3wsfgqrO */     }
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */     for(int i = 1 ; i <= n ; i++)
/* qYNj741R6 ily traian s3wsfgqrO */         C1[i] = C1[i] + C1[i-1];
/* qYNj741R6 ily traian s3wsfgqrO */     for(int i = 1 ; i <= m ; i++)
/* qYNj741R6 ily traian s3wsfgqrO */         C2[i] = C2[i] + C2[i-1];
/* qYNj741R6 ily traian s3wsfgqrO */     n -= C1[n];
/* qYNj741R6 ily traian s3wsfgqrO */     m -= C2[m];
/* qYNj741R6 ily traian s3wsfgqrO */     ip -= C1[ip];
/* qYNj741R6 ily traian s3wsfgqrO */     is -= C1[is];
/* qYNj741R6 ily traian s3wsfgqrO */     jp -= C2[jp];
/* qYNj741R6 ily traian s3wsfgqrO */     js -= C2[js];
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */     for(int i = 1 ; i <= k ; i++)
/* qYNj741R6 ily traian s3wsfgqrO */     {
/* qYNj741R6 ily traian s3wsfgqrO */         a[v[i].i - C1[v[i].i]][v[i].j - C2[v[i].j]] = 1;
/* qYNj741R6 ily traian s3wsfgqrO */     }
/* qYNj741R6 ily traian s3wsfgqrO */     poz str;
/* qYNj741R6 ily traian s3wsfgqrO */     str.i = ip , str.j = jp;
/* qYNj741R6 ily traian s3wsfgqrO */     cout << lee(str);
/* qYNj741R6 ily traian s3wsfgqrO */ 
/* qYNj741R6 ily traian s3wsfgqrO */ }