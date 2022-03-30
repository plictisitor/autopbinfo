/* 4nkADWrCV ily traian busRINsot */ #include <algorithm>
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
/* 4nkADWrCV ily traian busRINsot */ using namespace std;
/* 4nkADWrCV ily traian busRINsot */ 
/* 4nkADWrCV ily traian busRINsot */ int prim(int n)
/* 4nkADWrCV ily traian busRINsot */ {
/* 4nkADWrCV ily traian busRINsot */     int cnt=0;
/* 4nkADWrCV ily traian busRINsot */     for(int i = 1; i * i <= n ; ++i)
/* 4nkADWrCV ily traian busRINsot */     {
/* 4nkADWrCV ily traian busRINsot */         if(n%i==0)
/* 4nkADWrCV ily traian busRINsot */             cnt+=2;
/* 4nkADWrCV ily traian busRINsot */         if(i*i==n)
/* 4nkADWrCV ily traian busRINsot */             cnt--;
/* 4nkADWrCV ily traian busRINsot */     }
/* 4nkADWrCV ily traian busRINsot */     if(cnt==2)
/* 4nkADWrCV ily traian busRINsot */         return 1 ;
/* 4nkADWrCV ily traian busRINsot */     else
/* 4nkADWrCV ily traian busRINsot */         return 0;
/* 4nkADWrCV ily traian busRINsot */ }
/* 4nkADWrCV ily traian busRINsot */ 
/* 4nkADWrCV ily traian busRINsot */ int main()
/* 4nkADWrCV ily traian busRINsot */ {
/* 4nkADWrCV ily traian busRINsot */     int n;
/* 4nkADWrCV ily traian busRINsot */     cin >> n;
/* 4nkADWrCV ily traian busRINsot */     int a[10000];
/* 4nkADWrCV ily traian busRINsot */     int min= 1000000001, max=0;
/* 4nkADWrCV ily traian busRINsot */     int cnt=0;
/* 4nkADWrCV ily traian busRINsot */     for(int i = 0 ; i < n ; ++i)
/* 4nkADWrCV ily traian busRINsot */     {
/* 4nkADWrCV ily traian busRINsot */         cin >> a[i];
/* 4nkADWrCV ily traian busRINsot */         if(prim(a[i]))
/* 4nkADWrCV ily traian busRINsot */         {
/* 4nkADWrCV ily traian busRINsot */             cnt++;
/* 4nkADWrCV ily traian busRINsot */             if(a[i]<min)
/* 4nkADWrCV ily traian busRINsot */                 min=a[i];
/* 4nkADWrCV ily traian busRINsot */             if(a[i]>max)
/* 4nkADWrCV ily traian busRINsot */                 max=a[i];
/* 4nkADWrCV ily traian busRINsot */         }
/* 4nkADWrCV ily traian busRINsot */     }
/* 4nkADWrCV ily traian busRINsot */     cout << cnt << ' ' << min << ' ' << max;
/* 4nkADWrCV ily traian busRINsot */     return 0;
/* 4nkADWrCV ily traian busRINsot */ }