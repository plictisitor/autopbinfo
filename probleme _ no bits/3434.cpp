/* 92tkHMhRy ily traian 58XC2FLjJ */ #include <algorithm>
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
/* 92tkHMhRy ily traian 58XC2FLjJ */ 
/* 92tkHMhRy ily traian 58XC2FLjJ */ using namespace std;
/* 92tkHMhRy ily traian 58XC2FLjJ */ 
/* 92tkHMhRy ily traian 58XC2FLjJ */ ifstream cin("furnica.in");
/* 92tkHMhRy ily traian 58XC2FLjJ */ ofstream cout("furnica.out");
/* 92tkHMhRy ily traian 58XC2FLjJ */ 
/* 92tkHMhRy ily traian 58XC2FLjJ */ struct foaie{
/* 92tkHMhRy ily traian 58XC2FLjJ */     long long l, h;
/* 92tkHMhRy ily traian 58XC2FLjJ */ }a[10005];
/* 92tkHMhRy ily traian 58XC2FLjJ */ 
/* 92tkHMhRy ily traian 58XC2FLjJ */ long long cer, n, t;
/* 92tkHMhRy ily traian 58XC2FLjJ */ 
/* 92tkHMhRy ily traian 58XC2FLjJ */ int main(){
/* 92tkHMhRy ily traian 58XC2FLjJ */     cin >> cer;
/* 92tkHMhRy ily traian 58XC2FLjJ */     if(cer == 1 || cer == 2){
/* 92tkHMhRy ily traian 58XC2FLjJ */         cin >> n;
/* 92tkHMhRy ily traian 58XC2FLjJ */         for(int i = 1; i <= n; ++i)
/* 92tkHMhRy ily traian 58XC2FLjJ */             cin >> a[i].l >> a[i].h;
/* 92tkHMhRy ily traian 58XC2FLjJ */         if(cer == 1){
/* 92tkHMhRy ily traian 58XC2FLjJ */             long long sum = a[1].h * 5;
/* 92tkHMhRy ily traian 58XC2FLjJ */             for(int i = 1; i <= n; ++i){
/* 92tkHMhRy ily traian 58XC2FLjJ */                 sum += 3 * a[i].l;
/* 92tkHMhRy ily traian 58XC2FLjJ */                 if(a[i].h > a[i+1].h)
/* 92tkHMhRy ily traian 58XC2FLjJ */                     sum += 2 * (a[i].h - a[i+1].h);
/* 92tkHMhRy ily traian 58XC2FLjJ */                 else
/* 92tkHMhRy ily traian 58XC2FLjJ */                     sum += 5 * (a[i+1].h - a[i].h);
/* 92tkHMhRy ily traian 58XC2FLjJ */             }
/* 92tkHMhRy ily traian 58XC2FLjJ */             cout << sum;
/* 92tkHMhRy ily traian 58XC2FLjJ */         }
/* 92tkHMhRy ily traian 58XC2FLjJ */         else{
/* 92tkHMhRy ily traian 58XC2FLjJ */             long long sum = a[1].h;
/* 92tkHMhRy ily traian 58XC2FLjJ */             long long smax = 0;
/* 92tkHMhRy ily traian 58XC2FLjJ */             for(int i = 1; i <= n; ++i){
/* 92tkHMhRy ily traian 58XC2FLjJ */                 sum += a[i].l;
/* 92tkHMhRy ily traian 58XC2FLjJ */                 if(a[i].h > a[i+1].h){
/* 92tkHMhRy ily traian 58XC2FLjJ */                     if(smax < sum)
/* 92tkHMhRy ily traian 58XC2FLjJ */                         smax = sum;
/* 92tkHMhRy ily traian 58XC2FLjJ */                     sum = 0;
/* 92tkHMhRy ily traian 58XC2FLjJ */                     continue;
/* 92tkHMhRy ily traian 58XC2FLjJ */                 }
/* 92tkHMhRy ily traian 58XC2FLjJ */                 else
/* 92tkHMhRy ily traian 58XC2FLjJ */                     sum += (a[i+1].h - a[i].h);
/* 92tkHMhRy ily traian 58XC2FLjJ */             }
/* 92tkHMhRy ily traian 58XC2FLjJ */             cout << smax;
/* 92tkHMhRy ily traian 58XC2FLjJ */         }
/* 92tkHMhRy ily traian 58XC2FLjJ */     }
/* 92tkHMhRy ily traian 58XC2FLjJ */     else{
/* 92tkHMhRy ily traian 58XC2FLjJ */         cin >> n >> t;
/* 92tkHMhRy ily traian 58XC2FLjJ */         for(int i = 1; i <= n; ++i)
/* 92tkHMhRy ily traian 58XC2FLjJ */             cin >> a[i].l >> a[i].h;
/* 92tkHMhRy ily traian 58XC2FLjJ */         long long sum = a[1].h * 5;
/* 92tkHMhRy ily traian 58XC2FLjJ */         for(int i = 1; i <= n; ++i){
/* 92tkHMhRy ily traian 58XC2FLjJ */             sum += 3 * a[i].l;
/* 92tkHMhRy ily traian 58XC2FLjJ */             if(sum >= t){
/* 92tkHMhRy ily traian 58XC2FLjJ */                 cout << i;
/* 92tkHMhRy ily traian 58XC2FLjJ */                 break;
/* 92tkHMhRy ily traian 58XC2FLjJ */             }
/* 92tkHMhRy ily traian 58XC2FLjJ */             if(a[i].h > a[i+1].h){
/* 92tkHMhRy ily traian 58XC2FLjJ */                 sum += 2 * (a[i].h - a[i+1].h);
/* 92tkHMhRy ily traian 58XC2FLjJ */                 if(sum >= t){
/* 92tkHMhRy ily traian 58XC2FLjJ */                     cout << i;
/* 92tkHMhRy ily traian 58XC2FLjJ */                     break;
/* 92tkHMhRy ily traian 58XC2FLjJ */                 }
/* 92tkHMhRy ily traian 58XC2FLjJ */             }
/* 92tkHMhRy ily traian 58XC2FLjJ */             else{
/* 92tkHMhRy ily traian 58XC2FLjJ */                 sum += 5 * (a[i+1].h - a[i].h);
/* 92tkHMhRy ily traian 58XC2FLjJ */                 if(sum >= t){
/* 92tkHMhRy ily traian 58XC2FLjJ */                     cout << i+1;
/* 92tkHMhRy ily traian 58XC2FLjJ */                     break;
/* 92tkHMhRy ily traian 58XC2FLjJ */                 }
/* 92tkHMhRy ily traian 58XC2FLjJ */             }
/* 92tkHMhRy ily traian 58XC2FLjJ */         }
/* 92tkHMhRy ily traian 58XC2FLjJ */ 
/* 92tkHMhRy ily traian 58XC2FLjJ */     }
/* 92tkHMhRy ily traian 58XC2FLjJ */ }