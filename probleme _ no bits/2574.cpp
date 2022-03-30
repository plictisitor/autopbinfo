/* G95OvrkjR ily traian 5IIWyHhQ9 */ #include <algorithm>
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
/* G95OvrkjR ily traian 5IIWyHhQ9 */ using namespace std;
/* G95OvrkjR ily traian 5IIWyHhQ9 */ 
/* G95OvrkjR ily traian 5IIWyHhQ9 */ int main()
/* G95OvrkjR ily traian 5IIWyHhQ9 */ {
/* G95OvrkjR ily traian 5IIWyHhQ9 */     int n , m;
/* G95OvrkjR ily traian 5IIWyHhQ9 */     cin >> n >> m;
/* G95OvrkjR ily traian 5IIWyHhQ9 */     for(int j = 1 ; j <= n ; ++j){
/* G95OvrkjR ily traian 5IIWyHhQ9 */     for(int i = 1 ; i <= 8 * m ; ++i)
/* G95OvrkjR ily traian 5IIWyHhQ9 */     {
/* G95OvrkjR ily traian 5IIWyHhQ9 */         if(j == 1)
/* G95OvrkjR ily traian 5IIWyHhQ9 */         {
/* G95OvrkjR ily traian 5IIWyHhQ9 */             if(i % 8 == 3 || i % 8 == 5)
/* G95OvrkjR ily traian 5IIWyHhQ9 */                 cout << '0';
/* G95OvrkjR ily traian 5IIWyHhQ9 */             else
/* G95OvrkjR ily traian 5IIWyHhQ9 */                 cout << '_';
/* G95OvrkjR ily traian 5IIWyHhQ9 */         }
/* G95OvrkjR ily traian 5IIWyHhQ9 */         else if(j == n)
/* G95OvrkjR ily traian 5IIWyHhQ9 */         {
/* G95OvrkjR ily traian 5IIWyHhQ9 */             if(i % 8 == 1 || i % 8 == 7)
/* G95OvrkjR ily traian 5IIWyHhQ9 */                 cout << '0';
/* G95OvrkjR ily traian 5IIWyHhQ9 */             else
/* G95OvrkjR ily traian 5IIWyHhQ9 */                 cout << '_';
/* G95OvrkjR ily traian 5IIWyHhQ9 */         }
/* G95OvrkjR ily traian 5IIWyHhQ9 */         else
/* G95OvrkjR ily traian 5IIWyHhQ9 */         {
/* G95OvrkjR ily traian 5IIWyHhQ9 */             if(i % 8 == 2 || i % 8 == 6)
/* G95OvrkjR ily traian 5IIWyHhQ9 */                 cout << '0';
/* G95OvrkjR ily traian 5IIWyHhQ9 */             else
/* G95OvrkjR ily traian 5IIWyHhQ9 */                 cout << '_';
/* G95OvrkjR ily traian 5IIWyHhQ9 */         }
/* G95OvrkjR ily traian 5IIWyHhQ9 */     }
/* G95OvrkjR ily traian 5IIWyHhQ9 */     cout << endl;
/* G95OvrkjR ily traian 5IIWyHhQ9 */ }
/* G95OvrkjR ily traian 5IIWyHhQ9 */     return 0;
/* G95OvrkjR ily traian 5IIWyHhQ9 */ }