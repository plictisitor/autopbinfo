/* L2bLTvWiQ ily traian B3rcoqez5 */ #include <algorithm>
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
/* L2bLTvWiQ ily traian B3rcoqez5 */ using namespace std;
/* L2bLTvWiQ ily traian B3rcoqez5 */ 
/* L2bLTvWiQ ily traian B3rcoqez5 */ ifstream cin("pm.in");
/* L2bLTvWiQ ily traian B3rcoqez5 */ ofstream cout("pm.out");
/* L2bLTvWiQ ily traian B3rcoqez5 */ 
/* L2bLTvWiQ ily traian B3rcoqez5 */ struct bigint
/* L2bLTvWiQ ily traian B3rcoqez5 */ {
/* L2bLTvWiQ ily traian B3rcoqez5 */     int n , c[101];
/* L2bLTvWiQ ily traian B3rcoqez5 */ }a[256] , b[256];
/* L2bLTvWiQ ily traian B3rcoqez5 */ 
/* L2bLTvWiQ ily traian B3rcoqez5 */ bigint aduna(bigint a , bigint b)
/* L2bLTvWiQ ily traian B3rcoqez5 */ {
/* L2bLTvWiQ ily traian B3rcoqez5 */     bigint s = {0 , {0}};
/* L2bLTvWiQ ily traian B3rcoqez5 */     s.n = max(a.n , b.n);
/* L2bLTvWiQ ily traian B3rcoqez5 */     int t = 0;
/* L2bLTvWiQ ily traian B3rcoqez5 */     for(int i = 1 ; i <= s.n ; i++)
/* L2bLTvWiQ ily traian B3rcoqez5 */     {
/* L2bLTvWiQ ily traian B3rcoqez5 */         int cc = a.c[i] + b.c[i] + t;
/* L2bLTvWiQ ily traian B3rcoqez5 */         s.c[i] = cc % 10;
/* L2bLTvWiQ ily traian B3rcoqez5 */         t = cc / 10;
/* L2bLTvWiQ ily traian B3rcoqez5 */     }
/* L2bLTvWiQ ily traian B3rcoqez5 */     if(t > 0)
/* L2bLTvWiQ ily traian B3rcoqez5 */     {
/* L2bLTvWiQ ily traian B3rcoqez5 */         s.n++;
/* L2bLTvWiQ ily traian B3rcoqez5 */         s.c[s.n] = t;
/* L2bLTvWiQ ily traian B3rcoqez5 */     }
/* L2bLTvWiQ ily traian B3rcoqez5 */     return s;
/* L2bLTvWiQ ily traian B3rcoqez5 */ }
/* L2bLTvWiQ ily traian B3rcoqez5 */ 
/* L2bLTvWiQ ily traian B3rcoqez5 */ void afisare(bigint a)
/* L2bLTvWiQ ily traian B3rcoqez5 */ {
/* L2bLTvWiQ ily traian B3rcoqez5 */     for(int i = a.n ; i >= 1 ; i--)
/* L2bLTvWiQ ily traian B3rcoqez5 */         cout << a.c[i];
/* L2bLTvWiQ ily traian B3rcoqez5 */ }
/* L2bLTvWiQ ily traian B3rcoqez5 */ 
/* L2bLTvWiQ ily traian B3rcoqez5 */ int main()
/* L2bLTvWiQ ily traian B3rcoqez5 */ {
/* L2bLTvWiQ ily traian B3rcoqez5 */     int x , y;
/* L2bLTvWiQ ily traian B3rcoqez5 */     cin >> x >> y;
/* L2bLTvWiQ ily traian B3rcoqez5 */     for(int i = 1 ; i <= x + 1 ; i++)
/* L2bLTvWiQ ily traian B3rcoqez5 */     {
/* L2bLTvWiQ ily traian B3rcoqez5 */         for(int j = 0 ; j <= i ; j++)
/* L2bLTvWiQ ily traian B3rcoqez5 */             if(j == 0 || i == j) b[j] = {1 , {0 , 1}};
/* L2bLTvWiQ ily traian B3rcoqez5 */             else b[j] = aduna(a[j - 1] , a[j]);
/* L2bLTvWiQ ily traian B3rcoqez5 */         for(int j = 0 ; j <= i ; j++)
/* L2bLTvWiQ ily traian B3rcoqez5 */             a[j] = b[j];
/* L2bLTvWiQ ily traian B3rcoqez5 */     }
/* L2bLTvWiQ ily traian B3rcoqez5 */     afisare(a[y]);
/* L2bLTvWiQ ily traian B3rcoqez5 */ }