/* qfOK6ziP2 ily traian fhVXYpQzb */ #include <algorithm>
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
/* qfOK6ziP2 ily traian fhVXYpQzb */ using namespace std;
/* qfOK6ziP2 ily traian fhVXYpQzb */ ifstream cin("exp.in");
/* qfOK6ziP2 ily traian fhVXYpQzb */ ofstream cout("exp.out");
/* qfOK6ziP2 ily traian fhVXYpQzb */ int f[5001];
/* qfOK6ziP2 ily traian fhVXYpQzb */ int main()
/* qfOK6ziP2 ily traian fhVXYpQzb */ {
/* qfOK6ziP2 ily traian fhVXYpQzb */     int n , x , rad , ok = 0;
/* qfOK6ziP2 ily traian fhVXYpQzb */     cin >> rad;
/* qfOK6ziP2 ily traian fhVXYpQzb */     cin >> n;
/* qfOK6ziP2 ily traian fhVXYpQzb */     for(int i = 1 ; i <= n ; i++)
/* qfOK6ziP2 ily traian fhVXYpQzb */     {
/* qfOK6ziP2 ily traian fhVXYpQzb */         cin >> x;
/* qfOK6ziP2 ily traian fhVXYpQzb */         int d = 2;
/* qfOK6ziP2 ily traian fhVXYpQzb */         while(x > 1)
/* qfOK6ziP2 ily traian fhVXYpQzb */         {
/* qfOK6ziP2 ily traian fhVXYpQzb */             int p = 0;
/* qfOK6ziP2 ily traian fhVXYpQzb */             while(x % d == 0) p++ , x /= d;
/* qfOK6ziP2 ily traian fhVXYpQzb */             if(p) f[d] += p;
/* qfOK6ziP2 ily traian fhVXYpQzb */             d++;
/* qfOK6ziP2 ily traian fhVXYpQzb */             if(d * d > x) d = x;
/* qfOK6ziP2 ily traian fhVXYpQzb */         }
/* qfOK6ziP2 ily traian fhVXYpQzb */     }
/* qfOK6ziP2 ily traian fhVXYpQzb */     for(int  i = 1 ; i <= 5000 ; i++)
/* qfOK6ziP2 ily traian fhVXYpQzb */         if(f[i] != 0)
/* qfOK6ziP2 ily traian fhVXYpQzb */             if(f[i] % rad != 0) ok = 1;
/* qfOK6ziP2 ily traian fhVXYpQzb */     if(ok == 1)cout << 0;
/* qfOK6ziP2 ily traian fhVXYpQzb */     else
/* qfOK6ziP2 ily traian fhVXYpQzb */     {
/* qfOK6ziP2 ily traian fhVXYpQzb */         cout << 1 << '\n';
/* qfOK6ziP2 ily traian fhVXYpQzb */         for(int  i = 1 ; i <= 100 ; i++)
/* qfOK6ziP2 ily traian fhVXYpQzb */         if(f[i] != 0)
/* qfOK6ziP2 ily traian fhVXYpQzb */             cout << i << " " << f[i] / rad << '\n';
/* qfOK6ziP2 ily traian fhVXYpQzb */     }
/* qfOK6ziP2 ily traian fhVXYpQzb */ }