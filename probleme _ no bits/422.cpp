/* MuAfMvixJ ily traian 5iVLQpgi5 */ #include <algorithm>
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
/* MuAfMvixJ ily traian 5iVLQpgi5 */ using namespace std;
/* MuAfMvixJ ily traian 5iVLQpgi5 */ ifstream fin ("graf_partial_2.in");
/* MuAfMvixJ ily traian 5iVLQpgi5 */ ofstream fout ("graf_partial_2.out");
/* MuAfMvixJ ily traian 5iVLQpgi5 */ int a[101][101], n, x, y, mx, nr, m, mn = 1000000000;
/* MuAfMvixJ ily traian 5iVLQpgi5 */ int main()
/* MuAfMvixJ ily traian 5iVLQpgi5 */ {
/* MuAfMvixJ ily traian 5iVLQpgi5 */     fin >> n;
/* MuAfMvixJ ily traian 5iVLQpgi5 */     while(fin >> x >> y)
/* MuAfMvixJ ily traian 5iVLQpgi5 */     {
/* MuAfMvixJ ily traian 5iVLQpgi5 */         if (a[x][y] == 0)
/* MuAfMvixJ ily traian 5iVLQpgi5 */         {
/* MuAfMvixJ ily traian 5iVLQpgi5 */             a[x][0]++;
/* MuAfMvixJ ily traian 5iVLQpgi5 */             a[y][0]++;
/* MuAfMvixJ ily traian 5iVLQpgi5 */         }
/* MuAfMvixJ ily traian 5iVLQpgi5 */         a[x][y] = 1;
/* MuAfMvixJ ily traian 5iVLQpgi5 */         a[y][x] = 1;
/* MuAfMvixJ ily traian 5iVLQpgi5 */         mx = max(mx, max(a[x][0], a[y][0]));
/* MuAfMvixJ ily traian 5iVLQpgi5 */     }
/* MuAfMvixJ ily traian 5iVLQpgi5 */     m = 0;
/* MuAfMvixJ ily traian 5iVLQpgi5 */     for (int i = 1; i <= n; i++)
/* MuAfMvixJ ily traian 5iVLQpgi5 */     {
/* MuAfMvixJ ily traian 5iVLQpgi5 */         for (int j = 1; j <= n; j++)
/* MuAfMvixJ ily traian 5iVLQpgi5 */         {
/* MuAfMvixJ ily traian 5iVLQpgi5 */             if ((a[i][0] == mx || a[j][0] == mx)&&(a[i][j] == 1))
/* MuAfMvixJ ily traian 5iVLQpgi5 */             {
/* MuAfMvixJ ily traian 5iVLQpgi5 */                 m++;
/* MuAfMvixJ ily traian 5iVLQpgi5 */                 a[i][j] = 0;
/* MuAfMvixJ ily traian 5iVLQpgi5 */                 a[j][i] = 0;
/* MuAfMvixJ ily traian 5iVLQpgi5 */             }
/* MuAfMvixJ ily traian 5iVLQpgi5 */         }
/* MuAfMvixJ ily traian 5iVLQpgi5 */     }
/* MuAfMvixJ ily traian 5iVLQpgi5 */     fout << m << endl;
/* MuAfMvixJ ily traian 5iVLQpgi5 */     for (int i = 1; i <= n; i++)
/* MuAfMvixJ ily traian 5iVLQpgi5 */     {
/* MuAfMvixJ ily traian 5iVLQpgi5 */         for (int j = 1; j <= n; j++)fout << a[i][j] << ' ';
/* MuAfMvixJ ily traian 5iVLQpgi5 */         fout << endl;
/* MuAfMvixJ ily traian 5iVLQpgi5 */     }
/* MuAfMvixJ ily traian 5iVLQpgi5 */     return 0;
/* MuAfMvixJ ily traian 5iVLQpgi5 */ }