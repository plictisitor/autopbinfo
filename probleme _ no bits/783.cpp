/* CTXkHkMf8 ily traian ibpTzjn88 */ #include <algorithm>
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
/* CTXkHkMf8 ily traian ibpTzjn88 */ 
/* CTXkHkMf8 ily traian ibpTzjn88 */ using namespace std;
/* CTXkHkMf8 ily traian ibpTzjn88 */ int main()
/* CTXkHkMf8 ily traian ibpTzjn88 */ {
/* CTXkHkMf8 ily traian ibpTzjn88 */     int n,m,a[102][102],s=0;
/* CTXkHkMf8 ily traian ibpTzjn88 */     cin>>n;
/* CTXkHkMf8 ily traian ibpTzjn88 */     for(int i=1;i<=n;i++)
/* CTXkHkMf8 ily traian ibpTzjn88 */         for(int j=1;j<=n;j++) cin>>a[i][j];
/* CTXkHkMf8 ily traian ibpTzjn88 */     for(int i=1;i<=n;i++)
/* CTXkHkMf8 ily traian ibpTzjn88 */         for(int j=1;j<=n;j++)
/* CTXkHkMf8 ily traian ibpTzjn88 */         {
/* CTXkHkMf8 ily traian ibpTzjn88 */             if(j+1==i || j-1==i) s=s+a[i][j];
/* CTXkHkMf8 ily traian ibpTzjn88 */         }
/* CTXkHkMf8 ily traian ibpTzjn88 */         cout<<s;
/* CTXkHkMf8 ily traian ibpTzjn88 */     return 0;
/* CTXkHkMf8 ily traian ibpTzjn88 */ }