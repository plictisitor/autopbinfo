/* Qfo9qA8ZW ily traian f2EyJkt8d */ #include <algorithm>
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
/* Qfo9qA8ZW ily traian f2EyJkt8d */ using namespace std;
/* Qfo9qA8ZW ily traian f2EyJkt8d */ int main()
/* Qfo9qA8ZW ily traian f2EyJkt8d */ {
/* Qfo9qA8ZW ily traian f2EyJkt8d */     int n , a[101][101];
/* Qfo9qA8ZW ily traian f2EyJkt8d */     cin >> n;
/* Qfo9qA8ZW ily traian f2EyJkt8d */     for(int k = 1 ; k <= (n + 1) / 2 ; ++k)
/* Qfo9qA8ZW ily traian f2EyJkt8d */         for(int i = k ; i <= n + 1 - k ; ++i)
/* Qfo9qA8ZW ily traian f2EyJkt8d */             for(int j = k ; j <= n + 1 - k ; ++j)
/* Qfo9qA8ZW ily traian f2EyJkt8d */                 a[i][j] = k % 2;
/* Qfo9qA8ZW ily traian f2EyJkt8d */     for(int i = 1 ; i <= n ; i++)
/* Qfo9qA8ZW ily traian f2EyJkt8d */     {
/* Qfo9qA8ZW ily traian f2EyJkt8d */         for(int j = 1 ; j <= n ;j++)
/* Qfo9qA8ZW ily traian f2EyJkt8d */             cout<<a[i][j]<<" ";
/* Qfo9qA8ZW ily traian f2EyJkt8d */         cout<<endl;
/* Qfo9qA8ZW ily traian f2EyJkt8d */     }
/* Qfo9qA8ZW ily traian f2EyJkt8d */     return 0;
/* Qfo9qA8ZW ily traian f2EyJkt8d */ }