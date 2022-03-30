/* qhh031sZ9 ily traian ZEaxSRQs4 */ #include <algorithm>
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
/* qhh031sZ9 ily traian ZEaxSRQs4 */ using namespace std;
/* qhh031sZ9 ily traian ZEaxSRQs4 */ ifstream cin("balmascat.in");
/* qhh031sZ9 ily traian ZEaxSRQs4 */ ofstream cout("balmascat.out");
/* qhh031sZ9 ily traian ZEaxSRQs4 */ int main()
/* qhh031sZ9 ily traian ZEaxSRQs4 */ {
/* qhh031sZ9 ily traian ZEaxSRQs4 */     long long int n , p , cnt = 0 , c,  rez = 0;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     cin >> n >> p;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     cnt= n / p;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     if(n % p != 0) cnt++;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     if(cnt % 10 == 9) c = 8;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     else c = cnt%10+1;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     for(int i = 1 ; i <= p ;++i)
/* qhh031sZ9 ily traian ZEaxSRQs4 */     {
/* qhh031sZ9 ily traian ZEaxSRQs4 */         rez = rez *100+c*10+cnt%10;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     }
/* qhh031sZ9 ily traian ZEaxSRQs4 */     cout << rez/10;
/* qhh031sZ9 ily traian ZEaxSRQs4 */     return 0;
/* qhh031sZ9 ily traian ZEaxSRQs4 */ }