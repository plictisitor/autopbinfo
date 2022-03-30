/* AaIk4bBCz ily traian KPHpuQ5WG */ #include <algorithm>
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
/* AaIk4bBCz ily traian KPHpuQ5WG */ using namespace std;
/* AaIk4bBCz ily traian KPHpuQ5WG */ ifstream cin("adiacenta.in");
/* AaIk4bBCz ily traian KPHpuQ5WG */ ofstream cout("adiacenta.out");
/* AaIk4bBCz ily traian KPHpuQ5WG */ int n , m , a[101][101] , p , r;
/* AaIk4bBCz ily traian KPHpuQ5WG */ int main()
/* AaIk4bBCz ily traian KPHpuQ5WG */ {
/* AaIk4bBCz ily traian KPHpuQ5WG */ 
/* AaIk4bBCz ily traian KPHpuQ5WG */     cin >> n >> m;
/* AaIk4bBCz ily traian KPHpuQ5WG */     for(int k = 1 ; k <= m ; ++k)
/* AaIk4bBCz ily traian KPHpuQ5WG */     {
/* AaIk4bBCz ily traian KPHpuQ5WG */         cin >> p >> r;
/* AaIk4bBCz ily traian KPHpuQ5WG */         for(int i = 1 ; i <= n ; ++i)
/* AaIk4bBCz ily traian KPHpuQ5WG */         {
/* AaIk4bBCz ily traian KPHpuQ5WG */             for(int j = 1 ; j <= n ; ++j)
/* AaIk4bBCz ily traian KPHpuQ5WG */             {
/* AaIk4bBCz ily traian KPHpuQ5WG */                 if(i == p && j == r)
/* AaIk4bBCz ily traian KPHpuQ5WG */                 {
/* AaIk4bBCz ily traian KPHpuQ5WG */                     a[i][j] = 1;
/* AaIk4bBCz ily traian KPHpuQ5WG */                     a[j][i] = 1;
/* AaIk4bBCz ily traian KPHpuQ5WG */                 }
/* AaIk4bBCz ily traian KPHpuQ5WG */             }
/* AaIk4bBCz ily traian KPHpuQ5WG */         }
/* AaIk4bBCz ily traian KPHpuQ5WG */     }
/* AaIk4bBCz ily traian KPHpuQ5WG */     for(int i = 1 ; i <= n ; ++i)
/* AaIk4bBCz ily traian KPHpuQ5WG */         {
/* AaIk4bBCz ily traian KPHpuQ5WG */             for(int j = 1 ; j <= n ; ++j)
/* AaIk4bBCz ily traian KPHpuQ5WG */                 cout << a[i][j] << " ";
/* AaIk4bBCz ily traian KPHpuQ5WG */             cout << endl;
/* AaIk4bBCz ily traian KPHpuQ5WG */         }
/* AaIk4bBCz ily traian KPHpuQ5WG */     return 0;
/* AaIk4bBCz ily traian KPHpuQ5WG */ }