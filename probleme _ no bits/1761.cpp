/* Rth76Vuuv ily traian XmlrqrFqt */ #include <algorithm>
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
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ using namespace std;
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ ifstream cin("brutar.in");
/* Rth76Vuuv ily traian XmlrqrFqt */ ofstream cout("brutar.out");
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ int n , m , x , y;
/* Rth76Vuuv ily traian XmlrqrFqt */ bool a[1001][1001];
/* Rth76Vuuv ily traian XmlrqrFqt */ int b[1001][1001];
/* Rth76Vuuv ily traian XmlrqrFqt */ struct poz
/* Rth76Vuuv ily traian XmlrqrFqt */ {
/* Rth76Vuuv ily traian XmlrqrFqt */     int i , j;
/* Rth76Vuuv ily traian XmlrqrFqt */ };
/* Rth76Vuuv ily traian XmlrqrFqt */  poz P[10001] , D[1000001];
/* Rth76Vuuv ily traian XmlrqrFqt */ queue <poz> Q;
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ int di[6] = { 0 , 0 , 1 , -1};
/* Rth76Vuuv ily traian XmlrqrFqt */ int dj[6] = {-1 , 1 , 0 ,  0};
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ bool inside(int i , int j)
/* Rth76Vuuv ily traian XmlrqrFqt */ {
/* Rth76Vuuv ily traian XmlrqrFqt */     return i >= 1 && j >= 1 && i <= n && j <= m;
/* Rth76Vuuv ily traian XmlrqrFqt */ }
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ void lee()
/* Rth76Vuuv ily traian XmlrqrFqt */ {
/* Rth76Vuuv ily traian XmlrqrFqt */     while(!Q.empty())
/* Rth76Vuuv ily traian XmlrqrFqt */     {
/* Rth76Vuuv ily traian XmlrqrFqt */         poz r;
/* Rth76Vuuv ily traian XmlrqrFqt */         r = Q.front();
/* Rth76Vuuv ily traian XmlrqrFqt */         for(int i = 0 ; i < 6 ; i++)
/* Rth76Vuuv ily traian XmlrqrFqt */         {
/* Rth76Vuuv ily traian XmlrqrFqt */             int inou = r.i + di[i];
/* Rth76Vuuv ily traian XmlrqrFqt */             int jnou = r.j + dj[i];
/* Rth76Vuuv ily traian XmlrqrFqt */             if(inside(inou , jnou) && b[inou][jnou] == 0 && a[inou][jnou] == 1)
/* Rth76Vuuv ily traian XmlrqrFqt */             {
/* Rth76Vuuv ily traian XmlrqrFqt */                 b[inou][jnou] = b[r.i][r.j] + 1;
/* Rth76Vuuv ily traian XmlrqrFqt */                 Q.push({inou , jnou});
/* Rth76Vuuv ily traian XmlrqrFqt */             }
/* Rth76Vuuv ily traian XmlrqrFqt */         }
/* Rth76Vuuv ily traian XmlrqrFqt */         Q.pop();
/* Rth76Vuuv ily traian XmlrqrFqt */     }
/* Rth76Vuuv ily traian XmlrqrFqt */ }
/* Rth76Vuuv ily traian XmlrqrFqt */ 
/* Rth76Vuuv ily traian XmlrqrFqt */ int main()
/* Rth76Vuuv ily traian XmlrqrFqt */ {
/* Rth76Vuuv ily traian XmlrqrFqt */     cin >> n >> m;
/* Rth76Vuuv ily traian XmlrqrFqt */     char s;
/* Rth76Vuuv ily traian XmlrqrFqt */     for(int i = 1 ; i <= n ; i++)
/* Rth76Vuuv ily traian XmlrqrFqt */         for(int j = 1 ; j <= m ; j++)
/* Rth76Vuuv ily traian XmlrqrFqt */         {
/* Rth76Vuuv ily traian XmlrqrFqt */             cin >> s;
/* Rth76Vuuv ily traian XmlrqrFqt */             if(s == 'O') a[i][j] = 1;
/* Rth76Vuuv ily traian XmlrqrFqt */             else if(s == 'X') a[i][j] = 0;
/* Rth76Vuuv ily traian XmlrqrFqt */         }
/* Rth76Vuuv ily traian XmlrqrFqt */      cin >> x >> s;
/* Rth76Vuuv ily traian XmlrqrFqt */      if(s == 'N') di[4] = -x;
/* Rth76Vuuv ily traian XmlrqrFqt */      else if(s == 'S') di[4] = x;
/* Rth76Vuuv ily traian XmlrqrFqt */      cin >> x >> s;
/* Rth76Vuuv ily traian XmlrqrFqt */      if(s == 'E') dj[4] = x;
/* Rth76Vuuv ily traian XmlrqrFqt */      else dj[4] = -x;
/* Rth76Vuuv ily traian XmlrqrFqt */      cin >> x >> s;
/* Rth76Vuuv ily traian XmlrqrFqt */      if(s == 'N') di[5] = -x;
/* Rth76Vuuv ily traian XmlrqrFqt */      else if(s == 'S') di[5] = x;
/* Rth76Vuuv ily traian XmlrqrFqt */      cin >> x >> s;
/* Rth76Vuuv ily traian XmlrqrFqt */      if(s == 'E') dj[5] = x;
/* Rth76Vuuv ily traian XmlrqrFqt */      else dj[5] = -x;
/* Rth76Vuuv ily traian XmlrqrFqt */      for(int i = 1 ; i <= m ; i++)
/* Rth76Vuuv ily traian XmlrqrFqt */         if(a[1][i] == 1) {Q.push({1 , i});b[1][i] = 1;}
/* Rth76Vuuv ily traian XmlrqrFqt */     lee();
/* Rth76Vuuv ily traian XmlrqrFqt */     /*for(int i = 1 ; i <= n ; i++)
/* Rth76Vuuv ily traian XmlrqrFqt */     {
/* Rth76Vuuv ily traian XmlrqrFqt */         for(int j = 1 ; j <= m ; j++)
/* Rth76Vuuv ily traian XmlrqrFqt */             cout << b[i][j] << " ";
/* Rth76Vuuv ily traian XmlrqrFqt */         cout << '\n';
/* Rth76Vuuv ily traian XmlrqrFqt */     }*/
/* Rth76Vuuv ily traian XmlrqrFqt */     int mini = 1000000 , pmin = 0;
/* Rth76Vuuv ily traian XmlrqrFqt */     for(int i = 1 ; i <= m ; i++)
/* Rth76Vuuv ily traian XmlrqrFqt */         if(b[n][i] > 0 && b[n][i] < mini)
/* Rth76Vuuv ily traian XmlrqrFqt */         {
/* Rth76Vuuv ily traian XmlrqrFqt */             mini = b[n][i];
/* Rth76Vuuv ily traian XmlrqrFqt */             pmin = i;
/* Rth76Vuuv ily traian XmlrqrFqt */         }
/* Rth76Vuuv ily traian XmlrqrFqt */     int i = n , j = pmin , k = mini;
/* Rth76Vuuv ily traian XmlrqrFqt */     cout << mini << '\n';
/* Rth76Vuuv ily traian XmlrqrFqt */     D[k].i = n , D[k].j = j;
/* Rth76Vuuv ily traian XmlrqrFqt */     di[4] = -di[4];
/* Rth76Vuuv ily traian XmlrqrFqt */      dj[4] = -dj[4];
/* Rth76Vuuv ily traian XmlrqrFqt */      di[5] = -di[5];
/* Rth76Vuuv ily traian XmlrqrFqt */      dj[5] = -dj[5];
/* Rth76Vuuv ily traian XmlrqrFqt */     while(i != 1)
/* Rth76Vuuv ily traian XmlrqrFqt */     {
/* Rth76Vuuv ily traian XmlrqrFqt */         for(int d = 0 ; d < 6 ; d++)
/* Rth76Vuuv ily traian XmlrqrFqt */         {
/* Rth76Vuuv ily traian XmlrqrFqt */             int inou = i + di[d];
/* Rth76Vuuv ily traian XmlrqrFqt */             int jnou = j + dj[d];
/* Rth76Vuuv ily traian XmlrqrFqt */             if(inside(inou , jnou) && b[inou][jnou] == b[i][j] - 1)
/* Rth76Vuuv ily traian XmlrqrFqt */             {
/* Rth76Vuuv ily traian XmlrqrFqt */                 i = inou;
/* Rth76Vuuv ily traian XmlrqrFqt */                 j = jnou;
/* Rth76Vuuv ily traian XmlrqrFqt */                 D[--k] = {i , j};
/* Rth76Vuuv ily traian XmlrqrFqt */                 break;
/* Rth76Vuuv ily traian XmlrqrFqt */             }
/* Rth76Vuuv ily traian XmlrqrFqt */         }
/* Rth76Vuuv ily traian XmlrqrFqt */     }
/* Rth76Vuuv ily traian XmlrqrFqt */     for(int i = 1 ; i <= mini ; i++)
/* Rth76Vuuv ily traian XmlrqrFqt */         cout << D[i].i << " " << D[i].j << '\n';
/* Rth76Vuuv ily traian XmlrqrFqt */ }