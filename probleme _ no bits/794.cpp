/* vTIslv5BM ily traian AXxgyY6Fd */ #include <algorithm>
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
/* vTIslv5BM ily traian AXxgyY6Fd */ using namespace std;
/* vTIslv5BM ily traian AXxgyY6Fd */ int main()
/* vTIslv5BM ily traian AXxgyY6Fd */ {
/* vTIslv5BM ily traian AXxgyY6Fd */     int n, p = 0, j , k , a[30][30];
/* vTIslv5BM ily traian AXxgyY6Fd */     cin >> n;
/* vTIslv5BM ily traian AXxgyY6Fd */     for(int i = 1 ; i <= n ; ++i)
/* vTIslv5BM ily traian AXxgyY6Fd */         for(j = 1 ; j <= n ; ++j) cin >> a[i][j];
/* vTIslv5BM ily traian AXxgyY6Fd */     for(k = 1 ; k <= 2 * n - 1 ; ++k)
/* vTIslv5BM ily traian AXxgyY6Fd */     {
/* vTIslv5BM ily traian AXxgyY6Fd */         if(k > n) p++;
/* vTIslv5BM ily traian AXxgyY6Fd */         if(k % 2 == 0)
/* vTIslv5BM ily traian AXxgyY6Fd */             for(j = k - p ; j > p ; j--) cout<<a[j][k+1-j] <<" ";
/* vTIslv5BM ily traian AXxgyY6Fd */         else
/* vTIslv5BM ily traian AXxgyY6Fd */             for(j = p + 1 ; j <= k - p;++j) cout << a[j][k+1-j]<<" ";
/* vTIslv5BM ily traian AXxgyY6Fd */     }
/* vTIslv5BM ily traian AXxgyY6Fd */     return 0;
/* vTIslv5BM ily traian AXxgyY6Fd */ }