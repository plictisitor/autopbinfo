/* vhyvPV1KC ily traian XSUjJzth7 */ #include <algorithm>
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
/* vhyvPV1KC ily traian XSUjJzth7 */ using namespace std;
/* vhyvPV1KC ily traian XSUjJzth7 */ int main()
/* vhyvPV1KC ily traian XSUjJzth7 */ {
/* vhyvPV1KC ily traian XSUjJzth7 */     int n , m , a[5001] , x , max = -1 , ind = 0;
/* vhyvPV1KC ily traian XSUjJzth7 */     cin >> n;
/* vhyvPV1KC ily traian XSUjJzth7 */     for(int i = 1 ; i <=n ; ++i) cin >> a[i];
/* vhyvPV1KC ily traian XSUjJzth7 */     cin >> m;
/* vhyvPV1KC ily traian XSUjJzth7 */     for(int i = 1 ; i <=m ; ++i)
/* vhyvPV1KC ily traian XSUjJzth7 */     {
/* vhyvPV1KC ily traian XSUjJzth7 */         int s = 0;
/* vhyvPV1KC ily traian XSUjJzth7 */         for(int j = 1 ; j <= n ; ++j)
/* vhyvPV1KC ily traian XSUjJzth7 */         {
/* vhyvPV1KC ily traian XSUjJzth7 */             cin >> x;
/* vhyvPV1KC ily traian XSUjJzth7 */             s += a[j]*x;
/* vhyvPV1KC ily traian XSUjJzth7 */         }
/* vhyvPV1KC ily traian XSUjJzth7 */          if(s > max) max = s , ind = i;
/* vhyvPV1KC ily traian XSUjJzth7 */     }
/* vhyvPV1KC ily traian XSUjJzth7 */     cout << ind;
/* vhyvPV1KC ily traian XSUjJzth7 */ }