/* OX5bdb8EU ily traian BeKiFWsL7 */ #include <algorithm>
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
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ using namespace std;
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ const static int kMaxN = 1000;
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */ int main() {
/* OX5bdb8EU ily traian BeKiFWsL7 */     ifstream cin("traseu.in");
/* OX5bdb8EU ily traian BeKiFWsL7 */     ofstream cout("traseu.out");
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */     int N, M; assert(cin >> N >> M);
/* OX5bdb8EU ily traian BeKiFWsL7 */     assert(1 <= N && N <= kMaxN);
/* OX5bdb8EU ily traian BeKiFWsL7 */     assert(1 <= M && M <= kMaxN);
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */     vector< pair<int, int> > pos(N * M, make_pair(-1, -1));
/* OX5bdb8EU ily traian BeKiFWsL7 */     for (int i = 0; i < N; ++i)
/* OX5bdb8EU ily traian BeKiFWsL7 */         for (int j = 0; j < M; ++j) {
/* OX5bdb8EU ily traian BeKiFWsL7 */             int x; assert(cin >> x);
/* OX5bdb8EU ily traian BeKiFWsL7 */             assert(1 <= x && x <= N * M);
/* OX5bdb8EU ily traian BeKiFWsL7 */             --x;
/* OX5bdb8EU ily traian BeKiFWsL7 */             assert(pos[x] == make_pair(-1, -1));
/* OX5bdb8EU ily traian BeKiFWsL7 */             pos[x] = make_pair(i, j);
/* OX5bdb8EU ily traian BeKiFWsL7 */         }
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */     vector<int> best(N, M);
/* OX5bdb8EU ily traian BeKiFWsL7 */     int answer = -1;
/* OX5bdb8EU ily traian BeKiFWsL7 */     for (int i = 0; i < N * M; ++i) {
/* OX5bdb8EU ily traian BeKiFWsL7 */         int x, y; tie(x, y) = pos[i];
/* OX5bdb8EU ily traian BeKiFWsL7 */         for (int j = 0; j <= x; ++j)
/* OX5bdb8EU ily traian BeKiFWsL7 */             if (best[j] <= y)
/* OX5bdb8EU ily traian BeKiFWsL7 */                 answer = max(answer, x - j + y - best[j]);
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */         best[x] = min(best[x], y);
/* OX5bdb8EU ily traian BeKiFWsL7 */     }
/* OX5bdb8EU ily traian BeKiFWsL7 */ 
/* OX5bdb8EU ily traian BeKiFWsL7 */     cout << answer + 1 << "\n";
/* OX5bdb8EU ily traian BeKiFWsL7 */ }