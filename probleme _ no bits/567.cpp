/* ClOr98yZQ ily traian 0zVE9b3Qz */ #include <algorithm>
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
/* ClOr98yZQ ily traian 0zVE9b3Qz */ using namespace std;
/* ClOr98yZQ ily traian 0zVE9b3Qz */ 
/* ClOr98yZQ ily traian 0zVE9b3Qz */ int main()
/* ClOr98yZQ ily traian 0zVE9b3Qz */ {
/* ClOr98yZQ ily traian 0zVE9b3Qz */     int a[1002];
/* ClOr98yZQ ily traian 0zVE9b3Qz */     int n;
/* ClOr98yZQ ily traian 0zVE9b3Qz */     cin >> n;
/* ClOr98yZQ ily traian 0zVE9b3Qz */     for(int i = 0 ; i < n ; ++i)
/* ClOr98yZQ ily traian 0zVE9b3Qz */         cin >> a[i];
/* ClOr98yZQ ily traian 0zVE9b3Qz */     a[n]=a[0];
/* ClOr98yZQ ily traian 0zVE9b3Qz */     n++;
/* ClOr98yZQ ily traian 0zVE9b3Qz */     int st = 0 , dr = 0 , min=1001;
/* ClOr98yZQ ily traian 0zVE9b3Qz */     for(int i = 1 ; i < n ; ++i)
/* ClOr98yZQ ily traian 0zVE9b3Qz */     {
/* ClOr98yZQ ily traian 0zVE9b3Qz */         if(a[i]>a[i-1])
/* ClOr98yZQ ily traian 0zVE9b3Qz */         {
/* ClOr98yZQ ily traian 0zVE9b3Qz */             if(a[i]-a[i-1] < min)
/* ClOr98yZQ ily traian 0zVE9b3Qz */                 min = a[i]-a[i-1] , st = i-1 , dr = i;
/* ClOr98yZQ ily traian 0zVE9b3Qz */         }
/* ClOr98yZQ ily traian 0zVE9b3Qz */         else
/* ClOr98yZQ ily traian 0zVE9b3Qz */         {
/* ClOr98yZQ ily traian 0zVE9b3Qz */             if(a[i-1]-a[i] < min)
/* ClOr98yZQ ily traian 0zVE9b3Qz */                 min = a[i-1]-a[i] , st = i-1 , dr = i;
/* ClOr98yZQ ily traian 0zVE9b3Qz */         }
/* ClOr98yZQ ily traian 0zVE9b3Qz */     }
/* ClOr98yZQ ily traian 0zVE9b3Qz */     if(dr==n-1)
/* ClOr98yZQ ily traian 0zVE9b3Qz */         st = 0 , dr = n-2;
/* ClOr98yZQ ily traian 0zVE9b3Qz */     cout << st + 1 << ' ' << dr + 1;
/* ClOr98yZQ ily traian 0zVE9b3Qz */     return 0;
/* ClOr98yZQ ily traian 0zVE9b3Qz */ }