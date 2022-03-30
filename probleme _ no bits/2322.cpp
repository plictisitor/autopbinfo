/* tJMSPnDhm ily traian hCtt7Yh12 */ #include <algorithm>
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
/* tJMSPnDhm ily traian hCtt7Yh12 */ using namespace std;
/* tJMSPnDhm ily traian hCtt7Yh12 */ int main()
/* tJMSPnDhm ily traian hCtt7Yh12 */ {
/* tJMSPnDhm ily traian hCtt7Yh12 */     long long n , cnt = 0 , x;
/* tJMSPnDhm ily traian hCtt7Yh12 */     cin >> n;
/* tJMSPnDhm ily traian hCtt7Yh12 */     for(int i = 1 ; i <= n ;++i)
/* tJMSPnDhm ily traian hCtt7Yh12 */     {
/* tJMSPnDhm ily traian hCtt7Yh12 */         cin >> x;
/* tJMSPnDhm ily traian hCtt7Yh12 */         if(x == 1) cnt ++;
/* tJMSPnDhm ily traian hCtt7Yh12 */     }
/* tJMSPnDhm ily traian hCtt7Yh12 */     if(cnt == 1) cout << 1;
/* tJMSPnDhm ily traian hCtt7Yh12 */     else
/* tJMSPnDhm ily traian hCtt7Yh12 */     cout << cnt * (cnt - 1) / 2;
/* tJMSPnDhm ily traian hCtt7Yh12 */ }