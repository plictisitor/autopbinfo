/* XCu7yH0Hl ily traian mMkAwbUMZ */ #include <algorithm>
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
/* XCu7yH0Hl ily traian mMkAwbUMZ */ 
/* XCu7yH0Hl ily traian mMkAwbUMZ */ using namespace std;
/* XCu7yH0Hl ily traian mMkAwbUMZ */ 
/* XCu7yH0Hl ily traian mMkAwbUMZ */ char a[260];
/* XCu7yH0Hl ily traian mMkAwbUMZ */ long long int n, s, x = 1, nr;
/* XCu7yH0Hl ily traian mMkAwbUMZ */ 
/* XCu7yH0Hl ily traian mMkAwbUMZ */ int main()
/* XCu7yH0Hl ily traian mMkAwbUMZ */ {
/* XCu7yH0Hl ily traian mMkAwbUMZ */     cin >> a;
/* XCu7yH0Hl ily traian mMkAwbUMZ */     n = strlen(a);
/* XCu7yH0Hl ily traian mMkAwbUMZ */     for (int i = n - 1; i >= 0 ; i--)
/* XCu7yH0Hl ily traian mMkAwbUMZ */     {
/* XCu7yH0Hl ily traian mMkAwbUMZ */         if (a[i] >= '0' && a[i] <= '9')
/* XCu7yH0Hl ily traian mMkAwbUMZ */             nr = a[i] - '0';
/* XCu7yH0Hl ily traian mMkAwbUMZ */         else 
/* XCu7yH0Hl ily traian mMkAwbUMZ */             nr = a[i] - 'A' + 10;
/* XCu7yH0Hl ily traian mMkAwbUMZ */         s += x * nr;
/* XCu7yH0Hl ily traian mMkAwbUMZ */         x = x * 16;
/* XCu7yH0Hl ily traian mMkAwbUMZ */     }
/* XCu7yH0Hl ily traian mMkAwbUMZ */     cout << s;
/* XCu7yH0Hl ily traian mMkAwbUMZ */     return 0;
/* XCu7yH0Hl ily traian mMkAwbUMZ */ }