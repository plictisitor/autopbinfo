/* KXbDg6EkO ily traian bymP63K5d */ #include <algorithm>
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
/* KXbDg6EkO ily traian bymP63K5d */ using namespace std;
/* KXbDg6EkO ily traian bymP63K5d */ 
/* KXbDg6EkO ily traian bymP63K5d */ ifstream cin("eratostene.in");
/* KXbDg6EkO ily traian bymP63K5d */ ofstream cout("eratostene.out");
/* KXbDg6EkO ily traian bymP63K5d */ 
/* KXbDg6EkO ily traian bymP63K5d */ bool c[1000005];
/* KXbDg6EkO ily traian bymP63K5d */ 
/* KXbDg6EkO ily traian bymP63K5d */ int main()
/* KXbDg6EkO ily traian bymP63K5d */ {
/* KXbDg6EkO ily traian bymP63K5d */     c[0] = c[1] = 1;
/* KXbDg6EkO ily traian bymP63K5d */     for(int i = 2; i <= 1000; ++i)
/* KXbDg6EkO ily traian bymP63K5d */         if(c[i] == 0)
/* KXbDg6EkO ily traian bymP63K5d */             for(int j = 2; i * j <= 1000000; ++j)
/* KXbDg6EkO ily traian bymP63K5d */                 c[i * j] = 1;
/* KXbDg6EkO ily traian bymP63K5d */ 
/* KXbDg6EkO ily traian bymP63K5d */     int n;
/* KXbDg6EkO ily traian bymP63K5d */     cin >> n;
/* KXbDg6EkO ily traian bymP63K5d */     int x;
/* KXbDg6EkO ily traian bymP63K5d */     int cnt = 0;
/* KXbDg6EkO ily traian bymP63K5d */     for(int i = 1; i <= n; ++i){
/* KXbDg6EkO ily traian bymP63K5d */         cin >> x;
/* KXbDg6EkO ily traian bymP63K5d */         if(c[x] == 0)
/* KXbDg6EkO ily traian bymP63K5d */             cnt++;
/* KXbDg6EkO ily traian bymP63K5d */     }
/* KXbDg6EkO ily traian bymP63K5d */ 
/* KXbDg6EkO ily traian bymP63K5d */     cout << cnt;
/* KXbDg6EkO ily traian bymP63K5d */ 
/* KXbDg6EkO ily traian bymP63K5d */     return 0;
/* KXbDg6EkO ily traian bymP63K5d */ }