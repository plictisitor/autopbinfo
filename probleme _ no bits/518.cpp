/* mpil940te ily traian 6WySX0220 */ #include <algorithm>
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
/* mpil940te ily traian 6WySX0220 */ 
/* mpil940te ily traian 6WySX0220 */ using namespace std;
/* mpil940te ily traian 6WySX0220 */ 
/* mpil940te ily traian 6WySX0220 */ int main()
/* mpil940te ily traian 6WySX0220 */ {
/* mpil940te ily traian 6WySX0220 */     int n;
/* mpil940te ily traian 6WySX0220 */     cin >> n;
/* mpil940te ily traian 6WySX0220 */     int a[1001];
/* mpil940te ily traian 6WySX0220 */     for(int i = 1; i <= n; ++i)
/* mpil940te ily traian 6WySX0220 */         cin >> a[i];
/* mpil940te ily traian 6WySX0220 */ 
/* mpil940te ily traian 6WySX0220 */     int lmax = 0, st = 0, dr = 0;
/* mpil940te ily traian 6WySX0220 */ 
/* mpil940te ily traian 6WySX0220 */     for(int i = 1; i <= n; ++i){
/* mpil940te ily traian 6WySX0220 */         if(a[i] == 0){
/* mpil940te ily traian 6WySX0220 */             int l = 0;
/* mpil940te ily traian 6WySX0220 */             for(int j = i; a[j] == 0 && j <= n; ++j)
/* mpil940te ily traian 6WySX0220 */                 l++;
/* mpil940te ily traian 6WySX0220 */             if(l > lmax){
/* mpil940te ily traian 6WySX0220 */                 lmax = l;
/* mpil940te ily traian 6WySX0220 */                 st = i;
/* mpil940te ily traian 6WySX0220 */                 dr = i + l - 1;
/* mpil940te ily traian 6WySX0220 */             }
/* mpil940te ily traian 6WySX0220 */         }
/* mpil940te ily traian 6WySX0220 */     }
/* mpil940te ily traian 6WySX0220 */ 
/* mpil940te ily traian 6WySX0220 */     cout << st << ' ' << dr;
/* mpil940te ily traian 6WySX0220 */ 
/* mpil940te ily traian 6WySX0220 */     return 0;
/* mpil940te ily traian 6WySX0220 */ }