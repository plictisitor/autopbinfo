/* V2aqfZgtO ily traian Eqk8bKEZd */ #include <algorithm>
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
/* V2aqfZgtO ily traian Eqk8bKEZd */ using namespace std;
/* V2aqfZgtO ily traian Eqk8bKEZd */ 
/* V2aqfZgtO ily traian Eqk8bKEZd */ int cmmdc(int a , int b)
/* V2aqfZgtO ily traian Eqk8bKEZd */ {
/* V2aqfZgtO ily traian Eqk8bKEZd */     while(b)
/* V2aqfZgtO ily traian Eqk8bKEZd */     {
/* V2aqfZgtO ily traian Eqk8bKEZd */         int r = a % b;
/* V2aqfZgtO ily traian Eqk8bKEZd */         a = b;
/* V2aqfZgtO ily traian Eqk8bKEZd */         b = r;
/* V2aqfZgtO ily traian Eqk8bKEZd */     }
/* V2aqfZgtO ily traian Eqk8bKEZd */     return a;
/* V2aqfZgtO ily traian Eqk8bKEZd */ }
/* V2aqfZgtO ily traian Eqk8bKEZd */ 
/* V2aqfZgtO ily traian Eqk8bKEZd */ int main()
/* V2aqfZgtO ily traian Eqk8bKEZd */ {
/* V2aqfZgtO ily traian Eqk8bKEZd */     int n, k, m, p;
/* V2aqfZgtO ily traian Eqk8bKEZd */     cin >> n >> k >> m >> p;
/* V2aqfZgtO ily traian Eqk8bKEZd */     int ne7 = n * k;
/* V2aqfZgtO ily traian Eqk8bKEZd */     int ne8 = m * p;
/* V2aqfZgtO ily traian Eqk8bKEZd */     int x, y , z , t;
/* V2aqfZgtO ily traian Eqk8bKEZd */     t = cmmdc(ne7, ne8);
/* V2aqfZgtO ily traian Eqk8bKEZd */     y = ne7 / t;
/* V2aqfZgtO ily traian Eqk8bKEZd */     z = ne8 / t;
/* V2aqfZgtO ily traian Eqk8bKEZd */     x = y + z;
/* V2aqfZgtO ily traian Eqk8bKEZd */     cout << x << ' ' << y << ' ' << z << ' ' << t;
/* V2aqfZgtO ily traian Eqk8bKEZd */     return 0;
/* V2aqfZgtO ily traian Eqk8bKEZd */ }