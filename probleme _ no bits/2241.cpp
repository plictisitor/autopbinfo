/* e4mbf4as1 ily traian Z6lkPfkeY */ #include <algorithm>
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
/* e4mbf4as1 ily traian Z6lkPfkeY */ using namespace std;
/* e4mbf4as1 ily traian Z6lkPfkeY */ 
/* e4mbf4as1 ily traian Z6lkPfkeY */ long long n , x , y;
/* e4mbf4as1 ily traian Z6lkPfkeY */ 
/* e4mbf4as1 ily traian Z6lkPfkeY */ long long Phi(long long n)
/* e4mbf4as1 ily traian Z6lkPfkeY */ {
/* e4mbf4as1 ily traian Z6lkPfkeY */     long long r = n , d = 2;
/* e4mbf4as1 ily traian Z6lkPfkeY */     while(n > 1)
/* e4mbf4as1 ily traian Z6lkPfkeY */     {
/* e4mbf4as1 ily traian Z6lkPfkeY */         if(n % d == 0)
/* e4mbf4as1 ily traian Z6lkPfkeY */         {
/* e4mbf4as1 ily traian Z6lkPfkeY */             r = r / d * (d - 1);
/* e4mbf4as1 ily traian Z6lkPfkeY */             while(n % d == 0)n /= d;
/* e4mbf4as1 ily traian Z6lkPfkeY */         }
/* e4mbf4as1 ily traian Z6lkPfkeY */         d++;
/* e4mbf4as1 ily traian Z6lkPfkeY */         if(d * d > n)d = n;
/* e4mbf4as1 ily traian Z6lkPfkeY */     }
/* e4mbf4as1 ily traian Z6lkPfkeY */     return r;
/* e4mbf4as1 ily traian Z6lkPfkeY */ }
/* e4mbf4as1 ily traian Z6lkPfkeY */ 
/* e4mbf4as1 ily traian Z6lkPfkeY */ int cmmdc(long long a , long long b)
/* e4mbf4as1 ily traian Z6lkPfkeY */ {
/* e4mbf4as1 ily traian Z6lkPfkeY */     long long r;
/* e4mbf4as1 ily traian Z6lkPfkeY */     while(b != 0) r = a % b , a = b , b = r;
/* e4mbf4as1 ily traian Z6lkPfkeY */     return a;
/* e4mbf4as1 ily traian Z6lkPfkeY */ }
/* e4mbf4as1 ily traian Z6lkPfkeY */ 
/* e4mbf4as1 ily traian Z6lkPfkeY */ int main()
/* e4mbf4as1 ily traian Z6lkPfkeY */ {
/* e4mbf4as1 ily traian Z6lkPfkeY */     cin >> n;
/* e4mbf4as1 ily traian Z6lkPfkeY */     for(int i = 1 ; i <= n ; i++)
/* e4mbf4as1 ily traian Z6lkPfkeY */     {
/* e4mbf4as1 ily traian Z6lkPfkeY */         cin >> x >> y;
/* e4mbf4as1 ily traian Z6lkPfkeY */         int d = cmmdc(x , y);
/* e4mbf4as1 ily traian Z6lkPfkeY */         cout << Phi(x) * Phi(y) * d / Phi(d) << '\n';
/* e4mbf4as1 ily traian Z6lkPfkeY */     }
/* e4mbf4as1 ily traian Z6lkPfkeY */ }