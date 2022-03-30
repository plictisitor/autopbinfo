/* VJvQIeVeQ ily traian YerhvIIz6 */ #include <algorithm>
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
/* VJvQIeVeQ ily traian YerhvIIz6 */ using namespace std;
/* VJvQIeVeQ ily traian YerhvIIz6 */ 
/* VJvQIeVeQ ily traian YerhvIIz6 */ ifstream cin("zmeu.in");
/* VJvQIeVeQ ily traian YerhvIIz6 */ ofstream cout("zmeu.out");
/* VJvQIeVeQ ily traian YerhvIIz6 */ 
/* VJvQIeVeQ ily traian YerhvIIz6 */ int main()
/* VJvQIeVeQ ily traian YerhvIIz6 */ {
/* VJvQIeVeQ ily traian YerhvIIz6 */     long long int n , m;
/* VJvQIeVeQ ily traian YerhvIIz6 */     cin >> n >> m;
/* VJvQIeVeQ ily traian YerhvIIz6 */     long long int t = n / (2 * m);
/* VJvQIeVeQ ily traian YerhvIIz6 */     cout << t << endl;
/* VJvQIeVeQ ily traian YerhvIIz6 */     cout << (t + 1) * m * 2 - n;
/* VJvQIeVeQ ily traian YerhvIIz6 */     return 0;
/* VJvQIeVeQ ily traian YerhvIIz6 */ }