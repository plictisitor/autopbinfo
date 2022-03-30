/* EMrWtSTpX ily traian HqBi9AmnY */ #include <algorithm>
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
/* EMrWtSTpX ily traian HqBi9AmnY */ using namespace std;
/* EMrWtSTpX ily traian HqBi9AmnY */ int main()
/* EMrWtSTpX ily traian HqBi9AmnY */ {
/* EMrWtSTpX ily traian HqBi9AmnY */     int n , a[22][22] , cnt = 0;
/* EMrWtSTpX ily traian HqBi9AmnY */     cin >> n;
/* EMrWtSTpX ily traian HqBi9AmnY */     for(int i = 0 ; i <= n+1 ; ++i)
/* EMrWtSTpX ily traian HqBi9AmnY */     {
/* EMrWtSTpX ily traian HqBi9AmnY */         for(int j = 0 ; j <= n+1 ; ++j)
/* EMrWtSTpX ily traian HqBi9AmnY */         {
/* EMrWtSTpX ily traian HqBi9AmnY */             if(i == 0 || i == n + 1 || j == 0 ||j == n + 1) a[i][j] = -1;
/* EMrWtSTpX ily traian HqBi9AmnY */             else cin >> a[i][j];
/* EMrWtSTpX ily traian HqBi9AmnY */         }
/* EMrWtSTpX ily traian HqBi9AmnY */     }
/* EMrWtSTpX ily traian HqBi9AmnY */     for(int i = 1 ; i <= n ; ++i)
/* EMrWtSTpX ily traian HqBi9AmnY */     {
/* EMrWtSTpX ily traian HqBi9AmnY */         for(int j = 1 ; j <= n ; ++j)
/* EMrWtSTpX ily traian HqBi9AmnY */         {
/* EMrWtSTpX ily traian HqBi9AmnY */             if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
/* EMrWtSTpX ily traian HqBi9AmnY */             cnt++;
/* EMrWtSTpX ily traian HqBi9AmnY */         }
/* EMrWtSTpX ily traian HqBi9AmnY */     }
/* EMrWtSTpX ily traian HqBi9AmnY */     cout << cnt;
/* EMrWtSTpX ily traian HqBi9AmnY */     return 0;
/* EMrWtSTpX ily traian HqBi9AmnY */ 
/* EMrWtSTpX ily traian HqBi9AmnY */ }