/* Omtyjba3c ily traian XZOLv74Yr */ #include <algorithm>
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
/* Omtyjba3c ily traian XZOLv74Yr */ using namespace std;
/* Omtyjba3c ily traian XZOLv74Yr */ ifstream fin ("numar9.in");
/* Omtyjba3c ily traian XZOLv74Yr */ ofstream fout ("numar9.out");
/* Omtyjba3c ily traian XZOLv74Yr */ int unsigned k,i,v[2200001];
/* Omtyjba3c ily traian XZOLv74Yr */ int main()
/* Omtyjba3c ily traian XZOLv74Yr */ {
/* Omtyjba3c ily traian XZOLv74Yr */     long long unsigned s , x , r , a , b;
/* Omtyjba3c ily traian XZOLv74Yr */     fin >> s >> k;
/* Omtyjba3c ily traian XZOLv74Yr */     r = s % 9;
/* Omtyjba3c ily traian XZOLv74Yr */     a = s / 9;
/* Omtyjba3c ily traian XZOLv74Yr */     b = a / 6;
/* Omtyjba3c ily traian XZOLv74Yr */     for (i = 1 ; i <= b ; i++) v[i]=999999;
/* Omtyjba3c ily traian XZOLv74Yr */     for (i = b + 1 ; i <= b + a % 6 ; i++) v[i]=9;
/* Omtyjba3c ily traian XZOLv74Yr */     if (r != 0 && s != 0) v[0] = r;
/* Omtyjba3c ily traian XZOLv74Yr */     x = 0;
/* Omtyjba3c ily traian XZOLv74Yr */     if (v[0] != 0)
/* Omtyjba3c ily traian XZOLv74Yr */         for (i = 0 ; i <= b + a % 6 ; i++)
/* Omtyjba3c ily traian XZOLv74Yr */         {
/* Omtyjba3c ily traian XZOLv74Yr */             fout << v[i];
/* Omtyjba3c ily traian XZOLv74Yr */             if (v[i] < 10) x = (x * 10 + v[i])% k;
/* Omtyjba3c ily traian XZOLv74Yr */             else
/* Omtyjba3c ily traian XZOLv74Yr */             {
/* Omtyjba3c ily traian XZOLv74Yr */                 while (v[i]!=0)
/* Omtyjba3c ily traian XZOLv74Yr */                 {
/* Omtyjba3c ily traian XZOLv74Yr */                     x = (x * 10 + v[i] % 10)% k;
/* Omtyjba3c ily traian XZOLv74Yr */                     v[i] /= 10;
/* Omtyjba3c ily traian XZOLv74Yr */                 }
/* Omtyjba3c ily traian XZOLv74Yr */             }
/* Omtyjba3c ily traian XZOLv74Yr */         }
/* Omtyjba3c ily traian XZOLv74Yr */     else
/* Omtyjba3c ily traian XZOLv74Yr */         for (i = 1 ; i <= b + a % 6 ; i++)
/* Omtyjba3c ily traian XZOLv74Yr */         {
/* Omtyjba3c ily traian XZOLv74Yr */             fout<<v[i];
/* Omtyjba3c ily traian XZOLv74Yr */             if (v[i]<10) x = (x * 10 + v[i])% k;
/* Omtyjba3c ily traian XZOLv74Yr */             else
/* Omtyjba3c ily traian XZOLv74Yr */             {
/* Omtyjba3c ily traian XZOLv74Yr */                 while (v[i] != 0)
/* Omtyjba3c ily traian XZOLv74Yr */                 {
/* Omtyjba3c ily traian XZOLv74Yr */                     x = (x * 10 + v[i] % 10)% k;
/* Omtyjba3c ily traian XZOLv74Yr */                     v[i] /= 10;
/* Omtyjba3c ily traian XZOLv74Yr */                 }
/* Omtyjba3c ily traian XZOLv74Yr */             }
/* Omtyjba3c ily traian XZOLv74Yr */         }
/* Omtyjba3c ily traian XZOLv74Yr */         fout << " " << x;
/* Omtyjba3c ily traian XZOLv74Yr */         return 0;
/* Omtyjba3c ily traian XZOLv74Yr */ }