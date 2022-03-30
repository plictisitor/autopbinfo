/* nzCLNwJFh ily traian 4HmuN3B71 */ #include <algorithm>
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
/* nzCLNwJFh ily traian 4HmuN3B71 */ using namespace std;
/* nzCLNwJFh ily traian 4HmuN3B71 */ int n , b ,  x[10];
/* nzCLNwJFh ily traian 4HmuN3B71 */ 
/* nzCLNwJFh ily traian 4HmuN3B71 */ void afisare()
/* nzCLNwJFh ily traian 4HmuN3B71 */ {
/* nzCLNwJFh ily traian 4HmuN3B71 */     for(int i = 1 ; i <= n ; ++i)
/* nzCLNwJFh ily traian 4HmuN3B71 */         cout << x[i];
/* nzCLNwJFh ily traian 4HmuN3B71 */     cout << '\n';
/* nzCLNwJFh ily traian 4HmuN3B71 */ }
/* nzCLNwJFh ily traian 4HmuN3B71 */ 
/* nzCLNwJFh ily traian 4HmuN3B71 */ void back(int k)
/* nzCLNwJFh ily traian 4HmuN3B71 */ {
/* nzCLNwJFh ily traian 4HmuN3B71 */     for(int i = 0 ; i < b ; ++i)
/* nzCLNwJFh ily traian 4HmuN3B71 */     {
/* nzCLNwJFh ily traian 4HmuN3B71 */         x[k] = i;
/* nzCLNwJFh ily traian 4HmuN3B71 */         if(k > 1 || i > 0)
/* nzCLNwJFh ily traian 4HmuN3B71 */         {
/* nzCLNwJFh ily traian 4HmuN3B71 */             if(k == n)afisare();
/* nzCLNwJFh ily traian 4HmuN3B71 */             else back(k + 1);
/* nzCLNwJFh ily traian 4HmuN3B71 */         }
/* nzCLNwJFh ily traian 4HmuN3B71 */     }
/* nzCLNwJFh ily traian 4HmuN3B71 */ }
/* nzCLNwJFh ily traian 4HmuN3B71 */ 
/* nzCLNwJFh ily traian 4HmuN3B71 */ int main()
/* nzCLNwJFh ily traian 4HmuN3B71 */ {
/* nzCLNwJFh ily traian 4HmuN3B71 */     cin >> n >> b;
/* nzCLNwJFh ily traian 4HmuN3B71 */     back(1);
/* nzCLNwJFh ily traian 4HmuN3B71 */     return 0;
/* nzCLNwJFh ily traian 4HmuN3B71 */ }