/* N9MLJCYk3 ily traian vFySy0kDI */ #include <algorithm>
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
/* N9MLJCYk3 ily traian vFySy0kDI */ using namespace std;
/* N9MLJCYk3 ily traian vFySy0kDI */ int a[10001] , b[10001] , lung = 1 , n , t , cnt;
/* N9MLJCYk3 ily traian vFySy0kDI */ int main()
/* N9MLJCYk3 ily traian vFySy0kDI */ {
/* N9MLJCYk3 ily traian vFySy0kDI */     a[0] = 1;
/* N9MLJCYk3 ily traian vFySy0kDI */     cin >> n;
/* N9MLJCYk3 ily traian vFySy0kDI */     for(int i = 1; i < n; i++)
/* N9MLJCYk3 ily traian vFySy0kDI */     {
/* N9MLJCYk3 ily traian vFySy0kDI */         cnt = 0 , t = 0;
/* N9MLJCYk3 ily traian vFySy0kDI */         for(int j = 0; j < lung; j++)
/* N9MLJCYk3 ily traian vFySy0kDI */         {
/* N9MLJCYk3 ily traian vFySy0kDI */             if(cnt == 0) cnt++;
/* N9MLJCYk3 ily traian vFySy0kDI */             else if(a[j] == a[j - 1]) cnt++;
/* N9MLJCYk3 ily traian vFySy0kDI */             else
/* N9MLJCYk3 ily traian vFySy0kDI */             {
/* N9MLJCYk3 ily traian vFySy0kDI */                 b[t++] = cnt;
/* N9MLJCYk3 ily traian vFySy0kDI */                 b[t++] = a[j - 1];
/* N9MLJCYk3 ily traian vFySy0kDI */                 cnt = 1;
/* N9MLJCYk3 ily traian vFySy0kDI */             }
/* N9MLJCYk3 ily traian vFySy0kDI */         }
/* N9MLJCYk3 ily traian vFySy0kDI */         if(cnt)
/* N9MLJCYk3 ily traian vFySy0kDI */         {
/* N9MLJCYk3 ily traian vFySy0kDI */             b[t++] = cnt;
/* N9MLJCYk3 ily traian vFySy0kDI */             b[t++] = a[lung - 1];
/* N9MLJCYk3 ily traian vFySy0kDI */         }
/* N9MLJCYk3 ily traian vFySy0kDI */         swap(a , b);
/* N9MLJCYk3 ily traian vFySy0kDI */         lung = t;
/* N9MLJCYk3 ily traian vFySy0kDI */     }
/* N9MLJCYk3 ily traian vFySy0kDI */ 
/* N9MLJCYk3 ily traian vFySy0kDI */     for(int i = 0; i < lung; i++) cout << a[i];
/* N9MLJCYk3 ily traian vFySy0kDI */ }