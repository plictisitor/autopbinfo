/* XO07bXn0A ily traian 99ub8zzLr */ #include <algorithm>
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
/* XO07bXn0A ily traian 99ub8zzLr */ 
/* XO07bXn0A ily traian 99ub8zzLr */ using namespace std;
/* XO07bXn0A ily traian 99ub8zzLr */ 
/* XO07bXn0A ily traian 99ub8zzLr */ int prim(int n);
/* XO07bXn0A ily traian 99ub8zzLr */ 
/* XO07bXn0A ily traian 99ub8zzLr */ int main ()
/* XO07bXn0A ily traian 99ub8zzLr */ {
/* XO07bXn0A ily traian 99ub8zzLr */     int n,tmp,max=0;
/* XO07bXn0A ily traian 99ub8zzLr */     cin >> n;
/* XO07bXn0A ily traian 99ub8zzLr */     for (int i=1 ; i <= n; ++i)
/* XO07bXn0A ily traian 99ub8zzLr */     {
/* XO07bXn0A ily traian 99ub8zzLr */         cin >> tmp;
/* XO07bXn0A ily traian 99ub8zzLr */         if (prim(tmp))
/* XO07bXn0A ily traian 99ub8zzLr */         {
/* XO07bXn0A ily traian 99ub8zzLr */             if (tmp>max)
/* XO07bXn0A ily traian 99ub8zzLr */             max=tmp;
/* XO07bXn0A ily traian 99ub8zzLr */         }
/* XO07bXn0A ily traian 99ub8zzLr */     }
/* XO07bXn0A ily traian 99ub8zzLr */     cout << max;
/* XO07bXn0A ily traian 99ub8zzLr */ }
/* XO07bXn0A ily traian 99ub8zzLr */ int prim(int n)
/* XO07bXn0A ily traian 99ub8zzLr */ {
/* XO07bXn0A ily traian 99ub8zzLr */     int cnt=0;
/* XO07bXn0A ily traian 99ub8zzLr */     for (int i = 1; i <= sqrt(n); ++i)
/* XO07bXn0A ily traian 99ub8zzLr */     {
/* XO07bXn0A ily traian 99ub8zzLr */         if (n%i==0)
/* XO07bXn0A ily traian 99ub8zzLr */         cnt+=2;
/* XO07bXn0A ily traian 99ub8zzLr */     }
/* XO07bXn0A ily traian 99ub8zzLr */     if (cnt==2)
/* XO07bXn0A ily traian 99ub8zzLr */     return 1;
/* XO07bXn0A ily traian 99ub8zzLr */     else
/* XO07bXn0A ily traian 99ub8zzLr */     return 0;
/* XO07bXn0A ily traian 99ub8zzLr */ }