/* MbjcnnXh5 ily traian YyMTtJE2z */ #include <algorithm>
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
/* MbjcnnXh5 ily traian YyMTtJE2z */ 
/* MbjcnnXh5 ily traian YyMTtJE2z */ using namespace std;
/* MbjcnnXh5 ily traian YyMTtJE2z */ 
/* MbjcnnXh5 ily traian YyMTtJE2z */ int T[35001] , n , cer , m , t , C[35001] , maxi;
/* MbjcnnXh5 ily traian YyMTtJE2z */ 
/* MbjcnnXh5 ily traian YyMTtJE2z */ void leaga(int a , int b)
/* MbjcnnXh5 ily traian YyMTtJE2z */ {
/* MbjcnnXh5 ily traian YyMTtJE2z */     if(T[a] > T[b])
/* MbjcnnXh5 ily traian YyMTtJE2z */     {
/* MbjcnnXh5 ily traian YyMTtJE2z */         T[a] = T[b];
/* MbjcnnXh5 ily traian YyMTtJE2z */         C[b] = C[a] + C[b];
/* MbjcnnXh5 ily traian YyMTtJE2z */         if(C[b] > maxi) maxi = C[b];
/* MbjcnnXh5 ily traian YyMTtJE2z */     }
/* MbjcnnXh5 ily traian YyMTtJE2z */     else
/* MbjcnnXh5 ily traian YyMTtJE2z */     {
/* MbjcnnXh5 ily traian YyMTtJE2z */         T[b] = T[a];
/* MbjcnnXh5 ily traian YyMTtJE2z */         C[a] = C[b] + C[a];
/* MbjcnnXh5 ily traian YyMTtJE2z */         if(C[a] > maxi) maxi = C[a];
/* MbjcnnXh5 ily traian YyMTtJE2z */     }
/* MbjcnnXh5 ily traian YyMTtJE2z */ }
/* MbjcnnXh5 ily traian YyMTtJE2z */ 
/* MbjcnnXh5 ily traian YyMTtJE2z */ int radacina(int a)
/* MbjcnnXh5 ily traian YyMTtJE2z */ {
/* MbjcnnXh5 ily traian YyMTtJE2z */     if(a == T[a]) return a;
/* MbjcnnXh5 ily traian YyMTtJE2z */     else return T[a] = radacina(T[a]);
/* MbjcnnXh5 ily traian YyMTtJE2z */ }
/* MbjcnnXh5 ily traian YyMTtJE2z */ int main()
/* MbjcnnXh5 ily traian YyMTtJE2z */ {
/* MbjcnnXh5 ily traian YyMTtJE2z */     cin >> n >> m;
/* MbjcnnXh5 ily traian YyMTtJE2z */     int x , y , c;
/* MbjcnnXh5 ily traian YyMTtJE2z */     for(int i = 1 ; i <= 33000 ; i++)
/* MbjcnnXh5 ily traian YyMTtJE2z */         T[i] = i , C[i] = 1;
/* MbjcnnXh5 ily traian YyMTtJE2z */     for(int i = 1 ; i <= m ; i++)
/* MbjcnnXh5 ily traian YyMTtJE2z */     {
/* MbjcnnXh5 ily traian YyMTtJE2z */         cin >> cer;
/* MbjcnnXh5 ily traian YyMTtJE2z */         if(cer == 1)
/* MbjcnnXh5 ily traian YyMTtJE2z */         {
/* MbjcnnXh5 ily traian YyMTtJE2z */             cin >> x >> y;
/* MbjcnnXh5 ily traian YyMTtJE2z */             int r1 , r2;
/* MbjcnnXh5 ily traian YyMTtJE2z */             r1 = radacina(x);
/* MbjcnnXh5 ily traian YyMTtJE2z */             r2 = radacina(y);
/* MbjcnnXh5 ily traian YyMTtJE2z */             if(r1 != r2) leaga(r1 , r2);
/* MbjcnnXh5 ily traian YyMTtJE2z */         }
/* MbjcnnXh5 ily traian YyMTtJE2z */         else if(cer == 2)
/* MbjcnnXh5 ily traian YyMTtJE2z */         {
/* MbjcnnXh5 ily traian YyMTtJE2z */             cin >> x >> y;
/* MbjcnnXh5 ily traian YyMTtJE2z */             if(radacina(x) == radacina(y)) cout << "DA" << '\n';
/* MbjcnnXh5 ily traian YyMTtJE2z */             else cout << "NU" << '\n';
/* MbjcnnXh5 ily traian YyMTtJE2z */         }
/* MbjcnnXh5 ily traian YyMTtJE2z */         else
/* MbjcnnXh5 ily traian YyMTtJE2z */         {
/* MbjcnnXh5 ily traian YyMTtJE2z */             cout << maxi << '\n';
/* MbjcnnXh5 ily traian YyMTtJE2z */         }
/* MbjcnnXh5 ily traian YyMTtJE2z */ 
/* MbjcnnXh5 ily traian YyMTtJE2z */     }
/* MbjcnnXh5 ily traian YyMTtJE2z */ }