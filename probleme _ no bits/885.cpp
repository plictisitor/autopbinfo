/* Sac6YrAWG ily traian FFpWlcekr */ #include <algorithm>
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
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ using namespace std;
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ ifstream cin("imperii.in");
/* Sac6YrAWG ily traian FFpWlcekr */ ofstream cout("imperii.out");
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ #define Inf 100000001
/* Sac6YrAWG ily traian FFpWlcekr */ #define Max 1001
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ struct poz
/* Sac6YrAWG ily traian FFpWlcekr */ {
/* Sac6YrAWG ily traian FFpWlcekr */     int i , j;
/* Sac6YrAWG ily traian FFpWlcekr */ };
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ const int di[] = {-1 , 1 , 0 ,  0};
/* Sac6YrAWG ily traian FFpWlcekr */ const int dj[] = {0 ,  0 ,  -1 , 1};
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ queue< pair<int, poz> > Q;
/* Sac6YrAWG ily traian FFpWlcekr */ int n , m;
/* Sac6YrAWG ily traian FFpWlcekr */ int d1[Max][Max], d2[Max][Max], d3[Max][Max], d4[Max][Max];
/* Sac6YrAWG ily traian FFpWlcekr */ bool a[Max][Max];
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ int inside(int i , int j)
/* Sac6YrAWG ily traian FFpWlcekr */ {
/* Sac6YrAWG ily traian FFpWlcekr */     return i >= 1 && i <= n && j >= 1 && j <=m;
/* Sac6YrAWG ily traian FFpWlcekr */ }
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */ void Lee(int i , int j, int d[][Max])
/* Sac6YrAWG ily traian FFpWlcekr */ {
/* Sac6YrAWG ily traian FFpWlcekr */     poz x;
/* Sac6YrAWG ily traian FFpWlcekr */     x.i = i;
/* Sac6YrAWG ily traian FFpWlcekr */     x.j = j;
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */     Q.push(make_pair(0, x));
/* Sac6YrAWG ily traian FFpWlcekr */     while(!Q.empty())
/* Sac6YrAWG ily traian FFpWlcekr */     {
/* Sac6YrAWG ily traian FFpWlcekr */         x = Q.front().second;
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */         if (Q.front().first < d[x.i][x.j])
/* Sac6YrAWG ily traian FFpWlcekr */             continue;
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */         for(int i = 0 ; i < 4 ; i++)
/* Sac6YrAWG ily traian FFpWlcekr */         {
/* Sac6YrAWG ily traian FFpWlcekr */             int inou = x.i + di[i];
/* Sac6YrAWG ily traian FFpWlcekr */             int jnou = x.j + dj[i];
/* Sac6YrAWG ily traian FFpWlcekr */             if(inside(inou , jnou) && (d[inou][jnou] > d[x.i][x.j] + 1 || d[inou][jnou] == 0) && a[inou][jnou] != 1)
/* Sac6YrAWG ily traian FFpWlcekr */             {
/* Sac6YrAWG ily traian FFpWlcekr */                 poz y;
/* Sac6YrAWG ily traian FFpWlcekr */                 y.i = inou;
/* Sac6YrAWG ily traian FFpWlcekr */                 y.j = jnou;
/* Sac6YrAWG ily traian FFpWlcekr */                 d[inou][jnou] = d[x.i][x.j] + 1;
/* Sac6YrAWG ily traian FFpWlcekr */                 Q.push(make_pair(d[inou][jnou], y));
/* Sac6YrAWG ily traian FFpWlcekr */             }
/* Sac6YrAWG ily traian FFpWlcekr */         }
/* Sac6YrAWG ily traian FFpWlcekr */         Q.pop();
/* Sac6YrAWG ily traian FFpWlcekr */     }
/* Sac6YrAWG ily traian FFpWlcekr */     d[i][j] = 0;
/* Sac6YrAWG ily traian FFpWlcekr */ }
/* Sac6YrAWG ily traian FFpWlcekr */ int main()
/* Sac6YrAWG ily traian FFpWlcekr */ {
/* Sac6YrAWG ily traian FFpWlcekr */     char c, c1, c2, c3, c4;
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */     cin >> n >> m;
/* Sac6YrAWG ily traian FFpWlcekr */     for (int i = 1; i <= n; i ++)
/* Sac6YrAWG ily traian FFpWlcekr */         for (int j = 1; j <= m; j ++)
/* Sac6YrAWG ily traian FFpWlcekr */         {
/* Sac6YrAWG ily traian FFpWlcekr */             cin >> c;
/* Sac6YrAWG ily traian FFpWlcekr */             if (c == '#')a[i][j] = 1;
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */             if (i == 1 && j == 1)c1 = c;
/* Sac6YrAWG ily traian FFpWlcekr */             if (i == 1 && j == m)c2 = c;
/* Sac6YrAWG ily traian FFpWlcekr */             if (i == n && j == 1)c3 = c;
/* Sac6YrAWG ily traian FFpWlcekr */             if (i == n && j == m)c4 = c;
/* Sac6YrAWG ily traian FFpWlcekr */         }
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */     Lee(1, 1, d1);
/* Sac6YrAWG ily traian FFpWlcekr */     Lee(1, m, d2);
/* Sac6YrAWG ily traian FFpWlcekr */     Lee(n, 1, d3);
/* Sac6YrAWG ily traian FFpWlcekr */     Lee(n, m, d4);
/* Sac6YrAWG ily traian FFpWlcekr */ 
/* Sac6YrAWG ily traian FFpWlcekr */     for (int i = 1; i <= n; i ++)
/* Sac6YrAWG ily traian FFpWlcekr */     {
/* Sac6YrAWG ily traian FFpWlcekr */         for (int j = 1; j <= m; j ++)
/* Sac6YrAWG ily traian FFpWlcekr */         {
/* Sac6YrAWG ily traian FFpWlcekr */             if (a[i][j])cout <<'#';
/* Sac6YrAWG ily traian FFpWlcekr */             else if (d1[i][j] < d2[i][j] && d1[i][j] < d3[i][j] && d1[i][j] < d4[i][j])cout << c1;
/* Sac6YrAWG ily traian FFpWlcekr */             else if (d2[i][j] < d1[i][j] && d2[i][j] < d3[i][j] && d2[i][j] < d4[i][j])cout << c2;
/* Sac6YrAWG ily traian FFpWlcekr */             else if (d3[i][j] < d2[i][j] && d3[i][j] < d1[i][j] && d3[i][j] < d4[i][j])cout << c3;
/* Sac6YrAWG ily traian FFpWlcekr */             else if (d4[i][j] < d2[i][j] && d4[i][j] < d1[i][j] && d4[i][j] < d3[i][j])cout << c4;
/* Sac6YrAWG ily traian FFpWlcekr */             else cout << '-';
/* Sac6YrAWG ily traian FFpWlcekr */         }
/* Sac6YrAWG ily traian FFpWlcekr */         cout << '\n';
/* Sac6YrAWG ily traian FFpWlcekr */     }
/* Sac6YrAWG ily traian FFpWlcekr */ }