/* Y8HjbhVIm ily traian O15KDQ2hi */ #include <algorithm>
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
/* Y8HjbhVIm ily traian O15KDQ2hi */ using namespace std;
/* Y8HjbhVIm ily traian O15KDQ2hi */ 
/* Y8HjbhVIm ily traian O15KDQ2hi */ int main()
/* Y8HjbhVIm ily traian O15KDQ2hi */ {
/* Y8HjbhVIm ily traian O15KDQ2hi */     int n , m , a[103][103] , cnt = 0;
/* Y8HjbhVIm ily traian O15KDQ2hi */     cin >> n >> m;
/* Y8HjbhVIm ily traian O15KDQ2hi */     for(int i = 0 ; i <= n+1 ; ++i)
/* Y8HjbhVIm ily traian O15KDQ2hi */         for(int j = 0 ; j <= m+1 ; ++j)
/* Y8HjbhVIm ily traian O15KDQ2hi */         {
/* Y8HjbhVIm ily traian O15KDQ2hi */             if(i==0 || j==0 || i==n+1 || j == m+1)
/* Y8HjbhVIm ily traian O15KDQ2hi */             a[i][j]=2;
/* Y8HjbhVIm ily traian O15KDQ2hi */             else cin >> a[i][j];
/* Y8HjbhVIm ily traian O15KDQ2hi */         }
/* Y8HjbhVIm ily traian O15KDQ2hi */     for(int i = 1 ; i <= n ; ++i)
/* Y8HjbhVIm ily traian O15KDQ2hi */         for(int j = 1 ; j <= m ; ++j)
/* Y8HjbhVIm ily traian O15KDQ2hi */         {
/* Y8HjbhVIm ily traian O15KDQ2hi */             int  ok = 1;
/* Y8HjbhVIm ily traian O15KDQ2hi */             if(a[i+1][j] % 2 != 0 || a[i][j+1] % 2 != 0 || a[i][j-1] % 2 != 0 || a[i-1][j] % 2 != 0) ok = 0;
/* Y8HjbhVIm ily traian O15KDQ2hi */             if(ok) cnt++;
/* Y8HjbhVIm ily traian O15KDQ2hi */         }
/* Y8HjbhVIm ily traian O15KDQ2hi */     cout << cnt;
/* Y8HjbhVIm ily traian O15KDQ2hi */     return 0;
/* Y8HjbhVIm ily traian O15KDQ2hi */ }