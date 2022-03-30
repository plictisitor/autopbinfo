/* bksNYzh1o ily traian dAuOQJIVF */ #include <algorithm>
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
/* bksNYzh1o ily traian dAuOQJIVF */ using namespace std;
/* bksNYzh1o ily traian dAuOQJIVF */ int main()
/* bksNYzh1o ily traian dAuOQJIVF */ {
/* bksNYzh1o ily traian dAuOQJIVF */     int n , a[101][101] , v[101] , m , s = 0;
/* bksNYzh1o ily traian dAuOQJIVF */     cin >> n;
/* bksNYzh1o ily traian dAuOQJIVF */     for(int i = 0 ; i < n ; ++i) cin >> v[i];
/* bksNYzh1o ily traian dAuOQJIVF */     cin >> m;
/* bksNYzh1o ily traian dAuOQJIVF */     for(int i = 0 ; i < m ; ++i)
/* bksNYzh1o ily traian dAuOQJIVF */         for(int j = 0 ; j < n ; ++j)
/* bksNYzh1o ily traian dAuOQJIVF */             cin >> a[i][j];
/* bksNYzh1o ily traian dAuOQJIVF */     for(int i = 0 ; i < n ; ++i)
/* bksNYzh1o ily traian dAuOQJIVF */     {
/* bksNYzh1o ily traian dAuOQJIVF */         int mini = 1001;
/* bksNYzh1o ily traian dAuOQJIVF */         for(int j = 0 ; j < m ; ++j)
/* bksNYzh1o ily traian dAuOQJIVF */         {
/* bksNYzh1o ily traian dAuOQJIVF */             if(a[j][i] < mini && a[j][i] != -1)
/* bksNYzh1o ily traian dAuOQJIVF */             mini=a[j][i];
/* bksNYzh1o ily traian dAuOQJIVF */         }
/* bksNYzh1o ily traian dAuOQJIVF */         s += v[i] * mini;
/* bksNYzh1o ily traian dAuOQJIVF */     }
/* bksNYzh1o ily traian dAuOQJIVF */     cout << s;
/* bksNYzh1o ily traian dAuOQJIVF */     return 0;
/* bksNYzh1o ily traian dAuOQJIVF */ }