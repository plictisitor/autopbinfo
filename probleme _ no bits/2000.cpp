/* aE6KbfSnt ily traian LAKD2XljP */ #include <algorithm>
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
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ using namespace std;
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ ifstream cin("sir9.in");
/* aE6KbfSnt ily traian LAKD2XljP */ ofstream cout("sir9.out");
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ #define mod 20173333
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ int E[100001];
/* aE6KbfSnt ily traian LAKD2XljP */ int C[100001];
/* aE6KbfSnt ily traian LAKD2XljP */ int a[100001];
/* aE6KbfSnt ily traian LAKD2XljP */ void ciur(int E[] , int n)
/* aE6KbfSnt ily traian LAKD2XljP */ {
/* aE6KbfSnt ily traian LAKD2XljP */     for(int i = 2 ; i <= n ; i++) E[i] = 1;
/* aE6KbfSnt ily traian LAKD2XljP */     for(int i = 2 ; i * i <= n ; i++)
/* aE6KbfSnt ily traian LAKD2XljP */         if(E[i] == 1)
/* aE6KbfSnt ily traian LAKD2XljP */             for(int j = i*i ; j <= n ; j += i) E[j] = 0;
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ }
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ int np(int n , int x)
/* aE6KbfSnt ily traian LAKD2XljP */ {
/* aE6KbfSnt ily traian LAKD2XljP */     ///la ce putere apare x in n faactorial
/* aE6KbfSnt ily traian LAKD2XljP */     int p = x , val = 0;
/* aE6KbfSnt ily traian LAKD2XljP */     while(n >= p)
/* aE6KbfSnt ily traian LAKD2XljP */     {
/* aE6KbfSnt ily traian LAKD2XljP */         val += n / p;
/* aE6KbfSnt ily traian LAKD2XljP */         p *= x;
/* aE6KbfSnt ily traian LAKD2XljP */     }
/* aE6KbfSnt ily traian LAKD2XljP */     return val;
/* aE6KbfSnt ily traian LAKD2XljP */ }
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ unsigned long long xlan(int x , int n)
/* aE6KbfSnt ily traian LAKD2XljP */ {
/* aE6KbfSnt ily traian LAKD2XljP */     if(n == 0) return 1;
/* aE6KbfSnt ily traian LAKD2XljP */     else
/* aE6KbfSnt ily traian LAKD2XljP */     {
/* aE6KbfSnt ily traian LAKD2XljP */         unsigned long long p = xlan(x , n / 2);
/* aE6KbfSnt ily traian LAKD2XljP */         if(n % 2 == 0) p = 1ll * p * p % mod;
/* aE6KbfSnt ily traian LAKD2XljP */         else p = (1ll * p * p)% mod * x % mod;
/* aE6KbfSnt ily traian LAKD2XljP */         return p;
/* aE6KbfSnt ily traian LAKD2XljP */     }
/* aE6KbfSnt ily traian LAKD2XljP */ }
/* aE6KbfSnt ily traian LAKD2XljP */ 
/* aE6KbfSnt ily traian LAKD2XljP */ long long rec(int n , int r)
/* aE6KbfSnt ily traian LAKD2XljP */ {
/* aE6KbfSnt ily traian LAKD2XljP */     a[1] = 1 , a[2] = 1;
/* aE6KbfSnt ily traian LAKD2XljP */     for(int i = 2 ; i <= n ; i++)
/* aE6KbfSnt ily traian LAKD2XljP */     {
/* aE6KbfSnt ily traian LAKD2XljP */         a[i+1] = 2 * a[i] % mod;
/* aE6KbfSnt ily traian LAKD2XljP */         if(i > r)
/* aE6KbfSnt ily traian LAKD2XljP */         {
/* aE6KbfSnt ily traian LAKD2XljP */             if(a[i + 1] >= a[i - r]) a[i + 1] -= a[i - r];
/* aE6KbfSnt ily traian LAKD2XljP */             else a[i + 1] = a[i + 1] + mod - a[i - r];
/* aE6KbfSnt ily traian LAKD2XljP */         }
/* aE6KbfSnt ily traian LAKD2XljP */     }
/* aE6KbfSnt ily traian LAKD2XljP */     return a[n + 1];
/* aE6KbfSnt ily traian LAKD2XljP */ }
/* aE6KbfSnt ily traian LAKD2XljP */ int main()
/* aE6KbfSnt ily traian LAKD2XljP */ {
/* aE6KbfSnt ily traian LAKD2XljP */     int cer , n , x;
/* aE6KbfSnt ily traian LAKD2XljP */     ciur(E , 100000);
/* aE6KbfSnt ily traian LAKD2XljP */     cin >> cer >> n >> x;
/* aE6KbfSnt ily traian LAKD2XljP */     if(cer == 1)
/* aE6KbfSnt ily traian LAKD2XljP */     {
/* aE6KbfSnt ily traian LAKD2XljP */         unsigned long long k = 1;
/* aE6KbfSnt ily traian LAKD2XljP */         for(int i = 2 ; i <= n - 1; i++)
/* aE6KbfSnt ily traian LAKD2XljP */             if(E[i]) C[i] = np(n - 1 , i);
/* aE6KbfSnt ily traian LAKD2XljP */         for(int i = 2 ; i <= x - 1 ; i++)
/* aE6KbfSnt ily traian LAKD2XljP */             if(E[i]) C[i] -= np(x - 1 , i);
/* aE6KbfSnt ily traian LAKD2XljP */         for(int i = 2 ; i <= n - x ; i++)
/* aE6KbfSnt ily traian LAKD2XljP */             if(E[i]) C[i] -= np(n - x , i);
/* aE6KbfSnt ily traian LAKD2XljP */         for(int i = 2 ; i <= n-1; i++)
/* aE6KbfSnt ily traian LAKD2XljP */             k = k * xlan(i , C[i]) % mod;
/* aE6KbfSnt ily traian LAKD2XljP */         cout << k;
/* aE6KbfSnt ily traian LAKD2XljP */     }
/* aE6KbfSnt ily traian LAKD2XljP */     else
/* aE6KbfSnt ily traian LAKD2XljP */     {
/* aE6KbfSnt ily traian LAKD2XljP */         cout << rec(n , x);
/* aE6KbfSnt ily traian LAKD2XljP */     }
/* aE6KbfSnt ily traian LAKD2XljP */ }