/* NKZLKUSzI ily traian 6UjhjgAP7 */ #include <algorithm>
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
/* NKZLKUSzI ily traian 6UjhjgAP7 */ using namespace std;
/* NKZLKUSzI ily traian 6UjhjgAP7 */ 
/* NKZLKUSzI ily traian 6UjhjgAP7 */ int MOD = 123457;
/* NKZLKUSzI ily traian 6UjhjgAP7 */ 
/* NKZLKUSzI ily traian 6UjhjgAP7 */ int main()
/* NKZLKUSzI ily traian 6UjhjgAP7 */ {
/* NKZLKUSzI ily traian 6UjhjgAP7 */     int p;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     long long int a = 5, sol1 = 1, sol2 = 1;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     cin >> p;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     int n = 5;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     if(p == 1)
/* NKZLKUSzI ily traian 6UjhjgAP7 */         cout << 10;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     else{
/* NKZLKUSzI ily traian 6UjhjgAP7 */         for(int i = 0; (1<<i) <= p; ++i){
/* NKZLKUSzI ily traian 6UjhjgAP7 */             if( ((1<<i) & p) > 0)
/* NKZLKUSzI ily traian 6UjhjgAP7 */                 sol1= (sol1 * a) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */                 a=(a * a) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     }
/* NKZLKUSzI ily traian 6UjhjgAP7 */     sol1 = (1LL * p * sol1) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     a=n;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     for (int i = 0; (1<<i) <= p-1; ++ i){
/* NKZLKUSzI ily traian 6UjhjgAP7 */         if( ((1<<i) & (p-1)) > 0)
/* NKZLKUSzI ily traian 6UjhjgAP7 */             sol2= (sol2 * a) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */             a=(a * a) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     }
/* NKZLKUSzI ily traian 6UjhjgAP7 */     sol2 = (1LL * sol2 * 4) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     cout << (1LL * (sol1 + sol2)) % MOD;
/* NKZLKUSzI ily traian 6UjhjgAP7 */     }
/* NKZLKUSzI ily traian 6UjhjgAP7 */ }