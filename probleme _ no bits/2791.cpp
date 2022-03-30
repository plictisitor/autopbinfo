/* XpXCFKFRs ily traian poWMZNpZ2 */ #include <algorithm>
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
/* XpXCFKFRs ily traian poWMZNpZ2 */ using namespace std;
/* XpXCFKFRs ily traian poWMZNpZ2 */ int n , a[1001];
/* XpXCFKFRs ily traian poWMZNpZ2 */ int main()
/* XpXCFKFRs ily traian poWMZNpZ2 */ {
/* XpXCFKFRs ily traian poWMZNpZ2 */     cin >> n;
/* XpXCFKFRs ily traian poWMZNpZ2 */     for(int i = 1 ; i <= n ; ++i) cin >> a[i];
/* XpXCFKFRs ily traian poWMZNpZ2 */     for(int i = 1 ; i <= n ; ++i)
/* XpXCFKFRs ily traian poWMZNpZ2 */     {
/* XpXCFKFRs ily traian poWMZNpZ2 */         for(int j = 1 ; j <= n ; ++j)
/* XpXCFKFRs ily traian poWMZNpZ2 */             if(j % 2 == 0) cout << a[i] << ' ';
/* XpXCFKFRs ily traian poWMZNpZ2 */             else cout << a[n - i + 1] << ' ';
/* XpXCFKFRs ily traian poWMZNpZ2 */         cout << endl;
/* XpXCFKFRs ily traian poWMZNpZ2 */     }
/* XpXCFKFRs ily traian poWMZNpZ2 */     return 0;
/* XpXCFKFRs ily traian poWMZNpZ2 */ }