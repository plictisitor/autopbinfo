/* rzPB4V1r4 ily traian vretfRZO5 */ #include <algorithm>
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
/* rzPB4V1r4 ily traian vretfRZO5 */ using namespace std;
/* rzPB4V1r4 ily traian vretfRZO5 */ ifstream cin("crescator1.in");
/* rzPB4V1r4 ily traian vretfRZO5 */ ofstream cout("crescator1.out");
/* rzPB4V1r4 ily traian vretfRZO5 */ int a , b , cnt = 1 , ok;
/* rzPB4V1r4 ily traian vretfRZO5 */ int main()
/* rzPB4V1r4 ily traian vretfRZO5 */ {
/* rzPB4V1r4 ily traian vretfRZO5 */     cin >> a;
/* rzPB4V1r4 ily traian vretfRZO5 */     while(cin >> b && !ok)
/* rzPB4V1r4 ily traian vretfRZO5 */     {
/* rzPB4V1r4 ily traian vretfRZO5 */         if(a == b) cnt++;
/* rzPB4V1r4 ily traian vretfRZO5 */         else
/* rzPB4V1r4 ily traian vretfRZO5 */         {
/* rzPB4V1r4 ily traian vretfRZO5 */             if(cnt % 2 == 1) ok = 1;
/* rzPB4V1r4 ily traian vretfRZO5 */             else
/* rzPB4V1r4 ily traian vretfRZO5 */             {
/* rzPB4V1r4 ily traian vretfRZO5 */                 a = b;
/* rzPB4V1r4 ily traian vretfRZO5 */                 cnt = 1;
/* rzPB4V1r4 ily traian vretfRZO5 */             }
/* rzPB4V1r4 ily traian vretfRZO5 */         }
/* rzPB4V1r4 ily traian vretfRZO5 */     }
/* rzPB4V1r4 ily traian vretfRZO5 */     if(!ok && cnt % 2 == 1) ok = 1;
/* rzPB4V1r4 ily traian vretfRZO5 */     if(ok) cout << a;
/* rzPB4V1r4 ily traian vretfRZO5 */     else cout << "nu exista";
/* rzPB4V1r4 ily traian vretfRZO5 */ }