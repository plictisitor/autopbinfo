/* Pm3YIV6Yt ily traian 0z3BebfHq */ #include <algorithm>
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
/* Pm3YIV6Yt ily traian 0z3BebfHq */ 
/* Pm3YIV6Yt ily traian 0z3BebfHq */ using namespace std;
/* Pm3YIV6Yt ily traian 0z3BebfHq */ 
/* Pm3YIV6Yt ily traian 0z3BebfHq */ ifstream cin("poarta.in");
/* Pm3YIV6Yt ily traian 0z3BebfHq */ ofstream cout("poarta.out");
/* Pm3YIV6Yt ily traian 0z3BebfHq */ 
/* Pm3YIV6Yt ily traian 0z3BebfHq */ int cer , n , a[10001] , cnt = 1 , b;
/* Pm3YIV6Yt ily traian 0z3BebfHq */ string p;
/* Pm3YIV6Yt ily traian 0z3BebfHq */ 
/* Pm3YIV6Yt ily traian 0z3BebfHq */ void scadere(int a[] , int &n)
/* Pm3YIV6Yt ily traian 0z3BebfHq */ {
/* Pm3YIV6Yt ily traian 0z3BebfHq */     int i = 1;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     while(a[i] == 0)
/* Pm3YIV6Yt ily traian 0z3BebfHq */     {
/* Pm3YIV6Yt ily traian 0z3BebfHq */         a[i] = 9;
/* Pm3YIV6Yt ily traian 0z3BebfHq */         i++;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     }
/* Pm3YIV6Yt ily traian 0z3BebfHq */     a[i] -= 1;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     if(a[n] == 0) n--;
/* Pm3YIV6Yt ily traian 0z3BebfHq */ }
/* Pm3YIV6Yt ily traian 0z3BebfHq */ 
/* Pm3YIV6Yt ily traian 0z3BebfHq */ void impartire(int a[] , int &n)
/* Pm3YIV6Yt ily traian 0z3BebfHq */ {
/* Pm3YIV6Yt ily traian 0z3BebfHq */     int r = 0;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     for(int i = n ; i >= 1 ; i--)
/* Pm3YIV6Yt ily traian 0z3BebfHq */     {
/* Pm3YIV6Yt ily traian 0z3BebfHq */         int c = r * 10 + a[i];
/* Pm3YIV6Yt ily traian 0z3BebfHq */         a[i] = c / 2;
/* Pm3YIV6Yt ily traian 0z3BebfHq */         r = c % 2;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     }
/* Pm3YIV6Yt ily traian 0z3BebfHq */     if(a[n] == 0) n--;
/* Pm3YIV6Yt ily traian 0z3BebfHq */ }
/* Pm3YIV6Yt ily traian 0z3BebfHq */ 
/* Pm3YIV6Yt ily traian 0z3BebfHq */ int maimare(int a[] , int n , int x)
/* Pm3YIV6Yt ily traian 0z3BebfHq */ {
/* Pm3YIV6Yt ily traian 0z3BebfHq */     if(n > 4) return 1;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     else
/* Pm3YIV6Yt ily traian 0z3BebfHq */     {
/* Pm3YIV6Yt ily traian 0z3BebfHq */         int y = 0;
/* Pm3YIV6Yt ily traian 0z3BebfHq */         for(int i = n ; i >= 1 ; i--)
/* Pm3YIV6Yt ily traian 0z3BebfHq */             y = y * 10 + a[i];
/* Pm3YIV6Yt ily traian 0z3BebfHq */         return y > x;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     }
/* Pm3YIV6Yt ily traian 0z3BebfHq */ }
/* Pm3YIV6Yt ily traian 0z3BebfHq */ int main()
/* Pm3YIV6Yt ily traian 0z3BebfHq */ {
/* Pm3YIV6Yt ily traian 0z3BebfHq */     cin >> cer >> n >> p;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     int k = p.length();
/* Pm3YIV6Yt ily traian 0z3BebfHq */     for(int i = 0 ; i < k ; i++)
/* Pm3YIV6Yt ily traian 0z3BebfHq */         a[k - i] = p[i] - '0';
/* Pm3YIV6Yt ily traian 0z3BebfHq */     while(maimare(a , k , n))
/* Pm3YIV6Yt ily traian 0z3BebfHq */         if(a[1] %2 == 1 || !maimare(a , k , n + 1))
/* Pm3YIV6Yt ily traian 0z3BebfHq */         {
/* Pm3YIV6Yt ily traian 0z3BebfHq */             scadere(a , k);
/* Pm3YIV6Yt ily traian 0z3BebfHq */             cnt++;
/* Pm3YIV6Yt ily traian 0z3BebfHq */             b++;
/* Pm3YIV6Yt ily traian 0z3BebfHq */         }
/* Pm3YIV6Yt ily traian 0z3BebfHq */         else
/* Pm3YIV6Yt ily traian 0z3BebfHq */         {
/* Pm3YIV6Yt ily traian 0z3BebfHq */             impartire(a , k);
/* Pm3YIV6Yt ily traian 0z3BebfHq */             cnt++;
/* Pm3YIV6Yt ily traian 0z3BebfHq */             b += 2;
/* Pm3YIV6Yt ily traian 0z3BebfHq */         }
/* Pm3YIV6Yt ily traian 0z3BebfHq */     if(cer == 1) cout << cnt;
/* Pm3YIV6Yt ily traian 0z3BebfHq */     else cout << b;
/* Pm3YIV6Yt ily traian 0z3BebfHq */         return 0;
/* Pm3YIV6Yt ily traian 0z3BebfHq */ }