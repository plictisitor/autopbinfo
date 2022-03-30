/* cZhXFgp51 ily traian WhXbmhxvQ */ #include <algorithm>
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
/* cZhXFgp51 ily traian WhXbmhxvQ */ 
/* cZhXFgp51 ily traian WhXbmhxvQ */ using namespace std;
/* cZhXFgp51 ily traian WhXbmhxvQ */ 
/* cZhXFgp51 ily traian WhXbmhxvQ */ int main()
/* cZhXFgp51 ily traian WhXbmhxvQ */ {
/* cZhXFgp51 ily traian WhXbmhxvQ */     int n;
/* cZhXFgp51 ily traian WhXbmhxvQ */     cin >> n;
/* cZhXFgp51 ily traian WhXbmhxvQ */     
/* cZhXFgp51 ily traian WhXbmhxvQ */     long long sumaDiv = 0;
/* cZhXFgp51 ily traian WhXbmhxvQ */     for (int d = 1; d * d <= n; ++d)
/* cZhXFgp51 ily traian WhXbmhxvQ */         if (n % d == 0)  
/* cZhXFgp51 ily traian WhXbmhxvQ */         {
/* cZhXFgp51 ily traian WhXbmhxvQ */             if (d % 2 == 1)
/* cZhXFgp51 ily traian WhXbmhxvQ */                 sumaDiv += d;
/* cZhXFgp51 ily traian WhXbmhxvQ */             if (d * d != n && ((n / d) % 2 == 1))
/* cZhXFgp51 ily traian WhXbmhxvQ */                 sumaDiv += n / d;
/* cZhXFgp51 ily traian WhXbmhxvQ */         }
/* cZhXFgp51 ily traian WhXbmhxvQ */     
/* cZhXFgp51 ily traian WhXbmhxvQ */     cout << sumaDiv;
/* cZhXFgp51 ily traian WhXbmhxvQ */     return 0;
/* cZhXFgp51 ily traian WhXbmhxvQ */ }