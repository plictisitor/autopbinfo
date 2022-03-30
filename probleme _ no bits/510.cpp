/* g0l3iPBl8 ily traian Tkr1x8q8B */ #include <algorithm>
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
/* g0l3iPBl8 ily traian Tkr1x8q8B */ 
/* g0l3iPBl8 ily traian Tkr1x8q8B */ using namespace std;
/* g0l3iPBl8 ily traian Tkr1x8q8B */ 
/* g0l3iPBl8 ily traian Tkr1x8q8B */ int main()
/* g0l3iPBl8 ily traian Tkr1x8q8B */ {
/* g0l3iPBl8 ily traian Tkr1x8q8B */     int n;
/* g0l3iPBl8 ily traian Tkr1x8q8B */     cin >> n;
/* g0l3iPBl8 ily traian Tkr1x8q8B */     int a[1001];
/* g0l3iPBl8 ily traian Tkr1x8q8B */     for(int i = 1; i <= n; ++i)
/* g0l3iPBl8 ily traian Tkr1x8q8B */         cin >> a[i];
/* g0l3iPBl8 ily traian Tkr1x8q8B */ 
/* g0l3iPBl8 ily traian Tkr1x8q8B */     for(int i = 1; i < n; ++i)
/* g0l3iPBl8 ily traian Tkr1x8q8B */         for(int j = i + 1; j <= n; ++j)
/* g0l3iPBl8 ily traian Tkr1x8q8B */             if(a[i] > a[j])
/* g0l3iPBl8 ily traian Tkr1x8q8B */                 swap(a[i], a[j]);
/* g0l3iPBl8 ily traian Tkr1x8q8B */ 
/* g0l3iPBl8 ily traian Tkr1x8q8B */     for(int i = 1; i <= n; ++i){
/* g0l3iPBl8 ily traian Tkr1x8q8B */         int cnt = 1, d = 2;
/* g0l3iPBl8 ily traian Tkr1x8q8B */         int ca = a[i];
/* g0l3iPBl8 ily traian Tkr1x8q8B */         while(ca > 1){
/* g0l3iPBl8 ily traian Tkr1x8q8B */             int p = 0;
/* g0l3iPBl8 ily traian Tkr1x8q8B */             while(ca % d == 0)
/* g0l3iPBl8 ily traian Tkr1x8q8B */                 ca /= d, p++;
/* g0l3iPBl8 ily traian Tkr1x8q8B */             cnt *= (p + 1);
/* g0l3iPBl8 ily traian Tkr1x8q8B */             d++;
/* g0l3iPBl8 ily traian Tkr1x8q8B */             if(d * d > ca)
/* g0l3iPBl8 ily traian Tkr1x8q8B */                 d = ca;
/* g0l3iPBl8 ily traian Tkr1x8q8B */         }
/* g0l3iPBl8 ily traian Tkr1x8q8B */         if(cnt == 2)
/* g0l3iPBl8 ily traian Tkr1x8q8B */             cout << a[i] << ' ';
/* g0l3iPBl8 ily traian Tkr1x8q8B */     }
/* g0l3iPBl8 ily traian Tkr1x8q8B */ 
/* g0l3iPBl8 ily traian Tkr1x8q8B */     return 0;
/* g0l3iPBl8 ily traian Tkr1x8q8B */ }