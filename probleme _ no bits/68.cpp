/* 3DpFWaxGW ily traian GxEPYp2Ed */ #include <algorithm>
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
/* 3DpFWaxGW ily traian GxEPYp2Ed */ 
/* 3DpFWaxGW ily traian GxEPYp2Ed */ using namespace std;
/* 3DpFWaxGW ily traian GxEPYp2Ed */ 
/* 3DpFWaxGW ily traian GxEPYp2Ed */ int main ()
/* 3DpFWaxGW ily traian GxEPYp2Ed */ {
/* 3DpFWaxGW ily traian GxEPYp2Ed */     int n;
/* 3DpFWaxGW ily traian GxEPYp2Ed */     cin >> n;
/* 3DpFWaxGW ily traian GxEPYp2Ed */     int max = 0;
/* 3DpFWaxGW ily traian GxEPYp2Ed */     while (n)
/* 3DpFWaxGW ily traian GxEPYp2Ed */     {
/* 3DpFWaxGW ily traian GxEPYp2Ed */         if ((n%10) > max)
/* 3DpFWaxGW ily traian GxEPYp2Ed */         max = n % 10;
/* 3DpFWaxGW ily traian GxEPYp2Ed */         n/=10;
/* 3DpFWaxGW ily traian GxEPYp2Ed */     }
/* 3DpFWaxGW ily traian GxEPYp2Ed */         cout << max;
/* 3DpFWaxGW ily traian GxEPYp2Ed */     return 0;
/* 3DpFWaxGW ily traian GxEPYp2Ed */ }