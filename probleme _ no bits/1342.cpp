/* BVimI7FyW ily traian kJexJbB31 */ #include <algorithm>
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
/* BVimI7FyW ily traian kJexJbB31 */ using namespace std;
/* BVimI7FyW ily traian kJexJbB31 */ 
/* BVimI7FyW ily traian kJexJbB31 */ ifstream cin("nrsubsircresc.in");
/* BVimI7FyW ily traian kJexJbB31 */ ofstream cout("nrsubsircresc.out");
/* BVimI7FyW ily traian kJexJbB31 */ 
/* BVimI7FyW ily traian kJexJbB31 */ int n , a[302];
/* BVimI7FyW ily traian kJexJbB31 */ long long sum , s[302];
/* BVimI7FyW ily traian kJexJbB31 */ 
/* BVimI7FyW ily traian kJexJbB31 */ int main()
/* BVimI7FyW ily traian kJexJbB31 */ {
/* BVimI7FyW ily traian kJexJbB31 */     cin >> n;
/* BVimI7FyW ily traian kJexJbB31 */     for(int i = 1 ; i <= n ; i++)
/* BVimI7FyW ily traian kJexJbB31 */         cin >> a[i] , s[i] = 1;
/* BVimI7FyW ily traian kJexJbB31 */ 
/* BVimI7FyW ily traian kJexJbB31 */     for(int i = 1 ; i <= n ; i++)
/* BVimI7FyW ily traian kJexJbB31 */         for(int j = 1 ; j <= i ; j++)
/* BVimI7FyW ily traian kJexJbB31 */             if(a[j] < a[i]) s[i] += s[j];
/* BVimI7FyW ily traian kJexJbB31 */ 
/* BVimI7FyW ily traian kJexJbB31 */     for(int i = 1 ; i <= n ; i++)
/* BVimI7FyW ily traian kJexJbB31 */         sum += s[i];
/* BVimI7FyW ily traian kJexJbB31 */ 
/* BVimI7FyW ily traian kJexJbB31 */     cout << sum;
/* BVimI7FyW ily traian kJexJbB31 */ }