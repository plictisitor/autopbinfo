/* hLo0g6Ipy ily traian k7Cn23IR4 */ #include <algorithm>
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
/* hLo0g6Ipy ily traian k7Cn23IR4 */ 
/* hLo0g6Ipy ily traian k7Cn23IR4 */ using namespace std;
/* hLo0g6Ipy ily traian k7Cn23IR4 */ ifstream cin("punctsegment.in");
/* hLo0g6Ipy ily traian k7Cn23IR4 */ ofstream cout("punctsegment.out");
/* hLo0g6Ipy ily traian k7Cn23IR4 */ 
/* hLo0g6Ipy ily traian k7Cn23IR4 */ struct andra
/* hLo0g6Ipy ily traian k7Cn23IR4 */ {
/* hLo0g6Ipy ily traian k7Cn23IR4 */   int i , j;  
/* hLo0g6Ipy ily traian k7Cn23IR4 */ };
/* hLo0g6Ipy ily traian k7Cn23IR4 */ int main()
/* hLo0g6Ipy ily traian k7Cn23IR4 */ {
/* hLo0g6Ipy ily traian k7Cn23IR4 */     andra x1 , x2 , x3;
/* hLo0g6Ipy ily traian k7Cn23IR4 */     cin >> x1.i >> x1.j >> x2.i >> x2.j >> x3.i >> x3.j;
/* hLo0g6Ipy ily traian k7Cn23IR4 */     int seg1 = (x1.i - x2.i) * (x1.i - x2.i) + (x1.j - x2.j) * (x1.j - x2.j);
/* hLo0g6Ipy ily traian k7Cn23IR4 */     int seg2 = (x3.i - x1.i) * (x3.i - x1.i) + (x3.j - x1.j) * (x3.j - x1.j);
/* hLo0g6Ipy ily traian k7Cn23IR4 */     int seg3 = (x3.i - x2.i) * (x3.i - x2.i) + (x3.j - x2.j) * (x3.j - x2.j);
/* hLo0g6Ipy ily traian k7Cn23IR4 */     double a = sqrt(seg1) * 10 ; 
/* hLo0g6Ipy ily traian k7Cn23IR4 */     double b = sqrt(seg2) * 10 ; 
/* hLo0g6Ipy ily traian k7Cn23IR4 */     double c = sqrt(seg3) * 10 ;
/* hLo0g6Ipy ily traian k7Cn23IR4 */     if((int)a + (int)b == (int)c) cout << "DA";
/* hLo0g6Ipy ily traian k7Cn23IR4 */     else cout << "NU";
/* hLo0g6Ipy ily traian k7Cn23IR4 */     return 0;
/* hLo0g6Ipy ily traian k7Cn23IR4 */ }