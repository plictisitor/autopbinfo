/* tegBOE45X ily traian 3cIIggv95 */ #include <algorithm>
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
/* tegBOE45X ily traian 3cIIggv95 */ 
/* tegBOE45X ily traian 3cIIggv95 */ using namespace std;
/* tegBOE45X ily traian 3cIIggv95 */ int main()
/* tegBOE45X ily traian 3cIIggv95 */ {
/* tegBOE45X ily traian 3cIIggv95 */     long long n , a[10001] , k , s = 0;
/* tegBOE45X ily traian 3cIIggv95 */     cin >> n >> k;
/* tegBOE45X ily traian 3cIIggv95 */     for(int i = 1 ; i <= n ; i++) cin >> a[i];
/* tegBOE45X ily traian 3cIIggv95 */     while(k > 1)
/* tegBOE45X ily traian 3cIIggv95 */     {
/* tegBOE45X ily traian 3cIIggv95 */         for(int i = 1 ; i < n ; i++)
/* tegBOE45X ily traian 3cIIggv95 */             a[i]=a[i]+a[i+1]-abs(a[i]-a[i+1]);
/* tegBOE45X ily traian 3cIIggv95 */         n--;
/* tegBOE45X ily traian 3cIIggv95 */         k--;
/* tegBOE45X ily traian 3cIIggv95 */     }
/* tegBOE45X ily traian 3cIIggv95 */     for(int i = 1 ; i <= n ; i++) s+=a[i];
/* tegBOE45X ily traian 3cIIggv95 */     cout << s;
/* tegBOE45X ily traian 3cIIggv95 */ }