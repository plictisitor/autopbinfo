/* fRvFWqXgR ily traian XJ0PrRmXD */ #include <algorithm>
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
/* fRvFWqXgR ily traian XJ0PrRmXD */ using namespace std;
/* fRvFWqXgR ily traian XJ0PrRmXD */ int main()
/* fRvFWqXgR ily traian XJ0PrRmXD */ {
/* fRvFWqXgR ily traian XJ0PrRmXD */     int a[101][101] , n , m , cnt = 0;
/* fRvFWqXgR ily traian XJ0PrRmXD */     cin  >> n >> m;
/* fRvFWqXgR ily traian XJ0PrRmXD */     for (int i = 1 ;i <= n ; ++i)
/* fRvFWqXgR ily traian XJ0PrRmXD */         for(int j = 1 ; j <= m ; ++j) cin >> a[i][j];
/* fRvFWqXgR ily traian XJ0PrRmXD */     for(int i = 1 ; i < n ; i ++)
/* fRvFWqXgR ily traian XJ0PrRmXD */         for(int k = i+1 ; k <= n ; k++)
/* fRvFWqXgR ily traian XJ0PrRmXD */         {
/* fRvFWqXgR ily traian XJ0PrRmXD */             int ok = 0;
/* fRvFWqXgR ily traian XJ0PrRmXD */             for(int j = 1 ; j <= m ; j ++)
/* fRvFWqXgR ily traian XJ0PrRmXD */                 if(a[i][j] != a[k][j])
/* fRvFWqXgR ily traian XJ0PrRmXD */                     ok = 1;
/* fRvFWqXgR ily traian XJ0PrRmXD */             if(ok == 0) cnt ++;
/* fRvFWqXgR ily traian XJ0PrRmXD */ 
/* fRvFWqXgR ily traian XJ0PrRmXD */         }
/* fRvFWqXgR ily traian XJ0PrRmXD */     cout << cnt;
/* fRvFWqXgR ily traian XJ0PrRmXD */     return 0;
/* fRvFWqXgR ily traian XJ0PrRmXD */ }