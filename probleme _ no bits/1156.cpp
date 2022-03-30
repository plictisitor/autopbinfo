/* LjuqAvuy9 ily traian OceM6LZd5 */ #include <algorithm>
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
/* LjuqAvuy9 ily traian OceM6LZd5 */ 
/* LjuqAvuy9 ily traian OceM6LZd5 */ using namespace std;
/* LjuqAvuy9 ily traian OceM6LZd5 */ 
/* LjuqAvuy9 ily traian OceM6LZd5 */ int main()
/* LjuqAvuy9 ily traian OceM6LZd5 */ {
/* LjuqAvuy9 ily traian OceM6LZd5 */     int n;
/* LjuqAvuy9 ily traian OceM6LZd5 */     cin >> n;
/* LjuqAvuy9 ily traian OceM6LZd5 */     int a[1000];
/* LjuqAvuy9 ily traian OceM6LZd5 */     int v[1000];
/* LjuqAvuy9 ily traian OceM6LZd5 */     for(int i = 0 ; i < n ; ++i)
/* LjuqAvuy9 ily traian OceM6LZd5 */     {
/* LjuqAvuy9 ily traian OceM6LZd5 */         cin >> a[i];
/* LjuqAvuy9 ily traian OceM6LZd5 */         v[i]=a[i];
/* LjuqAvuy9 ily traian OceM6LZd5 */     }
/* LjuqAvuy9 ily traian OceM6LZd5 */     sort(a,a+n);
/* LjuqAvuy9 ily traian OceM6LZd5 */     for(int i = 0 ; i < n ; ++i)
/* LjuqAvuy9 ily traian OceM6LZd5 */         for(int j = 0 ; j < n ; ++j)
/* LjuqAvuy9 ily traian OceM6LZd5 */         {
/* LjuqAvuy9 ily traian OceM6LZd5 */             if(a[i]==v[j])
/* LjuqAvuy9 ily traian OceM6LZd5 */             cout << j+1 << ' ';
/* LjuqAvuy9 ily traian OceM6LZd5 */         }
/* LjuqAvuy9 ily traian OceM6LZd5 */     return 0;    
/* LjuqAvuy9 ily traian OceM6LZd5 */ }