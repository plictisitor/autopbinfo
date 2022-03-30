/* rhsHzYCWQ ily traian qJ8W9WmK7 */ #include <algorithm>
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
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ using namespace std;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ 
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ long long int s;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ 
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ bool echi(int n){
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     int sp = 0, si = 0;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     while(n){
/* rhsHzYCWQ ily traian qJ8W9WmK7 */         if(n % 2 == 0)
/* rhsHzYCWQ ily traian qJ8W9WmK7 */             sp += n % 10;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */         else
/* rhsHzYCWQ ily traian qJ8W9WmK7 */             si += n % 10;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */         n/=10;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     }
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     return sp == si;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ }
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ 
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ int main(){
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     int a, b;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     cin >> a >> b;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     for(int i = a; i <= b; ++i)
/* rhsHzYCWQ ily traian qJ8W9WmK7 */         if(echi(i))
/* rhsHzYCWQ ily traian qJ8W9WmK7 */             s += i;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     cout << s;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */     return 0;
/* rhsHzYCWQ ily traian qJ8W9WmK7 */ }