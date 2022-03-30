/* D7JweagCL ily traian EkcSRuOuM */ #include <algorithm>
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
/* D7JweagCL ily traian EkcSRuOuM */ 
/* D7JweagCL ily traian EkcSRuOuM */ using namespace std;
/* D7JweagCL ily traian EkcSRuOuM */ int n , m ,  x[10] , a[10] , rez;
/* D7JweagCL ily traian EkcSRuOuM */ 
/* D7JweagCL ily traian EkcSRuOuM */ int valid(int k)
/* D7JweagCL ily traian EkcSRuOuM */ {
/* D7JweagCL ily traian EkcSRuOuM */     if(k == 1 && x[k] != 0) return 1;
/* D7JweagCL ily traian EkcSRuOuM */     if(abs(x[k] - x[k - 1]) > 1) return 1;
/* D7JweagCL ily traian EkcSRuOuM */     else return 0;
/* D7JweagCL ily traian EkcSRuOuM */ }
/* D7JweagCL ily traian EkcSRuOuM */ 
/* D7JweagCL ily traian EkcSRuOuM */ void afisare()
/* D7JweagCL ily traian EkcSRuOuM */ {
/* D7JweagCL ily traian EkcSRuOuM */     for(int i = 1 ; i <= n ; ++i)
/* D7JweagCL ily traian EkcSRuOuM */         cout << x[i];
/* D7JweagCL ily traian EkcSRuOuM */     cout << '\n';
/* D7JweagCL ily traian EkcSRuOuM */ }
/* D7JweagCL ily traian EkcSRuOuM */ 
/* D7JweagCL ily traian EkcSRuOuM */ void back(int k)
/* D7JweagCL ily traian EkcSRuOuM */ {
/* D7JweagCL ily traian EkcSRuOuM */     for(int i = 0 ; i < m ; ++i)
/* D7JweagCL ily traian EkcSRuOuM */     {
/* D7JweagCL ily traian EkcSRuOuM */         x[k] = i;
/* D7JweagCL ily traian EkcSRuOuM */         if(valid(k))
/* D7JweagCL ily traian EkcSRuOuM */         {
/* D7JweagCL ily traian EkcSRuOuM */             if(k == n)afisare();
/* D7JweagCL ily traian EkcSRuOuM */             else back(k + 1);
/* D7JweagCL ily traian EkcSRuOuM */         }
/* D7JweagCL ily traian EkcSRuOuM */     }
/* D7JweagCL ily traian EkcSRuOuM */ }
/* D7JweagCL ily traian EkcSRuOuM */ 
/* D7JweagCL ily traian EkcSRuOuM */ int main()
/* D7JweagCL ily traian EkcSRuOuM */ {
/* D7JweagCL ily traian EkcSRuOuM */     cin >> n >> m;
/* D7JweagCL ily traian EkcSRuOuM */     back(1);
/* D7JweagCL ily traian EkcSRuOuM */     return 0;
/* D7JweagCL ily traian EkcSRuOuM */ }