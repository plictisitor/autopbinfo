/* bF9BacY9j ily traian 7xKedCpmK */ #include <algorithm>
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
/* bF9BacY9j ily traian 7xKedCpmK */ using namespace std;
/* bF9BacY9j ily traian 7xKedCpmK */ 
/* bF9BacY9j ily traian 7xKedCpmK */ double a[51][51];
/* bF9BacY9j ily traian 7xKedCpmK */ 
/* bF9BacY9j ily traian 7xKedCpmK */ int main()
/* bF9BacY9j ily traian 7xKedCpmK */ {
/* bF9BacY9j ily traian 7xKedCpmK */     int n;
/* bF9BacY9j ily traian 7xKedCpmK */     cin >> n;
/* bF9BacY9j ily traian 7xKedCpmK */     for(int i = 1 ; i <= n ; ++i)
/* bF9BacY9j ily traian 7xKedCpmK */         for(int j = 1 ; j <= n ; ++j)
/* bF9BacY9j ily traian 7xKedCpmK */             cin >> a[i][j];
/* bF9BacY9j ily traian 7xKedCpmK */     double v[51];
/* bF9BacY9j ily traian 7xKedCpmK */     for(int i = 1 ; i <= n ; ++i)
/* bF9BacY9j ily traian 7xKedCpmK */         for(int j = 1 ; j <= n ; ++j)
/* bF9BacY9j ily traian 7xKedCpmK */             v[j]+=(a[i][j]*100000);
/* bF9BacY9j ily traian 7xKedCpmK */     for(int i = 1 ; i <= n ; ++i)
/* bF9BacY9j ily traian 7xKedCpmK */         v[i]/=(n*100000);
/* bF9BacY9j ily traian 7xKedCpmK */     for(int i = 1 ; i <= n/2 ; ++i)
/* bF9BacY9j ily traian 7xKedCpmK */     {
/* bF9BacY9j ily traian 7xKedCpmK */         for(int j = 1 ; j <= n ; ++j)
/* bF9BacY9j ily traian 7xKedCpmK */             cout << a[i][j] << ' ';
/* bF9BacY9j ily traian 7xKedCpmK */         cout << endl;
/* bF9BacY9j ily traian 7xKedCpmK */     }
/* bF9BacY9j ily traian 7xKedCpmK */     for(int i = 1 ; i <= n ; ++i)
/* bF9BacY9j ily traian 7xKedCpmK */         cout << v[i] << ' ';
/* bF9BacY9j ily traian 7xKedCpmK */     cout << endl;
/* bF9BacY9j ily traian 7xKedCpmK */     for(int i = n/2 + 1 ; i <= n ; ++i)
/* bF9BacY9j ily traian 7xKedCpmK */     {
/* bF9BacY9j ily traian 7xKedCpmK */         for(int j = 1 ; j <= n ; ++j)
/* bF9BacY9j ily traian 7xKedCpmK */             cout << a[i][j] << ' ';
/* bF9BacY9j ily traian 7xKedCpmK */         cout << endl;
/* bF9BacY9j ily traian 7xKedCpmK */     }
/* bF9BacY9j ily traian 7xKedCpmK */     return 0;
/* bF9BacY9j ily traian 7xKedCpmK */ }