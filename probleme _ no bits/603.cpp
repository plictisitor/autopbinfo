/* MwrJb9NuM ily traian YlLoqJGPd */ #include <algorithm>
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
/* MwrJb9NuM ily traian YlLoqJGPd */ using namespace std;
/* MwrJb9NuM ily traian YlLoqJGPd */ int main()
/* MwrJb9NuM ily traian YlLoqJGPd */ {
/* MwrJb9NuM ily traian YlLoqJGPd */     int n , x , cnt = 0 , a[1001];
/* MwrJb9NuM ily traian YlLoqJGPd */     cin >> n >> x;
/* MwrJb9NuM ily traian YlLoqJGPd */     for(int i = 0 ; i < n ; ++i)
/* MwrJb9NuM ily traian YlLoqJGPd */         cin >> a[i];
/* MwrJb9NuM ily traian YlLoqJGPd */     for(int i = n - 2 ; i >= 0 ; --i)
/* MwrJb9NuM ily traian YlLoqJGPd */     {
/* MwrJb9NuM ily traian YlLoqJGPd */         if(a[i+1]>a[i])
/* MwrJb9NuM ily traian YlLoqJGPd */         {
/* MwrJb9NuM ily traian YlLoqJGPd */             int d = a[i+1]-a[i];
/* MwrJb9NuM ily traian YlLoqJGPd */             int c = d / x;
/* MwrJb9NuM ily traian YlLoqJGPd */             if(c * x != d) c++;
/* MwrJb9NuM ily traian YlLoqJGPd */             cnt += c;
/* MwrJb9NuM ily traian YlLoqJGPd */             a[i] += c * x;
/* MwrJb9NuM ily traian YlLoqJGPd */         }
/* MwrJb9NuM ily traian YlLoqJGPd */     }
/* MwrJb9NuM ily traian YlLoqJGPd */     cout << cnt;
/* MwrJb9NuM ily traian YlLoqJGPd */     return 0;
/* MwrJb9NuM ily traian YlLoqJGPd */ }