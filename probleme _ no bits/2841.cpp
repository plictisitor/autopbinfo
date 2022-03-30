/* q8isfAyl7 ily traian GMFt2ffz3 */ #include <algorithm>
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
/* q8isfAyl7 ily traian GMFt2ffz3 */ using namespace std;
/* q8isfAyl7 ily traian GMFt2ffz3 */ int n , m , a[25][25];
/* q8isfAyl7 ily traian GMFt2ffz3 */ 
/* q8isfAyl7 ily traian GMFt2ffz3 */ int main()
/* q8isfAyl7 ily traian GMFt2ffz3 */ {
/* q8isfAyl7 ily traian GMFt2ffz3 */     cin >> n >> m;
/* q8isfAyl7 ily traian GMFt2ffz3 */     int p = 2 , cnt = 1 , i = 1 , j = 1;
/* q8isfAyl7 ily traian GMFt2ffz3 */     while(cnt <= n * m)
/* q8isfAyl7 ily traian GMFt2ffz3 */     {
/* q8isfAyl7 ily traian GMFt2ffz3 */         a[i][j] = p;
/* q8isfAyl7 ily traian GMFt2ffz3 */         j++;
/* q8isfAyl7 ily traian GMFt2ffz3 */         if(m + 1== j) j = 1 , i++;
/* q8isfAyl7 ily traian GMFt2ffz3 */         if((p + 2)% 5 == 0) p += 4;
/* q8isfAyl7 ily traian GMFt2ffz3 */         else p += 2;
/* q8isfAyl7 ily traian GMFt2ffz3 */         cnt++;
/* q8isfAyl7 ily traian GMFt2ffz3 */     }
/* q8isfAyl7 ily traian GMFt2ffz3 */     for(int i = 1 ; i <= n; i++)
/* q8isfAyl7 ily traian GMFt2ffz3 */     {
/* q8isfAyl7 ily traian GMFt2ffz3 */         for(int j = 1 ; j <= m; j++)
/* q8isfAyl7 ily traian GMFt2ffz3 */             cout << a[i][j] << ' ';
/* q8isfAyl7 ily traian GMFt2ffz3 */         cout << '\n';
/* q8isfAyl7 ily traian GMFt2ffz3 */     }
/* q8isfAyl7 ily traian GMFt2ffz3 */ }