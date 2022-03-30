/* wR3RyLVJc ily traian qMeLlYcIj */ #include <algorithm>
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
/* wR3RyLVJc ily traian qMeLlYcIj */ using namespace std;
/* wR3RyLVJc ily traian qMeLlYcIj */ int main()
/* wR3RyLVJc ily traian qMeLlYcIj */ {
/* wR3RyLVJc ily traian qMeLlYcIj */     int n , a[31];
/* wR3RyLVJc ily traian qMeLlYcIj */     cin >> n;
/* wR3RyLVJc ily traian qMeLlYcIj */     for(int i = 1 ; i <= n ; ++i)
/* wR3RyLVJc ily traian qMeLlYcIj */     {
/* wR3RyLVJc ily traian qMeLlYcIj */         a[i]=i;
/* wR3RyLVJc ily traian qMeLlYcIj */         a[i+n]=i;
/* wR3RyLVJc ily traian qMeLlYcIj */     }
/* wR3RyLVJc ily traian qMeLlYcIj */     for(int i = 1 ; i <= n ; ++i)
/* wR3RyLVJc ily traian qMeLlYcIj */     {
/* wR3RyLVJc ily traian qMeLlYcIj */         for(int j = i ; j < n+i ; ++j)
/* wR3RyLVJc ily traian qMeLlYcIj */         cout << a[j] << " ";
/* wR3RyLVJc ily traian qMeLlYcIj */         cout << endl;
/* wR3RyLVJc ily traian qMeLlYcIj */     }
/* wR3RyLVJc ily traian qMeLlYcIj */     return 0;
/* wR3RyLVJc ily traian qMeLlYcIj */ }