/* kEpQSDopH ily traian JZZBDis94 */ #include <algorithm>
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
/* kEpQSDopH ily traian JZZBDis94 */ 
/* kEpQSDopH ily traian JZZBDis94 */ using namespace std;
/* kEpQSDopH ily traian JZZBDis94 */ int main()
/* kEpQSDopH ily traian JZZBDis94 */ {
/* kEpQSDopH ily traian JZZBDis94 */     int n , s = 0, p = 1;
/* kEpQSDopH ily traian JZZBDis94 */     cin >> n;
/* kEpQSDopH ily traian JZZBDis94 */     for(int i = n ; i >= 1 ; i--)
/* kEpQSDopH ily traian JZZBDis94 */     {
/* kEpQSDopH ily traian JZZBDis94 */         s = s + i*p;
/* kEpQSDopH ily traian JZZBDis94 */         p *= 4;
/* kEpQSDopH ily traian JZZBDis94 */     }
/* kEpQSDopH ily traian JZZBDis94 */     cout << s;
/* kEpQSDopH ily traian JZZBDis94 */     return 0;
/* kEpQSDopH ily traian JZZBDis94 */ }