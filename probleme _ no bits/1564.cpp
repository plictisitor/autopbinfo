/* 3GxUH3gb4 ily traian DKsthOYGI */ #include <algorithm>
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
/* 3GxUH3gb4 ily traian DKsthOYGI */ using namespace std;
/* 3GxUH3gb4 ily traian DKsthOYGI */ 
/* 3GxUH3gb4 ily traian DKsthOYGI */ 
/* 3GxUH3gb4 ily traian DKsthOYGI */ int main()
/* 3GxUH3gb4 ily traian DKsthOYGI */ {
/* 3GxUH3gb4 ily traian DKsthOYGI */     int n;
/* 3GxUH3gb4 ily traian DKsthOYGI */     cin >> n;
/* 3GxUH3gb4 ily traian DKsthOYGI */     
/* 3GxUH3gb4 ily traian DKsthOYGI */     
/* 3GxUH3gb4 ily traian DKsthOYGI */     for (int i = 1; i <= n; ++i)
/* 3GxUH3gb4 ily traian DKsthOYGI */     {
/* 3GxUH3gb4 ily traian DKsthOYGI */         for (int j = 1; j <= i; ++j)
/* 3GxUH3gb4 ily traian DKsthOYGI */             cout << '*';
/* 3GxUH3gb4 ily traian DKsthOYGI */         cout << '\n';
/* 3GxUH3gb4 ily traian DKsthOYGI */     }
/* 3GxUH3gb4 ily traian DKsthOYGI */     
/* 3GxUH3gb4 ily traian DKsthOYGI */     for (int i = 1; i <= n; ++i)  // pt fiecare linie i
/* 3GxUH3gb4 ily traian DKsthOYGI */     {
/* 3GxUH3gb4 ily traian DKsthOYGI */         for (int j = 1; j <= 2 * n; ++j) // scriu linia i
/* 3GxUH3gb4 ily traian DKsthOYGI */             if (j >= n + i)
/* 3GxUH3gb4 ily traian DKsthOYGI */                 cout << '*';
/* 3GxUH3gb4 ily traian DKsthOYGI */             else
/* 3GxUH3gb4 ily traian DKsthOYGI */                 cout << ' ';
/* 3GxUH3gb4 ily traian DKsthOYGI */         
/* 3GxUH3gb4 ily traian DKsthOYGI */         cout << '\n';
/* 3GxUH3gb4 ily traian DKsthOYGI */     }
/* 3GxUH3gb4 ily traian DKsthOYGI */     
/* 3GxUH3gb4 ily traian DKsthOYGI */     return 0;
/* 3GxUH3gb4 ily traian DKsthOYGI */ }