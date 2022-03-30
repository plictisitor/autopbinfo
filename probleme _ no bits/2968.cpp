/* mRCOdctYl ily traian YvwNRUSzq */ #include <algorithm>
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
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ using namespace std;
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ ifstream cin("conexidad.in");
/* mRCOdctYl ily traian YvwNRUSzq */ ofstream cout("conexidad.out");
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ struct muchie
/* mRCOdctYl ily traian YvwNRUSzq */ {
/* mRCOdctYl ily traian YvwNRUSzq */     int i , j;
/* mRCOdctYl ily traian YvwNRUSzq */ }M[101];
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ vector <int> G[101];
/* mRCOdctYl ily traian YvwNRUSzq */ int n , m , C[101] , nc , P[101] , maxip , V[101];
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ void dfs(int v , int c)
/* mRCOdctYl ily traian YvwNRUSzq */ {
/* mRCOdctYl ily traian YvwNRUSzq */     C[v] = c;
/* mRCOdctYl ily traian YvwNRUSzq */     for(int i :G[v])
/* mRCOdctYl ily traian YvwNRUSzq */         if(!C[i]) dfs(i , c);
/* mRCOdctYl ily traian YvwNRUSzq */ }
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ void dfculoare(int v , int c1 , int c2)
/* mRCOdctYl ily traian YvwNRUSzq */ {
/* mRCOdctYl ily traian YvwNRUSzq */     C[v] = c2;
/* mRCOdctYl ily traian YvwNRUSzq */     for(int i :G[v])
/* mRCOdctYl ily traian YvwNRUSzq */         if(C[i] == c1) dfculoare(i , c1 , c2);
/* mRCOdctYl ily traian YvwNRUSzq */ }
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */ int main()
/* mRCOdctYl ily traian YvwNRUSzq */ {
/* mRCOdctYl ily traian YvwNRUSzq */     cin >> n >> m;
/* mRCOdctYl ily traian YvwNRUSzq */     for(int i = 1 ; i <= m ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */     {
/* mRCOdctYl ily traian YvwNRUSzq */         int x , y;
/* mRCOdctYl ily traian YvwNRUSzq */         cin >> x >> y;
/* mRCOdctYl ily traian YvwNRUSzq */         G[x].push_back(y);
/* mRCOdctYl ily traian YvwNRUSzq */         G[y].push_back(x);
/* mRCOdctYl ily traian YvwNRUSzq */         V[x]++;
/* mRCOdctYl ily traian YvwNRUSzq */         V[y]++;
/* mRCOdctYl ily traian YvwNRUSzq */     }
/* mRCOdctYl ily traian YvwNRUSzq */     for(int i = 1 ; i <= n ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */     {
/* mRCOdctYl ily traian YvwNRUSzq */         if(!C[i])
/* mRCOdctYl ily traian YvwNRUSzq */         {
/* mRCOdctYl ily traian YvwNRUSzq */             nc++;
/* mRCOdctYl ily traian YvwNRUSzq */             dfs(i , nc);
/* mRCOdctYl ily traian YvwNRUSzq */         }
/* mRCOdctYl ily traian YvwNRUSzq */     }
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */     for(int k = 1 ; k < nc ; k++)
/* mRCOdctYl ily traian YvwNRUSzq */     {
/* mRCOdctYl ily traian YvwNRUSzq */         int x = 0 , y = 0 , mini = 999999;
/* mRCOdctYl ily traian YvwNRUSzq */         for(int i = 1 ; i < n ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */             for(int j = i + 1 ; j <= n ; j++)
/* mRCOdctYl ily traian YvwNRUSzq */                 if(C[i] != C[j] && P[i] == 0 && P[j] == 0 && V[i] != 0 && V[j] != 0)
/* mRCOdctYl ily traian YvwNRUSzq */                 {
/* mRCOdctYl ily traian YvwNRUSzq */                     x = i;
/* mRCOdctYl ily traian YvwNRUSzq */                     y = j;
/* mRCOdctYl ily traian YvwNRUSzq */                     i = n + 1 , j = n + 1;
/* mRCOdctYl ily traian YvwNRUSzq */                 }
/* mRCOdctYl ily traian YvwNRUSzq */             if(x == 0)
/* mRCOdctYl ily traian YvwNRUSzq */             {
/* mRCOdctYl ily traian YvwNRUSzq */                 for(int i = 1 ; i < n ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */                     for(int j = i + 1 ; j <= n ; j++)
/* mRCOdctYl ily traian YvwNRUSzq */                         if(C[i] != C[j] && (P[i] < mini || P[j] < mini) && (V[i] != 0 || V[j] != 0))
/* mRCOdctYl ily traian YvwNRUSzq */                         {
/* mRCOdctYl ily traian YvwNRUSzq */                             mini = max(P[i] , P[j]);
/* mRCOdctYl ily traian YvwNRUSzq */                             x = i;
/* mRCOdctYl ily traian YvwNRUSzq */                             y = j;
/* mRCOdctYl ily traian YvwNRUSzq */                         }
/* mRCOdctYl ily traian YvwNRUSzq */             }
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */             if(x == 0)
/* mRCOdctYl ily traian YvwNRUSzq */             {
/* mRCOdctYl ily traian YvwNRUSzq */                 for(int i = 1 ; i < n ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */                     for(int j = i + 1 ; j <= n ; j++)
/* mRCOdctYl ily traian YvwNRUSzq */                         if(C[i] != C[j] && (P[i] < mini || P[j] < mini))
/* mRCOdctYl ily traian YvwNRUSzq */                         {
/* mRCOdctYl ily traian YvwNRUSzq */                             mini = max(P[i] , P[j]);
/* mRCOdctYl ily traian YvwNRUSzq */                             x = i;
/* mRCOdctYl ily traian YvwNRUSzq */                             y = j;
/* mRCOdctYl ily traian YvwNRUSzq */                         }
/* mRCOdctYl ily traian YvwNRUSzq */             }
/* mRCOdctYl ily traian YvwNRUSzq */             P[x]++;
/* mRCOdctYl ily traian YvwNRUSzq */             P[y]++;
/* mRCOdctYl ily traian YvwNRUSzq */             M[k] = {x , y};
/* mRCOdctYl ily traian YvwNRUSzq */             G[x].push_back(y);
/* mRCOdctYl ily traian YvwNRUSzq */             G[y].push_back(x);
/* mRCOdctYl ily traian YvwNRUSzq */             dfculoare(y , C[y] , C[x]);
/* mRCOdctYl ily traian YvwNRUSzq */     }
/* mRCOdctYl ily traian YvwNRUSzq */     for(int i = 1 ; i <= n ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */         if(P[i] > maxip) maxip = P[i];
/* mRCOdctYl ily traian YvwNRUSzq */ 
/* mRCOdctYl ily traian YvwNRUSzq */     cout << maxip << '\n' << nc - 1 << '\n';
/* mRCOdctYl ily traian YvwNRUSzq */     for(int i = 1 ; i < nc ; i++)
/* mRCOdctYl ily traian YvwNRUSzq */         cout << M[i].i << " " << M[i].j << '\n';
/* mRCOdctYl ily traian YvwNRUSzq */ }