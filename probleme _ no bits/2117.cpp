/* Sz04eVBOw ily traian XAXNR6JIG */ #include <algorithm>
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
/* Sz04eVBOw ily traian XAXNR6JIG */ 
/* Sz04eVBOw ily traian XAXNR6JIG */ using namespace std;
/* Sz04eVBOw ily traian XAXNR6JIG */ ifstream fin("divizori2.in");
/* Sz04eVBOw ily traian XAXNR6JIG */ ofstream fout("divizori2.out");
/* Sz04eVBOw ily traian XAXNR6JIG */ int prim(long long n)
/* Sz04eVBOw ily traian XAXNR6JIG */ {
/* Sz04eVBOw ily traian XAXNR6JIG */     if(n == 0 || n == 1) return 0;
/* Sz04eVBOw ily traian XAXNR6JIG */     if(n == 2) return 1;
/* Sz04eVBOw ily traian XAXNR6JIG */     if(n % 2 == 0) return 0;
/* Sz04eVBOw ily traian XAXNR6JIG */     else for(int d = 3 ; d*d <= n ; d += 2) if(n % d == 0) return 0;
/* Sz04eVBOw ily traian XAXNR6JIG */     return 1;
/* Sz04eVBOw ily traian XAXNR6JIG */ }
/* Sz04eVBOw ily traian XAXNR6JIG */ int main()
/* Sz04eVBOw ily traian XAXNR6JIG */ {
/* Sz04eVBOw ily traian XAXNR6JIG */     int n , x , p , maxi = -1 , a , b , r , d, ok = 0;
/* Sz04eVBOw ily traian XAXNR6JIG */     fin >> p >> n;
/* Sz04eVBOw ily traian XAXNR6JIG */     if(p == 1)
/* Sz04eVBOw ily traian XAXNR6JIG */     {
/* Sz04eVBOw ily traian XAXNR6JIG */         for(int i = 1 ; i <= n ; ++i)
/* Sz04eVBOw ily traian XAXNR6JIG */         {
/* Sz04eVBOw ily traian XAXNR6JIG */             fin >> x;
/* Sz04eVBOw ily traian XAXNR6JIG */             {
/* Sz04eVBOw ily traian XAXNR6JIG */                 if(x > maxi) maxi = x;
/* Sz04eVBOw ily traian XAXNR6JIG */             }
/* Sz04eVBOw ily traian XAXNR6JIG */         }
/* Sz04eVBOw ily traian XAXNR6JIG */         for(int i = 1 ; i <= maxi ; ++i)
/* Sz04eVBOw ily traian XAXNR6JIG */         {
/* Sz04eVBOw ily traian XAXNR6JIG */             if(maxi % i == 0) fout << i <<" ";
/* Sz04eVBOw ily traian XAXNR6JIG */         }
/* Sz04eVBOw ily traian XAXNR6JIG */     }
/* Sz04eVBOw ily traian XAXNR6JIG */     if(p == 2)
/* Sz04eVBOw ily traian XAXNR6JIG */     {
/* Sz04eVBOw ily traian XAXNR6JIG */         for(int i = 1 ; i <= n ; ++i)
/* Sz04eVBOw ily traian XAXNR6JIG */         {
/* Sz04eVBOw ily traian XAXNR6JIG */             fin >> x;
/* Sz04eVBOw ily traian XAXNR6JIG */             {
/* Sz04eVBOw ily traian XAXNR6JIG */                 if(prim(x)) {fout << x << " ";ok = 1;}
/* Sz04eVBOw ily traian XAXNR6JIG */             }
/* Sz04eVBOw ily traian XAXNR6JIG */         }
/* Sz04eVBOw ily traian XAXNR6JIG */         if(ok == 0) fout << -1;
/* Sz04eVBOw ily traian XAXNR6JIG */     }
/* Sz04eVBOw ily traian XAXNR6JIG */     if(p == 3)
/* Sz04eVBOw ily traian XAXNR6JIG */     {
/* Sz04eVBOw ily traian XAXNR6JIG */         fin >> a;
/* Sz04eVBOw ily traian XAXNR6JIG */         for(int i = 1 ; i < n ; ++i)
/* Sz04eVBOw ily traian XAXNR6JIG */         {
/* Sz04eVBOw ily traian XAXNR6JIG */             fin >> b;
/* Sz04eVBOw ily traian XAXNR6JIG */             int b1 = b;
/* Sz04eVBOw ily traian XAXNR6JIG */             while(b != 0)
/* Sz04eVBOw ily traian XAXNR6JIG */             {
/* Sz04eVBOw ily traian XAXNR6JIG */                 r = a % b;
/* Sz04eVBOw ily traian XAXNR6JIG */                 a = b;
/* Sz04eVBOw ily traian XAXNR6JIG */                 b = r;
/* Sz04eVBOw ily traian XAXNR6JIG */             }
/* Sz04eVBOw ily traian XAXNR6JIG */             d = a;
/* Sz04eVBOw ily traian XAXNR6JIG */         }
/* Sz04eVBOw ily traian XAXNR6JIG */         for(int i = 1 ; i <= d ; ++i)
/* Sz04eVBOw ily traian XAXNR6JIG */         {
/* Sz04eVBOw ily traian XAXNR6JIG */             if(d % i ==0) fout << i <<" " ;
/* Sz04eVBOw ily traian XAXNR6JIG */         }
/* Sz04eVBOw ily traian XAXNR6JIG */     }
/* Sz04eVBOw ily traian XAXNR6JIG */ 
/* Sz04eVBOw ily traian XAXNR6JIG */     fin.close();
/* Sz04eVBOw ily traian XAXNR6JIG */     fout.close();
/* Sz04eVBOw ily traian XAXNR6JIG */ 
/* Sz04eVBOw ily traian XAXNR6JIG */     return 0;
/* Sz04eVBOw ily traian XAXNR6JIG */ }