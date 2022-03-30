/* WY6xBuf8g ily traian PimZSzivU */ #include <algorithm>
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
/* WY6xBuf8g ily traian PimZSzivU */ void FRadical(int n, int &x, int &y){
/* WY6xBuf8g ily traian PimZSzivU */     int maxi = 0;
/* WY6xBuf8g ily traian PimZSzivU */     for(int d = 1; d * d <= n; ++d){
/* WY6xBuf8g ily traian PimZSzivU */         if(n % d == 0){
/* WY6xBuf8g ily traian PimZSzivU */             int nr = d;
/* WY6xBuf8g ily traian PimZSzivU */             int r = sqrt(nr);
/* WY6xBuf8g ily traian PimZSzivU */             if(r * r == nr && nr > maxi)
/* WY6xBuf8g ily traian PimZSzivU */                 maxi = nr, y = n / d;
/* WY6xBuf8g ily traian PimZSzivU */             nr = n / d;
/* WY6xBuf8g ily traian PimZSzivU */             r = sqrt(nr);
/* WY6xBuf8g ily traian PimZSzivU */             if(r * r == nr && nr > maxi)
/* WY6xBuf8g ily traian PimZSzivU */                 maxi = nr, y = d;
/* WY6xBuf8g ily traian PimZSzivU */         }
/* WY6xBuf8g ily traian PimZSzivU */     }
/* WY6xBuf8g ily traian PimZSzivU */     x = sqrt(maxi);
/* WY6xBuf8g ily traian PimZSzivU */ }