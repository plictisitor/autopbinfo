/* 0QVdpVFYs ily traian 3ropRZLGC */ #include <algorithm>
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
/* 0QVdpVFYs ily traian 3ropRZLGC */ using namespace std;
/* 0QVdpVFYs ily traian 3ropRZLGC */ 
/* 0QVdpVFYs ily traian 3ropRZLGC */ ifstream cin("pavaj.in");
/* 0QVdpVFYs ily traian 3ropRZLGC */ ofstream cout("pavaj.out");
/* 0QVdpVFYs ily traian 3ropRZLGC */ 
/* 0QVdpVFYs ily traian 3ropRZLGC */ int n , m , t , s[1001][1001] , i1 , j1 , i2 , j2;
/* 0QVdpVFYs ily traian 3ropRZLGC */ 
/* 0QVdpVFYs ily traian 3ropRZLGC */ int main()
/* 0QVdpVFYs ily traian 3ropRZLGC */ {
/* 0QVdpVFYs ily traian 3ropRZLGC */     cin >> n >> m >> t;
/* 0QVdpVFYs ily traian 3ropRZLGC */     for(int i = 1 ; i <= n ; i++)
/* 0QVdpVFYs ily traian 3ropRZLGC */         for(int j = 1 ; j <= m ; j++)
/* 0QVdpVFYs ily traian 3ropRZLGC */         cin >> s[i][j];
/* 0QVdpVFYs ily traian 3ropRZLGC */     for(int i = 1 ; i <= n ; ++i)
/* 0QVdpVFYs ily traian 3ropRZLGC */         for(int j = 1 ; j <= m ; ++j)
/* 0QVdpVFYs ily traian 3ropRZLGC */             s[i][j] = s[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
/* 0QVdpVFYs ily traian 3ropRZLGC */     for(int i = 1 ; i <= t ; i++)
/* 0QVdpVFYs ily traian 3ropRZLGC */     {
/* 0QVdpVFYs ily traian 3ropRZLGC */         cin >> i1 >> j1 >> i2 >> j2;
/* 0QVdpVFYs ily traian 3ropRZLGC */         int sum = 0 , nr = 0;
/* 0QVdpVFYs ily traian 3ropRZLGC */         if(i1 <= i2 && j1 <= j2) sum = s[i2][j2] - s[i1 - 1][j2] - s[i2][j1 - 1] + s[i1 - 1][j1 - 1] , nr = (j2 - j1 + 1) * (i2 - i1 + 1);
/* 0QVdpVFYs ily traian 3ropRZLGC */         else if(i1 >= i2 && j1 <= j2) sum = s[i1][j2] - s[i2 - 1][j2] - s[i1][j1 - 1] + s[i2 - 1][j1 - 1] , nr = (i1 - i2 + 1) * (j2 - j1 + 1);
/* 0QVdpVFYs ily traian 3ropRZLGC */         else if(i1 <= i2 && j1 >= j2) sum = s[i2][j1] - s[i1 - 1][j1] - s[i2][j2 - 1] + s[i1 - 1][j2 - 1] , nr = (i2 - i1 + 1) * (j1 - j2 + 1);
/* 0QVdpVFYs ily traian 3ropRZLGC */         else sum = s[i1][j1] - s[i2 - 1][j1] - s[i1][j2 - 1] + s[i2 - 1][j2 - 1] , nr = (i1 - i2 + 1) * (j1 - j2 + 1);
/* 0QVdpVFYs ily traian 3ropRZLGC */         if(sum == 0) cout << 0 << '\n';
/* 0QVdpVFYs ily traian 3ropRZLGC */         else if(sum == nr) cout << 1 << '\n';
/* 0QVdpVFYs ily traian 3ropRZLGC */         else cout << 2 << '\n';
/* 0QVdpVFYs ily traian 3ropRZLGC */ 
/* 0QVdpVFYs ily traian 3ropRZLGC */     }
/* 0QVdpVFYs ily traian 3ropRZLGC */ }