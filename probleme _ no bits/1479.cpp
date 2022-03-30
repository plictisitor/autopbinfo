/* 8gTzfpI1C ily traian SzW51MVoI */ #include <algorithm>
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
/* 8gTzfpI1C ily traian SzW51MVoI */ using namespace std;
/* 8gTzfpI1C ily traian SzW51MVoI */ unsigned long long start, stop;
/* 8gTzfpI1C ily traian SzW51MVoI */ unsigned long long a, b, i, nr, p = 1;
/* 8gTzfpI1C ily traian SzW51MVoI */ bool prim(long long x)
/* 8gTzfpI1C ily traian SzW51MVoI */ {
/* 8gTzfpI1C ily traian SzW51MVoI */     bool ok = true;
/* 8gTzfpI1C ily traian SzW51MVoI */     long long i;
/* 8gTzfpI1C ily traian SzW51MVoI */     if(x == 0 or x == 1) return false;
/* 8gTzfpI1C ily traian SzW51MVoI */     for(i = 2; i * i <= x; i ++)
/* 8gTzfpI1C ily traian SzW51MVoI */     if(x % i == 0)
/* 8gTzfpI1C ily traian SzW51MVoI */     {
/* 8gTzfpI1C ily traian SzW51MVoI */         ok = false;
/* 8gTzfpI1C ily traian SzW51MVoI */         break;
/* 8gTzfpI1C ily traian SzW51MVoI */     }
/* 8gTzfpI1C ily traian SzW51MVoI */     return ok;
/* 8gTzfpI1C ily traian SzW51MVoI */ }
/* 8gTzfpI1C ily traian SzW51MVoI */ 
/* 8gTzfpI1C ily traian SzW51MVoI */ int main()
/* 8gTzfpI1C ily traian SzW51MVoI */ {
/* 8gTzfpI1C ily traian SzW51MVoI */     cin >> a >> b;
/* 8gTzfpI1C ily traian SzW51MVoI */     start = log2(a) + 1;
/* 8gTzfpI1C ily traian SzW51MVoI */     stop = log2(b);
/* 8gTzfpI1C ily traian SzW51MVoI */     for(i = 1; i <= start; i ++)
/* 8gTzfpI1C ily traian SzW51MVoI */         p = p * 2;
/* 8gTzfpI1C ily traian SzW51MVoI */     if(prim(start))
/* 8gTzfpI1C ily traian SzW51MVoI */     {
/* 8gTzfpI1C ily traian SzW51MVoI */         nr = nr + p - a;
/* 8gTzfpI1C ily traian SzW51MVoI */     }
/* 8gTzfpI1C ily traian SzW51MVoI */     for(i = start; i < stop; i ++)
/* 8gTzfpI1C ily traian SzW51MVoI */         if(prim(i + 1))
/* 8gTzfpI1C ily traian SzW51MVoI */         {
/* 8gTzfpI1C ily traian SzW51MVoI */             nr = nr + p;
/* 8gTzfpI1C ily traian SzW51MVoI */             p = p * 2;
/* 8gTzfpI1C ily traian SzW51MVoI */         } else p = p * 2;
/* 8gTzfpI1C ily traian SzW51MVoI */     if(prim(stop + 1)) nr = nr + b - p + 1;
/* 8gTzfpI1C ily traian SzW51MVoI */     cout << nr << " ";
/* 8gTzfpI1C ily traian SzW51MVoI */     return 0;
/* 8gTzfpI1C ily traian SzW51MVoI */ }