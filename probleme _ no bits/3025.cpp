/* H9QoZN4mB ily traian nXxTvx2w0 */ #include <algorithm>
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
/* H9QoZN4mB ily traian nXxTvx2w0 */ using namespace std;
/* H9QoZN4mB ily traian nXxTvx2w0 */ 
/* H9QoZN4mB ily traian nXxTvx2w0 */ int C[101] , D[101];
/* H9QoZN4mB ily traian nXxTvx2w0 */ 
/* H9QoZN4mB ily traian nXxTvx2w0 */ unsigned long long prep(int n , int f[])
/* H9QoZN4mB ily traian nXxTvx2w0 */ {
/* H9QoZN4mB ily traian nXxTvx2w0 */     unsigned long long c = 1;
/* H9QoZN4mB ily traian nXxTvx2w0 */     for(int i = 1 ; i <= n ; i++)
/* H9QoZN4mB ily traian nXxTvx2w0 */         c *= i;
/* H9QoZN4mB ily traian nXxTvx2w0 */     for(int i = 0 ; i <= 9 ; i++)
/* H9QoZN4mB ily traian nXxTvx2w0 */         for(int j = 2 ; j <= f[i] ; j++)
/* H9QoZN4mB ily traian nXxTvx2w0 */             c /= j;
/* H9QoZN4mB ily traian nXxTvx2w0 */     return c;
/* H9QoZN4mB ily traian nXxTvx2w0 */ }
/* H9QoZN4mB ily traian nXxTvx2w0 */ int main()
/* H9QoZN4mB ily traian nXxTvx2w0 */ {
/* H9QoZN4mB ily traian nXxTvx2w0 */     int f[10] = {0};
/* H9QoZN4mB ily traian nXxTvx2w0 */     int n;
/* H9QoZN4mB ily traian nXxTvx2w0 */     string s;
/* H9QoZN4mB ily traian nXxTvx2w0 */     cin >> s;
/* H9QoZN4mB ily traian nXxTvx2w0 */     n = s.length();
/* H9QoZN4mB ily traian nXxTvx2w0 */     for(int i = 0 ; i < n ; i++)
/* H9QoZN4mB ily traian nXxTvx2w0 */         f[s[i] - 48]++;
/* H9QoZN4mB ily traian nXxTvx2w0 */ 
/* H9QoZN4mB ily traian nXxTvx2w0 */     int fimp = 0;
/* H9QoZN4mB ily traian nXxTvx2w0 */     for(int i = 0 ; i <= 9 ; i++)
/* H9QoZN4mB ily traian nXxTvx2w0 */         if(f[i] % 2 == 1) fimp ++;
/* H9QoZN4mB ily traian nXxTvx2w0 */     if(fimp > 1) cout << 0;
/* H9QoZN4mB ily traian nXxTvx2w0 */     else
/* H9QoZN4mB ily traian nXxTvx2w0 */     {
/* H9QoZN4mB ily traian nXxTvx2w0 */         for(int i = 0 ; i <= 9 ; i++)
/* H9QoZN4mB ily traian nXxTvx2w0 */             f[i] /= 2;
/* H9QoZN4mB ily traian nXxTvx2w0 */         if(f[0] == 0)
/* H9QoZN4mB ily traian nXxTvx2w0 */             cout << prep(n / 2 , f);
/* H9QoZN4mB ily traian nXxTvx2w0 */         else
/* H9QoZN4mB ily traian nXxTvx2w0 */         {
/* H9QoZN4mB ily traian nXxTvx2w0 */             unsigned long long c = prep(n / 2 , f);
/* H9QoZN4mB ily traian nXxTvx2w0 */             f[0]--;
/* H9QoZN4mB ily traian nXxTvx2w0 */             unsigned long long c1 = prep(n / 2 - 1 , f);
/* H9QoZN4mB ily traian nXxTvx2w0 */             cout << c - c1;
/* H9QoZN4mB ily traian nXxTvx2w0 */         }
/* H9QoZN4mB ily traian nXxTvx2w0 */     }
/* H9QoZN4mB ily traian nXxTvx2w0 */ }