/* glLP8exzt ily traian IUs0yi5Xq */ #include <algorithm>
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
/* glLP8exzt ily traian IUs0yi5Xq */ 
/* glLP8exzt ily traian IUs0yi5Xq */ using namespace std;
/* glLP8exzt ily traian IUs0yi5Xq */ 
/* glLP8exzt ily traian IUs0yi5Xq */ struct obiect
/* glLP8exzt ily traian IUs0yi5Xq */ {
/* glLP8exzt ily traian IUs0yi5Xq */     int greu, val;
/* glLP8exzt ily traian IUs0yi5Xq */ };
/* glLP8exzt ily traian IUs0yi5Xq */ 
/* glLP8exzt ily traian IUs0yi5Xq */ int n, gmax;
/* glLP8exzt ily traian IUs0yi5Xq */ obiect a[1005];
/* glLP8exzt ily traian IUs0yi5Xq */ 
/* glLP8exzt ily traian IUs0yi5Xq */ bool comp(obiect A, obiect B)
/* glLP8exzt ily traian IUs0yi5Xq */ {
/* glLP8exzt ily traian IUs0yi5Xq */     return A.val * B.greu > A.greu * B.val;
/* glLP8exzt ily traian IUs0yi5Xq */ }
/* glLP8exzt ily traian IUs0yi5Xq */ 
/* glLP8exzt ily traian IUs0yi5Xq */ int main()
/* glLP8exzt ily traian IUs0yi5Xq */ {
/* glLP8exzt ily traian IUs0yi5Xq */     cin >> n >> gmax;
/* glLP8exzt ily traian IUs0yi5Xq */     for(int i=1 ; i<=n ; ++i)
/* glLP8exzt ily traian IUs0yi5Xq */         cin >> a[i].greu >> a[i].val;
/* glLP8exzt ily traian IUs0yi5Xq */         
/* glLP8exzt ily traian IUs0yi5Xq */     sort (a + 1 , a + n + 1, comp);
/* glLP8exzt ily traian IUs0yi5Xq */     
/* glLP8exzt ily traian IUs0yi5Xq */     int g = 0 , i = 1;
/* glLP8exzt ily traian IUs0yi5Xq */     double rez = 0;
/* glLP8exzt ily traian IUs0yi5Xq */     while(i <= n)
/* glLP8exzt ily traian IUs0yi5Xq */     {
/* glLP8exzt ily traian IUs0yi5Xq */         if(g + a[i].greu <= gmax)
/* glLP8exzt ily traian IUs0yi5Xq */         {
/* glLP8exzt ily traian IUs0yi5Xq */             g += a[i].greu;
/* glLP8exzt ily traian IUs0yi5Xq */             rez += a[i].val;
/* glLP8exzt ily traian IUs0yi5Xq */             i ++;
/* glLP8exzt ily traian IUs0yi5Xq */         }
/* glLP8exzt ily traian IUs0yi5Xq */         else if(gmax - g > 0)
/* glLP8exzt ily traian IUs0yi5Xq */             {
/* glLP8exzt ily traian IUs0yi5Xq */                 double factor = 1.0 * (gmax - g) / a[i].greu;
/* glLP8exzt ily traian IUs0yi5Xq */                 g = gmax;
/* glLP8exzt ily traian IUs0yi5Xq */                 rez += factor * a[i].val;
/* glLP8exzt ily traian IUs0yi5Xq */                 i++;
/* glLP8exzt ily traian IUs0yi5Xq */             }
/* glLP8exzt ily traian IUs0yi5Xq */             else i = n + 1;
/* glLP8exzt ily traian IUs0yi5Xq */     }
/* glLP8exzt ily traian IUs0yi5Xq */     cout << rez;
/* glLP8exzt ily traian IUs0yi5Xq */     return 0;
/* glLP8exzt ily traian IUs0yi5Xq */ }