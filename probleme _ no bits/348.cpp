/* 1Fk5y3zP6 ily traian OiMpclMB0 */ #include <algorithm>
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
/* 1Fk5y3zP6 ily traian OiMpclMB0 */ using namespace std;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */ 
/* 1Fk5y3zP6 ily traian OiMpclMB0 */ int main ()
/* 1Fk5y3zP6 ily traian OiMpclMB0 */ {
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     int n;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     cin >> n;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     int m;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     cin >> m;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     int p=1;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     cout << p << ' ';
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     if ( n==1 )
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     {}
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     else
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     while (p*n<=m)
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     {
/* 1Fk5y3zP6 ily traian OiMpclMB0 */         p*=n;
/* 1Fk5y3zP6 ily traian OiMpclMB0 */         cout << p << ' ';
/* 1Fk5y3zP6 ily traian OiMpclMB0 */     }
/* 1Fk5y3zP6 ily traian OiMpclMB0 */ }