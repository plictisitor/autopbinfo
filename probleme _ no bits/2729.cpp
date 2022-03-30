/* lVst434FE ily traian iCALeX0CY */ #include <algorithm>
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
/* lVst434FE ily traian iCALeX0CY */ using namespace std;
/* lVst434FE ily traian iCALeX0CY */ 
/* lVst434FE ily traian iCALeX0CY */ int main()
/* lVst434FE ily traian iCALeX0CY */ {
/* lVst434FE ily traian iCALeX0CY */     int n , m;
/* lVst434FE ily traian iCALeX0CY */     long long int sx=0 , sy=0;
/* lVst434FE ily traian iCALeX0CY */     cin >> n;
/* lVst434FE ily traian iCALeX0CY */     long long int x , y;
/* lVst434FE ily traian iCALeX0CY */     for(int i = 1 ; i <= n ; ++i)
/* lVst434FE ily traian iCALeX0CY */         cin >> x >> y , sx+=x , sy+=y;
/* lVst434FE ily traian iCALeX0CY */     cin >> m;
/* lVst434FE ily traian iCALeX0CY */     long long int min = 1000000000000001;
/* lVst434FE ily traian iCALeX0CY */     bool ok = false;
/* lVst434FE ily traian iCALeX0CY */     for(int i = 1 ; i <= m ; ++i)
/* lVst434FE ily traian iCALeX0CY */     {
/* lVst434FE ily traian iCALeX0CY */         long long int cost;
/* lVst434FE ily traian iCALeX0CY */         cin >> x >> y >> cost;
/* lVst434FE ily traian iCALeX0CY */         if(x >= sx && y >= sx)
/* lVst434FE ily traian iCALeX0CY */             if(cost < min)
/* lVst434FE ily traian iCALeX0CY */                 min = cost , ok = true;
/* lVst434FE ily traian iCALeX0CY */     }
/* lVst434FE ily traian iCALeX0CY */     if(ok)
/* lVst434FE ily traian iCALeX0CY */         cout << min;
/* lVst434FE ily traian iCALeX0CY */     else
/* lVst434FE ily traian iCALeX0CY */         cout << -1;
/* lVst434FE ily traian iCALeX0CY */     return 0;
/* lVst434FE ily traian iCALeX0CY */ }