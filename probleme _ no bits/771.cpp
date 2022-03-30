/* u59rMID74 ily traian aELY6OTSG */ #include <algorithm>
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
/* u59rMID74 ily traian aELY6OTSG */ using namespace std;
/* u59rMID74 ily traian aELY6OTSG */ 
/* u59rMID74 ily traian aELY6OTSG */ int n,m,k,a[101][101], v[101] , s[101];
/* u59rMID74 ily traian aELY6OTSG */ 
/* u59rMID74 ily traian aELY6OTSG */ int main()
/* u59rMID74 ily traian aELY6OTSG */ {
/* u59rMID74 ily traian aELY6OTSG */     cin >> n >> m;
/* u59rMID74 ily traian aELY6OTSG */     for(int i = 1 ; i <= n ; ++i)
/* u59rMID74 ily traian aELY6OTSG */         for(int j = 1 ; j <= m ; ++j)
/* u59rMID74 ily traian aELY6OTSG */             cin >> a[i][j] , s[i] += a[i][j];
/* u59rMID74 ily traian aELY6OTSG */             
/* u59rMID74 ily traian aELY6OTSG */     for(int i = 1 ; i <= n ; ++i)
/* u59rMID74 ily traian aELY6OTSG */         v[i] = i;
/* u59rMID74 ily traian aELY6OTSG */     
/* u59rMID74 ily traian aELY6OTSG */     for(int i =1 ; i < n ; ++i)
/* u59rMID74 ily traian aELY6OTSG */         for(int j = i + 1 ; j <= n ; ++j)
/* u59rMID74 ily traian aELY6OTSG */             if(s[v[i]] > s[v[j]]) swap(v[i] , v[j]);
/* u59rMID74 ily traian aELY6OTSG */     
/* u59rMID74 ily traian aELY6OTSG */     for(int i = 1 ; i <= n ; ++i)
/* u59rMID74 ily traian aELY6OTSG */     {
/* u59rMID74 ily traian aELY6OTSG */         for(int j = 1 ; j <= m ; ++j)
/* u59rMID74 ily traian aELY6OTSG */             cout << a[v[i]][j] << " ";
/* u59rMID74 ily traian aELY6OTSG */         cout << endl;
/* u59rMID74 ily traian aELY6OTSG */     }
/* u59rMID74 ily traian aELY6OTSG */     return 0;
/* u59rMID74 ily traian aELY6OTSG */ }