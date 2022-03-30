/* vMN2Lhtk0 ily traian DonEx6iO1 */ #include <algorithm>
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
/* vMN2Lhtk0 ily traian DonEx6iO1 */ using namespace std;
/* vMN2Lhtk0 ily traian DonEx6iO1 */ 
/* vMN2Lhtk0 ily traian DonEx6iO1 */ int n, a[100001];
/* vMN2Lhtk0 ily traian DonEx6iO1 */ 
/* vMN2Lhtk0 ily traian DonEx6iO1 */ int main(){
/* vMN2Lhtk0 ily traian DonEx6iO1 */     cin >> n;
/* vMN2Lhtk0 ily traian DonEx6iO1 */     int maxi = -1, cnt = 0;
/* vMN2Lhtk0 ily traian DonEx6iO1 */     for(int i = 1; i <= n; ++i)
/* vMN2Lhtk0 ily traian DonEx6iO1 */         cin >> a[i];
/* vMN2Lhtk0 ily traian DonEx6iO1 */     for(int j = 1; j <= n/2; ++j)
/* vMN2Lhtk0 ily traian DonEx6iO1 */         if(a[j] > maxi)
/* vMN2Lhtk0 ily traian DonEx6iO1 */             maxi = a[j];
/* vMN2Lhtk0 ily traian DonEx6iO1 */     for(int i = n/2 + 1; i <= n; ++i)
/* vMN2Lhtk0 ily traian DonEx6iO1 */         if(maxi < a[i])
/* vMN2Lhtk0 ily traian DonEx6iO1 */             cnt ++;
/* vMN2Lhtk0 ily traian DonEx6iO1 */     cout << cnt;
/* vMN2Lhtk0 ily traian DonEx6iO1 */     return 0;
/* vMN2Lhtk0 ily traian DonEx6iO1 */ }