/* TqJ6qp9DW ily traian kBoxeSvm6 */ #include <algorithm>
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
/* TqJ6qp9DW ily traian kBoxeSvm6 */ using namespace std;
/* TqJ6qp9DW ily traian kBoxeSvm6 */ ifstream cin("plaja1.in");
/* TqJ6qp9DW ily traian kBoxeSvm6 */ ofstream cout("plaja1.out");
/* TqJ6qp9DW ily traian kBoxeSvm6 */ bool a[2005][2005];
/* TqJ6qp9DW ily traian kBoxeSvm6 */ int n , m , b[2005][2005] , c[2005][2005] , d[2005][2005];
/* TqJ6qp9DW ily traian kBoxeSvm6 */ int main()
/* TqJ6qp9DW ily traian kBoxeSvm6 */ {
/* TqJ6qp9DW ily traian kBoxeSvm6 */     int u , x , y , nr ,s1 , d1 , s2 , d2 , cnt1 = 0 , cnt2 = 0;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     cin >> n >> m >> u;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     for(int i = 1; i <= u; ++i)
/* TqJ6qp9DW ily traian kBoxeSvm6 */     {
/* TqJ6qp9DW ily traian kBoxeSvm6 */         cin >> x >> y;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         a[x][y] = 1;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         b[x][y]++;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         b[x+1][y]--;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         b[x][y+1]--;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         b[x+1][y+1]++;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     }
/* TqJ6qp9DW ily traian kBoxeSvm6 */     for(int i = 1; i <= n; ++i)
/* TqJ6qp9DW ily traian kBoxeSvm6 */         for (int j = 1; j <= m; ++j)
/* TqJ6qp9DW ily traian kBoxeSvm6 */             c[i][j] = c[i-1][j]+c[i][j-1]-c[i-1][j-1]+a[i][j];
/* TqJ6qp9DW ily traian kBoxeSvm6 */     cin >> u;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     for(int i = 1; i <= u; ++i)
/* TqJ6qp9DW ily traian kBoxeSvm6 */     {
/* TqJ6qp9DW ily traian kBoxeSvm6 */         cin >> s1 >> d1 >> s2 >> d2;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         nr = c[s2][d2] - c[s2][d1-1] - c[s1-1][d2] + c[s1-1][d1-1];
/* TqJ6qp9DW ily traian kBoxeSvm6 */         if (nr==0)
/* TqJ6qp9DW ily traian kBoxeSvm6 */         {
/* TqJ6qp9DW ily traian kBoxeSvm6 */             cnt1++;
/* TqJ6qp9DW ily traian kBoxeSvm6 */             b[s1][d1]++;
/* TqJ6qp9DW ily traian kBoxeSvm6 */             b[s2+1][d2+1]++;
/* TqJ6qp9DW ily traian kBoxeSvm6 */             b[s2+1][d1]--;
/* TqJ6qp9DW ily traian kBoxeSvm6 */             b[s1][d2+1]--;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         }
/* TqJ6qp9DW ily traian kBoxeSvm6 */     }
/* TqJ6qp9DW ily traian kBoxeSvm6 */     for(int i = 1; i <= n; ++i)
/* TqJ6qp9DW ily traian kBoxeSvm6 */         for(int j = 1; j <= m; ++j)
/* TqJ6qp9DW ily traian kBoxeSvm6 */             d[i][j] = d[i-1][j]+d[i][j-1]-d[i-1][j-1]+b[i][j];
/* TqJ6qp9DW ily traian kBoxeSvm6 */     for(int i = 1; i <= n; ++i)
/* TqJ6qp9DW ily traian kBoxeSvm6 */         for(int j = 1; j <= m; ++j)
/* TqJ6qp9DW ily traian kBoxeSvm6 */         {
/* TqJ6qp9DW ily traian kBoxeSvm6 */             if(d[i][j] > 0) c[i][j] = c[i-1][j]+c[i][j-1]-c[i-1][j-1]+1;
/* TqJ6qp9DW ily traian kBoxeSvm6 */             else c[i][j] = c[i-1][j]+c[i][j-1]-c[i-1][j-1];
/* TqJ6qp9DW ily traian kBoxeSvm6 */         }
/* TqJ6qp9DW ily traian kBoxeSvm6 */     cin >> u;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     for(int i = 1; i <= u; ++i)
/* TqJ6qp9DW ily traian kBoxeSvm6 */     {
/* TqJ6qp9DW ily traian kBoxeSvm6 */         cin >> s1 >> d1 >> s2 >> d2;
/* TqJ6qp9DW ily traian kBoxeSvm6 */         nr = c[s2][d2] - c[s2][d1-1] - c[s1-1][d2] + c[s1-1][d1-1];
/* TqJ6qp9DW ily traian kBoxeSvm6 */         if(nr==0) cnt2++;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     }
/* TqJ6qp9DW ily traian kBoxeSvm6 */     cout << cnt1 << " " << cnt2;
/* TqJ6qp9DW ily traian kBoxeSvm6 */     return 0;
/* TqJ6qp9DW ily traian kBoxeSvm6 */ }