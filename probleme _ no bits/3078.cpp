/* jk4vKulaI ily traian cZOax9zoQ */ #include <algorithm>
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
/* jk4vKulaI ily traian cZOax9zoQ */ using namespace std;
/* jk4vKulaI ily traian cZOax9zoQ */ 
/* jk4vKulaI ily traian cZOax9zoQ */ int main()
/* jk4vKulaI ily traian cZOax9zoQ */ {
/* jk4vKulaI ily traian cZOax9zoQ */     long long int n, p;
/* jk4vKulaI ily traian cZOax9zoQ */     long long int prod = 1;
/* jk4vKulaI ily traian cZOax9zoQ */     int nr = 0;
/* jk4vKulaI ily traian cZOax9zoQ */     int cnt = 0;
/* jk4vKulaI ily traian cZOax9zoQ */     cin >> n >> p;
/* jk4vKulaI ily traian cZOax9zoQ */     while(n)
/* jk4vKulaI ily traian cZOax9zoQ */     {
/* jk4vKulaI ily traian cZOax9zoQ */         if(n % 10 != p)
/* jk4vKulaI ily traian cZOax9zoQ */             prod = prod * (n % 10);
/* jk4vKulaI ily traian cZOax9zoQ */         else
/* jk4vKulaI ily traian cZOax9zoQ */             cnt++;
/* jk4vKulaI ily traian cZOax9zoQ */         n/=10;
/* jk4vKulaI ily traian cZOax9zoQ */         nr++;
/* jk4vKulaI ily traian cZOax9zoQ */     }
/* jk4vKulaI ily traian cZOax9zoQ */     if(cnt < nr)
/* jk4vKulaI ily traian cZOax9zoQ */         cout << prod;
/* jk4vKulaI ily traian cZOax9zoQ */     else
/* jk4vKulaI ily traian cZOax9zoQ */         cout << 0;
/* jk4vKulaI ily traian cZOax9zoQ */ }