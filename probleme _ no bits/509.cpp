/* BKj0DWTPT ily traian a3GcWlXBW */ #include <algorithm>
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
/* BKj0DWTPT ily traian a3GcWlXBW */ 
/* BKj0DWTPT ily traian a3GcWlXBW */ using namespace std;
/* BKj0DWTPT ily traian a3GcWlXBW */ 
/* BKj0DWTPT ily traian a3GcWlXBW */ int main()
/* BKj0DWTPT ily traian a3GcWlXBW */ {
/* BKj0DWTPT ily traian a3GcWlXBW */     int n;
/* BKj0DWTPT ily traian a3GcWlXBW */     cin >> n;
/* BKj0DWTPT ily traian a3GcWlXBW */     int a[1001];
/* BKj0DWTPT ily traian a3GcWlXBW */     for(int i = 1; i <= n; ++i)
/* BKj0DWTPT ily traian a3GcWlXBW */         cin >> a[i];
/* BKj0DWTPT ily traian a3GcWlXBW */ 
/* BKj0DWTPT ily traian a3GcWlXBW */     for(int i = 1; i < n; ++i)
/* BKj0DWTPT ily traian a3GcWlXBW */         for(int j = i + 1; j <= n; ++j)
/* BKj0DWTPT ily traian a3GcWlXBW */             if(a[i] > a[j])
/* BKj0DWTPT ily traian a3GcWlXBW */                 swap(a[i], a[j]);
/* BKj0DWTPT ily traian a3GcWlXBW */ 
/* BKj0DWTPT ily traian a3GcWlXBW */     for(int i = 1; i <= n; ++i)
/* BKj0DWTPT ily traian a3GcWlXBW */         cout << a[i] << ' ';
/* BKj0DWTPT ily traian a3GcWlXBW */ 
/* BKj0DWTPT ily traian a3GcWlXBW */     return 0;
/* BKj0DWTPT ily traian a3GcWlXBW */ }