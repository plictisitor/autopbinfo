/* U8ji4ivDu ily traian zHPTm9UKy */ #include <algorithm>
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
/* U8ji4ivDu ily traian zHPTm9UKy */ using namespace std;
/* U8ji4ivDu ily traian zHPTm9UKy */ 
/* U8ji4ivDu ily traian zHPTm9UKy */ ifstream cin("gcd.in");
/* U8ji4ivDu ily traian zHPTm9UKy */ ofstream cout("gcd.out");
/* U8ji4ivDu ily traian zHPTm9UKy */ 
/* U8ji4ivDu ily traian zHPTm9UKy */ int n , a[1000001] , b[1000001] , c , maxi , x[1000001] , y[1000001];
/* U8ji4ivDu ily traian zHPTm9UKy */ 
/* U8ji4ivDu ily traian zHPTm9UKy */ int main()
/* U8ji4ivDu ily traian zHPTm9UKy */ {
/* U8ji4ivDu ily traian zHPTm9UKy */     cin >> n;
/* U8ji4ivDu ily traian zHPTm9UKy */     for(int i = 1 ; i <= n ; ++i)
/* U8ji4ivDu ily traian zHPTm9UKy */     {
/* U8ji4ivDu ily traian zHPTm9UKy */         cin >> c;
/* U8ji4ivDu ily traian zHPTm9UKy */         a[c]++;
/* U8ji4ivDu ily traian zHPTm9UKy */         if(c > maxi) maxi = c;
/* U8ji4ivDu ily traian zHPTm9UKy */     }
/* U8ji4ivDu ily traian zHPTm9UKy */     for(int i = 1 ; i <= n ; ++i)
/* U8ji4ivDu ily traian zHPTm9UKy */     {
/* U8ji4ivDu ily traian zHPTm9UKy */         cin >> c;
/* U8ji4ivDu ily traian zHPTm9UKy */         b[c]++;
/* U8ji4ivDu ily traian zHPTm9UKy */         if(c > maxi) maxi = c;
/* U8ji4ivDu ily traian zHPTm9UKy */     }
/* U8ji4ivDu ily traian zHPTm9UKy */     for(int i = 1 ; i <= maxi ; ++i)
/* U8ji4ivDu ily traian zHPTm9UKy */         for(int j = i ; j <= maxi ; j += i)
/* U8ji4ivDu ily traian zHPTm9UKy */         {
/* U8ji4ivDu ily traian zHPTm9UKy */             if(a[j] != 0) x[i] = max(x[i] , j);
/* U8ji4ivDu ily traian zHPTm9UKy */             if(b[j] != 0) y[i] = max(y[i] , j);
/* U8ji4ivDu ily traian zHPTm9UKy */         }
/* U8ji4ivDu ily traian zHPTm9UKy */     int ok = 0;
/* U8ji4ivDu ily traian zHPTm9UKy */     for(int i = maxi ; i >= 0 ; --i)
/* U8ji4ivDu ily traian zHPTm9UKy */         if(x[i]&&y[i]) break;
/* U8ji4ivDu ily traian zHPTm9UKy */         else ok++;
/* U8ji4ivDu ily traian zHPTm9UKy */     cout << maxi - ok;
/* U8ji4ivDu ily traian zHPTm9UKy */     return 0;
/* U8ji4ivDu ily traian zHPTm9UKy */ }