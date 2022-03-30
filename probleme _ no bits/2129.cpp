/* fIwqZcHth ily traian XK4PnNzCH */ #include <algorithm>
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
/* fIwqZcHth ily traian XK4PnNzCH */ using namespace std;
/* fIwqZcHth ily traian XK4PnNzCH */ ifstream cin("prime1.in");
/* fIwqZcHth ily traian XK4PnNzCH */ ofstream cout("prime1.out");
/* fIwqZcHth ily traian XK4PnNzCH */ int a[100] , n , catefib , catec , catep;
/* fIwqZcHth ily traian XK4PnNzCH */ int prim(int n)
/* fIwqZcHth ily traian XK4PnNzCH */ {
/* fIwqZcHth ily traian XK4PnNzCH */     if(n == 0 || n == 1) return 0;
/* fIwqZcHth ily traian XK4PnNzCH */     if(n == 2) return 1;
/* fIwqZcHth ily traian XK4PnNzCH */     if(n % 2 == 0) return 0;
/* fIwqZcHth ily traian XK4PnNzCH */     for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
/* fIwqZcHth ily traian XK4PnNzCH */     return 1;
/* fIwqZcHth ily traian XK4PnNzCH */ }
/* fIwqZcHth ily traian XK4PnNzCH */ 
/* fIwqZcHth ily traian XK4PnNzCH */ int cb(int x)
/* fIwqZcHth ily traian XK4PnNzCH */ {
/* fIwqZcHth ily traian XK4PnNzCH */     int st = 0 , dr = 35 , poz = -1;
/* fIwqZcHth ily traian XK4PnNzCH */     while(st <= dr)
/* fIwqZcHth ily traian XK4PnNzCH */     {
/* fIwqZcHth ily traian XK4PnNzCH */         int m =(st + dr)/2;
/* fIwqZcHth ily traian XK4PnNzCH */         if(x <= a[m])
/* fIwqZcHth ily traian XK4PnNzCH */         {
/* fIwqZcHth ily traian XK4PnNzCH */              poz = m;
/* fIwqZcHth ily traian XK4PnNzCH */              dr = m - 1;
/* fIwqZcHth ily traian XK4PnNzCH */         }
/* fIwqZcHth ily traian XK4PnNzCH */         else st = m + 1;
/* fIwqZcHth ily traian XK4PnNzCH */     }
/* fIwqZcHth ily traian XK4PnNzCH */     if(a[poz] == x) return 1;
/* fIwqZcHth ily traian XK4PnNzCH */     else return 0;
/* fIwqZcHth ily traian XK4PnNzCH */ }
/* fIwqZcHth ily traian XK4PnNzCH */ 
/* fIwqZcHth ily traian XK4PnNzCH */ int nrcif(long long n)
/* fIwqZcHth ily traian XK4PnNzCH */ {
/* fIwqZcHth ily traian XK4PnNzCH */     int c = 0;
/* fIwqZcHth ily traian XK4PnNzCH */     while(n)
/* fIwqZcHth ily traian XK4PnNzCH */     {
/* fIwqZcHth ily traian XK4PnNzCH */         n /= 10;
/* fIwqZcHth ily traian XK4PnNzCH */         c++;
/* fIwqZcHth ily traian XK4PnNzCH */     }
/* fIwqZcHth ily traian XK4PnNzCH */     return c;
/* fIwqZcHth ily traian XK4PnNzCH */ }
/* fIwqZcHth ily traian XK4PnNzCH */ int eco(long long n)
/* fIwqZcHth ily traian XK4PnNzCH */ {
/* fIwqZcHth ily traian XK4PnNzCH */     long long d = 2 , cnt = 0;
/* fIwqZcHth ily traian XK4PnNzCH */     long long aux = n;
/* fIwqZcHth ily traian XK4PnNzCH */     while(n > 1)
/* fIwqZcHth ily traian XK4PnNzCH */     {
/* fIwqZcHth ily traian XK4PnNzCH */         int p = 0;
/* fIwqZcHth ily traian XK4PnNzCH */         while(n % d == 0) p++ , n /= d;
/* fIwqZcHth ily traian XK4PnNzCH */         if(p > 1) cnt = cnt + nrcif(p) + nrcif(d);
/* fIwqZcHth ily traian XK4PnNzCH */         else if(p == 1) cnt = cnt + nrcif(d);
/* fIwqZcHth ily traian XK4PnNzCH */         d++;
/* fIwqZcHth ily traian XK4PnNzCH */         if(d*d > n) d = n;
/* fIwqZcHth ily traian XK4PnNzCH */     }
/* fIwqZcHth ily traian XK4PnNzCH */     if(nrcif(aux) > cnt) return 1;
/* fIwqZcHth ily traian XK4PnNzCH */     else return 0;
/* fIwqZcHth ily traian XK4PnNzCH */ }
/* fIwqZcHth ily traian XK4PnNzCH */ 
/* fIwqZcHth ily traian XK4PnNzCH */ int num(int n)
/* fIwqZcHth ily traian XK4PnNzCH */ {
/* fIwqZcHth ily traian XK4PnNzCH */     if(n % 2 == 0) return 0;
/* fIwqZcHth ily traian XK4PnNzCH */     else if(prim(n - 2)) return 0;
/* fIwqZcHth ily traian XK4PnNzCH */     return 1;
/* fIwqZcHth ily traian XK4PnNzCH */ }
/* fIwqZcHth ily traian XK4PnNzCH */ int main()
/* fIwqZcHth ily traian XK4PnNzCH */ {
/* fIwqZcHth ily traian XK4PnNzCH */     a[1] = 1;
/* fIwqZcHth ily traian XK4PnNzCH */     a[2] = 1;
/* fIwqZcHth ily traian XK4PnNzCH */     for(int i = 3 ; i <= 35 ; i++)
/* fIwqZcHth ily traian XK4PnNzCH */         a[i] = a[i-1] + a[i-2];
/* fIwqZcHth ily traian XK4PnNzCH */     long long n , cer , x;
/* fIwqZcHth ily traian XK4PnNzCH */     cin >> cer >> n;
/* fIwqZcHth ily traian XK4PnNzCH */     for(int i = 1 ; i <= n ; i++)
/* fIwqZcHth ily traian XK4PnNzCH */     {
/* fIwqZcHth ily traian XK4PnNzCH */         cin >> x;
/* fIwqZcHth ily traian XK4PnNzCH */         if(cb(x) && prim(x)) catefib++;
/* fIwqZcHth ily traian XK4PnNzCH */         if(eco(x)) catec++;
/* fIwqZcHth ily traian XK4PnNzCH */         if(num(x)) catep++;
/* fIwqZcHth ily traian XK4PnNzCH */     }
/* fIwqZcHth ily traian XK4PnNzCH */     if(cer == 1) cout << catefib;
/* fIwqZcHth ily traian XK4PnNzCH */     if(cer == 2) cout << catec;
/* fIwqZcHth ily traian XK4PnNzCH */     if(cer == 3) cout << catep;
/* fIwqZcHth ily traian XK4PnNzCH */ }