/* Zj4PNEofO ily traian 2r4OPCWm0 */ #include <algorithm>
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
/* Zj4PNEofO ily traian 2r4OPCWm0 */ 
/* Zj4PNEofO ily traian 2r4OPCWm0 */ using namespace std;
/* Zj4PNEofO ily traian 2r4OPCWm0 */ long long val , n , r , x;
/* Zj4PNEofO ily traian 2r4OPCWm0 */ ifstream cin("pavare1.in");
/* Zj4PNEofO ily traian 2r4OPCWm0 */ ofstream cout("pavare1.out");
/* Zj4PNEofO ily traian 2r4OPCWm0 */ int main()
/* Zj4PNEofO ily traian 2r4OPCWm0 */ {
/* Zj4PNEofO ily traian 2r4OPCWm0 */     cin >> val >> x;
/* Zj4PNEofO ily traian 2r4OPCWm0 */     r = (long long)((1 + sqrt(4*x))/2);
/* Zj4PNEofO ily traian 2r4OPCWm0 */     if(x <= (r*(r-1) + r) )
/* Zj4PNEofO ily traian 2r4OPCWm0 */     {
/* Zj4PNEofO ily traian 2r4OPCWm0 */         if(val == 1) {cout << r * 2 - 1 << "\n" ; return 0;}
/* Zj4PNEofO ily traian 2r4OPCWm0 */         if (x == r*(r-1))
/* Zj4PNEofO ily traian 2r4OPCWm0 */         {
/* Zj4PNEofO ily traian 2r4OPCWm0 */             for(int i = 1; i <= r - 1 ; i++) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */             for(int i = r - 1 ; i >= 1 ; i--) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */         }
/* Zj4PNEofO ily traian 2r4OPCWm0 */         else
/* Zj4PNEofO ily traian 2r4OPCWm0 */         {
/* Zj4PNEofO ily traian 2r4OPCWm0 */             for(int i = 1 ; i <= (x - (r*(r-1))) ; i++)cout<<i<<" ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */             for(int i = (x - (r*(r-1))) ; i <= r - 1 ; i++) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */             for(int i = r - 1 ; i >= 1 ; i--) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */         }
/* Zj4PNEofO ily traian 2r4OPCWm0 */     }
/* Zj4PNEofO ily traian 2r4OPCWm0 */     else
/* Zj4PNEofO ily traian 2r4OPCWm0 */     {
/* Zj4PNEofO ily traian 2r4OPCWm0 */         if(val == 1) {cout << r * 2 << "\n" ; return 0;}
/* Zj4PNEofO ily traian 2r4OPCWm0 */         long long k = x - (r*(r-1)) - r;
/* Zj4PNEofO ily traian 2r4OPCWm0 */         for(int i = 1 ; i <= k ; i++) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */         for(int i = k ; i <= r ; i++) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */         for(int i = r - 1 ; i >= 1 ; i--) cout << i << " ";
/* Zj4PNEofO ily traian 2r4OPCWm0 */     }
/* Zj4PNEofO ily traian 2r4OPCWm0 */     return 0;
/* Zj4PNEofO ily traian 2r4OPCWm0 */ }