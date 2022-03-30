/* 1dDFi2OAx ily traian tjCLYSFNw */ #include <algorithm>
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
/* 1dDFi2OAx ily traian tjCLYSFNw */ 
/* 1dDFi2OAx ily traian tjCLYSFNw */ using namespace std;
/* 1dDFi2OAx ily traian tjCLYSFNw */ int main()
/* 1dDFi2OAx ily traian tjCLYSFNw */ {
/* 1dDFi2OAx ily traian tjCLYSFNw */     long long n , a[1001];
/* 1dDFi2OAx ily traian tjCLYSFNw */     cin >> n;
/* 1dDFi2OAx ily traian tjCLYSFNw */     n -= 2;
/* 1dDFi2OAx ily traian tjCLYSFNw */     for(int i = 0 ; i < n; ++i)
/* 1dDFi2OAx ily traian tjCLYSFNw */         cin >> a[i];
/* 1dDFi2OAx ily traian tjCLYSFNw */     sort(a , a+n);
/* 1dDFi2OAx ily traian tjCLYSFNw */     int r = (a[n-1]-a[0])/(n+1) , p = 1;
/* 1dDFi2OAx ily traian tjCLYSFNw */     int x = a[0];
/* 1dDFi2OAx ily traian tjCLYSFNw */     for(int i = 0 ; i < n+1 ; ++i)
/* 1dDFi2OAx ily traian tjCLYSFNw */     {
/* 1dDFi2OAx ily traian tjCLYSFNw */         x += r;
/* 1dDFi2OAx ily traian tjCLYSFNw */         if(x!=a[p]) cout << x << " ";
/* 1dDFi2OAx ily traian tjCLYSFNw */         else p++;
/* 1dDFi2OAx ily traian tjCLYSFNw */     }
/* 1dDFi2OAx ily traian tjCLYSFNw */ }