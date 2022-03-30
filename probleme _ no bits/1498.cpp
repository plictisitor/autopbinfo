/* YOoPrHBOX ily traian jVTuZh6Zs */ #include <algorithm>
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
/* YOoPrHBOX ily traian jVTuZh6Zs */ using namespace std;
/* YOoPrHBOX ily traian jVTuZh6Zs */ 
/* YOoPrHBOX ily traian jVTuZh6Zs */ ifstream cin("ciocolata.in");
/* YOoPrHBOX ily traian jVTuZh6Zs */ ofstream cout("ciocolata.out");
/* YOoPrHBOX ily traian jVTuZh6Zs */ 
/* YOoPrHBOX ily traian jVTuZh6Zs */ long long a[501][501] , n , m, s[501][501], smax, x1, y1, lx, ly;
/* YOoPrHBOX ily traian jVTuZh6Zs */ int main()
/* YOoPrHBOX ily traian jVTuZh6Zs */ {
/* YOoPrHBOX ily traian jVTuZh6Zs */     cin >> n >> m;
/* YOoPrHBOX ily traian jVTuZh6Zs */     for(int i = 1 ; i <= n ; i++)
/* YOoPrHBOX ily traian jVTuZh6Zs */         for(int j = 1 ; j <= m ; j++)
/* YOoPrHBOX ily traian jVTuZh6Zs */             cin >> a[i][j];
/* YOoPrHBOX ily traian jVTuZh6Zs */ 
/* YOoPrHBOX ily traian jVTuZh6Zs */     for(int i = 1 ; i <= n ; ++i)
/* YOoPrHBOX ily traian jVTuZh6Zs */         for(int j = 1 ; j <= m ; ++j)
/* YOoPrHBOX ily traian jVTuZh6Zs */             s[i][j] = a[i][j] + s[i-1][j];
/* YOoPrHBOX ily traian jVTuZh6Zs */ 
/* YOoPrHBOX ily traian jVTuZh6Zs */     long long s1, sum = 0, lasty;
/* YOoPrHBOX ily traian jVTuZh6Zs */     for (int p = 1; p <= n; p ++)
/* YOoPrHBOX ily traian jVTuZh6Zs */         for (int q = p; q <= n; q ++)
/* YOoPrHBOX ily traian jVTuZh6Zs */         {
/* YOoPrHBOX ily traian jVTuZh6Zs */             sum = 0;
/* YOoPrHBOX ily traian jVTuZh6Zs */             lasty = 1;
/* YOoPrHBOX ily traian jVTuZh6Zs */             for (int j = 1; j <= m; j ++)
/* YOoPrHBOX ily traian jVTuZh6Zs */             {
/* YOoPrHBOX ily traian jVTuZh6Zs */                 s1 = s[q][j] - s[p - 1][j];
/* YOoPrHBOX ily traian jVTuZh6Zs */                 sum += s1;
/* YOoPrHBOX ily traian jVTuZh6Zs */                 if (sum < 0)
/* YOoPrHBOX ily traian jVTuZh6Zs */                 {
/* YOoPrHBOX ily traian jVTuZh6Zs */                     sum = 0;
/* YOoPrHBOX ily traian jVTuZh6Zs */                     lasty = j + 1;
/* YOoPrHBOX ily traian jVTuZh6Zs */                 }
/* YOoPrHBOX ily traian jVTuZh6Zs */                 if (sum > smax)
/* YOoPrHBOX ily traian jVTuZh6Zs */                 {
/* YOoPrHBOX ily traian jVTuZh6Zs */                     smax = sum;
/* YOoPrHBOX ily traian jVTuZh6Zs */                     x1 = p;
/* YOoPrHBOX ily traian jVTuZh6Zs */                     y1 = lasty;
/* YOoPrHBOX ily traian jVTuZh6Zs */                     lx = q - p;
/* YOoPrHBOX ily traian jVTuZh6Zs */                     ly = j - lasty;
/* YOoPrHBOX ily traian jVTuZh6Zs */                 }
/* YOoPrHBOX ily traian jVTuZh6Zs */             }
/* YOoPrHBOX ily traian jVTuZh6Zs */         }
/* YOoPrHBOX ily traian jVTuZh6Zs */     cout << smax << '\n';
/* YOoPrHBOX ily traian jVTuZh6Zs */     cout << x1 << ' ' << y1 << ' ';
/* YOoPrHBOX ily traian jVTuZh6Zs */     cout << x1 << ' ' << y1 + ly << '\n';
/* YOoPrHBOX ily traian jVTuZh6Zs */     cout << x1 + lx << ' ' << y1 << ' ';
/* YOoPrHBOX ily traian jVTuZh6Zs */     cout << x1 + lx << ' ' << y1 + ly << ' ';
/* YOoPrHBOX ily traian jVTuZh6Zs */     return 0;
/* YOoPrHBOX ily traian jVTuZh6Zs */ }