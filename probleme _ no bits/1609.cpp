/* gRemDWuK2 ily traian wBhblIQFV */ #include <algorithm>
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
/* gRemDWuK2 ily traian wBhblIQFV */ 
/* gRemDWuK2 ily traian wBhblIQFV */ using namespace std;
/* gRemDWuK2 ily traian wBhblIQFV */ 
/* gRemDWuK2 ily traian wBhblIQFV */ ifstream cin("paralele.in");
/* gRemDWuK2 ily traian wBhblIQFV */ ofstream cout("paralele.out");
/* gRemDWuK2 ily traian wBhblIQFV */ 
/* gRemDWuK2 ily traian wBhblIQFV */ int a[1001] , f[2000001];
/* gRemDWuK2 ily traian wBhblIQFV */ 
/* gRemDWuK2 ily traian wBhblIQFV */ int main()
/* gRemDWuK2 ily traian wBhblIQFV */ {
/* gRemDWuK2 ily traian wBhblIQFV */     int n;
/* gRemDWuK2 ily traian wBhblIQFV */     cin >> n;
/* gRemDWuK2 ily traian wBhblIQFV */     for(int i = 1 ; i <= n ; ++i)
/* gRemDWuK2 ily traian wBhblIQFV */         cin >> a[i];
/* gRemDWuK2 ily traian wBhblIQFV */     int val , fmax=0;
/* gRemDWuK2 ily traian wBhblIQFV */     for(int i = 1 ; i <= n ; ++i)
/* gRemDWuK2 ily traian wBhblIQFV */     {
/* gRemDWuK2 ily traian wBhblIQFV */         for(int j = i + 1 ; j <= n ; ++j)
/* gRemDWuK2 ily traian wBhblIQFV */         {
/* gRemDWuK2 ily traian wBhblIQFV */             val = abs(a[i]-a[j]);
/* gRemDWuK2 ily traian wBhblIQFV */             f[val]++;
/* gRemDWuK2 ily traian wBhblIQFV */             if(f[val] > fmax)
/* gRemDWuK2 ily traian wBhblIQFV */                 fmax = f[val];
/* gRemDWuK2 ily traian wBhblIQFV */         }
/* gRemDWuK2 ily traian wBhblIQFV */     }
/* gRemDWuK2 ily traian wBhblIQFV */     cout << fmax;
/* gRemDWuK2 ily traian wBhblIQFV */     return 0;
/* gRemDWuK2 ily traian wBhblIQFV */ }