/* wQ4gehWzM ily traian EzZTHoPRU */ #include <algorithm>
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
/* wQ4gehWzM ily traian EzZTHoPRU */ using namespace std;
/* wQ4gehWzM ily traian EzZTHoPRU */ 
/* wQ4gehWzM ily traian EzZTHoPRU */ ifstream cin("pozne.in");
/* wQ4gehWzM ily traian EzZTHoPRU */ ofstream cout("pozne.out");
/* wQ4gehWzM ily traian EzZTHoPRU */ 
/* wQ4gehWzM ily traian EzZTHoPRU */ int prim(int n)
/* wQ4gehWzM ily traian EzZTHoPRU */ {
/* wQ4gehWzM ily traian EzZTHoPRU */     int cnt=0;
/* wQ4gehWzM ily traian EzZTHoPRU */     for(int i = 1 ; i * i <= n ; ++i)
/* wQ4gehWzM ily traian EzZTHoPRU */     {
/* wQ4gehWzM ily traian EzZTHoPRU */         if(n%i==0)
/* wQ4gehWzM ily traian EzZTHoPRU */         cnt+=2;
/* wQ4gehWzM ily traian EzZTHoPRU */         if(i*i==n)
/* wQ4gehWzM ily traian EzZTHoPRU */         cnt--;
/* wQ4gehWzM ily traian EzZTHoPRU */     }
/* wQ4gehWzM ily traian EzZTHoPRU */     if(cnt==2)
/* wQ4gehWzM ily traian EzZTHoPRU */     return 1;
/* wQ4gehWzM ily traian EzZTHoPRU */     else
/* wQ4gehWzM ily traian EzZTHoPRU */     return 0;
/* wQ4gehWzM ily traian EzZTHoPRU */ }
/* wQ4gehWzM ily traian EzZTHoPRU */ 
/* wQ4gehWzM ily traian EzZTHoPRU */ int contine(int n , int c)
/* wQ4gehWzM ily traian EzZTHoPRU */ {
/* wQ4gehWzM ily traian EzZTHoPRU */     bool contine=false;
/* wQ4gehWzM ily traian EzZTHoPRU */     while(n)
/* wQ4gehWzM ily traian EzZTHoPRU */     {
/* wQ4gehWzM ily traian EzZTHoPRU */         if(n%10==c)
/* wQ4gehWzM ily traian EzZTHoPRU */         contine=true;
/* wQ4gehWzM ily traian EzZTHoPRU */         n/=10;
/* wQ4gehWzM ily traian EzZTHoPRU */     }
/* wQ4gehWzM ily traian EzZTHoPRU */     if(contine)
/* wQ4gehWzM ily traian EzZTHoPRU */     return 1;
/* wQ4gehWzM ily traian EzZTHoPRU */     else
/* wQ4gehWzM ily traian EzZTHoPRU */     return 0;
/* wQ4gehWzM ily traian EzZTHoPRU */ }
/* wQ4gehWzM ily traian EzZTHoPRU */ 
/* wQ4gehWzM ily traian EzZTHoPRU */ int main()
/* wQ4gehWzM ily traian EzZTHoPRU */ {
/* wQ4gehWzM ily traian EzZTHoPRU */     int t;
/* wQ4gehWzM ily traian EzZTHoPRU */     cin >> t;
/* wQ4gehWzM ily traian EzZTHoPRU */     int n , s , c;
/* wQ4gehWzM ily traian EzZTHoPRU */     cin >> n >> s >> c;
/* wQ4gehWzM ily traian EzZTHoPRU */     int x;
/* wQ4gehWzM ily traian EzZTHoPRU */     int sum=0 , cnt=0;
/* wQ4gehWzM ily traian EzZTHoPRU */     if(t==2)
/* wQ4gehWzM ily traian EzZTHoPRU */     {
/* wQ4gehWzM ily traian EzZTHoPRU */         for(int i = 0 ; i < n ; ++i)
/* wQ4gehWzM ily traian EzZTHoPRU */         {
/* wQ4gehWzM ily traian EzZTHoPRU */             cin >> x;
/* wQ4gehWzM ily traian EzZTHoPRU */             int ogl=0;
/* wQ4gehWzM ily traian EzZTHoPRU */             int cx=x;
/* wQ4gehWzM ily traian EzZTHoPRU */             while(cx)
/* wQ4gehWzM ily traian EzZTHoPRU */             {
/* wQ4gehWzM ily traian EzZTHoPRU */                 ogl=ogl*10+cx%10;
/* wQ4gehWzM ily traian EzZTHoPRU */                 cx/=10;
/* wQ4gehWzM ily traian EzZTHoPRU */             }
/* wQ4gehWzM ily traian EzZTHoPRU */             if(prim(ogl))
/* wQ4gehWzM ily traian EzZTHoPRU */             {
/* wQ4gehWzM ily traian EzZTHoPRU */             cnt++;
/* wQ4gehWzM ily traian EzZTHoPRU */             if(contine(x,c))
/* wQ4gehWzM ily traian EzZTHoPRU */             sum-=s;
/* wQ4gehWzM ily traian EzZTHoPRU */             else
/* wQ4gehWzM ily traian EzZTHoPRU */             sum+=s;
/* wQ4gehWzM ily traian EzZTHoPRU */             }
/* wQ4gehWzM ily traian EzZTHoPRU */             
/* wQ4gehWzM ily traian EzZTHoPRU */         }
/* wQ4gehWzM ily traian EzZTHoPRU */         if(sum>0)
/* wQ4gehWzM ily traian EzZTHoPRU */         cout << cnt << ' ' << 1;
/* wQ4gehWzM ily traian EzZTHoPRU */         if(sum==0)
/* wQ4gehWzM ily traian EzZTHoPRU */         cout << cnt << ' ' << 0;
/* wQ4gehWzM ily traian EzZTHoPRU */         if(sum<0)
/* wQ4gehWzM ily traian EzZTHoPRU */         cout << cnt << ' ' << -1;
/* wQ4gehWzM ily traian EzZTHoPRU */     }
/* wQ4gehWzM ily traian EzZTHoPRU */     if(t==1)
/* wQ4gehWzM ily traian EzZTHoPRU */     {
/* wQ4gehWzM ily traian EzZTHoPRU */         for(int i = 0 ; i < n ; ++i)
/* wQ4gehWzM ily traian EzZTHoPRU */         {
/* wQ4gehWzM ily traian EzZTHoPRU */             cin >> x;
/* wQ4gehWzM ily traian EzZTHoPRU */             if(contine(x,c))
/* wQ4gehWzM ily traian EzZTHoPRU */             cout << x << ' ';
/* wQ4gehWzM ily traian EzZTHoPRU */         }
/* wQ4gehWzM ily traian EzZTHoPRU */     }
/* wQ4gehWzM ily traian EzZTHoPRU */ }