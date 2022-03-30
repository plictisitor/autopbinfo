/* REbYZIyHT ily traian YnOF3Lu72 */ #include <algorithm>
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
/* REbYZIyHT ily traian YnOF3Lu72 */ using namespace std;
/* REbYZIyHT ily traian YnOF3Lu72 */ long long x , y , a[20] , b[20] , mini , maxi , c1 , c2;
/* REbYZIyHT ily traian YnOF3Lu72 */ int main()
/* REbYZIyHT ily traian YnOF3Lu72 */ {
/* REbYZIyHT ily traian YnOF3Lu72 */     cin >> x >> y;
/* REbYZIyHT ily traian YnOF3Lu72 */     mini = 100;
/* REbYZIyHT ily traian YnOF3Lu72 */     while(x)
/* REbYZIyHT ily traian YnOF3Lu72 */     {
/* REbYZIyHT ily traian YnOF3Lu72 */         a[++c1] = x % 10;
/* REbYZIyHT ily traian YnOF3Lu72 */         x /= 10;
/* REbYZIyHT ily traian YnOF3Lu72 */     }
/* REbYZIyHT ily traian YnOF3Lu72 */     while(y)
/* REbYZIyHT ily traian YnOF3Lu72 */     {
/* REbYZIyHT ily traian YnOF3Lu72 */         b[++c2] = y % 10;
/* REbYZIyHT ily traian YnOF3Lu72 */         y /= 10;
/* REbYZIyHT ily traian YnOF3Lu72 */     }
/* REbYZIyHT ily traian YnOF3Lu72 */     for(int i = 1 ; i <= c1 ; i++)
/* REbYZIyHT ily traian YnOF3Lu72 */     {
/* REbYZIyHT ily traian YnOF3Lu72 */         for(int j = 1 ; j <= c2 ; j++)
/* REbYZIyHT ily traian YnOF3Lu72 */         {
/* REbYZIyHT ily traian YnOF3Lu72 */             if(a[i] * 10 + b[j] > 9)
/* REbYZIyHT ily traian YnOF3Lu72 */             {
/* REbYZIyHT ily traian YnOF3Lu72 */                 mini = min(mini , a[i] * 10 + b[j]);
/* REbYZIyHT ily traian YnOF3Lu72 */                 maxi = max(maxi , a[i] * 10 + b[j]);
/* REbYZIyHT ily traian YnOF3Lu72 */             }
/* REbYZIyHT ily traian YnOF3Lu72 */             if(b[j] * 10 + a[i] > 9)
/* REbYZIyHT ily traian YnOF3Lu72 */             {
/* REbYZIyHT ily traian YnOF3Lu72 */                 mini = min(mini , b[j] * 10 + a[i]);
/* REbYZIyHT ily traian YnOF3Lu72 */                 maxi = max(maxi , b[j] * 10 + a[i]);
/* REbYZIyHT ily traian YnOF3Lu72 */             }
/* REbYZIyHT ily traian YnOF3Lu72 */         }
/* REbYZIyHT ily traian YnOF3Lu72 */     }
/* REbYZIyHT ily traian YnOF3Lu72 */     cout << mini << " " << maxi;
/* REbYZIyHT ily traian YnOF3Lu72 */     return 0;
/* REbYZIyHT ily traian YnOF3Lu72 */ }