/* eUJtBa44E ily traian SB8KkGmvW */ #include <algorithm>
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
/* eUJtBa44E ily traian SB8KkGmvW */ using namespace std;
/* eUJtBa44E ily traian SB8KkGmvW */ 
/* eUJtBa44E ily traian SB8KkGmvW */ ifstream in("roboti1.in");
/* eUJtBa44E ily traian SB8KkGmvW */ ofstream out("roboti1.out");
/* eUJtBa44E ily traian SB8KkGmvW */ 
/* eUJtBa44E ily traian SB8KkGmvW */ int dp[155][155], n, m, t, parc[155][155], x, y, L,  rob, type, answer[155];
/* eUJtBa44E ily traian SB8KkGmvW */ 
/* eUJtBa44E ily traian SB8KkGmvW */ int cnt(int ind) {
/* eUJtBa44E ily traian SB8KkGmvW */     int ans = 0;
/* eUJtBa44E ily traian SB8KkGmvW */     memset(dp, 0, sizeof(dp));
/* eUJtBa44E ily traian SB8KkGmvW */     for(int i = 1; i <= n; i++) {
/* eUJtBa44E ily traian SB8KkGmvW */         for(int j = m; j >= 1; j--) {
/* eUJtBa44E ily traian SB8KkGmvW */             if(parc[i][j]) {
/* eUJtBa44E ily traian SB8KkGmvW */                 if(i > ind && j + ind <= m) {
/* eUJtBa44E ily traian SB8KkGmvW */                     dp[i][j] = dp[i - ind][j + ind] + 1;
/* eUJtBa44E ily traian SB8KkGmvW */                 } else {
/* eUJtBa44E ily traian SB8KkGmvW */                     dp[i][j] = 1;
/* eUJtBa44E ily traian SB8KkGmvW */                 }
/* eUJtBa44E ily traian SB8KkGmvW */             } else {
/* eUJtBa44E ily traian SB8KkGmvW */                 dp[i][j] = max(dp[i - 1][j], dp[i][j + 1]);
/* eUJtBa44E ily traian SB8KkGmvW */             }
/* eUJtBa44E ily traian SB8KkGmvW */             ans = max(ans, dp[i][j]);
/* eUJtBa44E ily traian SB8KkGmvW */         }
/* eUJtBa44E ily traian SB8KkGmvW */     }
/* eUJtBa44E ily traian SB8KkGmvW */     return ans;
/* eUJtBa44E ily traian SB8KkGmvW */ }
/* eUJtBa44E ily traian SB8KkGmvW */ 
/* eUJtBa44E ily traian SB8KkGmvW */ int main()
/* eUJtBa44E ily traian SB8KkGmvW */ {
/* eUJtBa44E ily traian SB8KkGmvW */     in >> type;
/* eUJtBa44E ily traian SB8KkGmvW */     in >> n >> m >> t;
/* eUJtBa44E ily traian SB8KkGmvW */     for(int i = 1; i <= t; i++) {
/* eUJtBa44E ily traian SB8KkGmvW */         in >> x >> y;
/* eUJtBa44E ily traian SB8KkGmvW */         parc[x][y] = 1;
/* eUJtBa44E ily traian SB8KkGmvW */     }
/* eUJtBa44E ily traian SB8KkGmvW */     for(int i = 1; i <= 150; i++) {
/* eUJtBa44E ily traian SB8KkGmvW */         answer[i] = cnt(i);
/* eUJtBa44E ily traian SB8KkGmvW */     }
/* eUJtBa44E ily traian SB8KkGmvW */     if(type == 1) {
/* eUJtBa44E ily traian SB8KkGmvW */         in >> L;
/* eUJtBa44E ily traian SB8KkGmvW */         out << answer[L];
/* eUJtBa44E ily traian SB8KkGmvW */     } else {
/* eUJtBa44E ily traian SB8KkGmvW */         int queries;
/* eUJtBa44E ily traian SB8KkGmvW */         in >> queries;
/* eUJtBa44E ily traian SB8KkGmvW */         for(int q = 1; q <= queries; q++) {
/* eUJtBa44E ily traian SB8KkGmvW */             in >> rob;
/* eUJtBa44E ily traian SB8KkGmvW */             int low = 1, high = 150, minLat = -1;
/* eUJtBa44E ily traian SB8KkGmvW */             while(low <= high) {
/* eUJtBa44E ily traian SB8KkGmvW */                 int middle = (low + high) / 2;
/* eUJtBa44E ily traian SB8KkGmvW */                 if(answer[middle] <= rob) {
/* eUJtBa44E ily traian SB8KkGmvW */                     minLat = middle;
/* eUJtBa44E ily traian SB8KkGmvW */                     high = middle - 1;
/* eUJtBa44E ily traian SB8KkGmvW */                 } else {
/* eUJtBa44E ily traian SB8KkGmvW */                     low = middle + 1;
/* eUJtBa44E ily traian SB8KkGmvW */                 }
/* eUJtBa44E ily traian SB8KkGmvW */             }
/* eUJtBa44E ily traian SB8KkGmvW */             out << minLat << '\n';
/* eUJtBa44E ily traian SB8KkGmvW */         }
/* eUJtBa44E ily traian SB8KkGmvW */     }
/* eUJtBa44E ily traian SB8KkGmvW */     return 0;
/* eUJtBa44E ily traian SB8KkGmvW */ }