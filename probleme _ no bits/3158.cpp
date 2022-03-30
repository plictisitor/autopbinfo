/* uPdjJUSRc ily traian kN6ZKwmVm */ #include <algorithm>
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
/* uPdjJUSRc ily traian kN6ZKwmVm */ 
/* uPdjJUSRc ily traian kN6ZKwmVm */ using namespace std;
/* uPdjJUSRc ily traian kN6ZKwmVm */ 
/* uPdjJUSRc ily traian kN6ZKwmVm */ int n , m , a[30] , x[30] , p[30] , cnt;
/* uPdjJUSRc ily traian kN6ZKwmVm */ 
/* uPdjJUSRc ily traian kN6ZKwmVm */ int afisare()
/* uPdjJUSRc ily traian kN6ZKwmVm */ {
/* uPdjJUSRc ily traian kN6ZKwmVm */     for(int i = 1 ; i <= cnt ; i++)
/* uPdjJUSRc ily traian kN6ZKwmVm */         cout << a[x[i]];
/* uPdjJUSRc ily traian kN6ZKwmVm */     cout << '\n';
/* uPdjJUSRc ily traian kN6ZKwmVm */ }
/* uPdjJUSRc ily traian kN6ZKwmVm */ 
/* uPdjJUSRc ily traian kN6ZKwmVm */ void back(int k)
/* uPdjJUSRc ily traian kN6ZKwmVm */ {
/* uPdjJUSRc ily traian kN6ZKwmVm */     for(int i = 1 ; i <= cnt ; i++)
/* uPdjJUSRc ily traian kN6ZKwmVm */     if(!p[i])
/* uPdjJUSRc ily traian kN6ZKwmVm */     {
/* uPdjJUSRc ily traian kN6ZKwmVm */         x[k] = i;
/* uPdjJUSRc ily traian kN6ZKwmVm */         p[i] = 1;
/* uPdjJUSRc ily traian kN6ZKwmVm */         if(k == 1 && a[i] == 0);
/* uPdjJUSRc ily traian kN6ZKwmVm */         else
/* uPdjJUSRc ily traian kN6ZKwmVm */         {
/* uPdjJUSRc ily traian kN6ZKwmVm */             if(k == cnt) afisare();
/* uPdjJUSRc ily traian kN6ZKwmVm */             else back(k + 1);
/* uPdjJUSRc ily traian kN6ZKwmVm */         }
/* uPdjJUSRc ily traian kN6ZKwmVm */         p[i] = 0;
/* uPdjJUSRc ily traian kN6ZKwmVm */     }
/* uPdjJUSRc ily traian kN6ZKwmVm */ }
/* uPdjJUSRc ily traian kN6ZKwmVm */ 
/* uPdjJUSRc ily traian kN6ZKwmVm */ int main()
/* uPdjJUSRc ily traian kN6ZKwmVm */ {
/* uPdjJUSRc ily traian kN6ZKwmVm */     cin >> n;
/* uPdjJUSRc ily traian kN6ZKwmVm */     while(n != 0)
/* uPdjJUSRc ily traian kN6ZKwmVm */     {
/* uPdjJUSRc ily traian kN6ZKwmVm */         a[++cnt] = n % 10;
/* uPdjJUSRc ily traian kN6ZKwmVm */         n /= 10;
/* uPdjJUSRc ily traian kN6ZKwmVm */     }
/* uPdjJUSRc ily traian kN6ZKwmVm */     sort(a + 1 , a + cnt + 1);
/* uPdjJUSRc ily traian kN6ZKwmVm */     back(1);
/* uPdjJUSRc ily traian kN6ZKwmVm */ }