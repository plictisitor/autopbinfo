/* DXREblbYv ily traian gf38hiKZr */ #include <algorithm>
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
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ using namespace std;
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ ifstream cin("numere20.in");
/* DXREblbYv ily traian gf38hiKZr */ ofstream cout("numere20.out");
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ int a[101] , b[101] , c[101] , n[101];
/* DXREblbYv ily traian gf38hiKZr */ void impartire(int a[] , int &n , int x)
/* DXREblbYv ily traian gf38hiKZr */ {
/* DXREblbYv ily traian gf38hiKZr */       int c = 0;
/* DXREblbYv ily traian gf38hiKZr */       for(int i = 1 ; i <= n ; i++)
/* DXREblbYv ily traian gf38hiKZr */       {
/* DXREblbYv ily traian gf38hiKZr */           c = c * 10 + a[i];
/* DXREblbYv ily traian gf38hiKZr */           a[i] = c / x;
/* DXREblbYv ily traian gf38hiKZr */           c =  c % x;
/* DXREblbYv ily traian gf38hiKZr */       }
/* DXREblbYv ily traian gf38hiKZr */       if(a[1] == 0)
/* DXREblbYv ily traian gf38hiKZr */       {
/* DXREblbYv ily traian gf38hiKZr */           for(int i = 1 ; i <= n ; i++)
/* DXREblbYv ily traian gf38hiKZr */               a[i] = a[i+1];
/* DXREblbYv ily traian gf38hiKZr */           a[n] = 0;
/* DXREblbYv ily traian gf38hiKZr */           n--;
/* DXREblbYv ily traian gf38hiKZr */       }
/* DXREblbYv ily traian gf38hiKZr */ }
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ void invers(int a[] , int n)
/* DXREblbYv ily traian gf38hiKZr */ {
/* DXREblbYv ily traian gf38hiKZr */     int i = 1 , j = n;
/* DXREblbYv ily traian gf38hiKZr */     while(i <= j)
/* DXREblbYv ily traian gf38hiKZr */     {
/* DXREblbYv ily traian gf38hiKZr */         swap(a[i] , a[n - i + 1]);
/* DXREblbYv ily traian gf38hiKZr */         i++;
/* DXREblbYv ily traian gf38hiKZr */         j--;
/* DXREblbYv ily traian gf38hiKZr */     }
/* DXREblbYv ily traian gf38hiKZr */ }
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ void scadere(int a[] , int &n , int b[] , int m)
/* DXREblbYv ily traian gf38hiKZr */ {
/* DXREblbYv ily traian gf38hiKZr */     invers(a , n);
/* DXREblbYv ily traian gf38hiKZr */     invers(b , m);
/* DXREblbYv ily traian gf38hiKZr */     int t = 0;
/* DXREblbYv ily traian gf38hiKZr */     for(int i = 1 ; i <= n ; i++)
/* DXREblbYv ily traian gf38hiKZr */     {
/* DXREblbYv ily traian gf38hiKZr */         int c = a[i] - b[i] + t;
/* DXREblbYv ily traian gf38hiKZr */         if(c < 0)
/* DXREblbYv ily traian gf38hiKZr */         {
/* DXREblbYv ily traian gf38hiKZr */             c += 10;
/* DXREblbYv ily traian gf38hiKZr */             t = -1;
/* DXREblbYv ily traian gf38hiKZr */         }
/* DXREblbYv ily traian gf38hiKZr */         else t = 0;
/* DXREblbYv ily traian gf38hiKZr */         a[i] = c;
/* DXREblbYv ily traian gf38hiKZr */     }
/* DXREblbYv ily traian gf38hiKZr */     if(a[n] == 0) n--;
/* DXREblbYv ily traian gf38hiKZr */     invers(a , n);
/* DXREblbYv ily traian gf38hiKZr */ }
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */ void adunare(int a[] , int &n , int b[] , int m)
/* DXREblbYv ily traian gf38hiKZr */ {
/* DXREblbYv ily traian gf38hiKZr */     invers(a , n);
/* DXREblbYv ily traian gf38hiKZr */     invers(b , m);
/* DXREblbYv ily traian gf38hiKZr */     int t = 0;
/* DXREblbYv ily traian gf38hiKZr */     if(m > n) n = m;
/* DXREblbYv ily traian gf38hiKZr */     for(int i = 1 ; i <= n ; i++)
/* DXREblbYv ily traian gf38hiKZr */     {
/* DXREblbYv ily traian gf38hiKZr */         int c = a[i] + b[i] + t;
/* DXREblbYv ily traian gf38hiKZr */         a[i] = c % 10;
/* DXREblbYv ily traian gf38hiKZr */         t = c / 10;
/* DXREblbYv ily traian gf38hiKZr */     }
/* DXREblbYv ily traian gf38hiKZr */     if(t > 0) a[++n] = t;
/* DXREblbYv ily traian gf38hiKZr */ 
/* DXREblbYv ily traian gf38hiKZr */     invers(a , n);
/* DXREblbYv ily traian gf38hiKZr */ }
/* DXREblbYv ily traian gf38hiKZr */ int main()
/* DXREblbYv ily traian gf38hiKZr */ {
/* DXREblbYv ily traian gf38hiKZr */     ///nr = n / u + n / v - n /(u*v);
/* DXREblbYv ily traian gf38hiKZr */     int u , v , cnt = 0;
/* DXREblbYv ily traian gf38hiKZr */     char s[101];
/* DXREblbYv ily traian gf38hiKZr */     cin >> s >> u >> v;
/* DXREblbYv ily traian gf38hiKZr */     int nr = strlen(s);
/* DXREblbYv ily traian gf38hiKZr */     for(int i = 0 ; i < nr ; i++) a[i+1] = s[i] - '0' , b[i+1] = s[i] - '0' , c[i+1] = s[i] - '0' , n[i+1] = s[i] - '0';
/* DXREblbYv ily traian gf38hiKZr */     int nr1 = nr , nr2 = nr , num = nr;
/* DXREblbYv ily traian gf38hiKZr */     impartire(a , nr , u);
/* DXREblbYv ily traian gf38hiKZr */     impartire(b , nr1 , v);
/* DXREblbYv ily traian gf38hiKZr */     impartire(c , nr2 , u*v);
/* DXREblbYv ily traian gf38hiKZr */     scadere(n , num , a , nr);
/* DXREblbYv ily traian gf38hiKZr */     scadere(n , num , b , nr1);
/* DXREblbYv ily traian gf38hiKZr */     adunare(n , num , c , nr2);
/* DXREblbYv ily traian gf38hiKZr */     for(int i = 1 ; i <= num ; i++) cout << n[i];
/* DXREblbYv ily traian gf38hiKZr */ }