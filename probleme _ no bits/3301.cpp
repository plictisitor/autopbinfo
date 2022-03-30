/* OcHccL9cr ily traian MTgg5opL3 */ #include <algorithm>
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
/* OcHccL9cr ily traian MTgg5opL3 */ using namespace std;
/* OcHccL9cr ily traian MTgg5opL3 */ 
/* OcHccL9cr ily traian MTgg5opL3 */ ifstream cin("nrdiv9.in");
/* OcHccL9cr ily traian MTgg5opL3 */ ofstream cout("nrdiv9.out");
/* OcHccL9cr ily traian MTgg5opL3 */ 
/* OcHccL9cr ily traian MTgg5opL3 */ int main(){
/* OcHccL9cr ily traian MTgg5opL3 */     int n;
/* OcHccL9cr ily traian MTgg5opL3 */     cin >> n;
/* OcHccL9cr ily traian MTgg5opL3 */     int cc = 0;
/* OcHccL9cr ily traian MTgg5opL3 */     for(int i = 1; i * i <= n; ++i){
/* OcHccL9cr ily traian MTgg5opL3 */         int x = i;
/* OcHccL9cr ily traian MTgg5opL3 */         int  d = 2, cnt = 1;
/* OcHccL9cr ily traian MTgg5opL3 */         while(x > 1){
/* OcHccL9cr ily traian MTgg5opL3 */             int p = 0;
/* OcHccL9cr ily traian MTgg5opL3 */             while(x % d == 0)
/* OcHccL9cr ily traian MTgg5opL3 */                 p++, x/=d;
/* OcHccL9cr ily traian MTgg5opL3 */             cnt=cnt * (2 * p + 1);
/* OcHccL9cr ily traian MTgg5opL3 */             d++;
/* OcHccL9cr ily traian MTgg5opL3 */             if(d * d > x)
/* OcHccL9cr ily traian MTgg5opL3 */                 d = x;
/* OcHccL9cr ily traian MTgg5opL3 */         }
/* OcHccL9cr ily traian MTgg5opL3 */         if(cnt == 9)
/* OcHccL9cr ily traian MTgg5opL3 */             cc++;
/* OcHccL9cr ily traian MTgg5opL3 */     }
/* OcHccL9cr ily traian MTgg5opL3 */     cout << cc;
/* OcHccL9cr ily traian MTgg5opL3 */ }