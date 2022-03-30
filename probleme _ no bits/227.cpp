/* ZYSWiGa6M ily traian jpH8OJwsA */ #include <algorithm>
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
/* ZYSWiGa6M ily traian jpH8OJwsA */ using namespace std;
/* ZYSWiGa6M ily traian jpH8OJwsA */ int main()
/* ZYSWiGa6M ily traian jpH8OJwsA */ {
/* ZYSWiGa6M ily traian jpH8OJwsA */     int n , a[18][18];
/* ZYSWiGa6M ily traian jpH8OJwsA */     cin >> n;
/* ZYSWiGa6M ily traian jpH8OJwsA */     for(int i = 0 ; i <= n+1 ; ++i)
/* ZYSWiGa6M ily traian jpH8OJwsA */     {
/* ZYSWiGa6M ily traian jpH8OJwsA */         for(int j = 0 ; j <= n+1 ; ++j)
/* ZYSWiGa6M ily traian jpH8OJwsA */         {
/* ZYSWiGa6M ily traian jpH8OJwsA */ 
/* ZYSWiGa6M ily traian jpH8OJwsA */             if(i == 0 || i == n + 1 || j == 0 || j == n + 1 || i == 1)
/* ZYSWiGa6M ily traian jpH8OJwsA */             {
/* ZYSWiGa6M ily traian jpH8OJwsA */                 a[i][j]=0;
/* ZYSWiGa6M ily traian jpH8OJwsA */                 if(i==1)
/* ZYSWiGa6M ily traian jpH8OJwsA */                 {
/* ZYSWiGa6M ily traian jpH8OJwsA */                     a[i][j]=j;
/* ZYSWiGa6M ily traian jpH8OJwsA */                 }
/* ZYSWiGa6M ily traian jpH8OJwsA */             }
/* ZYSWiGa6M ily traian jpH8OJwsA */             else
/* ZYSWiGa6M ily traian jpH8OJwsA */             a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
/* ZYSWiGa6M ily traian jpH8OJwsA */         }
/* ZYSWiGa6M ily traian jpH8OJwsA */     }
/* ZYSWiGa6M ily traian jpH8OJwsA */     for(int i = n ; i >= 1 ; --i)
/* ZYSWiGa6M ily traian jpH8OJwsA */     {
/* ZYSWiGa6M ily traian jpH8OJwsA */         for(int j = 1 ; j <= n ; ++j)
/* ZYSWiGa6M ily traian jpH8OJwsA */         {
/* ZYSWiGa6M ily traian jpH8OJwsA */             if(j > n + 1 - i) cout << 0 <<" ";
/* ZYSWiGa6M ily traian jpH8OJwsA */             else cout << a[i][j] <<" ";
/* ZYSWiGa6M ily traian jpH8OJwsA */         }
/* ZYSWiGa6M ily traian jpH8OJwsA */         cout << endl;
/* ZYSWiGa6M ily traian jpH8OJwsA */     }
/* ZYSWiGa6M ily traian jpH8OJwsA */ }