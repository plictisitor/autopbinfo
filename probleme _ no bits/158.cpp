/* TYbbO8ZaX ily traian MAkgnUfMK */ #include <algorithm>
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
/* TYbbO8ZaX ily traian MAkgnUfMK */ using namespace std;
/* TYbbO8ZaX ily traian MAkgnUfMK */ 
/* TYbbO8ZaX ily traian MAkgnUfMK */ int main()
/* TYbbO8ZaX ily traian MAkgnUfMK */ {
/* TYbbO8ZaX ily traian MAkgnUfMK */     int n, val, p;
/* TYbbO8ZaX ily traian MAkgnUfMK */     cin >> n >> val >> p;
/* TYbbO8ZaX ily traian MAkgnUfMK */     int a[26];
/* TYbbO8ZaX ily traian MAkgnUfMK */     for(int i = 1; i <= n; ++i)
/* TYbbO8ZaX ily traian MAkgnUfMK */         cin >> a[i];
/* TYbbO8ZaX ily traian MAkgnUfMK */ 
/* TYbbO8ZaX ily traian MAkgnUfMK */     n++;
/* TYbbO8ZaX ily traian MAkgnUfMK */ 
/* TYbbO8ZaX ily traian MAkgnUfMK */     for(int i = n; i > p; --i)
/* TYbbO8ZaX ily traian MAkgnUfMK */         a[i] = a[i - 1];
/* TYbbO8ZaX ily traian MAkgnUfMK */ 
/* TYbbO8ZaX ily traian MAkgnUfMK */     a[p] = val;
/* TYbbO8ZaX ily traian MAkgnUfMK */ 
/* TYbbO8ZaX ily traian MAkgnUfMK */     for(int i = 1; i <= n; ++i)
/* TYbbO8ZaX ily traian MAkgnUfMK */         cout << a[i] << " ";
/* TYbbO8ZaX ily traian MAkgnUfMK */     return 0;
/* TYbbO8ZaX ily traian MAkgnUfMK */ }