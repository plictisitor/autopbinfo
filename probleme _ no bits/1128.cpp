/* y76l0IOSm ily traian y7pVQH4QL */ #include <algorithm>
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
/* y76l0IOSm ily traian y7pVQH4QL */ using namespace std;
/* y76l0IOSm ily traian y7pVQH4QL */ int main()
/* y76l0IOSm ily traian y7pVQH4QL */ {
/* y76l0IOSm ily traian y7pVQH4QL */     int n , m;
/* y76l0IOSm ily traian y7pVQH4QL */     cin >> m >> n;
/* y76l0IOSm ily traian y7pVQH4QL */     if(m > n) cout << 0;
/* y76l0IOSm ily traian y7pVQH4QL */     else
/* y76l0IOSm ily traian y7pVQH4QL */     {
/* y76l0IOSm ily traian y7pVQH4QL */         long long p = 1;
/* y76l0IOSm ily traian y7pVQH4QL */         for(int i = 1 ; i <= m ; ++i)
/* y76l0IOSm ily traian y7pVQH4QL */         {
/* y76l0IOSm ily traian y7pVQH4QL */             p *= (n - m + i);
/* y76l0IOSm ily traian y7pVQH4QL */             if(p > 224737) p %= 224737;
/* y76l0IOSm ily traian y7pVQH4QL */         }
/* y76l0IOSm ily traian y7pVQH4QL */         cout << p%224737;
/* y76l0IOSm ily traian y7pVQH4QL */     }
/* y76l0IOSm ily traian y7pVQH4QL */ }