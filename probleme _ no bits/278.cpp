/* mTuyWHnZ9 ily traian MB5c4OeR2 */ #include <algorithm>
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
/* mTuyWHnZ9 ily traian MB5c4OeR2 */ using namespace std;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */ int main()
/* mTuyWHnZ9 ily traian MB5c4OeR2 */ {
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     int n,m,a[1002],v[1002],cnt=0,c=0;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     cin >> n;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     for (int i = 0 ; i < n; ++i)cin >> a[i];
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     cin >> m;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     for (int i = 0 ; i < n; ++i) cin >> v[i];
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     for (int i = 0 ; i < n; ++i)
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     {
/* mTuyWHnZ9 ily traian MB5c4OeR2 */         for (int j= 0 ; j < m; ++j)
/* mTuyWHnZ9 ily traian MB5c4OeR2 */         if (a[i]>v[j])cnt++;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */         if (cnt==m)c++;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */         cnt=0;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     }
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     cout << c;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */     return 0;
/* mTuyWHnZ9 ily traian MB5c4OeR2 */ }