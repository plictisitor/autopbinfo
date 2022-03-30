/* ZCJIqhek3 ily traian gZRBJAQj6 */ #include <algorithm>
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
/* ZCJIqhek3 ily traian gZRBJAQj6 */ using namespace std;
/* ZCJIqhek3 ily traian gZRBJAQj6 */ int n , x , a[100001] , cnt;
/* ZCJIqhek3 ily traian gZRBJAQj6 */ int main()
/* ZCJIqhek3 ily traian gZRBJAQj6 */ {
/* ZCJIqhek3 ily traian gZRBJAQj6 */     cin >> n;
/* ZCJIqhek3 ily traian gZRBJAQj6 */     for(int i = 1 ; i <= n ; i++)
/* ZCJIqhek3 ily traian gZRBJAQj6 */     {
/* ZCJIqhek3 ily traian gZRBJAQj6 */         cin >> x;
/* ZCJIqhek3 ily traian gZRBJAQj6 */         int st = 1 , dr = cnt;
/* ZCJIqhek3 ily traian gZRBJAQj6 */         while(st <= dr)
/* ZCJIqhek3 ily traian gZRBJAQj6 */         {
/* ZCJIqhek3 ily traian gZRBJAQj6 */             int m = (st + dr) / 2;
/* ZCJIqhek3 ily traian gZRBJAQj6 */             if(a[m] < x) dr = m - 1;
/* ZCJIqhek3 ily traian gZRBJAQj6 */             else st = m + 1;
/* ZCJIqhek3 ily traian gZRBJAQj6 */         }
/* ZCJIqhek3 ily traian gZRBJAQj6 */         if(st > cnt) a[++cnt] = x;
/* ZCJIqhek3 ily traian gZRBJAQj6 */         else a[st] = x;
/* ZCJIqhek3 ily traian gZRBJAQj6 */     }
/* ZCJIqhek3 ily traian gZRBJAQj6 */     cout << cnt;
/* ZCJIqhek3 ily traian gZRBJAQj6 */ }