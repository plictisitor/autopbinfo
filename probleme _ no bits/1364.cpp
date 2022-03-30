/* saTtdECed ily traian RybvA7nY4 */ #include <algorithm>
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
/* saTtdECed ily traian RybvA7nY4 */ using namespace std;
/* saTtdECed ily traian RybvA7nY4 */ 
/* saTtdECed ily traian RybvA7nY4 */ ifstream cin("produs3.in");
/* saTtdECed ily traian RybvA7nY4 */ ofstream cout("produs3.out");
/* saTtdECed ily traian RybvA7nY4 */ 
/* saTtdECed ily traian RybvA7nY4 */ int exp(int n , int x)
/* saTtdECed ily traian RybvA7nY4 */ {
/* saTtdECed ily traian RybvA7nY4 */     int c = 0;
/* saTtdECed ily traian RybvA7nY4 */     while(n % x == 0)
/* saTtdECed ily traian RybvA7nY4 */     {
/* saTtdECed ily traian RybvA7nY4 */         n /= x;
/* saTtdECed ily traian RybvA7nY4 */         c++;
/* saTtdECed ily traian RybvA7nY4 */     }
/* saTtdECed ily traian RybvA7nY4 */     return c;
/* saTtdECed ily traian RybvA7nY4 */ 
/* saTtdECed ily traian RybvA7nY4 */ }
/* saTtdECed ily traian RybvA7nY4 */ 
/* saTtdECed ily traian RybvA7nY4 */ int main()
/* saTtdECed ily traian RybvA7nY4 */ {
/* saTtdECed ily traian RybvA7nY4 */     int n , c2 = 0 , c3 = 0 , c5 = 0 , f[1001] = {0} , x;
/* saTtdECed ily traian RybvA7nY4 */     unsigned long long c = 0;
/* saTtdECed ily traian RybvA7nY4 */     cin >> n;
/* saTtdECed ily traian RybvA7nY4 */     for(int i = 1 ; i <= n ; i++)
/* saTtdECed ily traian RybvA7nY4 */     {
/* saTtdECed ily traian RybvA7nY4 */         cin >> x;
/* saTtdECed ily traian RybvA7nY4 */         c2 = (c2 + exp(x , 2)) % 2;
/* saTtdECed ily traian RybvA7nY4 */         c3 = (c3 + exp(x , 3)) % 2;
/* saTtdECed ily traian RybvA7nY4 */         c5 = (c5 + exp(x , 5)) % 2;
/* saTtdECed ily traian RybvA7nY4 */         f[4*c2 + 2*c3 + c5]++;
/* saTtdECed ily traian RybvA7nY4 */         //cout << 4*c2 + 2*c3 + c5 << endl;
/* saTtdECed ily traian RybvA7nY4 */     }
/* saTtdECed ily traian RybvA7nY4 */     c = f[0];
/* saTtdECed ily traian RybvA7nY4 */     for(int i = 0 ; i <= 10 ; i++)
/* saTtdECed ily traian RybvA7nY4 */         c = c + 1ll * f[i] * (f[i] - 1) / 2;
/* saTtdECed ily traian RybvA7nY4 */     cout << c;
/* saTtdECed ily traian RybvA7nY4 */ }