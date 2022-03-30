/* aQWTMy4yt ily traian E5F89zmEu */ #include <algorithm>
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
/* aQWTMy4yt ily traian E5F89zmEu */ 
/* aQWTMy4yt ily traian E5F89zmEu */ using namespace std;
/* aQWTMy4yt ily traian E5F89zmEu */ 
/* aQWTMy4yt ily traian E5F89zmEu */ int main()
/* aQWTMy4yt ily traian E5F89zmEu */ {
/* aQWTMy4yt ily traian E5F89zmEu */     int n;
/* aQWTMy4yt ily traian E5F89zmEu */     cin >> n;
/* aQWTMy4yt ily traian E5F89zmEu */     int a[1001];
/* aQWTMy4yt ily traian E5F89zmEu */     for(int i = 1; i <= n; ++i){
/* aQWTMy4yt ily traian E5F89zmEu */         int x;
/* aQWTMy4yt ily traian E5F89zmEu */         cin >> x;
/* aQWTMy4yt ily traian E5F89zmEu */         while(x > 9)
/* aQWTMy4yt ily traian E5F89zmEu */             x/=10;
/* aQWTMy4yt ily traian E5F89zmEu */         a[i] = x;
/* aQWTMy4yt ily traian E5F89zmEu */     }
/* aQWTMy4yt ily traian E5F89zmEu */ 
/* aQWTMy4yt ily traian E5F89zmEu */     for(int i = 1; i < n; ++i)
/* aQWTMy4yt ily traian E5F89zmEu */         for(int j = i + 1; j <= n; ++j)
/* aQWTMy4yt ily traian E5F89zmEu */             if(a[i] > a[j])
/* aQWTMy4yt ily traian E5F89zmEu */                 swap(a[i], a[j]);
/* aQWTMy4yt ily traian E5F89zmEu */ 
/* aQWTMy4yt ily traian E5F89zmEu */     for(int i = 1; i <= n; ++i)
/* aQWTMy4yt ily traian E5F89zmEu */         cout << a[i];
/* aQWTMy4yt ily traian E5F89zmEu */ 
/* aQWTMy4yt ily traian E5F89zmEu */     return 0;
/* aQWTMy4yt ily traian E5F89zmEu */ }