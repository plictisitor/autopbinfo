/* FleDJraqi ily traian YDUFWx355 */ #include <algorithm>
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
/* FleDJraqi ily traian YDUFWx355 */ 
/* FleDJraqi ily traian YDUFWx355 */ using namespace std;
/* FleDJraqi ily traian YDUFWx355 */ 
/* FleDJraqi ily traian YDUFWx355 */ char s[300];
/* FleDJraqi ily traian YDUFWx355 */ 
/* FleDJraqi ily traian YDUFWx355 */ int main()
/* FleDJraqi ily traian YDUFWx355 */ {
/* FleDJraqi ily traian YDUFWx355 */     cin >> s;
/* FleDJraqi ily traian YDUFWx355 */     int l = strlen(s);
/* FleDJraqi ily traian YDUFWx355 */     int cnt = 0;
/* FleDJraqi ily traian YDUFWx355 */     while(l%2==0)
/* FleDJraqi ily traian YDUFWx355 */     {
/* FleDJraqi ily traian YDUFWx355 */         bool ok = true;
/* FleDJraqi ily traian YDUFWx355 */         for(int i = 0 ; i < l/2 ; ++i)
/* FleDJraqi ily traian YDUFWx355 */             if(s[i]!=s[l-i-1])
/* FleDJraqi ily traian YDUFWx355 */                 ok=false;
/* FleDJraqi ily traian YDUFWx355 */         if(ok)
/* FleDJraqi ily traian YDUFWx355 */         {
/* FleDJraqi ily traian YDUFWx355 */             cnt++;
/* FleDJraqi ily traian YDUFWx355 */             l/=2;
/* FleDJraqi ily traian YDUFWx355 */         }
/* FleDJraqi ily traian YDUFWx355 */         else
/* FleDJraqi ily traian YDUFWx355 */             break;
/* FleDJraqi ily traian YDUFWx355 */     }
/* FleDJraqi ily traian YDUFWx355 */     cout << cnt;
/* FleDJraqi ily traian YDUFWx355 */     return 0;
/* FleDJraqi ily traian YDUFWx355 */ }