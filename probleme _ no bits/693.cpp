/* WGKmUREzY ily traian VP3S5NzZQ */ #include <algorithm>
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
/* WGKmUREzY ily traian VP3S5NzZQ */ using namespace std;
/* WGKmUREzY ily traian VP3S5NzZQ */ ifstream cin("sahara.in");
/* WGKmUREzY ily traian VP3S5NzZQ */ ofstream cout("sahara.out");
/* WGKmUREzY ily traian VP3S5NzZQ */ const int di[]={-1 , 0 , 1 , 0};
/* WGKmUREzY ily traian VP3S5NzZQ */ const int dj[]={0 , 1 , 0 , -1};
/* WGKmUREzY ily traian VP3S5NzZQ */ int n , m , q;
/* WGKmUREzY ily traian VP3S5NzZQ */ int a[1002][1002], numar;
/* WGKmUREzY ily traian VP3S5NzZQ */ 
/* WGKmUREzY ily traian VP3S5NzZQ */ struct poz{int i , j;};
/* WGKmUREzY ily traian VP3S5NzZQ */ 
/* WGKmUREzY ily traian VP3S5NzZQ */ bool inside(int i , int j)
/* WGKmUREzY ily traian VP3S5NzZQ */ {
/* WGKmUREzY ily traian VP3S5NzZQ */     return i>=1 && i<=n && j>=1 && j<=m;
/* WGKmUREzY ily traian VP3S5NzZQ */ }
/* WGKmUREzY ily traian VP3S5NzZQ */ void Fill(int x, int y)
/* WGKmUREzY ily traian VP3S5NzZQ */ {
/* WGKmUREzY ily traian VP3S5NzZQ */     if (!inside(x, y) || a[x][y] < q)return;
/* WGKmUREzY ily traian VP3S5NzZQ */     a[x][y] = -1;
/* WGKmUREzY ily traian VP3S5NzZQ */     numar ++;
/* WGKmUREzY ily traian VP3S5NzZQ */     Fill(x + 1, y);
/* WGKmUREzY ily traian VP3S5NzZQ */     Fill(x, y + 1);
/* WGKmUREzY ily traian VP3S5NzZQ */     Fill(x - 1, y);
/* WGKmUREzY ily traian VP3S5NzZQ */     Fill(x, y - 1);
/* WGKmUREzY ily traian VP3S5NzZQ */ }
/* WGKmUREzY ily traian VP3S5NzZQ */ int main()
/* WGKmUREzY ily traian VP3S5NzZQ */ {
/* WGKmUREzY ily traian VP3S5NzZQ */     int nr;
/* WGKmUREzY ily traian VP3S5NzZQ */     cin >> n >> m >> q;
/* WGKmUREzY ily traian VP3S5NzZQ */     cin >> nr;
/* WGKmUREzY ily traian VP3S5NzZQ */     for (int i = 1, x1, y1, x2, y2, add; i <= nr; i ++)
/* WGKmUREzY ily traian VP3S5NzZQ */     {
/* WGKmUREzY ily traian VP3S5NzZQ */         cin >> x1 >> y1 >> x2 >> y2 >> add;
/* WGKmUREzY ily traian VP3S5NzZQ */         a[x1][y1] += add;
/* WGKmUREzY ily traian VP3S5NzZQ */         a[x1][y2 + 1] -= add;
/* WGKmUREzY ily traian VP3S5NzZQ */         a[x2 + 1][y1] -= add;
/* WGKmUREzY ily traian VP3S5NzZQ */         a[x2 + 1][y2 + 1] += add;
/* WGKmUREzY ily traian VP3S5NzZQ */     }
/* WGKmUREzY ily traian VP3S5NzZQ */     for(int i = 1 ; i <= n ; ++i)
/* WGKmUREzY ily traian VP3S5NzZQ */         for(int j = 1 ; j <= m ; ++j)
/* WGKmUREzY ily traian VP3S5NzZQ */             a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
/* WGKmUREzY ily traian VP3S5NzZQ */ 
/* WGKmUREzY ily traian VP3S5NzZQ */     int mx= 0;
/* WGKmUREzY ily traian VP3S5NzZQ */     for(int i = 1 ; i <= n ; ++i)
/* WGKmUREzY ily traian VP3S5NzZQ */         for(int j = 1 ; j <= m ; ++j)
/* WGKmUREzY ily traian VP3S5NzZQ */             if (a[i][j] >= q)
/* WGKmUREzY ily traian VP3S5NzZQ */             {
/* WGKmUREzY ily traian VP3S5NzZQ */                 numar = 0;
/* WGKmUREzY ily traian VP3S5NzZQ */                 Fill(i, j);
/* WGKmUREzY ily traian VP3S5NzZQ */                 mx = max(numar, mx);
/* WGKmUREzY ily traian VP3S5NzZQ */             }
/* WGKmUREzY ily traian VP3S5NzZQ */          cout << mx;
/* WGKmUREzY ily traian VP3S5NzZQ */     return 0;
/* WGKmUREzY ily traian VP3S5NzZQ */ }