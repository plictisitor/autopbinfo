/* GhEnbdWhP ily traian mTRyKcq8X */ #include <algorithm>
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
/* GhEnbdWhP ily traian mTRyKcq8X */ using namespace std;
/* GhEnbdWhP ily traian mTRyKcq8X */ 
/* GhEnbdWhP ily traian mTRyKcq8X */ ifstream cin("summax.in");
/* GhEnbdWhP ily traian mTRyKcq8X */ ofstream cout("summax.out");
/* GhEnbdWhP ily traian mTRyKcq8X */ 
/* GhEnbdWhP ily traian mTRyKcq8X */ int x[11] , p[11] , a[11][11] , n , smax , s;
/* GhEnbdWhP ily traian mTRyKcq8X */ 
/* GhEnbdWhP ily traian mTRyKcq8X */ 
/* GhEnbdWhP ily traian mTRyKcq8X */ void back(int k)
/* GhEnbdWhP ily traian mTRyKcq8X */ {
/* GhEnbdWhP ily traian mTRyKcq8X */     for(int i = 1 ; i <= n ; ++i)
/* GhEnbdWhP ily traian mTRyKcq8X */         if(!p[i])
/* GhEnbdWhP ily traian mTRyKcq8X */         {
/* GhEnbdWhP ily traian mTRyKcq8X */             p[i] = 1;
/* GhEnbdWhP ily traian mTRyKcq8X */             x[k] = i;
/* GhEnbdWhP ily traian mTRyKcq8X */             if(k == n)
/* GhEnbdWhP ily traian mTRyKcq8X */             {
/* GhEnbdWhP ily traian mTRyKcq8X */                 s = 0;
/* GhEnbdWhP ily traian mTRyKcq8X */                 for(int j = 1 ; j <= n ; j++)
/* GhEnbdWhP ily traian mTRyKcq8X */                     s += a[j][x[j]];
/* GhEnbdWhP ily traian mTRyKcq8X */                 if(s>smax) smax = s;
/* GhEnbdWhP ily traian mTRyKcq8X */             }
/* GhEnbdWhP ily traian mTRyKcq8X */             else back(k + 1);
/* GhEnbdWhP ily traian mTRyKcq8X */             p[i] = 0;
/* GhEnbdWhP ily traian mTRyKcq8X */         }
/* GhEnbdWhP ily traian mTRyKcq8X */ }
/* GhEnbdWhP ily traian mTRyKcq8X */ int main()
/* GhEnbdWhP ily traian mTRyKcq8X */ {
/* GhEnbdWhP ily traian mTRyKcq8X */     cin >> n;
/* GhEnbdWhP ily traian mTRyKcq8X */     for(int i = 1 ; i <= n ; ++i)
/* GhEnbdWhP ily traian mTRyKcq8X */         for(int j = 1 ; j <= n ; ++j)
/* GhEnbdWhP ily traian mTRyKcq8X */             cin >> a[i][j];
/* GhEnbdWhP ily traian mTRyKcq8X */     back(1);
/* GhEnbdWhP ily traian mTRyKcq8X */     cout << smax;
/* GhEnbdWhP ily traian mTRyKcq8X */     return 0;
/* GhEnbdWhP ily traian mTRyKcq8X */ }