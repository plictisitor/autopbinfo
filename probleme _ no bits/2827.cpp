/* B1ZOeIzEE ily traian cOzIzSQx4 */ #include <algorithm>
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
/* B1ZOeIzEE ily traian cOzIzSQx4 */ using namespace std;
/* B1ZOeIzEE ily traian cOzIzSQx4 */ ifstream cin("sir12.in");
/* B1ZOeIzEE ily traian cOzIzSQx4 */ ofstream cout("sir12.out");
/* B1ZOeIzEE ily traian cOzIzSQx4 */ int main()
/* B1ZOeIzEE ily traian cOzIzSQx4 */ {
/* B1ZOeIzEE ily traian cOzIzSQx4 */     int n , cnt = 0 , max1 = -1 , max2 = -1;
/* B1ZOeIzEE ily traian cOzIzSQx4 */     while(cin >> n)
/* B1ZOeIzEE ily traian cOzIzSQx4 */     {
/* B1ZOeIzEE ily traian cOzIzSQx4 */         if(n % 2 == 1) cnt++;
/* B1ZOeIzEE ily traian cOzIzSQx4 */         if(n % 2 == 0 && cnt == 3)
/* B1ZOeIzEE ily traian cOzIzSQx4 */         {
/* B1ZOeIzEE ily traian cOzIzSQx4 */             if(n > max1)
/* B1ZOeIzEE ily traian cOzIzSQx4 */             {
/* B1ZOeIzEE ily traian cOzIzSQx4 */                 max2 = max1;
/* B1ZOeIzEE ily traian cOzIzSQx4 */                 max1 = n;
/* B1ZOeIzEE ily traian cOzIzSQx4 */             }
/* B1ZOeIzEE ily traian cOzIzSQx4 */             if(n > max2 && n < max1) max2 = n;
/* B1ZOeIzEE ily traian cOzIzSQx4 */         }
/* B1ZOeIzEE ily traian cOzIzSQx4 */     }
/* B1ZOeIzEE ily traian cOzIzSQx4 */     if(max1 != -1 && max2 != -1) cout << max2 << ' ' << max1;
/* B1ZOeIzEE ily traian cOzIzSQx4 */     else cout << "Nu exista";
/* B1ZOeIzEE ily traian cOzIzSQx4 */     return 0;
/* B1ZOeIzEE ily traian cOzIzSQx4 */ }