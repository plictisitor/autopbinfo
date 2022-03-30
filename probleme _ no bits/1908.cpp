/* 8m1vrhVUd ily traian GZrvQbit8 */ #include <algorithm>
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
/* 8m1vrhVUd ily traian GZrvQbit8 */ using namespace std;
/* 8m1vrhVUd ily traian GZrvQbit8 */ 
/* 8m1vrhVUd ily traian GZrvQbit8 */ int main()
/* 8m1vrhVUd ily traian GZrvQbit8 */ {
/* 8m1vrhVUd ily traian GZrvQbit8 */     long long int n , d = 2;
/* 8m1vrhVUd ily traian GZrvQbit8 */     cin >> n;
/* 8m1vrhVUd ily traian GZrvQbit8 */     long long int nr = n;
/* 8m1vrhVUd ily traian GZrvQbit8 */     while(n > 1)
/* 8m1vrhVUd ily traian GZrvQbit8 */     {
/* 8m1vrhVUd ily traian GZrvQbit8 */         if(n % d == 0)
/* 8m1vrhVUd ily traian GZrvQbit8 */         {
/* 8m1vrhVUd ily traian GZrvQbit8 */             nr /= d;
/* 8m1vrhVUd ily traian GZrvQbit8 */             nr *= d - 1;
/* 8m1vrhVUd ily traian GZrvQbit8 */             while(n % d == 0)
/* 8m1vrhVUd ily traian GZrvQbit8 */                 n /= d;
/* 8m1vrhVUd ily traian GZrvQbit8 */         }
/* 8m1vrhVUd ily traian GZrvQbit8 */         if(d == 2) 
/* 8m1vrhVUd ily traian GZrvQbit8 */             d = 3;
/* 8m1vrhVUd ily traian GZrvQbit8 */         else 
/* 8m1vrhVUd ily traian GZrvQbit8 */             d += 2;
/* 8m1vrhVUd ily traian GZrvQbit8 */         if(d * d > n) 
/* 8m1vrhVUd ily traian GZrvQbit8 */             d = n;
/* 8m1vrhVUd ily traian GZrvQbit8 */     }
/* 8m1vrhVUd ily traian GZrvQbit8 */     cout << nr;
/* 8m1vrhVUd ily traian GZrvQbit8 */     return 0;
/* 8m1vrhVUd ily traian GZrvQbit8 */ }