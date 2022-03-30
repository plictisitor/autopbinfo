/* g6BEuhAqQ ily traian P7DI1JDsq */ #include <algorithm>
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
/* g6BEuhAqQ ily traian P7DI1JDsq */ using namespace std;
/* g6BEuhAqQ ily traian P7DI1JDsq */ 
/* g6BEuhAqQ ily traian P7DI1JDsq */ ifstream cin("sumtri.in");
/* g6BEuhAqQ ily traian P7DI1JDsq */ ofstream cout("sumtri.out");
/* g6BEuhAqQ ily traian P7DI1JDsq */ 
/* g6BEuhAqQ ily traian P7DI1JDsq */ int n , a[101][101] , maxi;
/* g6BEuhAqQ ily traian P7DI1JDsq */ 
/* g6BEuhAqQ ily traian P7DI1JDsq */ int main()
/* g6BEuhAqQ ily traian P7DI1JDsq */ {
/* g6BEuhAqQ ily traian P7DI1JDsq */     cin >> n;
/* g6BEuhAqQ ily traian P7DI1JDsq */     for(int i = 1 ; i <= n ; i++)
/* g6BEuhAqQ ily traian P7DI1JDsq */     {
/* g6BEuhAqQ ily traian P7DI1JDsq */         for(int j = 1 ; j <= i ; j++)
/* g6BEuhAqQ ily traian P7DI1JDsq */             cin >> a[i][j];
/* g6BEuhAqQ ily traian P7DI1JDsq */     }
/* g6BEuhAqQ ily traian P7DI1JDsq */     for(int i = 1 ; i <= n ; i++)
/* g6BEuhAqQ ily traian P7DI1JDsq */     {
/* g6BEuhAqQ ily traian P7DI1JDsq */         for(int j = 1 ; j <= i ; j++)
/* g6BEuhAqQ ily traian P7DI1JDsq */             a[i][j] += max(a[i - 1][j] , a[i - 1][j - 1]);
/* g6BEuhAqQ ily traian P7DI1JDsq */     }
/* g6BEuhAqQ ily traian P7DI1JDsq */     for(int i = 1 ; i <= n ; i++)
/* g6BEuhAqQ ily traian P7DI1JDsq */         maxi = max(a[n][i] , maxi);
/* g6BEuhAqQ ily traian P7DI1JDsq */ 
/* g6BEuhAqQ ily traian P7DI1JDsq */     cout << maxi;
/* g6BEuhAqQ ily traian P7DI1JDsq */ }