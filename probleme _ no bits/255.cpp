/* DoNVFmuNA ily traian 2iLROT0S9 */ #include <algorithm>
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
/* DoNVFmuNA ily traian 2iLROT0S9 */ using namespace std;
/* DoNVFmuNA ily traian 2iLROT0S9 */ 
/* DoNVFmuNA ily traian 2iLROT0S9 */ int main()
/* DoNVFmuNA ily traian 2iLROT0S9 */ {
/* DoNVFmuNA ily traian 2iLROT0S9 */     int n;
/* DoNVFmuNA ily traian 2iLROT0S9 */     cin >> n;
/* DoNVFmuNA ily traian 2iLROT0S9 */     int a, b, c;
/* DoNVFmuNA ily traian 2iLROT0S9 */     a = 1;
/* DoNVFmuNA ily traian 2iLROT0S9 */     b = 1;
/* DoNVFmuNA ily traian 2iLROT0S9 */     if(n == 1)
/* DoNVFmuNA ily traian 2iLROT0S9 */         cout << 1;
/* DoNVFmuNA ily traian 2iLROT0S9 */     else{
/* DoNVFmuNA ily traian 2iLROT0S9 */         cout << 1 << ' ' << 1 << ' ';
/* DoNVFmuNA ily traian 2iLROT0S9 */         n-=2;
/* DoNVFmuNA ily traian 2iLROT0S9 */         while(n > 0){
/* DoNVFmuNA ily traian 2iLROT0S9 */             c = a + b;
/* DoNVFmuNA ily traian 2iLROT0S9 */             a = b;
/* DoNVFmuNA ily traian 2iLROT0S9 */             b = c;
/* DoNVFmuNA ily traian 2iLROT0S9 */             cout << c << ' ';
/* DoNVFmuNA ily traian 2iLROT0S9 */             n--;
/* DoNVFmuNA ily traian 2iLROT0S9 */         }
/* DoNVFmuNA ily traian 2iLROT0S9 */     }
/* DoNVFmuNA ily traian 2iLROT0S9 */     return 0;
/* DoNVFmuNA ily traian 2iLROT0S9 */ }