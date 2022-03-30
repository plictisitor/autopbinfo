/* iEJHvpZb4 ily traian sb3zAO801 */ #include <algorithm>
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
/* iEJHvpZb4 ily traian sb3zAO801 */ 
/* iEJHvpZb4 ily traian sb3zAO801 */ using namespace std;
/* iEJHvpZb4 ily traian sb3zAO801 */ 
/* iEJHvpZb4 ily traian sb3zAO801 */ int a[33] , cnt , f[33];
/* iEJHvpZb4 ily traian sb3zAO801 */ 
/* iEJHvpZb4 ily traian sb3zAO801 */ int main()
/* iEJHvpZb4 ily traian sb3zAO801 */ {
/* iEJHvpZb4 ily traian sb3zAO801 */     int n , m = 0 , p = 1;
/* iEJHvpZb4 ily traian sb3zAO801 */     cin >> n;
/* iEJHvpZb4 ily traian sb3zAO801 */     if(n == 0) a[++cnt] = 0;
/* iEJHvpZb4 ily traian sb3zAO801 */     while(n)
/* iEJHvpZb4 ily traian sb3zAO801 */     {
/* iEJHvpZb4 ily traian sb3zAO801 */        a[++cnt] = n % 2;
/* iEJHvpZb4 ily traian sb3zAO801 */        n /= 2;
/* iEJHvpZb4 ily traian sb3zAO801 */     }
/* iEJHvpZb4 ily traian sb3zAO801 */     for(int i = 1 ; i <= cnt ; i++)
/* iEJHvpZb4 ily traian sb3zAO801 */     {
/* iEJHvpZb4 ily traian sb3zAO801 */         if(a[i]==0) f[i] = 1;
/* iEJHvpZb4 ily traian sb3zAO801 */         else f[i] = 0;
/* iEJHvpZb4 ily traian sb3zAO801 */     }
/* iEJHvpZb4 ily traian sb3zAO801 */     for(int i = 1 ; i <= cnt ; i++)
/* iEJHvpZb4 ily traian sb3zAO801 */     {
/* iEJHvpZb4 ily traian sb3zAO801 */         m = m + p*f[i];
/* iEJHvpZb4 ily traian sb3zAO801 */         p *= 2;
/* iEJHvpZb4 ily traian sb3zAO801 */     }
/* iEJHvpZb4 ily traian sb3zAO801 */     cout << m;
/* iEJHvpZb4 ily traian sb3zAO801 */     return 0;
/* iEJHvpZb4 ily traian sb3zAO801 */ }