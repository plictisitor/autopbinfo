/* 9CKwqc3sf ily traian hRIWr1UT2 */ #include <algorithm>
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
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ using namespace std;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ ifstream cin("labirint2.in");
/* 9CKwqc3sf ily traian hRIWr1UT2 */ ofstream cout("labirint2.out");
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ #define Inf 1000001
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ int a[401][401] , n , b , s , k;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ struct poz
/* 9CKwqc3sf ily traian hRIWr1UT2 */ {
/* 9CKwqc3sf ily traian hRIWr1UT2 */     int i , j;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ };
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ queue <poz> q;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ vector< vector<int> > dir;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ bool inside(int i, int j)
/* 9CKwqc3sf ily traian hRIWr1UT2 */ {
/* 9CKwqc3sf ily traian hRIWr1UT2 */     return i <= n && j <= n && i >= 1 && j >= 1;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ }
/* 9CKwqc3sf ily traian hRIWr1UT2 */ void lee()
/* 9CKwqc3sf ily traian hRIWr1UT2 */ {
/* 9CKwqc3sf ily traian hRIWr1UT2 */     a[1][1] = 0;
/* 9CKwqc3sf ily traian hRIWr1UT2 */     q.push({1 , 1});
/* 9CKwqc3sf ily traian hRIWr1UT2 */     poz newr;
/* 9CKwqc3sf ily traian hRIWr1UT2 */     bool ok;
/* 9CKwqc3sf ily traian hRIWr1UT2 */     while(!q.empty())
/* 9CKwqc3sf ily traian hRIWr1UT2 */     {
/* 9CKwqc3sf ily traian hRIWr1UT2 */         poz r;
/* 9CKwqc3sf ily traian hRIWr1UT2 */         r = q.front();
/* 9CKwqc3sf ily traian hRIWr1UT2 */         q.pop();
/* 9CKwqc3sf ily traian hRIWr1UT2 */         newr = r;
/* 9CKwqc3sf ily traian hRIWr1UT2 */         if (a[r.i][r.j] == -1)continue;
/* 9CKwqc3sf ily traian hRIWr1UT2 */         for (int i = 1; i <= s; ++ i)
/* 9CKwqc3sf ily traian hRIWr1UT2 */         {
/* 9CKwqc3sf ily traian hRIWr1UT2 */             ok = 1;
/* 9CKwqc3sf ily traian hRIWr1UT2 */             newr = r;
/* 9CKwqc3sf ily traian hRIWr1UT2 */             for (int j = 0; j < k && ok; ++ j)
/* 9CKwqc3sf ily traian hRIWr1UT2 */             {
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 if (dir[i][j] == 1)newr.i --;
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 else if (dir[i][j] == 2)newr.i ++;
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 else if (dir[i][j] == 3)newr.j ++;
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 else newr.j --;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 if (a[newr.i][newr.j] == -1 || !inside(newr.i, newr.j))ok = 0;
/* 9CKwqc3sf ily traian hRIWr1UT2 */             }
/* 9CKwqc3sf ily traian hRIWr1UT2 */             if (ok && a[r.i][r.j] + 1 < a[newr.i][newr.j])
/* 9CKwqc3sf ily traian hRIWr1UT2 */             {
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 a[newr.i][newr.j] = a[r.i][r.j] + 1;
/* 9CKwqc3sf ily traian hRIWr1UT2 */                 q.push(newr);
/* 9CKwqc3sf ily traian hRIWr1UT2 */             }
/* 9CKwqc3sf ily traian hRIWr1UT2 */         }
/* 9CKwqc3sf ily traian hRIWr1UT2 */     }
/* 9CKwqc3sf ily traian hRIWr1UT2 */ }
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */ void init()
/* 9CKwqc3sf ily traian hRIWr1UT2 */ {
/* 9CKwqc3sf ily traian hRIWr1UT2 */     for (int i = 1; i <= n; i ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */         for (int j = 1; j <= n; j ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */             if(a[i][j] != -1) a[i][j] = Inf;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ }
/* 9CKwqc3sf ily traian hRIWr1UT2 */ int main()
/* 9CKwqc3sf ily traian hRIWr1UT2 */ {
/* 9CKwqc3sf ily traian hRIWr1UT2 */     cin >> n >> b >> s >> k;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */     init();
/* 9CKwqc3sf ily traian hRIWr1UT2 */     for (int i = 1, x, y; i <= b; i ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */     {
/* 9CKwqc3sf ily traian hRIWr1UT2 */         cin >> x >> y;
/* 9CKwqc3sf ily traian hRIWr1UT2 */         if(a[x][y] == Inf) a[x][y] = -1;
/* 9CKwqc3sf ily traian hRIWr1UT2 */         else a[x][y]--;
/* 9CKwqc3sf ily traian hRIWr1UT2 */     }
/* 9CKwqc3sf ily traian hRIWr1UT2 */     init();
/* 9CKwqc3sf ily traian hRIWr1UT2 */     dir = vector< vector<int> >(s + 1);
/* 9CKwqc3sf ily traian hRIWr1UT2 */     char c;
/* 9CKwqc3sf ily traian hRIWr1UT2 */     for (int i = 1; i <= s; i ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */     {
/* 9CKwqc3sf ily traian hRIWr1UT2 */         for (int j = 1; j <= k; j ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */         {
/* 9CKwqc3sf ily traian hRIWr1UT2 */             cin >> c;
/* 9CKwqc3sf ily traian hRIWr1UT2 */             if (c == 'U')dir[i].push_back(1);
/* 9CKwqc3sf ily traian hRIWr1UT2 */             else if (c == 'D')dir[i].push_back(2);
/* 9CKwqc3sf ily traian hRIWr1UT2 */             else if (c == 'R')dir[i].push_back(3);
/* 9CKwqc3sf ily traian hRIWr1UT2 */             else dir[i].push_back(4);
/* 9CKwqc3sf ily traian hRIWr1UT2 */         }
/* 9CKwqc3sf ily traian hRIWr1UT2 */     }
/* 9CKwqc3sf ily traian hRIWr1UT2 */     lee();
/* 9CKwqc3sf ily traian hRIWr1UT2 */     if (a[n][n] != Inf)cout << a[n][n];
/* 9CKwqc3sf ily traian hRIWr1UT2 */     else cout << "Imposibil!";
/* 9CKwqc3sf ily traian hRIWr1UT2 */ 
/* 9CKwqc3sf ily traian hRIWr1UT2 */     /*for (int i = 1; i <= n; i ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */     {
/* 9CKwqc3sf ily traian hRIWr1UT2 */         for (int j = 1; j <= n; j ++)
/* 9CKwqc3sf ily traian hRIWr1UT2 */             fout << a[i][j] <<' ';
/* 9CKwqc3sf ily traian hRIWr1UT2 */         fout << '\n';
/* 9CKwqc3sf ily traian hRIWr1UT2 */     }*/
/* 9CKwqc3sf ily traian hRIWr1UT2 */     return 0;
/* 9CKwqc3sf ily traian hRIWr1UT2 */ }