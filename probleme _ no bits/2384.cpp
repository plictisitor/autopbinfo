/* 1baDLzrNW ily traian izpATtBX5 */ #include <algorithm>
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
/* 1baDLzrNW ily traian izpATtBX5 */ using namespace std;
/* 1baDLzrNW ily traian izpATtBX5 */ ifstream cin("divigrup.in");
/* 1baDLzrNW ily traian izpATtBX5 */ ofstream cout("divigrup.out");
/* 1baDLzrNW ily traian izpATtBX5 */ int f[400];
/* 1baDLzrNW ily traian izpATtBX5 */ int nrdiv(int n)
/* 1baDLzrNW ily traian izpATtBX5 */ {
/* 1baDLzrNW ily traian izpATtBX5 */     int d = 2 , prod = 1;
/* 1baDLzrNW ily traian izpATtBX5 */     while(n > 1)
/* 1baDLzrNW ily traian izpATtBX5 */     {
/* 1baDLzrNW ily traian izpATtBX5 */         int p = 0;
/* 1baDLzrNW ily traian izpATtBX5 */         while(n % d == 0) p++ , n/=d;
/* 1baDLzrNW ily traian izpATtBX5 */         if(p) prod *= (p+1);
/* 1baDLzrNW ily traian izpATtBX5 */         d++;
/* 1baDLzrNW ily traian izpATtBX5 */         if(d * d > n) d = n;
/* 1baDLzrNW ily traian izpATtBX5 */     }
/* 1baDLzrNW ily traian izpATtBX5 */     return prod;
/* 1baDLzrNW ily traian izpATtBX5 */ }
/* 1baDLzrNW ily traian izpATtBX5 */ int main()
/* 1baDLzrNW ily traian izpATtBX5 */ {
/* 1baDLzrNW ily traian izpATtBX5 */     int n , c = 0 , a[300] , v[300];
/* 1baDLzrNW ily traian izpATtBX5 */     cin >> n;
/* 1baDLzrNW ily traian izpATtBX5 */     for(int i = 0 ; i < n ; ++i)
/* 1baDLzrNW ily traian izpATtBX5 */         cin >> a[i];
/* 1baDLzrNW ily traian izpATtBX5 */     for(int i = 0 ; i < n ; i++)
/* 1baDLzrNW ily traian izpATtBX5 */         for(int j = i + 1 ; j < n ; j++)
/* 1baDLzrNW ily traian izpATtBX5 */             if(a[i] > a[j]) swap(a[i] , a[j]);
/* 1baDLzrNW ily traian izpATtBX5 */     for(int i = 0 ; i < n ; ++i)
/* 1baDLzrNW ily traian izpATtBX5 */     {
/* 1baDLzrNW ily traian izpATtBX5 */         v[i]=nrdiv(a[i]);
/* 1baDLzrNW ily traian izpATtBX5 */         if(f[v[i]]==0) c++;
/* 1baDLzrNW ily traian izpATtBX5 */         f[v[i]]++;
/* 1baDLzrNW ily traian izpATtBX5 */     }
/* 1baDLzrNW ily traian izpATtBX5 */     cout << c << '\n';
/* 1baDLzrNW ily traian izpATtBX5 */     for(int i = 300 ; i >= 1 ; --i)
/* 1baDLzrNW ily traian izpATtBX5 */     {
/* 1baDLzrNW ily traian izpATtBX5 */         int cnt = 0;
/* 1baDLzrNW ily traian izpATtBX5 */         for(int j = 0 ; j < n ; ++j)
/* 1baDLzrNW ily traian izpATtBX5 */             if(v[j]==i) cnt++;
/* 1baDLzrNW ily traian izpATtBX5 */         if(cnt  > 0)
/* 1baDLzrNW ily traian izpATtBX5 */         {
/* 1baDLzrNW ily traian izpATtBX5 */             cout << cnt << ' ';
/* 1baDLzrNW ily traian izpATtBX5 */             for(int j = 0 ; j < n ; ++j)
/* 1baDLzrNW ily traian izpATtBX5 */                 if(v[j]==i)
/* 1baDLzrNW ily traian izpATtBX5 */                     cout << a[j] << ' ';
/* 1baDLzrNW ily traian izpATtBX5 */             cout << '\n';
/* 1baDLzrNW ily traian izpATtBX5 */         }
/* 1baDLzrNW ily traian izpATtBX5 */     }
/* 1baDLzrNW ily traian izpATtBX5 */     return 0;
/* 1baDLzrNW ily traian izpATtBX5 */ }