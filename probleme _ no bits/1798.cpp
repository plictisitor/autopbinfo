/* zc97cEO1J ily traian LSq4MgiIt */ #include <algorithm>
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
/* zc97cEO1J ily traian LSq4MgiIt */ using namespace std;
/* zc97cEO1J ily traian LSq4MgiIt */ 
/* zc97cEO1J ily traian LSq4MgiIt */ int n , a[101];
/* zc97cEO1J ily traian LSq4MgiIt */ 
/* zc97cEO1J ily traian LSq4MgiIt */ int main()
/* zc97cEO1J ily traian LSq4MgiIt */ {
/* zc97cEO1J ily traian LSq4MgiIt */     cin >> n;
/* zc97cEO1J ily traian LSq4MgiIt */     if (n == 1) cout << 1;
/* zc97cEO1J ily traian LSq4MgiIt */     else
/* zc97cEO1J ily traian LSq4MgiIt */     {
/* zc97cEO1J ily traian LSq4MgiIt */         a[0] = 1 , a[1] = 2;
/* zc97cEO1J ily traian LSq4MgiIt */         for(int i = 1 ; i <= n ; i++)
/* zc97cEO1J ily traian LSq4MgiIt */             a[i] = a[i - 1] + a[i - 2];
/* zc97cEO1J ily traian LSq4MgiIt */     
/* zc97cEO1J ily traian LSq4MgiIt */         cout << a[n];
/* zc97cEO1J ily traian LSq4MgiIt */     }
/* zc97cEO1J ily traian LSq4MgiIt */ 
/* zc97cEO1J ily traian LSq4MgiIt */     return 0;
/* zc97cEO1J ily traian LSq4MgiIt */ }