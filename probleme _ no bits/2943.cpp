/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ #include <algorithm>
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
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ 
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ using namespace std;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ 
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ int A[502][502] , n , t , a , b , c , d , x[502];
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ long long cnt;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ 
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ int main()
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ {
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */     cin >> t >> n >> a >> b >> c >> d;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */     for(int i = 1 ; i <= n ; i++)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         for(int j = 1 ; j <= n ; j++)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         {
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             A[i][j] = (a * i + b * j + c) % d;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             A[i][j] += A[i - 1][j];
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         }
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ 
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */     for(int x1 = 1 ; x1 <= n ; x1++)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         for(int x2 = x1 ; x2 <= n ; x2++)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         {
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             for(int i = 1 ; i <= n ; i++)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                 x[i] = A[x2][i] - A[x1 - 1][i];
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             int st = 1 , sp = 0;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             for(int i = 1 ; i <= n ; i++)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             {
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                 sp += x[i];
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                 while(sp > t)
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                 {
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                     sp -= x[st];
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                     st++;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                 }
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */                 cnt += i - st + 1;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */             }
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         }
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */         cout << cnt;
/* 0pYdvUxI2 ily traian Jd8iMAxg2 */ }