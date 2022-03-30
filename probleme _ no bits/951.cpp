/* CVvjfDbMU ily traian UsqwE2J86 */ #include <algorithm>
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
/* CVvjfDbMU ily traian UsqwE2J86 */ using namespace std; 
/* CVvjfDbMU ily traian UsqwE2J86 */ 
/* CVvjfDbMU ily traian UsqwE2J86 */ int main() 
/* CVvjfDbMU ily traian UsqwE2J86 */ { 
/* CVvjfDbMU ily traian UsqwE2J86 */     int p , a , b , c , d , n , i , k , nr = 0 , y; 
/* CVvjfDbMU ily traian UsqwE2J86 */     cin >> n >> k >> p; 
/* CVvjfDbMU ily traian UsqwE2J86 */     a = 1; 
/* CVvjfDbMU ily traian UsqwE2J86 */     b = 1; 
/* CVvjfDbMU ily traian UsqwE2J86 */     c = 2; 
/* CVvjfDbMU ily traian UsqwE2J86 */     y = p % 124; 
/* CVvjfDbMU ily traian UsqwE2J86 */     if(a == k) 
/* CVvjfDbMU ily traian UsqwE2J86 */         nr ++; 
/* CVvjfDbMU ily traian UsqwE2J86 */     if(b == k) 
/* CVvjfDbMU ily traian UsqwE2J86 */         nr ++;
/* CVvjfDbMU ily traian UsqwE2J86 */     if(c == k) 
/* CVvjfDbMU ily traian UsqwE2J86 */         nr ++; 
/* CVvjfDbMU ily traian UsqwE2J86 */     for(i = 4 ; i <= n ; i ++) 
/* CVvjfDbMU ily traian UsqwE2J86 */     { 
/* CVvjfDbMU ily traian UsqwE2J86 */         d = (a + b + c) % 10; 
/* CVvjfDbMU ily traian UsqwE2J86 */         a = b; 
/* CVvjfDbMU ily traian UsqwE2J86 */         b = c;
/* CVvjfDbMU ily traian UsqwE2J86 */         c = d; 
/* CVvjfDbMU ily traian UsqwE2J86 */         if(d == k) 
/* CVvjfDbMU ily traian UsqwE2J86 */         nr ++; 
/* CVvjfDbMU ily traian UsqwE2J86 */     } 
/* CVvjfDbMU ily traian UsqwE2J86 */     a = 1; 
/* CVvjfDbMU ily traian UsqwE2J86 */     b = 1; 
/* CVvjfDbMU ily traian UsqwE2J86 */     c = 2; 
/* CVvjfDbMU ily traian UsqwE2J86 */     if(y == 1)
/* CVvjfDbMU ily traian UsqwE2J86 */     d = a; 
/* CVvjfDbMU ily traian UsqwE2J86 */     else if(y == 2) 
/* CVvjfDbMU ily traian UsqwE2J86 */     d = b; 
/* CVvjfDbMU ily traian UsqwE2J86 */     else if(y == 3)
/* CVvjfDbMU ily traian UsqwE2J86 */     d = c;
/* CVvjfDbMU ily traian UsqwE2J86 */     else 
/* CVvjfDbMU ily traian UsqwE2J86 */     { 
/* CVvjfDbMU ily traian UsqwE2J86 */         if(y == 0) 
/* CVvjfDbMU ily traian UsqwE2J86 */         y = 124; 
/* CVvjfDbMU ily traian UsqwE2J86 */         for(i = 4 ; i <= y ; i++)
/* CVvjfDbMU ily traian UsqwE2J86 */         { 
/* CVvjfDbMU ily traian UsqwE2J86 */             d = (a + b + c) % 10; 
/* CVvjfDbMU ily traian UsqwE2J86 */             a = b; 
/* CVvjfDbMU ily traian UsqwE2J86 */             b = c; 
/* CVvjfDbMU ily traian UsqwE2J86 */             c = d; 
/* CVvjfDbMU ily traian UsqwE2J86 */         } 
/* CVvjfDbMU ily traian UsqwE2J86 */     } 
/* CVvjfDbMU ily traian UsqwE2J86 */     cout << nr << endl << d <<endl; 
/* CVvjfDbMU ily traian UsqwE2J86 */     return 0; 
/* CVvjfDbMU ily traian UsqwE2J86 */ }