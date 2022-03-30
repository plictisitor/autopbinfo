/* i0cm9KMfj ily traian rk8n5k4X8 */ #include <algorithm>
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
/* i0cm9KMfj ily traian rk8n5k4X8 */ 
/* i0cm9KMfj ily traian rk8n5k4X8 */ using namespace std;
/* i0cm9KMfj ily traian rk8n5k4X8 */ 
/* i0cm9KMfj ily traian rk8n5k4X8 */ int par(int a);
/* i0cm9KMfj ily traian rk8n5k4X8 */ 
/* i0cm9KMfj ily traian rk8n5k4X8 */ int main ()
/* i0cm9KMfj ily traian rk8n5k4X8 */ {
/* i0cm9KMfj ily traian rk8n5k4X8 */     int n;
/* i0cm9KMfj ily traian rk8n5k4X8 */     cin >> n;
/* i0cm9KMfj ily traian rk8n5k4X8 */     int tmp, cn=0;
/* i0cm9KMfj ily traian rk8n5k4X8 */     for (int i = 1; i <= n ; ++i)
/* i0cm9KMfj ily traian rk8n5k4X8 */     {
/* i0cm9KMfj ily traian rk8n5k4X8 */         cin >> tmp;
/* i0cm9KMfj ily traian rk8n5k4X8 */         if (par(tmp))
/* i0cm9KMfj ily traian rk8n5k4X8 */         cn++;
/* i0cm9KMfj ily traian rk8n5k4X8 */     }
/* i0cm9KMfj ily traian rk8n5k4X8 */     if (cn==n)
/* i0cm9KMfj ily traian rk8n5k4X8 */     cout << "DA";
/* i0cm9KMfj ily traian rk8n5k4X8 */     else
/* i0cm9KMfj ily traian rk8n5k4X8 */     cout << "NU";
/* i0cm9KMfj ily traian rk8n5k4X8 */     return 0;    
/* i0cm9KMfj ily traian rk8n5k4X8 */ }
/* i0cm9KMfj ily traian rk8n5k4X8 */ int par(int a)
/* i0cm9KMfj ily traian rk8n5k4X8 */ {
/* i0cm9KMfj ily traian rk8n5k4X8 */     int cnt=0;
/* i0cm9KMfj ily traian rk8n5k4X8 */     while(a)
/* i0cm9KMfj ily traian rk8n5k4X8 */     a/=10,cnt++;
/* i0cm9KMfj ily traian rk8n5k4X8 */     if (cnt%2==0)
/* i0cm9KMfj ily traian rk8n5k4X8 */     return 1;
/* i0cm9KMfj ily traian rk8n5k4X8 */     else
/* i0cm9KMfj ily traian rk8n5k4X8 */     return 0;
/* i0cm9KMfj ily traian rk8n5k4X8 */ }