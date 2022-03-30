/* scTQQx98I ily traian pgWRMJIBA */ #include <algorithm>
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
/* scTQQx98I ily traian pgWRMJIBA */ using namespace std;
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */ ifstream cin("matrice5.in");
/* scTQQx98I ily traian pgWRMJIBA */ ofstream cout("matrice5.out");
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */ int sub(int n, int a[][101], int k){
/* scTQQx98I ily traian pgWRMJIBA */     int sum = 0;
/* scTQQx98I ily traian pgWRMJIBA */     for(int i = 1; i <= n; ++i)
/* scTQQx98I ily traian pgWRMJIBA */         for(int j = 1; j <= n; ++j)
/* scTQQx98I ily traian pgWRMJIBA */             if(i + j == k)
/* scTQQx98I ily traian pgWRMJIBA */                 sum += a[i][j];
/* scTQQx98I ily traian pgWRMJIBA */     return sum;
/* scTQQx98I ily traian pgWRMJIBA */ }
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */ /*
/* scTQQx98I ily traian pgWRMJIBA */     a[1][1], a[1][2], a[1][3]
/* scTQQx98I ily traian pgWRMJIBA */     a[2][1], a[2][2], a[2][3]
/* scTQQx98I ily traian pgWRMJIBA */     a[3][1], a[3][2], a[3][3]
/* scTQQx98I ily traian pgWRMJIBA */ */
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */ int main(){
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */     int n, a[101][101];
/* scTQQx98I ily traian pgWRMJIBA */     cin >> n;
/* scTQQx98I ily traian pgWRMJIBA */     for(int i = 1; i <= n; ++i)
/* scTQQx98I ily traian pgWRMJIBA */         for(int j = 1; j <= n; ++j)
/* scTQQx98I ily traian pgWRMJIBA */             cin >> a[i][j];
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */     int sum = 0;
/* scTQQx98I ily traian pgWRMJIBA */     for(int i = 2; i <= n; ++i)
/* scTQQx98I ily traian pgWRMJIBA */         sum += sub(n, a, i);
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */     cout << sum;
/* scTQQx98I ily traian pgWRMJIBA */ 
/* scTQQx98I ily traian pgWRMJIBA */     return 0;
/* scTQQx98I ily traian pgWRMJIBA */ }