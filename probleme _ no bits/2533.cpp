/* qUaGFWuhD ily traian VVjJxO04Z */ #include <algorithm>
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
/* qUaGFWuhD ily traian VVjJxO04Z */ 
/* qUaGFWuhD ily traian VVjJxO04Z */ using namespace std;
/* qUaGFWuhD ily traian VVjJxO04Z */ ifstream cin("secventaincadrata.in");
/* qUaGFWuhD ily traian VVjJxO04Z */ ofstream cout("secventaincadrata.out");
/* qUaGFWuhD ily traian VVjJxO04Z */ #define Inf 0x3f3f3f
/* qUaGFWuhD ily traian VVjJxO04Z */ 
/* qUaGFWuhD ily traian VVjJxO04Z */ int A[10], x, n, mx, lmax[10];
/* qUaGFWuhD ily traian VVjJxO04Z */ int main()
/* qUaGFWuhD ily traian VVjJxO04Z */ {
/* qUaGFWuhD ily traian VVjJxO04Z */     for (int i = 0; i < 10; i ++)
/* qUaGFWuhD ily traian VVjJxO04Z */         A[i] = Inf;
/* qUaGFWuhD ily traian VVjJxO04Z */ 
/* qUaGFWuhD ily traian VVjJxO04Z */     //cin >> n;
/* qUaGFWuhD ily traian VVjJxO04Z */     int i = 1;
/* qUaGFWuhD ily traian VVjJxO04Z */     while(cin >> x)
/* qUaGFWuhD ily traian VVjJxO04Z */     {
/* qUaGFWuhD ily traian VVjJxO04Z */ 
/* qUaGFWuhD ily traian VVjJxO04Z */         lmax[x] = max(i - A[x] + 1, lmax[x]);
/* qUaGFWuhD ily traian VVjJxO04Z */         if (A[x] == Inf)A[x] = i;
/* qUaGFWuhD ily traian VVjJxO04Z */         mx = max(lmax[x], mx);
/* qUaGFWuhD ily traian VVjJxO04Z */         i++;
/* qUaGFWuhD ily traian VVjJxO04Z */     }
/* qUaGFWuhD ily traian VVjJxO04Z */     cout << mx << '\n';
/* qUaGFWuhD ily traian VVjJxO04Z */     for (int i = 0; i < 10; i ++)
/* qUaGFWuhD ily traian VVjJxO04Z */         if (lmax[i] == mx)
/* qUaGFWuhD ily traian VVjJxO04Z */             cout << i << ' ';
/* qUaGFWuhD ily traian VVjJxO04Z */     return 0;
/* qUaGFWuhD ily traian VVjJxO04Z */ }