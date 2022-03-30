/* zpcvhuDvr ily traian yDjqRl5Q2 */ #include <algorithm>
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
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */ using namespace std;
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */ ifstream fin ("berze.in");
/* zpcvhuDvr ily traian yDjqRl5Q2 */ ofstream fout ("berze.out");
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */ #define MAX 1001
/* zpcvhuDvr ily traian yDjqRl5Q2 */ #define MOD 700001
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */ int n, m, nxt[MAX];
/* zpcvhuDvr ily traian yDjqRl5Q2 */ int A[MAX][MAX];
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */ int main()
/* zpcvhuDvr ily traian yDjqRl5Q2 */ {
/* zpcvhuDvr ily traian yDjqRl5Q2 */     fin >> n >> m;
/* zpcvhuDvr ily traian yDjqRl5Q2 */     for (int i = 1, x, y; i <= m; i ++)
/* zpcvhuDvr ily traian yDjqRl5Q2 */     {
/* zpcvhuDvr ily traian yDjqRl5Q2 */         fin >> x >> y;
/* zpcvhuDvr ily traian yDjqRl5Q2 */         nxt[x] = max(nxt[x], y + 1);
/* zpcvhuDvr ily traian yDjqRl5Q2 */     }
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */     for (int i = 1; i <= n; i ++)
/* zpcvhuDvr ily traian yDjqRl5Q2 */         nxt[i] = max(nxt[i], nxt[i - 1]);
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */     A[0][0] = 1;
/* zpcvhuDvr ily traian yDjqRl5Q2 */     for (int i = 1; i <= n; i ++)
/* zpcvhuDvr ily traian yDjqRl5Q2 */         for (int j = 0; j <= n; j ++)
/* zpcvhuDvr ily traian yDjqRl5Q2 */         {
/* zpcvhuDvr ily traian yDjqRl5Q2 */             if (!A[i - 1][j]) continue;
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */             A[i][j] += A[i - 1][j];
/* zpcvhuDvr ily traian yDjqRl5Q2 */             A[i][j] %= MOD;
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */             if (j <= i)
/* zpcvhuDvr ily traian yDjqRl5Q2 */             {
/* zpcvhuDvr ily traian yDjqRl5Q2 */                 A[i][nxt[i - 1]] += A[i - 1][j];
/* zpcvhuDvr ily traian yDjqRl5Q2 */                 A[i][nxt[i - 1]] %= MOD;
/* zpcvhuDvr ily traian yDjqRl5Q2 */             }
/* zpcvhuDvr ily traian yDjqRl5Q2 */             else
/* zpcvhuDvr ily traian yDjqRl5Q2 */             {
/* zpcvhuDvr ily traian yDjqRl5Q2 */                 A[j][nxt[i - 1]] += A[i - 1][j];
/* zpcvhuDvr ily traian yDjqRl5Q2 */                 A[j][nxt[i - 1]] %= MOD;
/* zpcvhuDvr ily traian yDjqRl5Q2 */             }
/* zpcvhuDvr ily traian yDjqRl5Q2 */         }
/* zpcvhuDvr ily traian yDjqRl5Q2 */ 
/* zpcvhuDvr ily traian yDjqRl5Q2 */     int rez = 0;
/* zpcvhuDvr ily traian yDjqRl5Q2 */     for (int i = 0; i <= n; ++i)
/* zpcvhuDvr ily traian yDjqRl5Q2 */     {
/* zpcvhuDvr ily traian yDjqRl5Q2 */         rez += A[n][i];
/* zpcvhuDvr ily traian yDjqRl5Q2 */         rez %= MOD;
/* zpcvhuDvr ily traian yDjqRl5Q2 */     }
/* zpcvhuDvr ily traian yDjqRl5Q2 */     fout << rez;
/* zpcvhuDvr ily traian yDjqRl5Q2 */     return 0;
/* zpcvhuDvr ily traian yDjqRl5Q2 */ }