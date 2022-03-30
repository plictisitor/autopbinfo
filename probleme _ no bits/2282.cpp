/* uunacFZ8f ily traian va7N04y6n */ #include <algorithm>
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
/* uunacFZ8f ily traian va7N04y6n */ using namespace std;
/* uunacFZ8f ily traian va7N04y6n */ 
/* uunacFZ8f ily traian va7N04y6n */ int n , m , x , y , T[500001] , cnt , rez[500001];
/* uunacFZ8f ily traian va7N04y6n */ struct poz
/* uunacFZ8f ily traian va7N04y6n */ {
/* uunacFZ8f ily traian va7N04y6n */     int i , j;
/* uunacFZ8f ily traian va7N04y6n */ }M[500001];
/* uunacFZ8f ily traian va7N04y6n */ 
/* uunacFZ8f ily traian va7N04y6n */ void leaga(int a , int b)
/* uunacFZ8f ily traian va7N04y6n */ {
/* uunacFZ8f ily traian va7N04y6n */     if(T[a] > T[b]) T[a] = T[b];
/* uunacFZ8f ily traian va7N04y6n */     else T[b] = T[a];
/* uunacFZ8f ily traian va7N04y6n */ }
/* uunacFZ8f ily traian va7N04y6n */ 
/* uunacFZ8f ily traian va7N04y6n */ int radacina(int a)
/* uunacFZ8f ily traian va7N04y6n */ {
/* uunacFZ8f ily traian va7N04y6n */     if(a == T[a]) return a;
/* uunacFZ8f ily traian va7N04y6n */     else return T[a] = radacina(T[a]);
/* uunacFZ8f ily traian va7N04y6n */ }
/* uunacFZ8f ily traian va7N04y6n */ 
/* uunacFZ8f ily traian va7N04y6n */ int main()
/* uunacFZ8f ily traian va7N04y6n */ {
/* uunacFZ8f ily traian va7N04y6n */     cin >> n >> m;
/* uunacFZ8f ily traian va7N04y6n */     for(int i = 1 ; i <= m ; i++)
/* uunacFZ8f ily traian va7N04y6n */     {
/* uunacFZ8f ily traian va7N04y6n */         cin >> x >> y;
/* uunacFZ8f ily traian va7N04y6n */         M[i].i = x;
/* uunacFZ8f ily traian va7N04y6n */         M[i].j = y;
/* uunacFZ8f ily traian va7N04y6n */     }
/* uunacFZ8f ily traian va7N04y6n */     for(int i = 1 ; i <= n ; i++) T[i] = i;
/* uunacFZ8f ily traian va7N04y6n */     rez[++cnt] = n;
/* uunacFZ8f ily traian va7N04y6n */     for(int i = m ; i > 1 ; i--)
/* uunacFZ8f ily traian va7N04y6n */     {
/* uunacFZ8f ily traian va7N04y6n */         if(radacina(M[i].i) != radacina(M[i].j))
/* uunacFZ8f ily traian va7N04y6n */         {
/* uunacFZ8f ily traian va7N04y6n */             leaga(radacina(M[i].i) , radacina(M[i].j));
/* uunacFZ8f ily traian va7N04y6n */             n--;
/* uunacFZ8f ily traian va7N04y6n */             rez[++cnt] = n;
/* uunacFZ8f ily traian va7N04y6n */         }
/* uunacFZ8f ily traian va7N04y6n */         else rez[++cnt] = n;
/* uunacFZ8f ily traian va7N04y6n */     }
/* uunacFZ8f ily traian va7N04y6n */ 
/* uunacFZ8f ily traian va7N04y6n */     for(int i = cnt ; i >= 1 ; i--)
/* uunacFZ8f ily traian va7N04y6n */         cout << rez[i] << '\n';
/* uunacFZ8f ily traian va7N04y6n */ }