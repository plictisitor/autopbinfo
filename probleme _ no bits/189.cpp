/* DQHbcVnWX ily traian QbBFW93mt */ #include <algorithm>
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
/* DQHbcVnWX ily traian QbBFW93mt */ using namespace std;
/* DQHbcVnWX ily traian QbBFW93mt */ int a[15] , n , maxi , nr , i , x , y, j , m , ok , imax;
/* DQHbcVnWX ily traian QbBFW93mt */ int main()
/* DQHbcVnWX ily traian QbBFW93mt */ {
/* DQHbcVnWX ily traian QbBFW93mt */     cin >> n;
/* DQHbcVnWX ily traian QbBFW93mt */     for(i = 1 ; i <= n ; ++i)
/* DQHbcVnWX ily traian QbBFW93mt */     {
/* DQHbcVnWX ily traian QbBFW93mt */         cin >> x;
/* DQHbcVnWX ily traian QbBFW93mt */         j = 0;
/* DQHbcVnWX ily traian QbBFW93mt */         maxi = 0;
/* DQHbcVnWX ily traian QbBFW93mt */         while(x > 0)
/* DQHbcVnWX ily traian QbBFW93mt */         {
/* DQHbcVnWX ily traian QbBFW93mt */          ++j;
/* DQHbcVnWX ily traian QbBFW93mt */          a[j] = x % 10;
/* DQHbcVnWX ily traian QbBFW93mt */          if(a[j] > maxi) {maxi = a[j]; imax=j;}
/* DQHbcVnWX ily traian QbBFW93mt */          x = x / 10;
/* DQHbcVnWX ily traian QbBFW93mt */         }
/* DQHbcVnWX ily traian QbBFW93mt */         m = 1;
/* DQHbcVnWX ily traian QbBFW93mt */         if(imax == 1 || imax == j)
/* DQHbcVnWX ily traian QbBFW93mt */             cout << "0" << endl;
/* DQHbcVnWX ily traian QbBFW93mt */         else
/* DQHbcVnWX ily traian QbBFW93mt */         {
/* DQHbcVnWX ily traian QbBFW93mt */                 while(m < imax)
/* DQHbcVnWX ily traian QbBFW93mt */             {
/* DQHbcVnWX ily traian QbBFW93mt */                 if(a[m] < a[m+1]) ok = 1;
/* DQHbcVnWX ily traian QbBFW93mt */                 else
/* DQHbcVnWX ily traian QbBFW93mt */                 {
/* DQHbcVnWX ily traian QbBFW93mt */                     ok = 0;
/* DQHbcVnWX ily traian QbBFW93mt */                     break;
/* DQHbcVnWX ily traian QbBFW93mt */                 }
/* DQHbcVnWX ily traian QbBFW93mt */                 ++m;
/* DQHbcVnWX ily traian QbBFW93mt */             }
/* DQHbcVnWX ily traian QbBFW93mt */             if(ok == 0) cout << "0" << endl;
/* DQHbcVnWX ily traian QbBFW93mt */             else
/* DQHbcVnWX ily traian QbBFW93mt */             {
/* DQHbcVnWX ily traian QbBFW93mt */                 m = imax;
/* DQHbcVnWX ily traian QbBFW93mt */                 while(m >= imax && m < j)
/* DQHbcVnWX ily traian QbBFW93mt */                 {
/* DQHbcVnWX ily traian QbBFW93mt */                     if(a[m] > a[m+1])
/* DQHbcVnWX ily traian QbBFW93mt */                     ok = 1;
/* DQHbcVnWX ily traian QbBFW93mt */                 else
/* DQHbcVnWX ily traian QbBFW93mt */                 {
/* DQHbcVnWX ily traian QbBFW93mt */                     ok = 0;
/* DQHbcVnWX ily traian QbBFW93mt */                     break;
/* DQHbcVnWX ily traian QbBFW93mt */                 }
/* DQHbcVnWX ily traian QbBFW93mt */                 ++m;
/* DQHbcVnWX ily traian QbBFW93mt */                 }
/* DQHbcVnWX ily traian QbBFW93mt */             if(ok == 0) cout << "0" << endl;
/* DQHbcVnWX ily traian QbBFW93mt */             else cout << "1" << endl;
/* DQHbcVnWX ily traian QbBFW93mt */             }
/* DQHbcVnWX ily traian QbBFW93mt */         for(x = 1 ; x <= 15 ; ++x) a[x] = 0;
/* DQHbcVnWX ily traian QbBFW93mt */         }
/* DQHbcVnWX ily traian QbBFW93mt */     }
/* DQHbcVnWX ily traian QbBFW93mt */     return 0;
/* DQHbcVnWX ily traian QbBFW93mt */ }