/* cXosRuTYf ily traian Iza4sdHMP */ #include <algorithm>
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
/* cXosRuTYf ily traian Iza4sdHMP */ 
/* cXosRuTYf ily traian Iza4sdHMP */ using namespace std;
/* cXosRuTYf ily traian Iza4sdHMP */ 
/* cXosRuTYf ily traian Iza4sdHMP */ ifstream cin("cautafibo.in");
/* cXosRuTYf ily traian Iza4sdHMP */ ofstream cout("cautafibo.out");
/* cXosRuTYf ily traian Iza4sdHMP */ 
/* cXosRuTYf ily traian Iza4sdHMP */ unsigned long long a[55] , cnt;
/* cXosRuTYf ily traian Iza4sdHMP */ int n;
/* cXosRuTYf ily traian Iza4sdHMP */ 
/* cXosRuTYf ily traian Iza4sdHMP */ void fib()
/* cXosRuTYf ily traian Iza4sdHMP */ {
/* cXosRuTYf ily traian Iza4sdHMP */     a[1] = 1 , a[2] = 1;
/* cXosRuTYf ily traian Iza4sdHMP */     for(n = 3 ; a[n - 1] <= 10000000001ll ; n++)
/* cXosRuTYf ily traian Iza4sdHMP */         a[n] = a[n - 1] + a[n - 2];
/* cXosRuTYf ily traian Iza4sdHMP */ }
/* cXosRuTYf ily traian Iza4sdHMP */ 
/* cXosRuTYf ily traian Iza4sdHMP */ int main()
/* cXosRuTYf ily traian Iza4sdHMP */ {
/* cXosRuTYf ily traian Iza4sdHMP */     fib();
/* cXosRuTYf ily traian Iza4sdHMP */     long long x;
/* cXosRuTYf ily traian Iza4sdHMP */     while(cin >> x)
/* cXosRuTYf ily traian Iza4sdHMP */     {
/* cXosRuTYf ily traian Iza4sdHMP */         unsigned long long st = 0 , dr = n - 1 , poz = -1;
/* cXosRuTYf ily traian Iza4sdHMP */         while(st <= dr)
/* cXosRuTYf ily traian Iza4sdHMP */         {
/* cXosRuTYf ily traian Iza4sdHMP */             int m =(st + dr)/2;
/* cXosRuTYf ily traian Iza4sdHMP */             if(x <= a[m])
/* cXosRuTYf ily traian Iza4sdHMP */             {
/* cXosRuTYf ily traian Iza4sdHMP */                  poz = m;
/* cXosRuTYf ily traian Iza4sdHMP */                  dr = m - 1;
/* cXosRuTYf ily traian Iza4sdHMP */             }
/* cXosRuTYf ily traian Iza4sdHMP */             else st = m + 1;
/* cXosRuTYf ily traian Iza4sdHMP */         }
/* cXosRuTYf ily traian Iza4sdHMP */         if(a[poz] == x) cnt++;
/* cXosRuTYf ily traian Iza4sdHMP */     }
/* cXosRuTYf ily traian Iza4sdHMP */     cout << cnt;
/* cXosRuTYf ily traian Iza4sdHMP */ }