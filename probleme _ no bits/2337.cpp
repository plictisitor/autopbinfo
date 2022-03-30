/* ElJgLXCnr ily traian A60tRbBt1 */ #include <algorithm>
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
/* ElJgLXCnr ily traian A60tRbBt1 */ using namespace std;
/* ElJgLXCnr ily traian A60tRbBt1 */ 
/* ElJgLXCnr ily traian A60tRbBt1 */ ifstream cin("coada2.in");
/* ElJgLXCnr ily traian A60tRbBt1 */ ofstream cout("coada2.out");
/* ElJgLXCnr ily traian A60tRbBt1 */ 
/* ElJgLXCnr ily traian A60tRbBt1 */ int main()
/* ElJgLXCnr ily traian A60tRbBt1 */ {
/* ElJgLXCnr ily traian A60tRbBt1 */     long long int x , y , z;
/* ElJgLXCnr ily traian A60tRbBt1 */     cin >> x >> y >> z;
/* ElJgLXCnr ily traian A60tRbBt1 */     if(x >= y || x >= z)
/* ElJgLXCnr ily traian A60tRbBt1 */         cout << "-1";
/* ElJgLXCnr ily traian A60tRbBt1 */     else
/* ElJgLXCnr ily traian A60tRbBt1 */         cout << y+z-x;
/* ElJgLXCnr ily traian A60tRbBt1 */ }