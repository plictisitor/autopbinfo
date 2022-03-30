/* Pb1AblYKN ily traian 89rs2nar4 */ #include <algorithm>
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
/* Pb1AblYKN ily traian 89rs2nar4 */ using namespace std;
/* Pb1AblYKN ily traian 89rs2nar4 */ ifstream cin("intervale1.in");
/* Pb1AblYKN ily traian 89rs2nar4 */ ofstream cout("intervale1.out");
/* Pb1AblYKN ily traian 89rs2nar4 */ double a[1000001];
/* Pb1AblYKN ily traian 89rs2nar4 */ int n , mini;
/* Pb1AblYKN ily traian 89rs2nar4 */ int main()
/* Pb1AblYKN ily traian 89rs2nar4 */ {
/* Pb1AblYKN ily traian 89rs2nar4 */     cin >> n;
/* Pb1AblYKN ily traian 89rs2nar4 */     for(int i = 0 ; i < n ; ++i) cin >> a[i];
/* Pb1AblYKN ily traian 89rs2nar4 */     mini = 1000001;
/* Pb1AblYKN ily traian 89rs2nar4 */     for(int i = 0 ; i < n-1 ; ++i)
/* Pb1AblYKN ily traian 89rs2nar4 */     {
/* Pb1AblYKN ily traian 89rs2nar4 */         if(a[i + 1] - a[i] < mini && (int)a[i] == (double)a[i] && (int)a[i + 1] == (double)a[i + 1])
/* Pb1AblYKN ily traian 89rs2nar4 */             mini = a[i + 1] - a[i] - 1;
/* Pb1AblYKN ily traian 89rs2nar4 */         else if((int)a[i+1]-(int)a[i] < mini)
/* Pb1AblYKN ily traian 89rs2nar4 */                 mini = (int)a[i + 1] - (int)a[i];
/* Pb1AblYKN ily traian 89rs2nar4 */     }
/* Pb1AblYKN ily traian 89rs2nar4 */     cout << mini;
/* Pb1AblYKN ily traian 89rs2nar4 */     return 0;
/* Pb1AblYKN ily traian 89rs2nar4 */ }