/* cUjCyFn5L ily traian C5wBNWwX5 */ #include <algorithm>
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
/* cUjCyFn5L ily traian C5wBNWwX5 */ using namespace std;
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */ ifstream cin("comori.in");
/* cUjCyFn5L ily traian C5wBNWwX5 */ ofstream cout("comori.out");
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */ int n , m , a[204][204] , s[204][204];
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */ int main()
/* cUjCyFn5L ily traian C5wBNWwX5 */ {
/* cUjCyFn5L ily traian C5wBNWwX5 */     cin >> n >> m;
/* cUjCyFn5L ily traian C5wBNWwX5 */     for(int i = 1 ; i <= n ; ++i)
/* cUjCyFn5L ily traian C5wBNWwX5 */         for(int j = 1 ; j <= m ; j++)
/* cUjCyFn5L ily traian C5wBNWwX5 */             cin >> a[i][j];
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */     for(int i = 1 ; i <= n ; ++i)
/* cUjCyFn5L ily traian C5wBNWwX5 */         s[1][i] = a[1][i];
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */     for(int i = 1 ; i <= n ; i++)
/* cUjCyFn5L ily traian C5wBNWwX5 */         for(int j = 1 ; j <= m ; ++j)
/* cUjCyFn5L ily traian C5wBNWwX5 */         {
/* cUjCyFn5L ily traian C5wBNWwX5 */             s[i][j] = a[i][j] + max(max(s[i - 1][j-1], s[i - 1][j]) , s[i - 1][j + 1]);
/* cUjCyFn5L ily traian C5wBNWwX5 */             //cout << s[i][j] << " " << i << " " << j << '\n';
/* cUjCyFn5L ily traian C5wBNWwX5 */         }
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */     int pmin  = 1;
/* cUjCyFn5L ily traian C5wBNWwX5 */     for(int j = 2 ; j <= m ; ++j)
/* cUjCyFn5L ily traian C5wBNWwX5 */         if(s[n][j] > s[n][pmin]) pmin = j;
/* cUjCyFn5L ily traian C5wBNWwX5 */ 
/* cUjCyFn5L ily traian C5wBNWwX5 */     cout << s[n][pmin];
/* cUjCyFn5L ily traian C5wBNWwX5 */     return 0;
/* cUjCyFn5L ily traian C5wBNWwX5 */ }