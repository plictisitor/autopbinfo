/* VpeA8igMv ily traian H5qGx8B64 */ #include <algorithm>
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
/* VpeA8igMv ily traian H5qGx8B64 */ using namespace std;
/* VpeA8igMv ily traian H5qGx8B64 */ 
/* VpeA8igMv ily traian H5qGx8B64 */ ifstream cin("mygo.in");
/* VpeA8igMv ily traian H5qGx8B64 */ ofstream cout("mygo.out");
/* VpeA8igMv ily traian H5qGx8B64 */ 
/* VpeA8igMv ily traian H5qGx8B64 */ int A[11];
/* VpeA8igMv ily traian H5qGx8B64 */ const int mod = 666013;
/* VpeA8igMv ily traian H5qGx8B64 */ 
/* VpeA8igMv ily traian H5qGx8B64 */ int fact(int n){
/* VpeA8igMv ily traian H5qGx8B64 */     int r = 1;
/* VpeA8igMv ily traian H5qGx8B64 */     for(int i = 1; i <= n; ++i)
/* VpeA8igMv ily traian H5qGx8B64 */         r = 1LL * r * i % mod;
/* VpeA8igMv ily traian H5qGx8B64 */     return r;
/* VpeA8igMv ily traian H5qGx8B64 */ }
/* VpeA8igMv ily traian H5qGx8B64 */ 
/* VpeA8igMv ily traian H5qGx8B64 */ int imod(int a){
/* VpeA8igMv ily traian H5qGx8B64 */     int n = mod - 2;
/* VpeA8igMv ily traian H5qGx8B64 */     int r = 1;
/* VpeA8igMv ily traian H5qGx8B64 */     while(n > 0){
/* VpeA8igMv ily traian H5qGx8B64 */         if(n % 2 == 1)
/* VpeA8igMv ily traian H5qGx8B64 */             r = 1LL * r * a % mod;
/* VpeA8igMv ily traian H5qGx8B64 */         a = 1ll * a * a % mod;
/* VpeA8igMv ily traian H5qGx8B64 */         n/=2;
/* VpeA8igMv ily traian H5qGx8B64 */     }
/* VpeA8igMv ily traian H5qGx8B64 */     return r;
/* VpeA8igMv ily traian H5qGx8B64 */ }
/* VpeA8igMv ily traian H5qGx8B64 */ 
/* VpeA8igMv ily traian H5qGx8B64 */ int main(){
/* VpeA8igMv ily traian H5qGx8B64 */     int p = -1;
/* VpeA8igMv ily traian H5qGx8B64 */     for(int i = 0; i < 10; ++i)
/* VpeA8igMv ily traian H5qGx8B64 */         cin >> A[i], p += A[i];
/* VpeA8igMv ily traian H5qGx8B64 */     int s = 0;
/* VpeA8igMv ily traian H5qGx8B64 */     for(int k = 1; k < 10; ++k)
/* VpeA8igMv ily traian H5qGx8B64 */     if(A[k] > 0){
/* VpeA8igMv ily traian H5qGx8B64 */         A[k]--;
/* VpeA8igMv ily traian H5qGx8B64 */         int Q = 1;
/* VpeA8igMv ily traian H5qGx8B64 */         for(int i = 0; i <= 9; ++i)
/* VpeA8igMv ily traian H5qGx8B64 */             Q = 1LL * Q * fact(A[i]) % mod;
/* VpeA8igMv ily traian H5qGx8B64 */         s = (s + 1LL * fact(p) * imod(Q) % mod) % mod;
/* VpeA8igMv ily traian H5qGx8B64 */         A[k] ++;
/* VpeA8igMv ily traian H5qGx8B64 */     }
/* VpeA8igMv ily traian H5qGx8B64 */     cout << s;
/* VpeA8igMv ily traian H5qGx8B64 */     return 0;
/* VpeA8igMv ily traian H5qGx8B64 */ }