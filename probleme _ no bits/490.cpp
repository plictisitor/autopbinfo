/* OHC3PfoRS ily traian fxNZwB2b6 */ #include <algorithm>
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
/* OHC3PfoRS ily traian fxNZwB2b6 */ using namespace std;
/* OHC3PfoRS ily traian fxNZwB2b6 */ int main()
/* OHC3PfoRS ily traian fxNZwB2b6 */ {
/* OHC3PfoRS ily traian fxNZwB2b6 */     int n;
/* OHC3PfoRS ily traian fxNZwB2b6 */     cin >> n;
/* OHC3PfoRS ily traian fxNZwB2b6 */     int a[1001];
/* OHC3PfoRS ily traian fxNZwB2b6 */     int p,u;
/* OHC3PfoRS ily traian fxNZwB2b6 */     int max=-1, min= 100000001;
/* OHC3PfoRS ily traian fxNZwB2b6 */     for (int i = 0 ; i < n; ++i)
/* OHC3PfoRS ily traian fxNZwB2b6 */     {
/* OHC3PfoRS ily traian fxNZwB2b6 */         cin >> a[i];
/* OHC3PfoRS ily traian fxNZwB2b6 */         if (a[i]> max)
/* OHC3PfoRS ily traian fxNZwB2b6 */             p=i, max = a[i];
/* OHC3PfoRS ily traian fxNZwB2b6 */         if (a[i]< min)
/* OHC3PfoRS ily traian fxNZwB2b6 */             u=i, min = a[i];
/* OHC3PfoRS ily traian fxNZwB2b6 */     }
/* OHC3PfoRS ily traian fxNZwB2b6 */     if (p>u)
/* OHC3PfoRS ily traian fxNZwB2b6 */     {
/* OHC3PfoRS ily traian fxNZwB2b6 */         int c=p;
/* OHC3PfoRS ily traian fxNZwB2b6 */         p=u;
/* OHC3PfoRS ily traian fxNZwB2b6 */         u=c;
/* OHC3PfoRS ily traian fxNZwB2b6 */     }
/* OHC3PfoRS ily traian fxNZwB2b6 */     for (int i = p; i <= u; ++i)
/* OHC3PfoRS ily traian fxNZwB2b6 */         cout << a[i] << ' ';
/* OHC3PfoRS ily traian fxNZwB2b6 */     return 0;
/* OHC3PfoRS ily traian fxNZwB2b6 */ }