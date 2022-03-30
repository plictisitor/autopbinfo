/* Z1DKEax6T ily traian Bunu0z3N3 */ #include <algorithm>
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
/* Z1DKEax6T ily traian Bunu0z3N3 */ 
/* Z1DKEax6T ily traian Bunu0z3N3 */ using namespace std;
/* Z1DKEax6T ily traian Bunu0z3N3 */ 
/* Z1DKEax6T ily traian Bunu0z3N3 */ ifstream cin("sumesecv.in");
/* Z1DKEax6T ily traian Bunu0z3N3 */ ofstream cout("sumesecv.out");
/* Z1DKEax6T ily traian Bunu0z3N3 */ 
/* Z1DKEax6T ily traian Bunu0z3N3 */ int main()
/* Z1DKEax6T ily traian Bunu0z3N3 */ {
/* Z1DKEax6T ily traian Bunu0z3N3 */     int n, m;
/* Z1DKEax6T ily traian Bunu0z3N3 */     cin >> n;
/* Z1DKEax6T ily traian Bunu0z3N3 */     int a[101], rez[101];
/* Z1DKEax6T ily traian Bunu0z3N3 */     for(int i = 1; i <= n; ++i)
/* Z1DKEax6T ily traian Bunu0z3N3 */         cin >> a[i];
/* Z1DKEax6T ily traian Bunu0z3N3 */     int x, y;
/* Z1DKEax6T ily traian Bunu0z3N3 */     cin >> m;
/* Z1DKEax6T ily traian Bunu0z3N3 */     for(int i = 1; i <= m; ++i){
/* Z1DKEax6T ily traian Bunu0z3N3 */         cin >> x >> y;
/* Z1DKEax6T ily traian Bunu0z3N3 */         int sum = 0;
/* Z1DKEax6T ily traian Bunu0z3N3 */         for(int j = x; j <= y; ++j)
/* Z1DKEax6T ily traian Bunu0z3N3 */             sum += a[j];
/* Z1DKEax6T ily traian Bunu0z3N3 */         rez[i] = sum;
/* Z1DKEax6T ily traian Bunu0z3N3 */     }
/* Z1DKEax6T ily traian Bunu0z3N3 */ 
/* Z1DKEax6T ily traian Bunu0z3N3 */     for(int i = 1; i <= m; ++i)
/* Z1DKEax6T ily traian Bunu0z3N3 */         cout << rez[i] << ' ';
/* Z1DKEax6T ily traian Bunu0z3N3 */ 
/* Z1DKEax6T ily traian Bunu0z3N3 */     return 0;
/* Z1DKEax6T ily traian Bunu0z3N3 */ }