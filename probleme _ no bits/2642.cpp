/* fizxgyAtp ily traian egFiv48UD */ #include <algorithm>
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
/* fizxgyAtp ily traian egFiv48UD */ bool prim(int n)
/* fizxgyAtp ily traian egFiv48UD */ {
/* fizxgyAtp ily traian egFiv48UD */     int cnt=0;
/* fizxgyAtp ily traian egFiv48UD */     for(int i = 1 ; i * i <= n ; ++i)
/* fizxgyAtp ily traian egFiv48UD */         if(n % i == 0 && i * i != n)
/* fizxgyAtp ily traian egFiv48UD */             cnt+=2;
/* fizxgyAtp ily traian egFiv48UD */         else if(i * i == n)
/* fizxgyAtp ily traian egFiv48UD */             cnt++;
/* fizxgyAtp ily traian egFiv48UD */     if(cnt == 2)
/* fizxgyAtp ily traian egFiv48UD */         return 1;
/* fizxgyAtp ily traian egFiv48UD */     return 0;
/* fizxgyAtp ily traian egFiv48UD */ }
/* fizxgyAtp ily traian egFiv48UD */ 
/* fizxgyAtp ily traian egFiv48UD */ int Phi(int n)
/* fizxgyAtp ily traian egFiv48UD */ {
/* fizxgyAtp ily traian egFiv48UD */     if(prim(n))
/* fizxgyAtp ily traian egFiv48UD */         return n-1;
/* fizxgyAtp ily traian egFiv48UD */     int d=2;
/* fizxgyAtp ily traian egFiv48UD */     int rez = 1;
/* fizxgyAtp ily traian egFiv48UD */     while(n>1)
/* fizxgyAtp ily traian egFiv48UD */     {
/* fizxgyAtp ily traian egFiv48UD */         int p = 0;
/* fizxgyAtp ily traian egFiv48UD */         while(n % d==0)
/* fizxgyAtp ily traian egFiv48UD */             n/=d , p++;
/* fizxgyAtp ily traian egFiv48UD */         if(p != 0)
/* fizxgyAtp ily traian egFiv48UD */             rez = rez * (d-1) * pow(d , p - 1);
/* fizxgyAtp ily traian egFiv48UD */         d++;
/* fizxgyAtp ily traian egFiv48UD */         if(d * d > n)
/* fizxgyAtp ily traian egFiv48UD */             d = n;
/* fizxgyAtp ily traian egFiv48UD */     }
/* fizxgyAtp ily traian egFiv48UD */     return rez;
/* fizxgyAtp ily traian egFiv48UD */ }