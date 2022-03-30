/* QbXVHOBcw ily traian SRm1gTJMl */ #include <algorithm>
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
/* QbXVHOBcw ily traian SRm1gTJMl */ 
/* QbXVHOBcw ily traian SRm1gTJMl */ using namespace std;
/* QbXVHOBcw ily traian SRm1gTJMl */ 
/* QbXVHOBcw ily traian SRm1gTJMl */ int n , x[20] , p[20] , a[20] , mini = 1000000000;
/* QbXVHOBcw ily traian SRm1gTJMl */ 
/* QbXVHOBcw ily traian SRm1gTJMl */ int suma(int n)
/* QbXVHOBcw ily traian SRm1gTJMl */ {
/* QbXVHOBcw ily traian SRm1gTJMl */     int sum = 0;
/* QbXVHOBcw ily traian SRm1gTJMl */     for(int i = 1 ; i < n ; i += 2)
/* QbXVHOBcw ily traian SRm1gTJMl */         sum += max(a[x[i]] , a[x[i + 1]]) % min(a[x[i]] , a[x[i + 1]]);
/* QbXVHOBcw ily traian SRm1gTJMl */     return sum;
/* QbXVHOBcw ily traian SRm1gTJMl */ }
/* QbXVHOBcw ily traian SRm1gTJMl */ 
/* QbXVHOBcw ily traian SRm1gTJMl */ void back(int k)
/* QbXVHOBcw ily traian SRm1gTJMl */ {
/* QbXVHOBcw ily traian SRm1gTJMl */     if(suma(k) > mini) return ;
/* QbXVHOBcw ily traian SRm1gTJMl */     else
/* QbXVHOBcw ily traian SRm1gTJMl */     if(k >= n)
/* QbXVHOBcw ily traian SRm1gTJMl */     {
/* QbXVHOBcw ily traian SRm1gTJMl */         if (suma(k) < mini) mini = suma(k);
/* QbXVHOBcw ily traian SRm1gTJMl */     }
/* QbXVHOBcw ily traian SRm1gTJMl */     else
/* QbXVHOBcw ily traian SRm1gTJMl */     {
/* QbXVHOBcw ily traian SRm1gTJMl */         int xi = 1;
/* QbXVHOBcw ily traian SRm1gTJMl */         while (xi <= n && p[xi] == 1)xi ++;
/* QbXVHOBcw ily traian SRm1gTJMl */         x[++ k] = xi;
/* QbXVHOBcw ily traian SRm1gTJMl */         p[xi] = 1;
/* QbXVHOBcw ily traian SRm1gTJMl */         for (int i = xi + 1; i <= n; i ++)
/* QbXVHOBcw ily traian SRm1gTJMl */         {
/* QbXVHOBcw ily traian SRm1gTJMl */             if (p[i] == 0)
/* QbXVHOBcw ily traian SRm1gTJMl */             {
/* QbXVHOBcw ily traian SRm1gTJMl */                 p[i] = 1;
/* QbXVHOBcw ily traian SRm1gTJMl */                 x[k + 1] = i;
/* QbXVHOBcw ily traian SRm1gTJMl */                 back(k + 1);
/* QbXVHOBcw ily traian SRm1gTJMl */                 p[i] = 0;
/* QbXVHOBcw ily traian SRm1gTJMl */             }
/* QbXVHOBcw ily traian SRm1gTJMl */         }
/* QbXVHOBcw ily traian SRm1gTJMl */         p[xi] = 0;
/* QbXVHOBcw ily traian SRm1gTJMl */     }
/* QbXVHOBcw ily traian SRm1gTJMl */ }
/* QbXVHOBcw ily traian SRm1gTJMl */ 
/* QbXVHOBcw ily traian SRm1gTJMl */ int main()
/* QbXVHOBcw ily traian SRm1gTJMl */ {
/* QbXVHOBcw ily traian SRm1gTJMl */     cin >> n;
/* QbXVHOBcw ily traian SRm1gTJMl */     for(int i = 1 ; i <= n ; i++)
/* QbXVHOBcw ily traian SRm1gTJMl */         cin >> a[i];
/* QbXVHOBcw ily traian SRm1gTJMl */     sort(a + 1 , a + n + 1);
/* QbXVHOBcw ily traian SRm1gTJMl */     back(0);
/* QbXVHOBcw ily traian SRm1gTJMl */     cout << mini;
/* QbXVHOBcw ily traian SRm1gTJMl */     return 0;
/* QbXVHOBcw ily traian SRm1gTJMl */ }