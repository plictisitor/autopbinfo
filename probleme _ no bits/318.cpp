/* 8mV4F1x61 ily traian WxaGbObvB */ #include <algorithm>
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
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ using namespace std;
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ ifstream cin("cerc.in");
/* 8mV4F1x61 ily traian WxaGbObvB */ ofstream cout("cerc.out");
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ int n , x[20] , a[20] , rez[20] , p[20] , maxi;
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ void afisare()
/* 8mV4F1x61 ily traian WxaGbObvB */ {
/* 8mV4F1x61 ily traian WxaGbObvB */     for(int i = 1 ; i <= n ; i++)
/* 8mV4F1x61 ily traian WxaGbObvB */         cout << a[x[i]] << " ";
/* 8mV4F1x61 ily traian WxaGbObvB */     cout << '\n';
/* 8mV4F1x61 ily traian WxaGbObvB */ }
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ int suma()
/* 8mV4F1x61 ily traian WxaGbObvB */ {
/* 8mV4F1x61 ily traian WxaGbObvB */     int s = 0;
/* 8mV4F1x61 ily traian WxaGbObvB */     s += a[x[1]] * a[x[n]];
/* 8mV4F1x61 ily traian WxaGbObvB */     for(int i = 2 ; i <= n ; i++)
/* 8mV4F1x61 ily traian WxaGbObvB */         s += a[x[i]] * a[x[i - 1]];
/* 8mV4F1x61 ily traian WxaGbObvB */     return s;
/* 8mV4F1x61 ily traian WxaGbObvB */ }
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ void back(int k)
/* 8mV4F1x61 ily traian WxaGbObvB */ {
/* 8mV4F1x61 ily traian WxaGbObvB */     for(int i = 1 ; i <= n ; i++)
/* 8mV4F1x61 ily traian WxaGbObvB */         if(!p[i])
/* 8mV4F1x61 ily traian WxaGbObvB */         {
/* 8mV4F1x61 ily traian WxaGbObvB */             x[k] = i;
/* 8mV4F1x61 ily traian WxaGbObvB */             p[i] = 1;
/* 8mV4F1x61 ily traian WxaGbObvB */             if(k == n)
/* 8mV4F1x61 ily traian WxaGbObvB */             {
/* 8mV4F1x61 ily traian WxaGbObvB */                 if(suma() > maxi)
/* 8mV4F1x61 ily traian WxaGbObvB */                 {
/* 8mV4F1x61 ily traian WxaGbObvB */                     maxi = suma();
/* 8mV4F1x61 ily traian WxaGbObvB */                     for(int q = 1 ; q <= n ; q++)
/* 8mV4F1x61 ily traian WxaGbObvB */                         rez[q] = x[q];
/* 8mV4F1x61 ily traian WxaGbObvB */                 }
/* 8mV4F1x61 ily traian WxaGbObvB */             }
/* 8mV4F1x61 ily traian WxaGbObvB */             else back(k + 1);
/* 8mV4F1x61 ily traian WxaGbObvB */             p[i] = 0;
/* 8mV4F1x61 ily traian WxaGbObvB */         }
/* 8mV4F1x61 ily traian WxaGbObvB */ }
/* 8mV4F1x61 ily traian WxaGbObvB */ 
/* 8mV4F1x61 ily traian WxaGbObvB */ int main()
/* 8mV4F1x61 ily traian WxaGbObvB */ {
/* 8mV4F1x61 ily traian WxaGbObvB */     cin >> n;
/* 8mV4F1x61 ily traian WxaGbObvB */     for(int i = 1 ; i <= n ; i++)
/* 8mV4F1x61 ily traian WxaGbObvB */         cin >> a[i];
/* 8mV4F1x61 ily traian WxaGbObvB */     sort(a + 1 , a + n + 1);
/* 8mV4F1x61 ily traian WxaGbObvB */     x[1] = 1;
/* 8mV4F1x61 ily traian WxaGbObvB */     back(2);
/* 8mV4F1x61 ily traian WxaGbObvB */     for(int i = 1 ; i <= n ; i++)
/* 8mV4F1x61 ily traian WxaGbObvB */         cout << a[rez[i]] << " ";
/* 8mV4F1x61 ily traian WxaGbObvB */     return 0;
/* 8mV4F1x61 ily traian WxaGbObvB */ }