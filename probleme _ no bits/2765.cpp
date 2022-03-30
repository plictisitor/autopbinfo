/* j7w0mUOSm ily traian 38A4uOHFo */ #include <algorithm>
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
/* j7w0mUOSm ily traian 38A4uOHFo */ 
/* j7w0mUOSm ily traian 38A4uOHFo */ using namespace std;
/* j7w0mUOSm ily traian 38A4uOHFo */ 
/* j7w0mUOSm ily traian 38A4uOHFo */ int a[3];
/* j7w0mUOSm ily traian 38A4uOHFo */ 
/* j7w0mUOSm ily traian 38A4uOHFo */ int main()
/* j7w0mUOSm ily traian 38A4uOHFo */ {
/* j7w0mUOSm ily traian 38A4uOHFo */     cin >> a[0] >> a[1] >> a[2];
/* j7w0mUOSm ily traian 38A4uOHFo */     sort(a , a + 3);
/* j7w0mUOSm ily traian 38A4uOHFo */     int dif = a[2]-a[0];
/* j7w0mUOSm ily traian 38A4uOHFo */     if(a[0] >= 0 && a[2] <= 255)
/* j7w0mUOSm ily traian 38A4uOHFo */     {
/* j7w0mUOSm ily traian 38A4uOHFo */         if(dif <= 10)
/* j7w0mUOSm ily traian 38A4uOHFo */             cout << "GRI";
/* j7w0mUOSm ily traian 38A4uOHFo */         else
/* j7w0mUOSm ily traian 38A4uOHFo */             cout << "CULOARE";
/* j7w0mUOSm ily traian 38A4uOHFo */     }
/* j7w0mUOSm ily traian 38A4uOHFo */     else
/* j7w0mUOSm ily traian 38A4uOHFo */         cout << "NU E CULOARE";
/* j7w0mUOSm ily traian 38A4uOHFo */     return 0;
/* j7w0mUOSm ily traian 38A4uOHFo */ }