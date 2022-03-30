/* Rgzu3bW6d ily traian igZgRHqRJ */ #include <algorithm>
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
/* Rgzu3bW6d ily traian igZgRHqRJ */ 
/* Rgzu3bW6d ily traian igZgRHqRJ */ 
/* Rgzu3bW6d ily traian igZgRHqRJ */ using namespace std;
/* Rgzu3bW6d ily traian igZgRHqRJ */ ifstream cin("ariatriunghi.in");
/* Rgzu3bW6d ily traian igZgRHqRJ */ ofstream cout("ariatriunghi.out");
/* Rgzu3bW6d ily traian igZgRHqRJ */ int main()
/* Rgzu3bW6d ily traian igZgRHqRJ */ {
/* Rgzu3bW6d ily traian igZgRHqRJ */     int x1 , x2 , x3 , y1 , y2 , y3;
/* Rgzu3bW6d ily traian igZgRHqRJ */     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
/* Rgzu3bW6d ily traian igZgRHqRJ */     double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
/* Rgzu3bW6d ily traian igZgRHqRJ */     double b = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
/* Rgzu3bW6d ily traian igZgRHqRJ */     double c = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
/* Rgzu3bW6d ily traian igZgRHqRJ */     double s = (a+b+c) / 2;
/* Rgzu3bW6d ily traian igZgRHqRJ */     double A = sqrt((s - a) * (s - b) * (s - c) * s);
/* Rgzu3bW6d ily traian igZgRHqRJ */     cout << fixed << setprecision(1) << A;
/* Rgzu3bW6d ily traian igZgRHqRJ */     return 0;
/* Rgzu3bW6d ily traian igZgRHqRJ */ }