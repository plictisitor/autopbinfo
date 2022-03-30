/* F2PacZvbG ily traian yBs2ZmF30 */ #include <algorithm>
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
/* F2PacZvbG ily traian yBs2ZmF30 */ using namespace std;
/* F2PacZvbG ily traian yBs2ZmF30 */ 
/* F2PacZvbG ily traian yBs2ZmF30 */ int prim(int n)
/* F2PacZvbG ily traian yBs2ZmF30 */ {
/* F2PacZvbG ily traian yBs2ZmF30 */     int cnt=0;
/* F2PacZvbG ily traian yBs2ZmF30 */     for (int i = 1 ; i * i <= n ; ++i)
/* F2PacZvbG ily traian yBs2ZmF30 */     {
/* F2PacZvbG ily traian yBs2ZmF30 */         if (n%i==0)
/* F2PacZvbG ily traian yBs2ZmF30 */         cnt+=2;
/* F2PacZvbG ily traian yBs2ZmF30 */         if (i*i==n)
/* F2PacZvbG ily traian yBs2ZmF30 */         cnt--;
/* F2PacZvbG ily traian yBs2ZmF30 */     }
/* F2PacZvbG ily traian yBs2ZmF30 */     if (cnt==2)
/* F2PacZvbG ily traian yBs2ZmF30 */     return 1;
/* F2PacZvbG ily traian yBs2ZmF30 */     else
/* F2PacZvbG ily traian yBs2ZmF30 */     return 0;
/* F2PacZvbG ily traian yBs2ZmF30 */ }
/* F2PacZvbG ily traian yBs2ZmF30 */ 
/* F2PacZvbG ily traian yBs2ZmF30 */ int main()
/* F2PacZvbG ily traian yBs2ZmF30 */ {
/* F2PacZvbG ily traian yBs2ZmF30 */     int n;
/* F2PacZvbG ily traian yBs2ZmF30 */     cin >> n; 
/* F2PacZvbG ily traian yBs2ZmF30 */     for (int i = 2 ; i <= n ; ++i)
/* F2PacZvbG ily traian yBs2ZmF30 */     {
/* F2PacZvbG ily traian yBs2ZmF30 */         if (prim(i))
/* F2PacZvbG ily traian yBs2ZmF30 */         cout << i << ' ';
/* F2PacZvbG ily traian yBs2ZmF30 */     }
/* F2PacZvbG ily traian yBs2ZmF30 */ }