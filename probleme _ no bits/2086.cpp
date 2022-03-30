/* PyxIySv4m ily traian Uv6fT37wm */ #include <algorithm>
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
/* PyxIySv4m ily traian Uv6fT37wm */ using namespace std;
/* PyxIySv4m ily traian Uv6fT37wm */ 
/* PyxIySv4m ily traian Uv6fT37wm */ ifstream cin("sclmprime.in");
/* PyxIySv4m ily traian Uv6fT37wm */ ofstream cout("sclmprime.out");
/* PyxIySv4m ily traian Uv6fT37wm */ 
/* PyxIySv4m ily traian Uv6fT37wm */ int n , a[1002] , L[1002] , l , lmax , ne , b;
/* PyxIySv4m ily traian Uv6fT37wm */ 
/* PyxIySv4m ily traian Uv6fT37wm */ int prim(int n)
/* PyxIySv4m ily traian Uv6fT37wm */ {
/* PyxIySv4m ily traian Uv6fT37wm */     if(n == 0 || n == 1) return 0;
/* PyxIySv4m ily traian Uv6fT37wm */     else if(n == 2) return 1;
/* PyxIySv4m ily traian Uv6fT37wm */     else if(n % 2 == 0) return 0;
/* PyxIySv4m ily traian Uv6fT37wm */     else for(int i = 3 ; i * i <= n ; i += 2)
/* PyxIySv4m ily traian Uv6fT37wm */         if(n % i == 0) return 0;
/* PyxIySv4m ily traian Uv6fT37wm */     return 1;
/* PyxIySv4m ily traian Uv6fT37wm */ }
/* PyxIySv4m ily traian Uv6fT37wm */ 
/* PyxIySv4m ily traian Uv6fT37wm */ int main()
/* PyxIySv4m ily traian Uv6fT37wm */ {
/* PyxIySv4m ily traian Uv6fT37wm */     cin >> ne;
/* PyxIySv4m ily traian Uv6fT37wm */     for(int i = 1 ; i <= ne ; i++)
/* PyxIySv4m ily traian Uv6fT37wm */     {
/* PyxIySv4m ily traian Uv6fT37wm */         cin >> b;
/* PyxIySv4m ily traian Uv6fT37wm */         if(prim(b)) a[++n] = b;
/* PyxIySv4m ily traian Uv6fT37wm */     }
/* PyxIySv4m ily traian Uv6fT37wm */     L[n] = 1;
/* PyxIySv4m ily traian Uv6fT37wm */     for(int i = n ; i >= 1 ; i--)
/* PyxIySv4m ily traian Uv6fT37wm */     {
/* PyxIySv4m ily traian Uv6fT37wm */         L[i] = 1;
/* PyxIySv4m ily traian Uv6fT37wm */         for(int j = i + 1 ; j <= n ; j++)
/* PyxIySv4m ily traian Uv6fT37wm */             if(a[i] <= a[j] && L[i] < L[j] + 1)
/* PyxIySv4m ily traian Uv6fT37wm */                 L[i] = L[j] + 1;
/* PyxIySv4m ily traian Uv6fT37wm */         if(L[i] > lmax) lmax = L[i];
/* PyxIySv4m ily traian Uv6fT37wm */     }
/* PyxIySv4m ily traian Uv6fT37wm */     cout << lmax << '\n';
/* PyxIySv4m ily traian Uv6fT37wm */     int poz = 0 , mini = 2000000000 , lpoz = 0;
/* PyxIySv4m ily traian Uv6fT37wm */     a[lpoz] = -1 ;
/* PyxIySv4m ily traian Uv6fT37wm */     for(int k = lmax ; k > 0 ; k--)
/* PyxIySv4m ily traian Uv6fT37wm */     {
/* PyxIySv4m ily traian Uv6fT37wm */         mini = 2000000000;
/* PyxIySv4m ily traian Uv6fT37wm */         for(int i = lpoz + 1 ; i <= n ; i++)
/* PyxIySv4m ily traian Uv6fT37wm */             if(L[i] == k && a[i] < mini && a[i] >= a[lpoz])
/* PyxIySv4m ily traian Uv6fT37wm */                 {
/* PyxIySv4m ily traian Uv6fT37wm */                     mini = a[i];
/* PyxIySv4m ily traian Uv6fT37wm */                     poz = i;
/* PyxIySv4m ily traian Uv6fT37wm */                 }
/* PyxIySv4m ily traian Uv6fT37wm */         cout << a[poz] << " ";
/* PyxIySv4m ily traian Uv6fT37wm */         lpoz =poz;
/* PyxIySv4m ily traian Uv6fT37wm */     }
/* PyxIySv4m ily traian Uv6fT37wm */     return 0;
/* PyxIySv4m ily traian Uv6fT37wm */ }