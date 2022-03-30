/* 2S62fvIvX ily traian ix3NvrTna */ #include <algorithm>
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
/* 2S62fvIvX ily traian ix3NvrTna */ 
/* 2S62fvIvX ily traian ix3NvrTna */ using namespace std;
/* 2S62fvIvX ily traian ix3NvrTna */ 
/* 2S62fvIvX ily traian ix3NvrTna */ int main()
/* 2S62fvIvX ily traian ix3NvrTna */ {
/* 2S62fvIvX ily traian ix3NvrTna */     int n,k;
/* 2S62fvIvX ily traian ix3NvrTna */     cin >> n >> k;
/* 2S62fvIvX ily traian ix3NvrTna */     int a[1000];
/* 2S62fvIvX ily traian ix3NvrTna */     int st=0 , dr=0 , v[1000];
/* 2S62fvIvX ily traian ix3NvrTna */     for(int i = 0 ; i < n ; ++i)
/* 2S62fvIvX ily traian ix3NvrTna */     {
/* 2S62fvIvX ily traian ix3NvrTna */         cin >> a[i];    
/* 2S62fvIvX ily traian ix3NvrTna */     }
/* 2S62fvIvX ily traian ix3NvrTna */     for(int i = 0 ; i <= n - k; ++i)
/* 2S62fvIvX ily traian ix3NvrTna */     {
/* 2S62fvIvX ily traian ix3NvrTna */         int p = 0;
/* 2S62fvIvX ily traian ix3NvrTna */         for(int j = i ; j < i+k ; ++j)
/* 2S62fvIvX ily traian ix3NvrTna */         {
/* 2S62fvIvX ily traian ix3NvrTna */             v[p]=a[j];
/* 2S62fvIvX ily traian ix3NvrTna */             p++;
/* 2S62fvIvX ily traian ix3NvrTna */         }
/* 2S62fvIvX ily traian ix3NvrTna */         for(int j = i+1 ; j < n-k ; ++j)
/* 2S62fvIvX ily traian ix3NvrTna */         {
/* 2S62fvIvX ily traian ix3NvrTna */             p=0;
/* 2S62fvIvX ily traian ix3NvrTna */             int cnt=0;
/* 2S62fvIvX ily traian ix3NvrTna */             for(int m = j ; m < j+k ; ++m)
/* 2S62fvIvX ily traian ix3NvrTna */             {
/* 2S62fvIvX ily traian ix3NvrTna */                 if(a[m]==v[p])
/* 2S62fvIvX ily traian ix3NvrTna */                 cnt++;
/* 2S62fvIvX ily traian ix3NvrTna */                 p++;
/* 2S62fvIvX ily traian ix3NvrTna */             }
/* 2S62fvIvX ily traian ix3NvrTna */             if(cnt==k && st==0 && dr==0)
/* 2S62fvIvX ily traian ix3NvrTna */             st=i+1 , dr=j+1;
/* 2S62fvIvX ily traian ix3NvrTna */         }
/* 2S62fvIvX ily traian ix3NvrTna */     }
/* 2S62fvIvX ily traian ix3NvrTna */     if(st==0 && dr==0)
/* 2S62fvIvX ily traian ix3NvrTna */         cout << "NU";
/* 2S62fvIvX ily traian ix3NvrTna */     else
/* 2S62fvIvX ily traian ix3NvrTna */     cout << st << ' ' << dr;
/* 2S62fvIvX ily traian ix3NvrTna */ }