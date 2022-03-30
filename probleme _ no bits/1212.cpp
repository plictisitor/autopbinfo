/* 3PY7VuVHc ily traian 137T0QVQf */ #include <algorithm>
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
/* 3PY7VuVHc ily traian 137T0QVQf */ using namespace std;
/* 3PY7VuVHc ily traian 137T0QVQf */ 
/* 3PY7VuVHc ily traian 137T0QVQf */ int main()
/* 3PY7VuVHc ily traian 137T0QVQf */ {
/* 3PY7VuVHc ily traian 137T0QVQf */     /// S = n * (n + 1) * (2 * n + 1) / 6
/* 3PY7VuVHc ily traian 137T0QVQf */ 
/* 3PY7VuVHc ily traian 137T0QVQf */     int MOD = 10234573;
/* 3PY7VuVHc ily traian 137T0QVQf */     int n;
/* 3PY7VuVHc ily traian 137T0QVQf */     cin >> n;
/* 3PY7VuVHc ily traian 137T0QVQf */     long long a, b, c;
/* 3PY7VuVHc ily traian 137T0QVQf */     a = n;
/* 3PY7VuVHc ily traian 137T0QVQf */     b = n + 1;
/* 3PY7VuVHc ily traian 137T0QVQf */     c = 1LL * 2 * n;
/* 3PY7VuVHc ily traian 137T0QVQf */     c += 1;
/* 3PY7VuVHc ily traian 137T0QVQf */ 
/* 3PY7VuVHc ily traian 137T0QVQf */     if(a % 2 == 0)
/* 3PY7VuVHc ily traian 137T0QVQf */         a/=2;
/* 3PY7VuVHc ily traian 137T0QVQf */     else
/* 3PY7VuVHc ily traian 137T0QVQf */         b/=2;
/* 3PY7VuVHc ily traian 137T0QVQf */ 
/* 3PY7VuVHc ily traian 137T0QVQf */     if(a % 3 == 0)
/* 3PY7VuVHc ily traian 137T0QVQf */         a /= 3;
/* 3PY7VuVHc ily traian 137T0QVQf */     else if(b % 3 == 0)
/* 3PY7VuVHc ily traian 137T0QVQf */         b /= 3;
/* 3PY7VuVHc ily traian 137T0QVQf */     else
/* 3PY7VuVHc ily traian 137T0QVQf */         c /= 3;
/* 3PY7VuVHc ily traian 137T0QVQf */ 
/* 3PY7VuVHc ily traian 137T0QVQf */     cout << a % MOD * b % MOD * c % MOD;
/* 3PY7VuVHc ily traian 137T0QVQf */ 
/* 3PY7VuVHc ily traian 137T0QVQf */     return 0;
/* 3PY7VuVHc ily traian 137T0QVQf */ }
/* 3PY7VuVHc ily traian 137T0QVQf */ 