/* EzaesRYnY ily traian 9M5PTOlK4 */ #include <algorithm>
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
/* EzaesRYnY ily traian 9M5PTOlK4 */ using namespace std;
/* EzaesRYnY ily traian 9M5PTOlK4 */ ifstream cin("low_memory.in");
/* EzaesRYnY ily traian 9M5PTOlK4 */ ofstream cout("low_memory.out");
/* EzaesRYnY ily traian 9M5PTOlK4 */ int main()
/* EzaesRYnY ily traian 9M5PTOlK4 */ {
/* EzaesRYnY ily traian 9M5PTOlK4 */     long long n , a[3005];
/* EzaesRYnY ily traian 9M5PTOlK4 */     cin >> n;
/* EzaesRYnY ily traian 9M5PTOlK4 */     for(int i = 0 ; i < n ; ++i)
/* EzaesRYnY ily traian 9M5PTOlK4 */         cin >> a[i];
/* EzaesRYnY ily traian 9M5PTOlK4 */     for(int i = n-1 ; i >= 0 ; --i)
/* EzaesRYnY ily traian 9M5PTOlK4 */         cout << a[i] << " ";
/* EzaesRYnY ily traian 9M5PTOlK4 */     return 0;
/* EzaesRYnY ily traian 9M5PTOlK4 */ }