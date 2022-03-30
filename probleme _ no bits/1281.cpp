/* ypBFEriIR ily traian qOZRngLt7 */ #include <algorithm>
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
/* ypBFEriIR ily traian qOZRngLt7 */ 
/* ypBFEriIR ily traian qOZRngLt7 */ using namespace std;
/* ypBFEriIR ily traian qOZRngLt7 */ 
/* ypBFEriIR ily traian qOZRngLt7 */ int n , a[11] , p[11] , ok , cnt;
/* ypBFEriIR ily traian qOZRngLt7 */ 
/* ypBFEriIR ily traian qOZRngLt7 */ void afis()
/* ypBFEriIR ily traian qOZRngLt7 */ {
/* ypBFEriIR ily traian qOZRngLt7 */     for(int i = 1 ; i <= n ; ++i)
/* ypBFEriIR ily traian qOZRngLt7 */     {
/* ypBFEriIR ily traian qOZRngLt7 */         for(int j = 1 ; j <= n ; ++j)
/* ypBFEriIR ily traian qOZRngLt7 */             if(a[j] == i) cout << "* ";
/* ypBFEriIR ily traian qOZRngLt7 */             else cout << "- ";
/* ypBFEriIR ily traian qOZRngLt7 */         cout << endl;
/* ypBFEriIR ily traian qOZRngLt7 */     }
/* ypBFEriIR ily traian qOZRngLt7 */     cnt++;
/* ypBFEriIR ily traian qOZRngLt7 */ }
/* ypBFEriIR ily traian qOZRngLt7 */ 
/* ypBFEriIR ily traian qOZRngLt7 */ void back(int ind)
/* ypBFEriIR ily traian qOZRngLt7 */ {
/* ypBFEriIR ily traian qOZRngLt7 */     for(int i = 1 ; i <= n && cnt == 0; ++i)
/* ypBFEriIR ily traian qOZRngLt7 */     {
/* ypBFEriIR ily traian qOZRngLt7 */         if(!p[i])
/* ypBFEriIR ily traian qOZRngLt7 */         {
/* ypBFEriIR ily traian qOZRngLt7 */             ok = 0;
/* ypBFEriIR ily traian qOZRngLt7 */             a[ind] = i;
/* ypBFEriIR ily traian qOZRngLt7 */             p[i] = 1;
/* ypBFEriIR ily traian qOZRngLt7 */             for(int j = 1 ; j < ind; ++j)
/* ypBFEriIR ily traian qOZRngLt7 */                 if(ind - j == abs(a[ind] - a[j])) ok = 1;
/* ypBFEriIR ily traian qOZRngLt7 */             if(ind == n && ok == 0)
/* ypBFEriIR ily traian qOZRngLt7 */                 afis();
/* ypBFEriIR ily traian qOZRngLt7 */             else if(ok == 0) back(ind + 1);
/* ypBFEriIR ily traian qOZRngLt7 */             p[i] = 0;
/* ypBFEriIR ily traian qOZRngLt7 */         }
/* ypBFEriIR ily traian qOZRngLt7 */     }
/* ypBFEriIR ily traian qOZRngLt7 */ }
/* ypBFEriIR ily traian qOZRngLt7 */ 
/* ypBFEriIR ily traian qOZRngLt7 */ int main()
/* ypBFEriIR ily traian qOZRngLt7 */ {
/* ypBFEriIR ily traian qOZRngLt7 */     cin >> n;
/* ypBFEriIR ily traian qOZRngLt7 */     back(1);
/* ypBFEriIR ily traian qOZRngLt7 */     return 0;
/* ypBFEriIR ily traian qOZRngLt7 */ }