/* 7AAkS7je6 ily traian 4xhgmpXvu */ #include <algorithm>
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
/* 7AAkS7je6 ily traian 4xhgmpXvu */ 
/* 7AAkS7je6 ily traian 4xhgmpXvu */ using namespace std;
/* 7AAkS7je6 ily traian 4xhgmpXvu */ 
/* 7AAkS7je6 ily traian 4xhgmpXvu */ 
/* 7AAkS7je6 ily traian 4xhgmpXvu */ int main()
/* 7AAkS7je6 ily traian 4xhgmpXvu */ {
/* 7AAkS7je6 ily traian 4xhgmpXvu */     int n;
/* 7AAkS7je6 ily traian 4xhgmpXvu */     cin >> n;
/* 7AAkS7je6 ily traian 4xhgmpXvu */     int cnt=0;
/* 7AAkS7je6 ily traian 4xhgmpXvu */ 
/* 7AAkS7je6 ily traian 4xhgmpXvu */     long long sumaDiv = 0;
/* 7AAkS7je6 ily traian 4xhgmpXvu */     for (int d = 1; d * d <= n; ++d)
/* 7AAkS7je6 ily traian 4xhgmpXvu */         if (n % d == 0)
/* 7AAkS7je6 ily traian 4xhgmpXvu */         {
/* 7AAkS7je6 ily traian 4xhgmpXvu */             sumaDiv += d;
/* 7AAkS7je6 ily traian 4xhgmpXvu */             if (d * d != n)
/* 7AAkS7je6 ily traian 4xhgmpXvu */                 {sumaDiv += n / d;
/* 7AAkS7je6 ily traian 4xhgmpXvu */                 }
/* 7AAkS7je6 ily traian 4xhgmpXvu */         }
/* 7AAkS7je6 ily traian 4xhgmpXvu */         if (sumaDiv == 2*n)
/* 7AAkS7je6 ily traian 4xhgmpXvu */         cout << n << " este perfect";
/* 7AAkS7je6 ily traian 4xhgmpXvu */         else
/* 7AAkS7je6 ily traian 4xhgmpXvu */         cout << n << " nu este perfect";
/* 7AAkS7je6 ily traian 4xhgmpXvu */     return 0;
/* 7AAkS7je6 ily traian 4xhgmpXvu */ }