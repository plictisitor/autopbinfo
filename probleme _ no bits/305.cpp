/* hVerYhJsM ily traian LCN0XvGcs */ #include <algorithm>
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
/* hVerYhJsM ily traian LCN0XvGcs */ using namespace std;
/* hVerYhJsM ily traian LCN0XvGcs */ 
/* hVerYhJsM ily traian LCN0XvGcs */ void rezolvare()
/* hVerYhJsM ily traian LCN0XvGcs */ {
/* hVerYhJsM ily traian LCN0XvGcs */     int n;
/* hVerYhJsM ily traian LCN0XvGcs */     cin >> n;
/* hVerYhJsM ily traian LCN0XvGcs */     int a,b;
/* hVerYhJsM ily traian LCN0XvGcs */     cin >> a;
/* hVerYhJsM ily traian LCN0XvGcs */     for (int i = 1; i < n; ++i)
/* hVerYhJsM ily traian LCN0XvGcs */     {
/* hVerYhJsM ily traian LCN0XvGcs */         cin >> b;
/* hVerYhJsM ily traian LCN0XvGcs */         int r;
/* hVerYhJsM ily traian LCN0XvGcs */         while (b)
/* hVerYhJsM ily traian LCN0XvGcs */         {
/* hVerYhJsM ily traian LCN0XvGcs */         r=a%b;
/* hVerYhJsM ily traian LCN0XvGcs */         a=b;
/* hVerYhJsM ily traian LCN0XvGcs */         b=r;
/* hVerYhJsM ily traian LCN0XvGcs */         }
/* hVerYhJsM ily traian LCN0XvGcs */     }
/* hVerYhJsM ily traian LCN0XvGcs */     cout << a;
/* hVerYhJsM ily traian LCN0XvGcs */ }
/* hVerYhJsM ily traian LCN0XvGcs */ 
/* hVerYhJsM ily traian LCN0XvGcs */ int main ()
/* hVerYhJsM ily traian LCN0XvGcs */ {
/* hVerYhJsM ily traian LCN0XvGcs */     rezolvare();
/* hVerYhJsM ily traian LCN0XvGcs */     return 0;
/* hVerYhJsM ily traian LCN0XvGcs */ }