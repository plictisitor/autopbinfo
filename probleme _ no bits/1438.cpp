/* 6bzpPLca5 ily traian TYGzcVc3G */ #include <algorithm>
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
/* 6bzpPLca5 ily traian TYGzcVc3G */ using namespace std;
/* 6bzpPLca5 ily traian TYGzcVc3G */ 
/* 6bzpPLca5 ily traian TYGzcVc3G */ ifstream cin("razboi.in");
/* 6bzpPLca5 ily traian TYGzcVc3G */ ofstream cout("razboi.out");
/* 6bzpPLca5 ily traian TYGzcVc3G */ 
/* 6bzpPLca5 ily traian TYGzcVc3G */ int sd(int n)
/* 6bzpPLca5 ily traian TYGzcVc3G */ {
/* 6bzpPLca5 ily traian TYGzcVc3G */     int s=0;
/* 6bzpPLca5 ily traian TYGzcVc3G */     for(int i = 1 ; i * i <= n ; ++i)
/* 6bzpPLca5 ily traian TYGzcVc3G */     {
/* 6bzpPLca5 ily traian TYGzcVc3G */         if(n%i==0)
/* 6bzpPLca5 ily traian TYGzcVc3G */         s+=i+n/i;
/* 6bzpPLca5 ily traian TYGzcVc3G */         if(i*i==n)
/* 6bzpPLca5 ily traian TYGzcVc3G */         s-=i;
/* 6bzpPLca5 ily traian TYGzcVc3G */     }
/* 6bzpPLca5 ily traian TYGzcVc3G */     return s;
/* 6bzpPLca5 ily traian TYGzcVc3G */ }
/* 6bzpPLca5 ily traian TYGzcVc3G */ 
/* 6bzpPLca5 ily traian TYGzcVc3G */ int main()
/* 6bzpPLca5 ily traian TYGzcVc3G */ {
/* 6bzpPLca5 ily traian TYGzcVc3G */     int n;
/* 6bzpPLca5 ily traian TYGzcVc3G */     cin >> n;
/* 6bzpPLca5 ily traian TYGzcVc3G */     int c;
/* 6bzpPLca5 ily traian TYGzcVc3G */     cin >> c;
/* 6bzpPLca5 ily traian TYGzcVc3G */     if(c==1)
/* 6bzpPLca5 ily traian TYGzcVc3G */     {
/* 6bzpPLca5 ily traian TYGzcVc3G */         int x , cnt=0;
/* 6bzpPLca5 ily traian TYGzcVc3G */         for(int i = 0 ; i < n ; ++i)
/* 6bzpPLca5 ily traian TYGzcVc3G */         {
/* 6bzpPLca5 ily traian TYGzcVc3G */             cin >> x;
/* 6bzpPLca5 ily traian TYGzcVc3G */             if(x%2==0)
/* 6bzpPLca5 ily traian TYGzcVc3G */             cnt++;
/* 6bzpPLca5 ily traian TYGzcVc3G */         }
/* 6bzpPLca5 ily traian TYGzcVc3G */         cout << cnt << ' ' << n-cnt;
/* 6bzpPLca5 ily traian TYGzcVc3G */     }
/* 6bzpPLca5 ily traian TYGzcVc3G */     if(c==2)
/* 6bzpPLca5 ily traian TYGzcVc3G */     {
/* 6bzpPLca5 ily traian TYGzcVc3G */         int x , cnt=0;
/* 6bzpPLca5 ily traian TYGzcVc3G */         for(int i = 0 ; i < n ; ++i)
/* 6bzpPLca5 ily traian TYGzcVc3G */         {
/* 6bzpPLca5 ily traian TYGzcVc3G */             cin >> x;
/* 6bzpPLca5 ily traian TYGzcVc3G */             if(sd(x)%2==0)
/* 6bzpPLca5 ily traian TYGzcVc3G */             cnt++;
/* 6bzpPLca5 ily traian TYGzcVc3G */         }
/* 6bzpPLca5 ily traian TYGzcVc3G */         cout << cnt << ' ' << n-cnt;
/* 6bzpPLca5 ily traian TYGzcVc3G */     }
/* 6bzpPLca5 ily traian TYGzcVc3G */     return 0;    
/* 6bzpPLca5 ily traian TYGzcVc3G */ }