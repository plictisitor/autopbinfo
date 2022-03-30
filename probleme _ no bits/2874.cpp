/* uOc4EC0Lp ily traian C5DZBMJsL */ #include <algorithm>
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
/* uOc4EC0Lp ily traian C5DZBMJsL */ 
/* uOc4EC0Lp ily traian C5DZBMJsL */ using namespace std;
/* uOc4EC0Lp ily traian C5DZBMJsL */ 
/* uOc4EC0Lp ily traian C5DZBMJsL */ int n , m , a[10001] , M[101][101];
/* uOc4EC0Lp ily traian C5DZBMJsL */ char semn;
/* uOc4EC0Lp ily traian C5DZBMJsL */ 
/* uOc4EC0Lp ily traian C5DZBMJsL */ int main()
/* uOc4EC0Lp ily traian C5DZBMJsL */ {
/* uOc4EC0Lp ily traian C5DZBMJsL */     cin >> n >> m >> semn;
/* uOc4EC0Lp ily traian C5DZBMJsL */     for(int i = 1 ; i <= n * m ; i++)
/* uOc4EC0Lp ily traian C5DZBMJsL */         cin >> a[i];
/* uOc4EC0Lp ily traian C5DZBMJsL */     sort(a + 1 , a + n * m + 1);
/* uOc4EC0Lp ily traian C5DZBMJsL */     if(semn == '+')
/* uOc4EC0Lp ily traian C5DZBMJsL */     {
/* uOc4EC0Lp ily traian C5DZBMJsL */         int x = 1 , y = 1;
/* uOc4EC0Lp ily traian C5DZBMJsL */         for(int i = 1 ; i <= n * m ; i++)
/* uOc4EC0Lp ily traian C5DZBMJsL */         {
/* uOc4EC0Lp ily traian C5DZBMJsL */             M[x][y] = a[i];
/* uOc4EC0Lp ily traian C5DZBMJsL */             x++;
/* uOc4EC0Lp ily traian C5DZBMJsL */             if(x == n + 1) y++ , x = 1;
/* uOc4EC0Lp ily traian C5DZBMJsL */         }
/* uOc4EC0Lp ily traian C5DZBMJsL */         for(int i = 1 ; i <= n ; i++)
/* uOc4EC0Lp ily traian C5DZBMJsL */         {
/* uOc4EC0Lp ily traian C5DZBMJsL */             for(int j = 1 ; j <= m ; j++)
/* uOc4EC0Lp ily traian C5DZBMJsL */                 cout << M[i][j] << " ";
/* uOc4EC0Lp ily traian C5DZBMJsL */             cout << '\n';
/* uOc4EC0Lp ily traian C5DZBMJsL */         }
/* uOc4EC0Lp ily traian C5DZBMJsL */     }
/* uOc4EC0Lp ily traian C5DZBMJsL */     else
/* uOc4EC0Lp ily traian C5DZBMJsL */     {
/* uOc4EC0Lp ily traian C5DZBMJsL */         int x = 1 , y = 1;
/* uOc4EC0Lp ily traian C5DZBMJsL */         for(int i = 1 ; i <= n * m ; i++)
/* uOc4EC0Lp ily traian C5DZBMJsL */         {
/* uOc4EC0Lp ily traian C5DZBMJsL */             M[x][y] = a[i];
/* uOc4EC0Lp ily traian C5DZBMJsL */             x++;
/* uOc4EC0Lp ily traian C5DZBMJsL */             if(x == n + 1) y++ , x = 1;
/* uOc4EC0Lp ily traian C5DZBMJsL */         }
/* uOc4EC0Lp ily traian C5DZBMJsL */         for(int i = n ; i >= 1 ; i--)
/* uOc4EC0Lp ily traian C5DZBMJsL */         {
/* uOc4EC0Lp ily traian C5DZBMJsL */             for(int j = m ; j >= 1 ; j--)
/* uOc4EC0Lp ily traian C5DZBMJsL */                 cout << M[i][j] << " ";
/* uOc4EC0Lp ily traian C5DZBMJsL */             cout << '\n';
/* uOc4EC0Lp ily traian C5DZBMJsL */         }
/* uOc4EC0Lp ily traian C5DZBMJsL */     }
/* uOc4EC0Lp ily traian C5DZBMJsL */ }