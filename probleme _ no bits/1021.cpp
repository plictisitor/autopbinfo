/* iFUhmTJuf ily traian hqnM0WRKW */ #include <algorithm>
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
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ using namespace std;
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ const int N = 205, oo = 1e9;
/* iFUhmTJuf ily traian hqnM0WRKW */ using VI  = vector<int>;
/* iFUhmTJuf ily traian hqnM0WRKW */ using VVI = vector<VI>;
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ VI dx = {1, -1, 0, 0, -2, 2, 1, 1, -1, -1, 0, 0};
/* iFUhmTJuf ily traian hqnM0WRKW */ VI dy = {0, 0, 1, -1, 0, 0, 1, -1, 1, -1, 2, -2};
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ VVI a(N, VI(N)), d(N, VI(N));
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ queue <pair<int, int>> q;
/* iFUhmTJuf ily traian hqnM0WRKW */ VI eulcycle;
/* iFUhmTJuf ily traian hqnM0WRKW */ vector<pair<int, int>> L[N * N];
/* iFUhmTJuf ily traian hqnM0WRKW */ bitset<105> used;   
/* iFUhmTJuf ily traian hqnM0WRKW */ int n, m, task, xc, yc;
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ inline bool Inside (int x, int y)
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     return (x > 0 && y > 0 && x <= n && y <= m);    
/* iFUhmTJuf ily traian hqnM0WRKW */ }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ void Initiate ()
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     for (int i = 1; i <= n; i++)    
/* iFUhmTJuf ily traian hqnM0WRKW */         for (int j = 1; j <= m; j++)
/* iFUhmTJuf ily traian hqnM0WRKW */             d[i][j] = oo;
/* iFUhmTJuf ily traian hqnM0WRKW */ }
/* iFUhmTJuf ily traian hqnM0WRKW */ 
/* iFUhmTJuf ily traian hqnM0WRKW */ void Lee (int xc, int yc)   
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     d[xc][yc] = 0;  
/* iFUhmTJuf ily traian hqnM0WRKW */     q.push({xc, yc});
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     while (!q.empty())
/* iFUhmTJuf ily traian hqnM0WRKW */     {
/* iFUhmTJuf ily traian hqnM0WRKW */         int i = q.front().first;
/* iFUhmTJuf ily traian hqnM0WRKW */         int j = q.front().second;
/* iFUhmTJuf ily traian hqnM0WRKW */         q.pop();
/* iFUhmTJuf ily traian hqnM0WRKW */         for (int dir = 0; dir < 4; dir++)
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             int x = i + dx[dir];
/* iFUhmTJuf ily traian hqnM0WRKW */             int y = j + dy[dir];
/* iFUhmTJuf ily traian hqnM0WRKW */             if (Inside(x, y) && !a[x][y] && d[x][y] > 1 + d[i][j])
/* iFUhmTJuf ily traian hqnM0WRKW */             {
/* iFUhmTJuf ily traian hqnM0WRKW */                 d[x][y] = 1 + d[i][j];
/* iFUhmTJuf ily traian hqnM0WRKW */                 q.push({x, y});
/* iFUhmTJuf ily traian hqnM0WRKW */             }
/* iFUhmTJuf ily traian hqnM0WRKW */         }
/* iFUhmTJuf ily traian hqnM0WRKW */     }
/* iFUhmTJuf ily traian hqnM0WRKW */ }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ inline int Convert(int x, int y)    
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     return (x - 1) * m + y; 
/* iFUhmTJuf ily traian hqnM0WRKW */ }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ void Eulerian_Cycle(int start)  
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     stack <int> st; 
/* iFUhmTJuf ily traian hqnM0WRKW */     st.push(start);
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     while (!st.empty())
/* iFUhmTJuf ily traian hqnM0WRKW */     {
/* iFUhmTJuf ily traian hqnM0WRKW */         int currnode = st.top();
/* iFUhmTJuf ily traian hqnM0WRKW */         if (L[currnode].size())
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             pair <int, int> next = L[currnode].back();
/* iFUhmTJuf ily traian hqnM0WRKW */             L[currnode].pop_back();
/* iFUhmTJuf ily traian hqnM0WRKW */             if (!used[next.second])
/* iFUhmTJuf ily traian hqnM0WRKW */             {
/* iFUhmTJuf ily traian hqnM0WRKW */                 used[next.second] = 1;
/* iFUhmTJuf ily traian hqnM0WRKW */                 st.push(next.first);
/* iFUhmTJuf ily traian hqnM0WRKW */             }
/* iFUhmTJuf ily traian hqnM0WRKW */         }
/* iFUhmTJuf ily traian hqnM0WRKW */         else
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             st.pop();
/* iFUhmTJuf ily traian hqnM0WRKW */             eulcycle.push_back(currnode);
/* iFUhmTJuf ily traian hqnM0WRKW */         }
/* iFUhmTJuf ily traian hqnM0WRKW */     }
/* iFUhmTJuf ily traian hqnM0WRKW */ }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ void Solve()
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     ifstream fin ("cartite.in");    
/* iFUhmTJuf ily traian hqnM0WRKW */     int i, j, k, t, x, y, G;
/* iFUhmTJuf ily traian hqnM0WRKW */     fin >> task;
/* iFUhmTJuf ily traian hqnM0WRKW */     fin >> n >> m;
/* iFUhmTJuf ily traian hqnM0WRKW */     fin >> xc >> yc;
/* iFUhmTJuf ily traian hqnM0WRKW */     fin >> k;
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     for (i = 1; i <= k; i++)
/* iFUhmTJuf ily traian hqnM0WRKW */     {
/* iFUhmTJuf ily traian hqnM0WRKW */         fin >> x >> y >> t;
/* iFUhmTJuf ily traian hqnM0WRKW */         a[x][y] = 1;
/* iFUhmTJuf ily traian hqnM0WRKW */         if (t >= 1)
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             for (int dir = 0; dir < 4; dir++)
/* iFUhmTJuf ily traian hqnM0WRKW */             {
/* iFUhmTJuf ily traian hqnM0WRKW */                 int xx = x + dx[dir];
/* iFUhmTJuf ily traian hqnM0WRKW */                 int yy = y + dy[dir];
/* iFUhmTJuf ily traian hqnM0WRKW */                 if (Inside(xx, yy)) 
/* iFUhmTJuf ily traian hqnM0WRKW */                     a[xx][yy] = 1;
/* iFUhmTJuf ily traian hqnM0WRKW */             }
/* iFUhmTJuf ily traian hqnM0WRKW */             if (t == 2)
/* iFUhmTJuf ily traian hqnM0WRKW */             {
/* iFUhmTJuf ily traian hqnM0WRKW */                 for (int dir = 4; dir < 12; dir++)
/* iFUhmTJuf ily traian hqnM0WRKW */                 {
/* iFUhmTJuf ily traian hqnM0WRKW */                     int xx = x + dx[dir];
/* iFUhmTJuf ily traian hqnM0WRKW */                     int yy = y + dy[dir];
/* iFUhmTJuf ily traian hqnM0WRKW */                     if (Inside(xx, yy)) 
/* iFUhmTJuf ily traian hqnM0WRKW */                         a[xx][yy] = 1;
/* iFUhmTJuf ily traian hqnM0WRKW */                 }
/* iFUhmTJuf ily traian hqnM0WRKW */             }
/* iFUhmTJuf ily traian hqnM0WRKW */         }
/* iFUhmTJuf ily traian hqnM0WRKW */     }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     Initiate();
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     Lee(xc, yc);
/* iFUhmTJuf ily traian hqnM0WRKW */     fin >> G;
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     int mindist = oo, posx, posy, x1, y1;
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     for (int step = 1; step <= G; step++)
/* iFUhmTJuf ily traian hqnM0WRKW */     {
/* iFUhmTJuf ily traian hqnM0WRKW */         fin >> i >> j >> x1 >> y1;
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */         if (d[i][j] < mindist)
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             mindist = d[i][j];
/* iFUhmTJuf ily traian hqnM0WRKW */             posx = i;
/* iFUhmTJuf ily traian hqnM0WRKW */             posy = j;
/* iFUhmTJuf ily traian hqnM0WRKW */         }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */         if (d[x1][y1] < mindist)
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             mindist = d[x1][y1];
/* iFUhmTJuf ily traian hqnM0WRKW */             posx = x1;
/* iFUhmTJuf ily traian hqnM0WRKW */             posy = y1;
/* iFUhmTJuf ily traian hqnM0WRKW */         }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */         y = Convert(x1, y1);
/* iFUhmTJuf ily traian hqnM0WRKW */         x = Convert(i, j);
/* iFUhmTJuf ily traian hqnM0WRKW */         L[x].push_back({y, step});
/* iFUhmTJuf ily traian hqnM0WRKW */         L[y].push_back({x, step});
/* iFUhmTJuf ily traian hqnM0WRKW */     }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     ofstream fout ("cartite.out");
/* iFUhmTJuf ily traian hqnM0WRKW */     if (task == 1)
/* iFUhmTJuf ily traian hqnM0WRKW */     {
/* iFUhmTJuf ily traian hqnM0WRKW */         fout << posx << " " << posy << " " << mindist << "\n";
/* iFUhmTJuf ily traian hqnM0WRKW */     }
/* iFUhmTJuf ily traian hqnM0WRKW */     else
/* iFUhmTJuf ily traian hqnM0WRKW */     {
/* iFUhmTJuf ily traian hqnM0WRKW */         Eulerian_Cycle(Convert(posx, posy));
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */         for (size_t i = 0; i < eulcycle.size(); i++)
/* iFUhmTJuf ily traian hqnM0WRKW */         {
/* iFUhmTJuf ily traian hqnM0WRKW */             int r = eulcycle[i] / m;
/* iFUhmTJuf ily traian hqnM0WRKW */             int mod = eulcycle[i] % m;
/* iFUhmTJuf ily traian hqnM0WRKW */             if (mod != 0) r++;
/* iFUhmTJuf ily traian hqnM0WRKW */             fout << r << " ";
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */             if (mod == 0) mod = m;
/* iFUhmTJuf ily traian hqnM0WRKW */             fout << mod << "\n";
/* iFUhmTJuf ily traian hqnM0WRKW */         } 
/* iFUhmTJuf ily traian hqnM0WRKW */     }
/* iFUhmTJuf ily traian hqnM0WRKW */     fout.close();
/* iFUhmTJuf ily traian hqnM0WRKW */ }
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */ int main()  
/* iFUhmTJuf ily traian hqnM0WRKW */ {
/* iFUhmTJuf ily traian hqnM0WRKW */     Solve();
/* iFUhmTJuf ily traian hqnM0WRKW */     
/* iFUhmTJuf ily traian hqnM0WRKW */     return 0;   
/* iFUhmTJuf ily traian hqnM0WRKW */ }