/* argiXFZmU ily traian wUIQiPfo2 */ #include <algorithm>
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
/* argiXFZmU ily traian wUIQiPfo2 */ using namespace std;
/* argiXFZmU ily traian wUIQiPfo2 */ 
/* argiXFZmU ily traian wUIQiPfo2 */ int a[300];
/* argiXFZmU ily traian wUIQiPfo2 */ 
/* argiXFZmU ily traian wUIQiPfo2 */ int main()
/* argiXFZmU ily traian wUIQiPfo2 */ {
/* argiXFZmU ily traian wUIQiPfo2 */     int p = 1;
/* argiXFZmU ily traian wUIQiPfo2 */     for(int i = 10 ; i <= 99 ; ++i)
/* argiXFZmU ily traian wUIQiPfo2 */     {
/* argiXFZmU ily traian wUIQiPfo2 */         a[p]=i/10;
/* argiXFZmU ily traian wUIQiPfo2 */         p++;
/* argiXFZmU ily traian wUIQiPfo2 */         a[p]=i%10;
/* argiXFZmU ily traian wUIQiPfo2 */         p++;
/* argiXFZmU ily traian wUIQiPfo2 */     }
/* argiXFZmU ily traian wUIQiPfo2 */     p--;
/* argiXFZmU ily traian wUIQiPfo2 */     int k;
/* argiXFZmU ily traian wUIQiPfo2 */     cin >> k;
/* argiXFZmU ily traian wUIQiPfo2 */     cout << a[k];
/* argiXFZmU ily traian wUIQiPfo2 */     return 0;
/* argiXFZmU ily traian wUIQiPfo2 */ }