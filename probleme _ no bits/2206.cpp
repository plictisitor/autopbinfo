/* H5s62EclB ily traian F2GJH8Cgj */ #include <algorithm>
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
/* H5s62EclB ily traian F2GJH8Cgj */ using namespace std;
/* H5s62EclB ily traian F2GJH8Cgj */ int main()
/* H5s62EclB ily traian F2GJH8Cgj */ {
/* H5s62EclB ily traian F2GJH8Cgj */     unsigned long long n , ogl = 0 ;
/* H5s62EclB ily traian F2GJH8Cgj */     int a[20] , b[20] , p = 0 , ok = 0;
/* H5s62EclB ily traian F2GJH8Cgj */     cin >> n;
/* H5s62EclB ily traian F2GJH8Cgj */     while(n != 0)
/* H5s62EclB ily traian F2GJH8Cgj */     {
/* H5s62EclB ily traian F2GJH8Cgj */         a[p] = n % 10;
/* H5s62EclB ily traian F2GJH8Cgj */         n /= 10;
/* H5s62EclB ily traian F2GJH8Cgj */         p++;
/* H5s62EclB ily traian F2GJH8Cgj */     }
/* H5s62EclB ily traian F2GJH8Cgj */     int j = 0;
/* H5s62EclB ily traian F2GJH8Cgj */     for(int i = p-1 ; i >= 0 ; --i)
/* H5s62EclB ily traian F2GJH8Cgj */     {
/* H5s62EclB ily traian F2GJH8Cgj */         b[j] = a[i];
/* H5s62EclB ily traian F2GJH8Cgj */         j++;
/* H5s62EclB ily traian F2GJH8Cgj */     }
/* H5s62EclB ily traian F2GJH8Cgj */     for(int i = 0 ; i < p ; ++i)
/* H5s62EclB ily traian F2GJH8Cgj */     {
/* H5s62EclB ily traian F2GJH8Cgj */         int k = 0;
/* H5s62EclB ily traian F2GJH8Cgj */         if(b[i] % 2 == 0 && ok == 0)
/* H5s62EclB ily traian F2GJH8Cgj */         {
/* H5s62EclB ily traian F2GJH8Cgj */             cout << b[i] + 1;
/* H5s62EclB ily traian F2GJH8Cgj */             ok = 1;
/* H5s62EclB ily traian F2GJH8Cgj */             k = 1;
/* H5s62EclB ily traian F2GJH8Cgj */         }
/* H5s62EclB ily traian F2GJH8Cgj */         if(b[i] % 2 == 1 && ok == 0) cout << b[i];
/* H5s62EclB ily traian F2GJH8Cgj */         if(ok == 1 && k == 0) cout << 1;
/* H5s62EclB ily traian F2GJH8Cgj */     }
/* H5s62EclB ily traian F2GJH8Cgj */ }