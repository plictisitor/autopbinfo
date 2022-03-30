/* tCdr5I9ev ily traian FVeb85WTE */ #include <algorithm>
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
/* tCdr5I9ev ily traian FVeb85WTE */ 
/* tCdr5I9ev ily traian FVeb85WTE */ using namespace std;
/* tCdr5I9ev ily traian FVeb85WTE */ 
/* tCdr5I9ev ily traian FVeb85WTE */ int sc(int i)
/* tCdr5I9ev ily traian FVeb85WTE */ {
/* tCdr5I9ev ily traian FVeb85WTE */     int sum = 0;
/* tCdr5I9ev ily traian FVeb85WTE */     while(i)
/* tCdr5I9ev ily traian FVeb85WTE */     {
/* tCdr5I9ev ily traian FVeb85WTE */         sum += i % 10;
/* tCdr5I9ev ily traian FVeb85WTE */         i/=10;
/* tCdr5I9ev ily traian FVeb85WTE */     }
/* tCdr5I9ev ily traian FVeb85WTE */     return sum;
/* tCdr5I9ev ily traian FVeb85WTE */ }
/* tCdr5I9ev ily traian FVeb85WTE */ 
/* tCdr5I9ev ily traian FVeb85WTE */ int main()
/* tCdr5I9ev ily traian FVeb85WTE */ {
/* tCdr5I9ev ily traian FVeb85WTE */     int n, s;
/* tCdr5I9ev ily traian FVeb85WTE */     cin >> n >> s;
/* tCdr5I9ev ily traian FVeb85WTE */     int min = pow(10, n-1);
/* tCdr5I9ev ily traian FVeb85WTE */     int max = pow(10, n-1) * 9;
/* tCdr5I9ev ily traian FVeb85WTE */     for(int i = 0 ; i < n-1; ++i)
/* tCdr5I9ev ily traian FVeb85WTE */         max+=pow(10, i) * 9;
/* tCdr5I9ev ily traian FVeb85WTE */         int cnt = 0;
/* tCdr5I9ev ily traian FVeb85WTE */     for(int i = min; i <= max; ++i)
/* tCdr5I9ev ily traian FVeb85WTE */     {
/* tCdr5I9ev ily traian FVeb85WTE */         if(sc(i) == s)
/* tCdr5I9ev ily traian FVeb85WTE */         cout << i << ' ', cnt++;
/* tCdr5I9ev ily traian FVeb85WTE */     }
/* tCdr5I9ev ily traian FVeb85WTE */     if(cnt!=0)
/* tCdr5I9ev ily traian FVeb85WTE */     cout << endl << cnt;
/* tCdr5I9ev ily traian FVeb85WTE */     else
/* tCdr5I9ev ily traian FVeb85WTE */        cout << 0;
/* tCdr5I9ev ily traian FVeb85WTE */     return 0;   
/* tCdr5I9ev ily traian FVeb85WTE */ }