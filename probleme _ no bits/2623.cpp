/* ImoAov6No ily traian R7Kl0pZx0 */ #include <algorithm>
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
/* ImoAov6No ily traian R7Kl0pZx0 */ 
/* ImoAov6No ily traian R7Kl0pZx0 */ using namespace std;
/* ImoAov6No ily traian R7Kl0pZx0 */ 
/* ImoAov6No ily traian R7Kl0pZx0 */ int a[100001] , mi[100001] , ma[100001] , cnt , n;
/* ImoAov6No ily traian R7Kl0pZx0 */ 
/* ImoAov6No ily traian R7Kl0pZx0 */ int main()
/* ImoAov6No ily traian R7Kl0pZx0 */ {
/* ImoAov6No ily traian R7Kl0pZx0 */     cin >> n;
/* ImoAov6No ily traian R7Kl0pZx0 */     for(int i = 1 ; i  <= n ; i++)
/* ImoAov6No ily traian R7Kl0pZx0 */     {
/* ImoAov6No ily traian R7Kl0pZx0 */         cin >> a[i];
/* ImoAov6No ily traian R7Kl0pZx0 */         ma[i] = max(ma[i-1] , a[i]);
/* ImoAov6No ily traian R7Kl0pZx0 */     }
/* ImoAov6No ily traian R7Kl0pZx0 */     mi[n] = a[n];
/* ImoAov6No ily traian R7Kl0pZx0 */     for(int i = n-1; i >= 1 ; i--)
/* ImoAov6No ily traian R7Kl0pZx0 */     {
/* ImoAov6No ily traian R7Kl0pZx0 */         mi[i] = min(mi[i+1] , a[i]);
/* ImoAov6No ily traian R7Kl0pZx0 */     }
/* ImoAov6No ily traian R7Kl0pZx0 */     for(int i = 2 ; i < n ; i++)
/* ImoAov6No ily traian R7Kl0pZx0 */     {
/* ImoAov6No ily traian R7Kl0pZx0 */         if(a[i] >= ma[i-1] && a[i]<= mi[i+1]) cnt ++;
/* ImoAov6No ily traian R7Kl0pZx0 */     }
/* ImoAov6No ily traian R7Kl0pZx0 */     cout << cnt;
/* ImoAov6No ily traian R7Kl0pZx0 */ }