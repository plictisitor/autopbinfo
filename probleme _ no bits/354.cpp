/* XfcJpLQvc ily traian VkwvgMYqr */ #include <algorithm>
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
/* XfcJpLQvc ily traian VkwvgMYqr */ using namespace std;
/* XfcJpLQvc ily traian VkwvgMYqr */ 
/* XfcJpLQvc ily traian VkwvgMYqr */ int main()
/* XfcJpLQvc ily traian VkwvgMYqr */ {
/* XfcJpLQvc ily traian VkwvgMYqr */     int n;
/* XfcJpLQvc ily traian VkwvgMYqr */     cin >> n;
/* XfcJpLQvc ily traian VkwvgMYqr */     int maxim = -1000000000;
/* XfcJpLQvc ily traian VkwvgMYqr */     for(int i = 1; i <= n; ++i){
/* XfcJpLQvc ily traian VkwvgMYqr */         int x;
/* XfcJpLQvc ily traian VkwvgMYqr */         cin >> x;
/* XfcJpLQvc ily traian VkwvgMYqr */         if(x > maxim)
/* XfcJpLQvc ily traian VkwvgMYqr */             maxim = x;
/* XfcJpLQvc ily traian VkwvgMYqr */     }
/* XfcJpLQvc ily traian VkwvgMYqr */     cout << maxim;
/* XfcJpLQvc ily traian VkwvgMYqr */     return 0;
/* XfcJpLQvc ily traian VkwvgMYqr */ }
/* XfcJpLQvc ily traian VkwvgMYqr */ 