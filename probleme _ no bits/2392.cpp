/* J33W6Ki2D ily traian VjibWTWo9 */ #include <algorithm>
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
/* J33W6Ki2D ily traian VjibWTWo9 */ using namespace std;
/* J33W6Ki2D ily traian VjibWTWo9 */ ifstream cin("sumaxl.in");
/* J33W6Ki2D ily traian VjibWTWo9 */ ofstream cout("sumaxl.out");
/* J33W6Ki2D ily traian VjibWTWo9 */ int main()
/* J33W6Ki2D ily traian VjibWTWo9 */ {
/* J33W6Ki2D ily traian VjibWTWo9 */     int a[10001] ,b[101] , m , n , p=1;
/* J33W6Ki2D ily traian VjibWTWo9 */     cin >> n;
/* J33W6Ki2D ily traian VjibWTWo9 */     for(int i = n ; i >= 1  ; i--)
/* J33W6Ki2D ily traian VjibWTWo9 */         cin >> a[i];
/* J33W6Ki2D ily traian VjibWTWo9 */     cin >> m;
/* J33W6Ki2D ily traian VjibWTWo9 */     while(m != 0)
/* J33W6Ki2D ily traian VjibWTWo9 */     {
/* J33W6Ki2D ily traian VjibWTWo9 */         b[p]=m%10;
/* J33W6Ki2D ily traian VjibWTWo9 */         p++;
/* J33W6Ki2D ily traian VjibWTWo9 */         m /= 10;
/* J33W6Ki2D ily traian VjibWTWo9 */     }
/* J33W6Ki2D ily traian VjibWTWo9 */     p--;
/* J33W6Ki2D ily traian VjibWTWo9 */     if(p > n) n = p;
/* J33W6Ki2D ily traian VjibWTWo9 */     int t = 0;
/* J33W6Ki2D ily traian VjibWTWo9 */     for(int i = 1  ; i <= n ; i++)
/* J33W6Ki2D ily traian VjibWTWo9 */     {
/* J33W6Ki2D ily traian VjibWTWo9 */         int c = a[i] + b[i] + t;
/* J33W6Ki2D ily traian VjibWTWo9 */         a[i] = c % 10;
/* J33W6Ki2D ily traian VjibWTWo9 */         t = c / 10;
/* J33W6Ki2D ily traian VjibWTWo9 */     }
/* J33W6Ki2D ily traian VjibWTWo9 */     if(t > 0) a[++n]=t;
/* J33W6Ki2D ily traian VjibWTWo9 */     for(int i = n ; i >= 1 ; i--)
/* J33W6Ki2D ily traian VjibWTWo9 */         cout <<a[i];
/* J33W6Ki2D ily traian VjibWTWo9 */     return 0;
/* J33W6Ki2D ily traian VjibWTWo9 */ }