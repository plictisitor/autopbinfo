/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ #include <algorithm>
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
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ using namespace std;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ int a[1001] , v[1001] , b[10001];
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ int mic(int n)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ {
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     int prod = 1 , d = 2;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     while(n > 1)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     {
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         int p = 0;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         while(n%d==0) p++ , n/=d;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         if(p > 0) prod*=d;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         d++;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         if(d * d > n) d = n;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     }
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     return prod;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ }
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ int main()
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ {
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     int n;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     cin >> n;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     for(int i = 0 ; i < n ; ++i)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         cin >> a[i];
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     for(int i = 0 ; i < n ; ++i)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         v[i]=mic(a[i]);
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     b[1]=1;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     int c=1;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     for(int i=0; i<n; i++)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     {
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         int t=0;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         for(int j=1; j<=c; j++)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         {
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */             int cif=b[j]*v[i]+t;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */             b[j] = cif % 10;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */             t=cif/10;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         }
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         while(t)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         {
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */             b[++c]=t%10;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */             t/=10;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         }
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     }
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     for(int i = c ; i >= 1 ; --i)
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */         cout << b[i];
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */     return 0;
/* 0fcAwyGJ2 ily traian DI2xI4oY6 */ }