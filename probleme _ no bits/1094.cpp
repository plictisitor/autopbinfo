/* B2MUVRGp9 ily traian PsNJ1so7Q */ #include <algorithm>
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
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ using namespace std;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ ifstream cin ("immortal.in");
/* B2MUVRGp9 ily traian PsNJ1so7Q */ ofstream cout ("immortal.out");
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ const int di[] = {1, 0, -1, 0};
/* B2MUVRGp9 ily traian PsNJ1so7Q */ const int dj[] = {0, 1, 0, -1};
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ const int di2[] = {2, 0, -2, 0};
/* B2MUVRGp9 ily traian PsNJ1so7Q */ const int dj2[] = {0, 2, 0, -2};
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ int n, m, nrf;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ bool mort[500], ok;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ int a[21][21];
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ vector< pair<int, int> > fr;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ struct patru
/* B2MUVRGp9 ily traian PsNJ1so7Q */ {
/* B2MUVRGp9 ily traian PsNJ1so7Q */     int a, b, c, d;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ }rasp[500];
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ void afis();
/* B2MUVRGp9 ily traian PsNJ1so7Q */ void back(int);
/* B2MUVRGp9 ily traian PsNJ1so7Q */ bool inside(int, int);
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */ int main()
/* B2MUVRGp9 ily traian PsNJ1so7Q */ {
/* B2MUVRGp9 ily traian PsNJ1so7Q */     cin >> n >> m >> nrf;
/* B2MUVRGp9 ily traian PsNJ1so7Q */     fr = vector< pair<int, int> >(nrf + 1);
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */     for (int i = 1; i <= nrf; i ++)
/* B2MUVRGp9 ily traian PsNJ1so7Q */     {
/* B2MUVRGp9 ily traian PsNJ1so7Q */         cin >> fr[i].first >> fr[i].second;
/* B2MUVRGp9 ily traian PsNJ1so7Q */         a[fr[i].first][fr[i].second] = i;
/* B2MUVRGp9 ily traian PsNJ1so7Q */     }
/* B2MUVRGp9 ily traian PsNJ1so7Q */     back(1);
/* B2MUVRGp9 ily traian PsNJ1so7Q */     return 0;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ }
/* B2MUVRGp9 ily traian PsNJ1so7Q */ void back(int ind)
/* B2MUVRGp9 ily traian PsNJ1so7Q */ {
/* B2MUVRGp9 ily traian PsNJ1so7Q */     if (ok)return;
/* B2MUVRGp9 ily traian PsNJ1so7Q */     if (ind == nrf)
/* B2MUVRGp9 ily traian PsNJ1so7Q */     {
/* B2MUVRGp9 ily traian PsNJ1so7Q */         afis();
/* B2MUVRGp9 ily traian PsNJ1so7Q */         ok = 1;
/* B2MUVRGp9 ily traian PsNJ1so7Q */         return;
/* B2MUVRGp9 ily traian PsNJ1so7Q */     }
/* B2MUVRGp9 ily traian PsNJ1so7Q */     int x, y;
/* B2MUVRGp9 ily traian PsNJ1so7Q */     for (int i = 1; i <= nrf; ++ i)
/* B2MUVRGp9 ily traian PsNJ1so7Q */         if (!mort[i])
/* B2MUVRGp9 ily traian PsNJ1so7Q */         {
/* B2MUVRGp9 ily traian PsNJ1so7Q */             x = fr[i].first;
/* B2MUVRGp9 ily traian PsNJ1so7Q */             y = fr[i].second;
/* B2MUVRGp9 ily traian PsNJ1so7Q */             for (int d = 0, p; d < 4; ++ d)
/* B2MUVRGp9 ily traian PsNJ1so7Q */                 if (a[x + di[d]][y + dj[d]] && !a[x + di2[d]][y + dj2[d]] && inside(x + di2[d], y + dj2[d]))
/* B2MUVRGp9 ily traian PsNJ1so7Q */                 {
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     p = a[x + di[d]][y + dj[d]];
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     mort[a[x + di[d]][y + dj[d]]] = 1;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     a[x + di[d]][y + dj[d]] = 0;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     a[x + di2[d]][y + dj2[d]] = i;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     a[x][y] = 0;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     fr[i].first = x + di2[d];
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     fr[i].second = y + dj2[d];
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     rasp[ind].a = x; rasp[ind].b = y;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     rasp[ind].c = x + di2[d]; rasp[ind].d = y + dj2[d];
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     back(ind + 1);
/* B2MUVRGp9 ily traian PsNJ1so7Q */ 
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     mort[p] = 0;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     a[x + di[d]][y + dj[d]] = p;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     a[x + di2[d]][y + dj2[d]] = 0;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     a[x][y] = i;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     fr[i].first = x;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                     fr[i].second = y;
/* B2MUVRGp9 ily traian PsNJ1so7Q */                 }
/* B2MUVRGp9 ily traian PsNJ1so7Q */         }
/* B2MUVRGp9 ily traian PsNJ1so7Q */ }
/* B2MUVRGp9 ily traian PsNJ1so7Q */ void afis()
/* B2MUVRGp9 ily traian PsNJ1so7Q */ {
/* B2MUVRGp9 ily traian PsNJ1so7Q */     for (int i = 1; i <= nrf - 1; ++ i)
/* B2MUVRGp9 ily traian PsNJ1so7Q */         cout << rasp[i].a << ' ' << rasp[i].b << ' ' << rasp[i].c << ' ' << rasp[i].d << '\n';
/* B2MUVRGp9 ily traian PsNJ1so7Q */ }
/* B2MUVRGp9 ily traian PsNJ1so7Q */ bool inside(int x, int y)
/* B2MUVRGp9 ily traian PsNJ1so7Q */ {
/* B2MUVRGp9 ily traian PsNJ1so7Q */     return x <= n && y <= m && x >= 1 && y >= 1;
/* B2MUVRGp9 ily traian PsNJ1so7Q */ }