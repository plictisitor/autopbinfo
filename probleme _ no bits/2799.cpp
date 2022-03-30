/* ZjXAqsr8C ily traian 25ZVyevfS */ #include <algorithm>
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
/* ZjXAqsr8C ily traian 25ZVyevfS */ using namespace std;
/* ZjXAqsr8C ily traian 25ZVyevfS */ int main()
/* ZjXAqsr8C ily traian 25ZVyevfS */ {
/* ZjXAqsr8C ily traian 25ZVyevfS */     int n , x = 1;
/* ZjXAqsr8C ily traian 25ZVyevfS */     cin >> n;
/* ZjXAqsr8C ily traian 25ZVyevfS */     while(n & x)
/* ZjXAqsr8C ily traian 25ZVyevfS */     {
/* ZjXAqsr8C ily traian 25ZVyevfS */         n ^= x;
/* ZjXAqsr8C ily traian 25ZVyevfS */         x <<= 1;
/* ZjXAqsr8C ily traian 25ZVyevfS */     }
/* ZjXAqsr8C ily traian 25ZVyevfS */     n ^= x;
/* ZjXAqsr8C ily traian 25ZVyevfS */     cout << n;
/* ZjXAqsr8C ily traian 25ZVyevfS */     return 0;
/* ZjXAqsr8C ily traian 25ZVyevfS */ }