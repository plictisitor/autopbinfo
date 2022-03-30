/* SQ0IKB6mq ily traian VJBl628Y1 */ #include <algorithm>
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
/* SQ0IKB6mq ily traian VJBl628Y1 */ int f[2000001];
/* SQ0IKB6mq ily traian VJBl628Y1 */ long long SecvBiti(char s[])
/* SQ0IKB6mq ily traian VJBl628Y1 */ {
/* SQ0IKB6mq ily traian VJBl628Y1 */     int l = strlen(s);
/* SQ0IKB6mq ily traian VJBl628Y1 */     f[l]=1;
/* SQ0IKB6mq ily traian VJBl628Y1 */     long long int cnt = 0;
/* SQ0IKB6mq ily traian VJBl628Y1 */     for(int i = 0 ; i < l ; ++i)
/* SQ0IKB6mq ily traian VJBl628Y1 */         if(s[i]=='1') cnt++ , f[l+cnt]++;
/* SQ0IKB6mq ily traian VJBl628Y1 */         else cnt-- , f[l+cnt]++;
/* SQ0IKB6mq ily traian VJBl628Y1 */     cnt=0;
/* SQ0IKB6mq ily traian VJBl628Y1 */     for(int i = 0 ; i < 2*l ; ++i)
/* SQ0IKB6mq ily traian VJBl628Y1 */         cnt = cnt + f[i] * (f[i]-1LL) / 2;
/* SQ0IKB6mq ily traian VJBl628Y1 */     return cnt;
/* SQ0IKB6mq ily traian VJBl628Y1 */ }