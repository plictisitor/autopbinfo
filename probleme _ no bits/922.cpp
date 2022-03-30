/* wyDvgF4n3 ily traian HQajxsyx0 */ #include <algorithm>
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
/* wyDvgF4n3 ily traian HQajxsyx0 */ 
/* wyDvgF4n3 ily traian HQajxsyx0 */ using namespace std;
/* wyDvgF4n3 ily traian HQajxsyx0 */ struct punct{int x , y;};
/* wyDvgF4n3 ily traian HQajxsyx0 */ double dist00(punct p)
/* wyDvgF4n3 ily traian HQajxsyx0 */ {
/* wyDvgF4n3 ily traian HQajxsyx0 */     return sqrt(p.x*p.x+p.y*p.y);///distanta de la p la origine
/* wyDvgF4n3 ily traian HQajxsyx0 */ }
/* wyDvgF4n3 ily traian HQajxsyx0 */ int main()
/* wyDvgF4n3 ily traian HQajxsyx0 */ {
/* wyDvgF4n3 ily traian HQajxsyx0 */     int n , c = 0 ;
/* wyDvgF4n3 ily traian HQajxsyx0 */     punct P[101];
/* wyDvgF4n3 ily traian HQajxsyx0 */     double dmax = 0;
/* wyDvgF4n3 ily traian HQajxsyx0 */     cin >> n;
/* wyDvgF4n3 ily traian HQajxsyx0 */     for(int i = 1 ; i <= n ; ++i)
/* wyDvgF4n3 ily traian HQajxsyx0 */         cin >> P[i].x >> P[i].y;
/* wyDvgF4n3 ily traian HQajxsyx0 */     for(int i = 1 ; i <= n ; ++i)
/* wyDvgF4n3 ily traian HQajxsyx0 */     {
/* wyDvgF4n3 ily traian HQajxsyx0 */         double d = dist00(P[i]);
/* wyDvgF4n3 ily traian HQajxsyx0 */         if(d > dmax) dmax = d , c = 1;
/* wyDvgF4n3 ily traian HQajxsyx0 */         else if(d==dmax) c++;
/* wyDvgF4n3 ily traian HQajxsyx0 */     }
/* wyDvgF4n3 ily traian HQajxsyx0 */     cout << dmax << " " << c;
/* wyDvgF4n3 ily traian HQajxsyx0 */ }