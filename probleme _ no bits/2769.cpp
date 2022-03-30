/* JIm8uZyzZ ily traian 41k4EoRwJ */ #include <algorithm>
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
/* JIm8uZyzZ ily traian 41k4EoRwJ */ 
/* JIm8uZyzZ ily traian 41k4EoRwJ */ using namespace std;
/* JIm8uZyzZ ily traian 41k4EoRwJ */ 
/* JIm8uZyzZ ily traian 41k4EoRwJ */ int main()
/* JIm8uZyzZ ily traian 41k4EoRwJ */ {
/* JIm8uZyzZ ily traian 41k4EoRwJ */     long long int x , y , n , m , p , q;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     cin >> x >> y;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     int d = 2;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     while(x % d) d++;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     n=x/d;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     m=y/(d-1);
/* JIm8uZyzZ ily traian 41k4EoRwJ */     long long int delta = (n+1-m) * (n+1-m) - 4*n;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     long long int r = sqrt(delta);
/* JIm8uZyzZ ily traian 41k4EoRwJ */     p = (n + 1 - m - r) / 2;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     q = (n + 1 - m + r) / 2;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     cout << d << ' ' << p << ' ' << q;
/* JIm8uZyzZ ily traian 41k4EoRwJ */     return 0;
/* JIm8uZyzZ ily traian 41k4EoRwJ */ }