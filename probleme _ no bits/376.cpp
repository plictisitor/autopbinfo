/* oVfx3hBii ily traian 7f9EiSJSD */ #include <algorithm>
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
/* oVfx3hBii ily traian 7f9EiSJSD */ using namespace std;
/* oVfx3hBii ily traian 7f9EiSJSD */ 
/* oVfx3hBii ily traian 7f9EiSJSD */ int main()
/* oVfx3hBii ily traian 7f9EiSJSD */ {
/* oVfx3hBii ily traian 7f9EiSJSD */     int n;
/* oVfx3hBii ily traian 7f9EiSJSD */     cin >> n;
/* oVfx3hBii ily traian 7f9EiSJSD */     if(n != 1){
/* oVfx3hBii ily traian 7f9EiSJSD */         long long sum = 0;
/* oVfx3hBii ily traian 7f9EiSJSD */         for(int d = 1; d * d <= n; ++d){
/* oVfx3hBii ily traian 7f9EiSJSD */             if(n % d == 0){
/* oVfx3hBii ily traian 7f9EiSJSD */                 sum += d;
/* oVfx3hBii ily traian 7f9EiSJSD */                 sum += n / d;
/* oVfx3hBii ily traian 7f9EiSJSD */             }
/* oVfx3hBii ily traian 7f9EiSJSD */             if(d * d == n)
/* oVfx3hBii ily traian 7f9EiSJSD */                 sum -= d;
/* oVfx3hBii ily traian 7f9EiSJSD */         }
/* oVfx3hBii ily traian 7f9EiSJSD */         cout << sum;
/* oVfx3hBii ily traian 7f9EiSJSD */     }
/* oVfx3hBii ily traian 7f9EiSJSD */     else
/* oVfx3hBii ily traian 7f9EiSJSD */         cout << 1;
/* oVfx3hBii ily traian 7f9EiSJSD */     return 0;
/* oVfx3hBii ily traian 7f9EiSJSD */ }