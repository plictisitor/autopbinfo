/* kFW4wFjv7 ily traian IUXN6b7pO */ #include <algorithm>
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
/* kFW4wFjv7 ily traian IUXN6b7pO */ using namespace std;
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */ ifstream cin("sumtri_xi.in");
/* kFW4wFjv7 ily traian IUXN6b7pO */ ofstream cout("sumtri_xi.out");
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */ int n , a[105][105] , maxi = -999999999;
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */ int main()
/* kFW4wFjv7 ily traian IUXN6b7pO */ {
/* kFW4wFjv7 ily traian IUXN6b7pO */     cin >> n;
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */     for(int i = 1 ; i <= n ; i++)
/* kFW4wFjv7 ily traian IUXN6b7pO */         for(int j = 1 ; j <= i ; j++)
/* kFW4wFjv7 ily traian IUXN6b7pO */             cin >> a[i][j];
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */     for(int i = n; i >= 1 ; i--)
/* kFW4wFjv7 ily traian IUXN6b7pO */         for(int j = i ; j >= 1 ; j--)
/* kFW4wFjv7 ily traian IUXN6b7pO */             if(i == j) a[i][j] += a[i + 1][j + 1];
/* kFW4wFjv7 ily traian IUXN6b7pO */              else if(i == n) a[i][j] += a[i][j + 1];
/* kFW4wFjv7 ily traian IUXN6b7pO */                 else   a[i][j] += max(a[i][j + 1] , a[i + 1][j + 1]);
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */     for(int i = 1 ; i <= n ; i++)
/* kFW4wFjv7 ily traian IUXN6b7pO */         if(a[i][1] > maxi) maxi = a[i][1];
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */     cout << maxi;
/* kFW4wFjv7 ily traian IUXN6b7pO */ 
/* kFW4wFjv7 ily traian IUXN6b7pO */ }