/* BL161Z937 ily traian BnpllKZK3 */ #include <algorithm>
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
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */ using namespace std;
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */ int main()
/* BL161Z937 ily traian BnpllKZK3 */ {
/* BL161Z937 ily traian BnpllKZK3 */     int n, m, k1 = 0, k2 = 0;
/* BL161Z937 ily traian BnpllKZK3 */     int a[100001], b[100001], c[200001], d[100001];
/* BL161Z937 ily traian BnpllKZK3 */     cin >> n;
/* BL161Z937 ily traian BnpllKZK3 */     for(int i = 1; i <= n; ++i)
/* BL161Z937 ily traian BnpllKZK3 */         cin >> a[i];
/* BL161Z937 ily traian BnpllKZK3 */     cin >> m;
/* BL161Z937 ily traian BnpllKZK3 */     for(int i = 1; i <= m; ++i)
/* BL161Z937 ily traian BnpllKZK3 */         cin >> b[i];
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     int i = 1, j = 1;
/* BL161Z937 ily traian BnpllKZK3 */     while(i <= n && j <= m)
/* BL161Z937 ily traian BnpllKZK3 */         if(a[i] < b[j])
/* BL161Z937 ily traian BnpllKZK3 */             c[++k1] = a[i], i++;
/* BL161Z937 ily traian BnpllKZK3 */         else
/* BL161Z937 ily traian BnpllKZK3 */             if(a[i] > b[j])
/* BL161Z937 ily traian BnpllKZK3 */                 c[++k1] = b[j], j++;
/* BL161Z937 ily traian BnpllKZK3 */             else
/* BL161Z937 ily traian BnpllKZK3 */                 i++;
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     while(i <= n)
/* BL161Z937 ily traian BnpllKZK3 */         c[++k1] = a[i], i++;
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     while(j <= m)
/* BL161Z937 ily traian BnpllKZK3 */         c[++k1] = b[j], j++;
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     i = 1, j = 1;
/* BL161Z937 ily traian BnpllKZK3 */     while(i <= n && j <= m)
/* BL161Z937 ily traian BnpllKZK3 */         if(a[i] == b[j])
/* BL161Z937 ily traian BnpllKZK3 */             d[++k2] = a[i], i++, j++;
/* BL161Z937 ily traian BnpllKZK3 */         else
/* BL161Z937 ily traian BnpllKZK3 */             if(a[i] < b[j])
/* BL161Z937 ily traian BnpllKZK3 */                 i++;
/* BL161Z937 ily traian BnpllKZK3 */             else
/* BL161Z937 ily traian BnpllKZK3 */                 j++;
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     for(int i = 1; i <= k1; ++i)
/* BL161Z937 ily traian BnpllKZK3 */         cout << c[i] << " ";
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     cout << endl;
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     for(int i = 1; i <= k2; ++i)
/* BL161Z937 ily traian BnpllKZK3 */         cout << d[i] << " ";
/* BL161Z937 ily traian BnpllKZK3 */ 
/* BL161Z937 ily traian BnpllKZK3 */     return 0;
/* BL161Z937 ily traian BnpllKZK3 */ }