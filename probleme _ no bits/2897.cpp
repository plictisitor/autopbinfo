/* 2KGJ4g51u ily traian hYIsuHbie */ #include <algorithm>
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
/* 2KGJ4g51u ily traian hYIsuHbie */ using namespace std;
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ int n , a[10001];
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ struct perechi{
/* 2KGJ4g51u ily traian hYIsuHbie */     int p1 , p2 , val;
/* 2KGJ4g51u ily traian hYIsuHbie */ }f[10001];
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ ifstream cin("numere.in");
/* 2KGJ4g51u ily traian hYIsuHbie */ ofstream cout("numere.out");
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ bool prim(int x)
/* 2KGJ4g51u ily traian hYIsuHbie */ {
/* 2KGJ4g51u ily traian hYIsuHbie */     int cnt = 0;
/* 2KGJ4g51u ily traian hYIsuHbie */     for(int d = 1 ; d * d <= x ; ++d)
/* 2KGJ4g51u ily traian hYIsuHbie */     {
/* 2KGJ4g51u ily traian hYIsuHbie */         if(x % d == 0)
/* 2KGJ4g51u ily traian hYIsuHbie */             cnt+=2;
/* 2KGJ4g51u ily traian hYIsuHbie */         if(d * d == x)
/* 2KGJ4g51u ily traian hYIsuHbie */             cnt--;
/* 2KGJ4g51u ily traian hYIsuHbie */     }
/* 2KGJ4g51u ily traian hYIsuHbie */     return cnt == 2;
/* 2KGJ4g51u ily traian hYIsuHbie */ }
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ int divi(int x)
/* 2KGJ4g51u ily traian hYIsuHbie */ {
/* 2KGJ4g51u ily traian hYIsuHbie */     int max = 0;
/* 2KGJ4g51u ily traian hYIsuHbie */     for(int d = 1 ; d * d <= x ; ++d)
/* 2KGJ4g51u ily traian hYIsuHbie */     {
/* 2KGJ4g51u ily traian hYIsuHbie */         if(x % d == 0)
/* 2KGJ4g51u ily traian hYIsuHbie */         {
/* 2KGJ4g51u ily traian hYIsuHbie */             if(prim(x/d) && x / d > max)
/* 2KGJ4g51u ily traian hYIsuHbie */                 max = x / d;
/* 2KGJ4g51u ily traian hYIsuHbie */             if(prim(d) && d > max)
/* 2KGJ4g51u ily traian hYIsuHbie */                 max = d;
/* 2KGJ4g51u ily traian hYIsuHbie */         }
/* 2KGJ4g51u ily traian hYIsuHbie */     }
/* 2KGJ4g51u ily traian hYIsuHbie */     return max;
/* 2KGJ4g51u ily traian hYIsuHbie */ }
/* 2KGJ4g51u ily traian hYIsuHbie */ 
/* 2KGJ4g51u ily traian hYIsuHbie */ int main()
/* 2KGJ4g51u ily traian hYIsuHbie */ {
/* 2KGJ4g51u ily traian hYIsuHbie */     int c;
/* 2KGJ4g51u ily traian hYIsuHbie */     cin >> n >> c;
/* 2KGJ4g51u ily traian hYIsuHbie */     int x;
/* 2KGJ4g51u ily traian hYIsuHbie */     for(int i = 1 ; i <= n ; ++i)
/* 2KGJ4g51u ily traian hYIsuHbie */         cin >> x , a[i] = divi(x);
/* 2KGJ4g51u ily traian hYIsuHbie */     for(int i = 1 ; i <= n ; ++i)
/* 2KGJ4g51u ily traian hYIsuHbie */     {
/* 2KGJ4g51u ily traian hYIsuHbie */         if(f[a[i]].val==0)
/* 2KGJ4g51u ily traian hYIsuHbie */             f[a[i]].p1=i , f[a[i]].p2=i , f[a[i]].val++;
/* 2KGJ4g51u ily traian hYIsuHbie */         else
/* 2KGJ4g51u ily traian hYIsuHbie */             f[a[i]].p2=i , f[a[i]].val++;
/* 2KGJ4g51u ily traian hYIsuHbie */     }
/* 2KGJ4g51u ily traian hYIsuHbie */     if(c == 1)
/* 2KGJ4g51u ily traian hYIsuHbie */     {
/* 2KGJ4g51u ily traian hYIsuHbie */         int max = 0;
/* 2KGJ4g51u ily traian hYIsuHbie */         for(int i = 1 ; i <= 10000 ; ++i)
/* 2KGJ4g51u ily traian hYIsuHbie */             if(f[i].p2 - f[i].p1 + 1 > max)
/* 2KGJ4g51u ily traian hYIsuHbie */                 max = f[i].p2 - f[i].p1 + 1;
/* 2KGJ4g51u ily traian hYIsuHbie */             cout << max << endl;
/* 2KGJ4g51u ily traian hYIsuHbie */     }
/* 2KGJ4g51u ily traian hYIsuHbie */     else
/* 2KGJ4g51u ily traian hYIsuHbie */     {
/* 2KGJ4g51u ily traian hYIsuHbie */         unsigned long long cnt = 0;
/* 2KGJ4g51u ily traian hYIsuHbie */         for(int i = 1 ; i <= 10000 ; ++i)
/* 2KGJ4g51u ily traian hYIsuHbie */             if(f[i].val > 1)
/* 2KGJ4g51u ily traian hYIsuHbie */             cnt = cnt + f[i].val * (f[i].val-1) / 2;
/* 2KGJ4g51u ily traian hYIsuHbie */         cout << cnt << endl;
/* 2KGJ4g51u ily traian hYIsuHbie */     }
/* 2KGJ4g51u ily traian hYIsuHbie */     return 0;
/* 2KGJ4g51u ily traian hYIsuHbie */ }