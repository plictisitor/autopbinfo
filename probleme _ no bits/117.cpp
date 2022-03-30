/* fVERmgKGn ily traian 31EhQ0on9 */ #include <algorithm>
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
/* fVERmgKGn ily traian 31EhQ0on9 */ int numar(int n , int a[] , int& k)
/* fVERmgKGn ily traian 31EhQ0on9 */ {
/* fVERmgKGn ily traian 31EhQ0on9 */     sort(a , a+n);
/* fVERmgKGn ily traian 31EhQ0on9 */     int b=a[0];
/* fVERmgKGn ily traian 31EhQ0on9 */     int cnt=1;
/* fVERmgKGn ily traian 31EhQ0on9 */     while(b)
/* fVERmgKGn ily traian 31EhQ0on9 */     {
/* fVERmgKGn ily traian 31EhQ0on9 */         cnt*=10;
/* fVERmgKGn ily traian 31EhQ0on9 */         b/=10;
/* fVERmgKGn ily traian 31EhQ0on9 */     }
/* fVERmgKGn ily traian 31EhQ0on9 */     k=a[n-1]*cnt+a[0];
/* fVERmgKGn ily traian 31EhQ0on9 */ }