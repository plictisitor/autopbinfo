/* v2xW6FQRe ily traian 65rJcVszL */ #include <algorithm>
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
/* v2xW6FQRe ily traian 65rJcVszL */ using namespace std;
/* v2xW6FQRe ily traian 65rJcVszL */ 
/* v2xW6FQRe ily traian 65rJcVszL */ int prim(int n);
/* v2xW6FQRe ily traian 65rJcVszL */ 
/* v2xW6FQRe ily traian 65rJcVszL */ int main ()
/* v2xW6FQRe ily traian 65rJcVszL */ {
/* v2xW6FQRe ily traian 65rJcVszL */     int n;
/* v2xW6FQRe ily traian 65rJcVszL */     cin >> n;
/* v2xW6FQRe ily traian 65rJcVszL */     int a[1001];
/* v2xW6FQRe ily traian 65rJcVszL */     int cnt=0,max=0;
/* v2xW6FQRe ily traian 65rJcVszL */     for (int i = 0 ; i < n ; ++i)
/* v2xW6FQRe ily traian 65rJcVszL */     {
/* v2xW6FQRe ily traian 65rJcVszL */         cin >> a[i];
/* v2xW6FQRe ily traian 65rJcVszL */         if(prim(a[i]))
/* v2xW6FQRe ily traian 65rJcVszL */         {
/* v2xW6FQRe ily traian 65rJcVszL */             if (a[i] >= max)
/* v2xW6FQRe ily traian 65rJcVszL */                 max=a[i];
/* v2xW6FQRe ily traian 65rJcVszL */         }
/* v2xW6FQRe ily traian 65rJcVszL */     }
/* v2xW6FQRe ily traian 65rJcVszL */     for (int i = 0 ; i < n; ++i)
/* v2xW6FQRe ily traian 65rJcVszL */     {
/* v2xW6FQRe ily traian 65rJcVszL */         if (a[i]==max)
/* v2xW6FQRe ily traian 65rJcVszL */             cnt++;
/* v2xW6FQRe ily traian 65rJcVszL */     }
/* v2xW6FQRe ily traian 65rJcVszL */     cout << max << ' ' << cnt;
/* v2xW6FQRe ily traian 65rJcVszL */     return 0;
/* v2xW6FQRe ily traian 65rJcVszL */ }
/* v2xW6FQRe ily traian 65rJcVszL */ int prim(int n)
/* v2xW6FQRe ily traian 65rJcVszL */ {
/* v2xW6FQRe ily traian 65rJcVszL */     int cnt=0;
/* v2xW6FQRe ily traian 65rJcVszL */     for (int i = 1 ; i * i <= n; ++i)
/* v2xW6FQRe ily traian 65rJcVszL */     {
/* v2xW6FQRe ily traian 65rJcVszL */         if (n%i==0)
/* v2xW6FQRe ily traian 65rJcVszL */             cnt+=2;
/* v2xW6FQRe ily traian 65rJcVszL */         if (i*i==n)
/* v2xW6FQRe ily traian 65rJcVszL */             cnt--;
/* v2xW6FQRe ily traian 65rJcVszL */     }
/* v2xW6FQRe ily traian 65rJcVszL */     if (cnt == 2)
/* v2xW6FQRe ily traian 65rJcVszL */         return 1;
/* v2xW6FQRe ily traian 65rJcVszL */     else
/* v2xW6FQRe ily traian 65rJcVszL */         return 0;
/* v2xW6FQRe ily traian 65rJcVszL */ }