/* pzB9Cxu8c ily traian olpmVsrIv */ #include <algorithm>
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
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ using namespace std;
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ ifstream cin("ninjago.in");
/* pzB9Cxu8c ily traian olpmVsrIv */ ofstream cout("ninjago.out");
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ int n , m , x , y , cer , cost , v[31205] , T[31205] , cnt , nrm;
/* pzB9Cxu8c ily traian olpmVsrIv */ vector <int> G[31205];
/* pzB9Cxu8c ily traian olpmVsrIv */ vector <pair<int , int>> GR[31205];
/* pzB9Cxu8c ily traian olpmVsrIv */ char a , b , c , d;
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ struct poz
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     int i , j , w , areE;
/* pzB9Cxu8c ily traian olpmVsrIv */ }M[31205];
/* pzB9Cxu8c ily traian olpmVsrIv */ poz A[31205];
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ void dfs(int nod)
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     v[nod] = 1;
/* pzB9Cxu8c ily traian olpmVsrIv */     for(auto i : G[nod])
/* pzB9Cxu8c ily traian olpmVsrIv */         if(!v[i]) v[i] = 1 , dfs(i);
/* pzB9Cxu8c ily traian olpmVsrIv */ }
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ bool comp(poz a , poz b)
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     return a.w < b.w;
/* pzB9Cxu8c ily traian olpmVsrIv */ }
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ int radacina(int a)
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     if(a == T[a]) return a;
/* pzB9Cxu8c ily traian olpmVsrIv */     else return T[a] = radacina(T[a]);
/* pzB9Cxu8c ily traian olpmVsrIv */ }
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ int leaga(int a , int b)
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     if(T[a] > T[b]) T[a] = T[b];
/* pzB9Cxu8c ily traian olpmVsrIv */     else T[b] = T[a];
/* pzB9Cxu8c ily traian olpmVsrIv */ }
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ void kruskal()
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     int r1 , r2;
/* pzB9Cxu8c ily traian olpmVsrIv */     for(int i = 1 ; i <= m ; i++)
/* pzB9Cxu8c ily traian olpmVsrIv */     {
/* pzB9Cxu8c ily traian olpmVsrIv */         r1 = radacina(M[i].i);
/* pzB9Cxu8c ily traian olpmVsrIv */         r2 = radacina(M[i].j);
/* pzB9Cxu8c ily traian olpmVsrIv */         if(r1 != r2)
/* pzB9Cxu8c ily traian olpmVsrIv */         {
/* pzB9Cxu8c ily traian olpmVsrIv */             nrm++;
/* pzB9Cxu8c ily traian olpmVsrIv */             A[nrm] = M[i];
/* pzB9Cxu8c ily traian olpmVsrIv */             leaga(r1 , r2);
/* pzB9Cxu8c ily traian olpmVsrIv */         }
/* pzB9Cxu8c ily traian olpmVsrIv */     }
/* pzB9Cxu8c ily traian olpmVsrIv */ }
/* pzB9Cxu8c ily traian olpmVsrIv */ 
/* pzB9Cxu8c ily traian olpmVsrIv */ int main()
/* pzB9Cxu8c ily traian olpmVsrIv */ {
/* pzB9Cxu8c ily traian olpmVsrIv */     cin >> cer >> n >> m;
/* pzB9Cxu8c ily traian olpmVsrIv */     for(int i = 1 ; i <= m ; i++)
/* pzB9Cxu8c ily traian olpmVsrIv */     {
/* pzB9Cxu8c ily traian olpmVsrIv */         cin >> M[i].i >> M[i].j >> a >> b >> c >> d;
/* pzB9Cxu8c ily traian olpmVsrIv */         cost = 0;
/* pzB9Cxu8c ily traian olpmVsrIv */         if(a != 'E' && b != 'E' && c != 'E' && d != 'E')
/* pzB9Cxu8c ily traian olpmVsrIv */         {
/* pzB9Cxu8c ily traian olpmVsrIv */             G[M[i].i].push_back(M[i].j);
/* pzB9Cxu8c ily traian olpmVsrIv */             G[M[i].j].push_back(M[i].i);
/* pzB9Cxu8c ily traian olpmVsrIv */             cost = (a - 'A' + 1) + 5 * (b - 'A' + 1) + 25 * (c - 'A' + 1) + 125 * (d - 'A' + 1);
/* pzB9Cxu8c ily traian olpmVsrIv */             M[i].areE = 0;
/* pzB9Cxu8c ily traian olpmVsrIv */         }
/* pzB9Cxu8c ily traian olpmVsrIv */         else
/* pzB9Cxu8c ily traian olpmVsrIv */         {
/* pzB9Cxu8c ily traian olpmVsrIv */             if(a != 'E')
/* pzB9Cxu8c ily traian olpmVsrIv */                 cost += (a - 'A' + 1);
/* pzB9Cxu8c ily traian olpmVsrIv */             if(b != 'E')
/* pzB9Cxu8c ily traian olpmVsrIv */                 cost += 5 * (b - 'A' + 1);
/* pzB9Cxu8c ily traian olpmVsrIv */             if(c != 'E')
/* pzB9Cxu8c ily traian olpmVsrIv */                 cost += 25 * (c - 'A' + 1);
/* pzB9Cxu8c ily traian olpmVsrIv */             if(d != 'E')
/* pzB9Cxu8c ily traian olpmVsrIv */                 cost += 125 * (d - 'A' + 1);
/* pzB9Cxu8c ily traian olpmVsrIv */             int nr = 0;
/* pzB9Cxu8c ily traian olpmVsrIv */             if(a == 'E') nr++;if(b == 'E') nr++;if(c == 'E') nr++;if(d == 'E') nr++;
/* pzB9Cxu8c ily traian olpmVsrIv */             M[i].areE = nr;
/* pzB9Cxu8c ily traian olpmVsrIv */             cost += 1000 * nr;
/* pzB9Cxu8c ily traian olpmVsrIv */         }
/* pzB9Cxu8c ily traian olpmVsrIv */         M[i].w = cost;
/* pzB9Cxu8c ily traian olpmVsrIv */     }
/* pzB9Cxu8c ily traian olpmVsrIv */     if(cer == 1)
/* pzB9Cxu8c ily traian olpmVsrIv */     {
/* pzB9Cxu8c ily traian olpmVsrIv */         dfs(1);
/* pzB9Cxu8c ily traian olpmVsrIv */         int cnt = 0;
/* pzB9Cxu8c ily traian olpmVsrIv */         for(int i = 1 ; i <= n ; i++)
/* pzB9Cxu8c ily traian olpmVsrIv */             if(v[i] != 0) cnt++;
/* pzB9Cxu8c ily traian olpmVsrIv */         cout << cnt;
/* pzB9Cxu8c ily traian olpmVsrIv */     }
/* pzB9Cxu8c ily traian olpmVsrIv */     else
/* pzB9Cxu8c ily traian olpmVsrIv */     {
/* pzB9Cxu8c ily traian olpmVsrIv */         for(int i = 1 ; i <= n ; i++)
/* pzB9Cxu8c ily traian olpmVsrIv */             T[i] = i;
/* pzB9Cxu8c ily traian olpmVsrIv */         sort(M + 1 , M + m + 1 , comp);
/* pzB9Cxu8c ily traian olpmVsrIv */         
/* pzB9Cxu8c ily traian olpmVsrIv */         kruskal();
/* pzB9Cxu8c ily traian olpmVsrIv */         
/* pzB9Cxu8c ily traian olpmVsrIv */         int p = 0 , sum = 0 , cateE = 0;;
/* pzB9Cxu8c ily traian olpmVsrIv */         for(int i = 1 ; i <= nrm ; i++)
/* pzB9Cxu8c ily traian olpmVsrIv */         {
/* pzB9Cxu8c ily traian olpmVsrIv */             if(A[i].areE > 0) p++ , cateE += A[i].areE;
/* pzB9Cxu8c ily traian olpmVsrIv */             sum += A[i].w - A[i].areE * 1000;
/* pzB9Cxu8c ily traian olpmVsrIv */         }
/* pzB9Cxu8c ily traian olpmVsrIv */         
/* pzB9Cxu8c ily traian olpmVsrIv */         if(cer == 2) cout << p << '\n' << cateE;
/* pzB9Cxu8c ily traian olpmVsrIv */         else cout << sum;
/* pzB9Cxu8c ily traian olpmVsrIv */     }
/* pzB9Cxu8c ily traian olpmVsrIv */ }