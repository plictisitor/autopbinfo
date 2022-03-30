/* ozV97g9rR ily traian 2lvisb7o6 */ #include <algorithm>
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
/* ozV97g9rR ily traian 2lvisb7o6 */ using namespace std;
/* ozV97g9rR ily traian 2lvisb7o6 */ int main()
/* ozV97g9rR ily traian 2lvisb7o6 */ {
/* ozV97g9rR ily traian 2lvisb7o6 */     int n , v[500] , p = 1 , p2 = 0;
/* ozV97g9rR ily traian 2lvisb7o6 */     cin >> n;
/* ozV97g9rR ily traian 2lvisb7o6 */     for(int i = 1 ; i < 500 ; ++i) v[i]=i;
/* ozV97g9rR ily traian 2lvisb7o6 */     for(int i = 1 ; i <= 2 * n ; ++i)
/* ozV97g9rR ily traian 2lvisb7o6 */     {
/* ozV97g9rR ily traian 2lvisb7o6 */         if(i % 2 == 1)
/* ozV97g9rR ily traian 2lvisb7o6 */         {
/* ozV97g9rR ily traian 2lvisb7o6 */             for(int j = 1 ; j <= 2 * n ; ++j)
/* ozV97g9rR ily traian 2lvisb7o6 */             {
/* ozV97g9rR ily traian 2lvisb7o6 */                 cout << v[p] <<" ";
/* ozV97g9rR ily traian 2lvisb7o6 */                 p += 2;
/* ozV97g9rR ily traian 2lvisb7o6 */             }
/* ozV97g9rR ily traian 2lvisb7o6 */         }
/* ozV97g9rR ily traian 2lvisb7o6 */         else
/* ozV97g9rR ily traian 2lvisb7o6 */         {
/* ozV97g9rR ily traian 2lvisb7o6 */             p2 += 4 * n;
/* ozV97g9rR ily traian 2lvisb7o6 */             int cp2 = p2;
/* ozV97g9rR ily traian 2lvisb7o6 */             for(int j = 1 ; j <= 2 * n ; ++j)
/* ozV97g9rR ily traian 2lvisb7o6 */             {
/* ozV97g9rR ily traian 2lvisb7o6 */                 cout << v[cp2] <<" ";
/* ozV97g9rR ily traian 2lvisb7o6 */                 cp2 -= 2;
/* ozV97g9rR ily traian 2lvisb7o6 */             }
/* ozV97g9rR ily traian 2lvisb7o6 */         }
/* ozV97g9rR ily traian 2lvisb7o6 */         cout << endl;
/* ozV97g9rR ily traian 2lvisb7o6 */     }
/* ozV97g9rR ily traian 2lvisb7o6 */ }