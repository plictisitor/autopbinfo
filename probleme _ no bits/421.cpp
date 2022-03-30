/* MPO1d5JX0 ily traian S5gx5Xwl6 */ #include <algorithm>
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
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ using namespace std;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ ifstream fin("graf_partial_1.in");
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ ofstream fout("graf_partial_1.out");
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ int a[105][105];
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ int main()
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     int n , x , y , mini=1000000 , maxi=0 , cnt = 0;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     fin >> n;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     while(fin >> x >> y)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         if (!a[x][y])
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */             a[x][0]++;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */             a[y][0]++;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         a[x][y]=1;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         a[y][x]=1;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     for (int i = 1; i <= n; i++)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         mini = min(mini, a[i][0]);
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         maxi = max(maxi, a[i][0]);
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     for (int i = 1; i <= n; i ++)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         if (a[i][0] == mini)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */             for (int j = 1; j <= n; j ++)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */                 if (a[j][0] == maxi && a[i][j] == 1)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */                 {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */                     a[i][j] = 0;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */                     a[j][i] = 0;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */                     cnt++;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */                 }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     fout << cnt << endl;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     for(int i = 1 ; i <= n ; ++i)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     {
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         for(int j = 1 ; j <= n ; j++)
/* MPO1d5JX0 ily traian S5gx5Xwl6 */             fout << a[i][j] << " ";
/* MPO1d5JX0 ily traian S5gx5Xwl6 */         fout << endl;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     }
/* MPO1d5JX0 ily traian S5gx5Xwl6 */     return 0;
/* MPO1d5JX0 ily traian S5gx5Xwl6 */ }