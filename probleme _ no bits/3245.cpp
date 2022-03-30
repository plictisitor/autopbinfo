/* yM6DOHBlh ily traian e211RL0WY */ #include <algorithm>
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
/* yM6DOHBlh ily traian e211RL0WY */ using namespace std;
/* yM6DOHBlh ily traian e211RL0WY */ 
/* yM6DOHBlh ily traian e211RL0WY */ int n , a[101][101] , maxi;
/* yM6DOHBlh ily traian e211RL0WY */ 
/* yM6DOHBlh ily traian e211RL0WY */ int main()
/* yM6DOHBlh ily traian e211RL0WY */ {
/* yM6DOHBlh ily traian e211RL0WY */     cin >> n;
/* yM6DOHBlh ily traian e211RL0WY */     for(int i = 1 ; i <= n ; i++)
/* yM6DOHBlh ily traian e211RL0WY */         for(int j = 1 ; j <= n ; j++)
/* yM6DOHBlh ily traian e211RL0WY */             cin >> a[i][j];
/* yM6DOHBlh ily traian e211RL0WY */         
/* yM6DOHBlh ily traian e211RL0WY */     for(int i = 1 ; i <= n ; i++) a[1][i] = 0;
/* yM6DOHBlh ily traian e211RL0WY */ 
/* yM6DOHBlh ily traian e211RL0WY */     for(int i = 2 ; i <= n ; i++)
/* yM6DOHBlh ily traian e211RL0WY */         for(int j = 1 ; j <= n ; j++)
/* yM6DOHBlh ily traian e211RL0WY */         {
/* yM6DOHBlh ily traian e211RL0WY */             if(a[i][j] == 0) a[i][j] += a[i - 1][j];
/* yM6DOHBlh ily traian e211RL0WY */             else a[i][j] += max(a[i - 1][j - 1] , a[i - 1][j + 1]);
/* yM6DOHBlh ily traian e211RL0WY */         }
/* yM6DOHBlh ily traian e211RL0WY */ 
/* yM6DOHBlh ily traian e211RL0WY */     for(int i = 1 ; i <= n ; i++)
/* yM6DOHBlh ily traian e211RL0WY */         maxi = max(a[n][i] , maxi);
/* yM6DOHBlh ily traian e211RL0WY */ 
/* yM6DOHBlh ily traian e211RL0WY */     cout << maxi;
/* yM6DOHBlh ily traian e211RL0WY */ }