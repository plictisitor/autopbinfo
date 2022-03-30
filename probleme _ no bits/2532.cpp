/* PXSgAz6b3 ily traian 9KyhBQIPB */ #include <algorithm>
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
/* PXSgAz6b3 ily traian 9KyhBQIPB */ using namespace std;
/* PXSgAz6b3 ily traian 9KyhBQIPB */ 
/* PXSgAz6b3 ily traian 9KyhBQIPB */ int n , m , a[1001][9001] , s;
/* PXSgAz6b3 ily traian 9KyhBQIPB */ 
/* PXSgAz6b3 ily traian 9KyhBQIPB */ int main()
/* PXSgAz6b3 ily traian 9KyhBQIPB */ {
/* PXSgAz6b3 ily traian 9KyhBQIPB */     cin >> n >> s;
/* PXSgAz6b3 ily traian 9KyhBQIPB */ 
/* PXSgAz6b3 ily traian 9KyhBQIPB */     for(int i = 1 ; i <= 9 ; i++)
/* PXSgAz6b3 ily traian 9KyhBQIPB */         a[1][i] = 1;
/* PXSgAz6b3 ily traian 9KyhBQIPB */ 
/* PXSgAz6b3 ily traian 9KyhBQIPB */     for(int i = 1 ; i < n ; i++)
/* PXSgAz6b3 ily traian 9KyhBQIPB */         for(int j = 1 ; j <= s ; j++)
/* PXSgAz6b3 ily traian 9KyhBQIPB */             if(a[i][j])
/* PXSgAz6b3 ily traian 9KyhBQIPB */                 for(int k = 0 ; k <= 9 ; k++)
/* PXSgAz6b3 ily traian 9KyhBQIPB */                 {
/* PXSgAz6b3 ily traian 9KyhBQIPB */                     a[i + 1][j + k] += a[i][j];
/* PXSgAz6b3 ily traian 9KyhBQIPB */                     a[i + 1][j + k] %= 666013;
/* PXSgAz6b3 ily traian 9KyhBQIPB */                 }
/* PXSgAz6b3 ily traian 9KyhBQIPB */ 
/* PXSgAz6b3 ily traian 9KyhBQIPB */     cout << a[n][s];
/* PXSgAz6b3 ily traian 9KyhBQIPB */ }