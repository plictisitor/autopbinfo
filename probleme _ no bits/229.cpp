/* BFhhd3x9I ily traian BqB2ms7aN */ #include <algorithm>
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
/* BFhhd3x9I ily traian BqB2ms7aN */ using namespace std;
/* BFhhd3x9I ily traian BqB2ms7aN */ 
/* BFhhd3x9I ily traian BqB2ms7aN */ int main()
/* BFhhd3x9I ily traian BqB2ms7aN */ {
/* BFhhd3x9I ily traian BqB2ms7aN */     int v[630];
/* BFhhd3x9I ily traian BqB2ms7aN */     v[0]=1;
/* BFhhd3x9I ily traian BqB2ms7aN */     v[1]=1;
/* BFhhd3x9I ily traian BqB2ms7aN */     for(int i = 2 ; i < 620 ; ++i)
/* BFhhd3x9I ily traian BqB2ms7aN */     {
/* BFhhd3x9I ily traian BqB2ms7aN */         v[i] = (v[i-1] + v[i-2]) % 10;
/* BFhhd3x9I ily traian BqB2ms7aN */     }
/* BFhhd3x9I ily traian BqB2ms7aN */     int n;
/* BFhhd3x9I ily traian BqB2ms7aN */     cin >> n;
/* BFhhd3x9I ily traian BqB2ms7aN */     int p = 0;
/* BFhhd3x9I ily traian BqB2ms7aN */     for(int i = 0 ; i < n ; ++i)
/* BFhhd3x9I ily traian BqB2ms7aN */     {
/* BFhhd3x9I ily traian BqB2ms7aN */         for(int j = 0 ; j < n ; ++j)
/* BFhhd3x9I ily traian BqB2ms7aN */         {
/* BFhhd3x9I ily traian BqB2ms7aN */             cout << v[p] <<" ";
/* BFhhd3x9I ily traian BqB2ms7aN */             p++;
/* BFhhd3x9I ily traian BqB2ms7aN */         }
/* BFhhd3x9I ily traian BqB2ms7aN */         cout << endl;
/* BFhhd3x9I ily traian BqB2ms7aN */     }
/* BFhhd3x9I ily traian BqB2ms7aN */ }