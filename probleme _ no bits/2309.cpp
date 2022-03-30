/* k1kgp9130 ily traian VlZjXaCq8 */ #include <algorithm>
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
/* k1kgp9130 ily traian VlZjXaCq8 */ using namespace std;
/* k1kgp9130 ily traian VlZjXaCq8 */ 
/* k1kgp9130 ily traian VlZjXaCq8 */ ifstream cin("competitie.in");
/* k1kgp9130 ily traian VlZjXaCq8 */ ofstream cout("competitie.out");
/* k1kgp9130 ily traian VlZjXaCq8 */ 
/* k1kgp9130 ily traian VlZjXaCq8 */ int a[1005] , b[1005] , f[1005];
/* k1kgp9130 ily traian VlZjXaCq8 */ int main()
/* k1kgp9130 ily traian VlZjXaCq8 */ {
/* k1kgp9130 ily traian VlZjXaCq8 */     int n , m;
/* k1kgp9130 ily traian VlZjXaCq8 */     cin >> n >> m;
/* k1kgp9130 ily traian VlZjXaCq8 */     for(int i = 1 ; i <= m ; i++)
/* k1kgp9130 ily traian VlZjXaCq8 */     {
/* k1kgp9130 ily traian VlZjXaCq8 */         cin >> a[i] >> b[i];
/* k1kgp9130 ily traian VlZjXaCq8 */         f[b[i]]++;
/* k1kgp9130 ily traian VlZjXaCq8 */     }
/* k1kgp9130 ily traian VlZjXaCq8 */     for (int i = 1; i <= n; i ++)
/* k1kgp9130 ily traian VlZjXaCq8 */     {
/* k1kgp9130 ily traian VlZjXaCq8 */         int j = 1;
/* k1kgp9130 ily traian VlZjXaCq8 */         while(f[j])  j++;
/* k1kgp9130 ily traian VlZjXaCq8 */         cout << j << ' ';
/* k1kgp9130 ily traian VlZjXaCq8 */         int nr = j;
/* k1kgp9130 ily traian VlZjXaCq8 */         f[nr] = -1;
/* k1kgp9130 ily traian VlZjXaCq8 */ 
/* k1kgp9130 ily traian VlZjXaCq8 */         for (j = 1; j <= n; j ++)
/* k1kgp9130 ily traian VlZjXaCq8 */             if (f[j] != -1)f[j] = 0;
/* k1kgp9130 ily traian VlZjXaCq8 */ 
/* k1kgp9130 ily traian VlZjXaCq8 */         for (j = 1; j <= m; j ++)
/* k1kgp9130 ily traian VlZjXaCq8 */             if (a[j] == nr)  a[j] = b[j] = 0;
/* k1kgp9130 ily traian VlZjXaCq8 */         for (j = 1; j <= m; j ++) f[b[j]]++;
/* k1kgp9130 ily traian VlZjXaCq8 */     }
/* k1kgp9130 ily traian VlZjXaCq8 */     return 0;
/* k1kgp9130 ily traian VlZjXaCq8 */ }