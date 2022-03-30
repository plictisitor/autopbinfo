/* F7Zm8OZ9u ily traian PjZqxP5pI */ #include <algorithm>
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
/* F7Zm8OZ9u ily traian PjZqxP5pI */ 
/* F7Zm8OZ9u ily traian PjZqxP5pI */ using namespace std;
/* F7Zm8OZ9u ily traian PjZqxP5pI */ 
/* F7Zm8OZ9u ily traian PjZqxP5pI */ ///ifstream cin("meteoriti.in");
/* F7Zm8OZ9u ily traian PjZqxP5pI */ //ofstream cout("meteoriti.out");
/* F7Zm8OZ9u ily traian PjZqxP5pI */ 
/* F7Zm8OZ9u ily traian PjZqxP5pI */ unsigned long long n, pt;
/* F7Zm8OZ9u ily traian PjZqxP5pI */ int main()
/* F7Zm8OZ9u ily traian PjZqxP5pI */ {
/* F7Zm8OZ9u ily traian PjZqxP5pI */     cin >> n;
/* F7Zm8OZ9u ily traian PjZqxP5pI */ 
/* F7Zm8OZ9u ily traian PjZqxP5pI */     pt = 1;
/* F7Zm8OZ9u ily traian PjZqxP5pI */     while (pt <= n)
/* F7Zm8OZ9u ily traian PjZqxP5pI */         pt *= 2;
/* F7Zm8OZ9u ily traian PjZqxP5pI */ 
/* F7Zm8OZ9u ily traian PjZqxP5pI */     if (n != pt)pt /= 2;
/* F7Zm8OZ9u ily traian PjZqxP5pI */     unsigned long long dif = n - pt;
/* F7Zm8OZ9u ily traian PjZqxP5pI */     cout << 2 * dif  + 1;
/* F7Zm8OZ9u ily traian PjZqxP5pI */     return 0;
/* F7Zm8OZ9u ily traian PjZqxP5pI */ }