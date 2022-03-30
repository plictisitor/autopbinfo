/* ZJv268Zuq ily traian INupFfmFy */ #include <algorithm>
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
/* ZJv268Zuq ily traian INupFfmFy */ 
/* ZJv268Zuq ily traian INupFfmFy */ using namespace std;
/* ZJv268Zuq ily traian INupFfmFy */ int main()
/* ZJv268Zuq ily traian INupFfmFy */ {
/* ZJv268Zuq ily traian INupFfmFy */     int n , m , a[1001][1001] , s = 0;
/* ZJv268Zuq ily traian INupFfmFy */     cin >> n >> m;
/* ZJv268Zuq ily traian INupFfmFy */     for(int i = 0 ; i < n ; ++i)
/* ZJv268Zuq ily traian INupFfmFy */         for(int j = 0 ; j < m ; ++j) cin >> a[i][j];
/* ZJv268Zuq ily traian INupFfmFy */     for(int j = 0 ; j < m ; ++j)
/* ZJv268Zuq ily traian INupFfmFy */     {
/* ZJv268Zuq ily traian INupFfmFy */         int mini = 10001;
/* ZJv268Zuq ily traian INupFfmFy */         for(int i = 0 ; i < n ; ++i)
/* ZJv268Zuq ily traian INupFfmFy */         {
/* ZJv268Zuq ily traian INupFfmFy */             if(a[i][j] < mini) mini = a[i][j];
/* ZJv268Zuq ily traian INupFfmFy */         }
/* ZJv268Zuq ily traian INupFfmFy */         s += mini;
/* ZJv268Zuq ily traian INupFfmFy */     }
/* ZJv268Zuq ily traian INupFfmFy */     cout << s;
/* ZJv268Zuq ily traian INupFfmFy */     return 0;
/* ZJv268Zuq ily traian INupFfmFy */ }