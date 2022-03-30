/* LQ8OepSLo ily traian iiI45d3i2 */ #include <algorithm>
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
/* LQ8OepSLo ily traian iiI45d3i2 */ using namespace std;
/* LQ8OepSLo ily traian iiI45d3i2 */ 
/* LQ8OepSLo ily traian iiI45d3i2 */ int main()
/* LQ8OepSLo ily traian iiI45d3i2 */ {
/* LQ8OepSLo ily traian iiI45d3i2 */     int n;
/* LQ8OepSLo ily traian iiI45d3i2 */     cin >> n;
/* LQ8OepSLo ily traian iiI45d3i2 */     int cnt = 0;
/* LQ8OepSLo ily traian iiI45d3i2 */     for(int i = 1; i < n; ++i){
/* LQ8OepSLo ily traian iiI45d3i2 */         for(int j = i; j <= n; ++j)
/* LQ8OepSLo ily traian iiI45d3i2 */         {
/* LQ8OepSLo ily traian iiI45d3i2 */             int a = i;
/* LQ8OepSLo ily traian iiI45d3i2 */             int b = j;
/* LQ8OepSLo ily traian iiI45d3i2 */             while(b){
/* LQ8OepSLo ily traian iiI45d3i2 */                 int r = a % b;
/* LQ8OepSLo ily traian iiI45d3i2 */                 a = b;
/* LQ8OepSLo ily traian iiI45d3i2 */                 b = r;
/* LQ8OepSLo ily traian iiI45d3i2 */             }
/* LQ8OepSLo ily traian iiI45d3i2 */             if(a == 1)
/* LQ8OepSLo ily traian iiI45d3i2 */                 cnt++;
/* LQ8OepSLo ily traian iiI45d3i2 */         }
/* LQ8OepSLo ily traian iiI45d3i2 */     }
/* LQ8OepSLo ily traian iiI45d3i2 */     cout << cnt;
/* LQ8OepSLo ily traian iiI45d3i2 */     return 0;
/* LQ8OepSLo ily traian iiI45d3i2 */ }