/* ZbBykt5mn ily traian F26h5fwie */ #include <algorithm>
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
/* ZbBykt5mn ily traian F26h5fwie */ using namespace std;
/* ZbBykt5mn ily traian F26h5fwie */ 
/* ZbBykt5mn ily traian F26h5fwie */ int main()
/* ZbBykt5mn ily traian F26h5fwie */ {
/* ZbBykt5mn ily traian F26h5fwie */     long double x;
/* ZbBykt5mn ily traian F26h5fwie */     int t, y, i;
/* ZbBykt5mn ily traian F26h5fwie */     int cnt = 0;
/* ZbBykt5mn ily traian F26h5fwie */     cin >> x >> t >> y >> i;
/* ZbBykt5mn ily traian F26h5fwie */     while(x > y)
/* ZbBykt5mn ily traian F26h5fwie */     {
/* ZbBykt5mn ily traian F26h5fwie */         cnt++;
/* ZbBykt5mn ily traian F26h5fwie */         x = x - x/i;
/* ZbBykt5mn ily traian F26h5fwie */     }
/* ZbBykt5mn ily traian F26h5fwie */     cout << 1LL * t * cnt;
/* ZbBykt5mn ily traian F26h5fwie */     return 0;   
/* ZbBykt5mn ily traian F26h5fwie */ }