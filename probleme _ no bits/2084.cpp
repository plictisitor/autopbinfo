/* T0i30lYr0 ily traian qlJm6L5F0 */ #include <algorithm>
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
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */ using namespace std;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */ #define MAX 100001
/* T0i30lYr0 ily traian qlJm6L5F0 */ int n;
/* T0i30lYr0 ily traian qlJm6L5F0 */ int a[MAX], sum;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */ int c[MAX], s[MAX], indc, inds;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */ int main()
/* T0i30lYr0 ily traian qlJm6L5F0 */ {
/* T0i30lYr0 ily traian qlJm6L5F0 */     int bef = 0, sbef = 0;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     cin >> n;
/* T0i30lYr0 ily traian qlJm6L5F0 */     for (int i = 1; i <= n; i++)
/* T0i30lYr0 ily traian qlJm6L5F0 */         cin >> a[i];
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     c[++indc] = 1;
/* T0i30lYr0 ily traian qlJm6L5F0 */     s[++inds] = 0;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     for (int i = 2; i <= n; i++)
/* T0i30lYr0 ily traian qlJm6L5F0 */     {
/* T0i30lYr0 ily traian qlJm6L5F0 */         bef = 0;
/* T0i30lYr0 ily traian qlJm6L5F0 */         sbef = 0;
/* T0i30lYr0 ily traian qlJm6L5F0 */         while (a[c[indc]] < a[i])
/* T0i30lYr0 ily traian qlJm6L5F0 */         {
/* T0i30lYr0 ily traian qlJm6L5F0 */             bef = c[indc];
/* T0i30lYr0 ily traian qlJm6L5F0 */             sbef = s[inds];
/* T0i30lYr0 ily traian qlJm6L5F0 */             inds --;
/* T0i30lYr0 ily traian qlJm6L5F0 */             indc --;
/* T0i30lYr0 ily traian qlJm6L5F0 */             if (indc == 0)break;
/* T0i30lYr0 ily traian qlJm6L5F0 */         }
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */         if (indc == 0)s[++inds] = a[bef] * (i - bef - 1) + sbef, sum += a[bef];
/* T0i30lYr0 ily traian qlJm6L5F0 */         else s[++inds] = (a[i] * (i - c[indc] - 1));
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */         c[++indc] = i;
/* T0i30lYr0 ily traian qlJm6L5F0 */     }
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     while (inds)
/* T0i30lYr0 ily traian qlJm6L5F0 */         sum += s[inds], inds --;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     while (indc)
/* T0i30lYr0 ily traian qlJm6L5F0 */         sum += a[c[indc]], indc --;
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     for (int i = 1; i <= n; i++)
/* T0i30lYr0 ily traian qlJm6L5F0 */         sum -= a[i];
/* T0i30lYr0 ily traian qlJm6L5F0 */ 
/* T0i30lYr0 ily traian qlJm6L5F0 */     cout << sum;
/* T0i30lYr0 ily traian qlJm6L5F0 */     return 0;
/* T0i30lYr0 ily traian qlJm6L5F0 */ }