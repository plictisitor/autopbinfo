/* rk32qGjlk ily traian LNDp0r8my */ #include <algorithm>
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
/* rk32qGjlk ily traian LNDp0r8my */ using namespace std;
/* rk32qGjlk ily traian LNDp0r8my */ ifstream cin("maxn.in");
/* rk32qGjlk ily traian LNDp0r8my */ ofstream cout("maxn.out");
/* rk32qGjlk ily traian LNDp0r8my */ int main()
/* rk32qGjlk ily traian LNDp0r8my */ {
/* rk32qGjlk ily traian LNDp0r8my */     int n , m , a[100001] , x , ind = 0;
/* rk32qGjlk ily traian LNDp0r8my */     cin >> n;
/* rk32qGjlk ily traian LNDp0r8my */     for(int i = 1 ; i <= n ; ++i) cin >> a[i];
/* rk32qGjlk ily traian LNDp0r8my */     int max = a[1];
/* rk32qGjlk ily traian LNDp0r8my */     for(int i = 1 ; i <= n ; ++i)
/* rk32qGjlk ily traian LNDp0r8my */     {
/* rk32qGjlk ily traian LNDp0r8my */         if(a[i] > max)
/* rk32qGjlk ily traian LNDp0r8my */         {
/* rk32qGjlk ily traian LNDp0r8my */             max = a[i];
/* rk32qGjlk ily traian LNDp0r8my */             cout << max << " ";
/* rk32qGjlk ily traian LNDp0r8my */         }
/* rk32qGjlk ily traian LNDp0r8my */         else cout << max << " ";
/* rk32qGjlk ily traian LNDp0r8my */     }
/* rk32qGjlk ily traian LNDp0r8my */ }