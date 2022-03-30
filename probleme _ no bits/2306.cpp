/* Tw3j5eGHc ily traian gzo8nusdb */ #include <algorithm>
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
/* Tw3j5eGHc ily traian gzo8nusdb */ using namespace std;
/* Tw3j5eGHc ily traian gzo8nusdb */ 
/* Tw3j5eGHc ily traian gzo8nusdb */ int main()
/* Tw3j5eGHc ily traian gzo8nusdb */ {
/* Tw3j5eGHc ily traian gzo8nusdb */     int a , b , n;
/* Tw3j5eGHc ily traian gzo8nusdb */     cin >> a >> b >> n;
/* Tw3j5eGHc ily traian gzo8nusdb */     int p1=0 , p2=0;
/* Tw3j5eGHc ily traian gzo8nusdb */     int tmp;
/* Tw3j5eGHc ily traian gzo8nusdb */     for(int i = 1; i <= n ; ++i)
/* Tw3j5eGHc ily traian gzo8nusdb */     {
/* Tw3j5eGHc ily traian gzo8nusdb */         cin >> tmp;
/* Tw3j5eGHc ily traian gzo8nusdb */         int d=2;
/* Tw3j5eGHc ily traian gzo8nusdb */         int p=0;
/* Tw3j5eGHc ily traian gzo8nusdb */         while(tmp>1)
/* Tw3j5eGHc ily traian gzo8nusdb */         {
/* Tw3j5eGHc ily traian gzo8nusdb */             p=0;
/* Tw3j5eGHc ily traian gzo8nusdb */             while(tmp%d==0)
/* Tw3j5eGHc ily traian gzo8nusdb */                 {
/* Tw3j5eGHc ily traian gzo8nusdb */                     tmp/=d;
/* Tw3j5eGHc ily traian gzo8nusdb */                     p++;
/* Tw3j5eGHc ily traian gzo8nusdb */                 }
/* Tw3j5eGHc ily traian gzo8nusdb */             if(d==a)
/* Tw3j5eGHc ily traian gzo8nusdb */                 p1+=p;
/* Tw3j5eGHc ily traian gzo8nusdb */             if(d==b)
/* Tw3j5eGHc ily traian gzo8nusdb */                 p2+=p;
/* Tw3j5eGHc ily traian gzo8nusdb */             d++;
/* Tw3j5eGHc ily traian gzo8nusdb */             if(d*d>tmp)
/* Tw3j5eGHc ily traian gzo8nusdb */                 d=tmp;
/* Tw3j5eGHc ily traian gzo8nusdb */         }
/* Tw3j5eGHc ily traian gzo8nusdb */     }
/* Tw3j5eGHc ily traian gzo8nusdb */     if(p1>p2)
/* Tw3j5eGHc ily traian gzo8nusdb */         cout << p2;
/* Tw3j5eGHc ily traian gzo8nusdb */     else
/* Tw3j5eGHc ily traian gzo8nusdb */         cout << p1;
/* Tw3j5eGHc ily traian gzo8nusdb */     return 0;
/* Tw3j5eGHc ily traian gzo8nusdb */ }