/* QpPkmLsCZ ily traian sSnv8eOsM */ #include <algorithm>
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
/* QpPkmLsCZ ily traian sSnv8eOsM */ using namespace std;
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Citire(int  &, int *);
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Afisare(int , int *);
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Eratostene(int *);
/* QpPkmLsCZ ily traian sSnv8eOsM */ bool Putere1(int , int );
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Construire(int , int * , int & ,int *);
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ int  v[1001];
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ int main()
/* QpPkmLsCZ ily traian sSnv8eOsM */ {
/* QpPkmLsCZ ily traian sSnv8eOsM */     int n,x[501],m,y[1001];
/* QpPkmLsCZ ily traian sSnv8eOsM */     Citire(n , x);
/* QpPkmLsCZ ily traian sSnv8eOsM */     Eratostene(v);
/* QpPkmLsCZ ily traian sSnv8eOsM */     Construire(n , x , m , y);
/* QpPkmLsCZ ily traian sSnv8eOsM */     if(m > 0)
/* QpPkmLsCZ ily traian sSnv8eOsM */         Afisare(m , y);
/* QpPkmLsCZ ily traian sSnv8eOsM */     else
/* QpPkmLsCZ ily traian sSnv8eOsM */         cout << "Sirul Y este vid.";
/* QpPkmLsCZ ily traian sSnv8eOsM */     return 0;
/* QpPkmLsCZ ily traian sSnv8eOsM */ }
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Citire(int & n , int * x)
/* QpPkmLsCZ ily traian sSnv8eOsM */ {
/* QpPkmLsCZ ily traian sSnv8eOsM */     cin >> n;
/* QpPkmLsCZ ily traian sSnv8eOsM */     for(int i = 1 ; i <= n ; i ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */         cin >> x[i];
/* QpPkmLsCZ ily traian sSnv8eOsM */ }
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Afisare(int n , int * x)
/* QpPkmLsCZ ily traian sSnv8eOsM */ {
/* QpPkmLsCZ ily traian sSnv8eOsM */     for(int i = 1 ; i <= n ; i ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */         cout << x[i] << " ";
/* QpPkmLsCZ ily traian sSnv8eOsM */     cout << endl;
/* QpPkmLsCZ ily traian sSnv8eOsM */ }
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Eratostene(int * v)
/* QpPkmLsCZ ily traian sSnv8eOsM */ {
/* QpPkmLsCZ ily traian sSnv8eOsM */     for(int i = 0 ; i <= 1000 ; i ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */         v[i] = 1;
/* QpPkmLsCZ ily traian sSnv8eOsM */     v[0] = v[1] = 0;
/* QpPkmLsCZ ily traian sSnv8eOsM */     for(int i = 2 ; i * i <= 1000; i ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */         if(v[i] == 1)
/* QpPkmLsCZ ily traian sSnv8eOsM */             for(int j = 2 ; i * j <= 1000 ; j ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */                 v[i*j] = 0;
/* QpPkmLsCZ ily traian sSnv8eOsM */ }
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ bool Putere1(int n , int d)
/* QpPkmLsCZ ily traian sSnv8eOsM */ {
/* QpPkmLsCZ ily traian sSnv8eOsM */     int p = 0;
/* QpPkmLsCZ ily traian sSnv8eOsM */     while(n % d == 0)
/* QpPkmLsCZ ily traian sSnv8eOsM */         p ++, n /= d;
/* QpPkmLsCZ ily traian sSnv8eOsM */     return p == 1;
/* QpPkmLsCZ ily traian sSnv8eOsM */ }
/* QpPkmLsCZ ily traian sSnv8eOsM */ 
/* QpPkmLsCZ ily traian sSnv8eOsM */ void Construire(int n , int * x , int & m, int * y)
/* QpPkmLsCZ ily traian sSnv8eOsM */ {
/* QpPkmLsCZ ily traian sSnv8eOsM */     m = 0;
/* QpPkmLsCZ ily traian sSnv8eOsM */     for(int i = 2 ; i <= 1000 ; i ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */         if(v[i] == 1)
/* QpPkmLsCZ ily traian sSnv8eOsM */         {
/* QpPkmLsCZ ily traian sSnv8eOsM */             bool OK = false;
/* QpPkmLsCZ ily traian sSnv8eOsM */             for(int j = 1 ; j <= n  && ! OK ; j ++)
/* QpPkmLsCZ ily traian sSnv8eOsM */                 if(Putere1(x[j] , i))
/* QpPkmLsCZ ily traian sSnv8eOsM */                     OK = true;
/* QpPkmLsCZ ily traian sSnv8eOsM */             if(OK)
/* QpPkmLsCZ ily traian sSnv8eOsM */                 y[++m] = i;
/* QpPkmLsCZ ily traian sSnv8eOsM */         }
/* QpPkmLsCZ ily traian sSnv8eOsM */ }