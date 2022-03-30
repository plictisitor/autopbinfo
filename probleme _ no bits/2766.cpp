/* OkOf5G14q ily traian 8wrZzSiqB */ #include <algorithm>
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
/* OkOf5G14q ily traian 8wrZzSiqB */ 
/* OkOf5G14q ily traian 8wrZzSiqB */ using namespace std;
/* OkOf5G14q ily traian 8wrZzSiqB */ 
/* OkOf5G14q ily traian 8wrZzSiqB */ int r, g, b, r1, r2, g1, g2, b1, b2, n, i;
/* OkOf5G14q ily traian 8wrZzSiqB */ 
/* OkOf5G14q ily traian 8wrZzSiqB */ int main()
/* OkOf5G14q ily traian 8wrZzSiqB */ {
/* OkOf5G14q ily traian 8wrZzSiqB */     cin >> r1 >> g1 >> b1 >> r2 >> g2 >> b2 >> n;
/* OkOf5G14q ily traian 8wrZzSiqB */     
/* OkOf5G14q ily traian 8wrZzSiqB */     r = r2 - r1, g = g2 - g1, b = b2 - b1, --n;
/* OkOf5G14q ily traian 8wrZzSiqB */     
/* OkOf5G14q ily traian 8wrZzSiqB */     cout << r1 << ", " << g1 << ", " << b1 << '\n';
/* OkOf5G14q ily traian 8wrZzSiqB */     
/* OkOf5G14q ily traian 8wrZzSiqB */     for (int i = 1; i <= n; ++i)
/* OkOf5G14q ily traian 8wrZzSiqB */         cout << (int)(r1 + r * i / (double)n) << ", " << (int)(g1 + g * i / (double)n) << ", " << (int)(b1 + b * i / (double)n) << '\n';
/* OkOf5G14q ily traian 8wrZzSiqB */     
/* OkOf5G14q ily traian 8wrZzSiqB */     return 0;
/* OkOf5G14q ily traian 8wrZzSiqB */ }