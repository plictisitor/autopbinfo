/* mYSTQbeRD ily traian L9KxJecD8 */ #include <algorithm>
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
/* mYSTQbeRD ily traian L9KxJecD8 */ 
/* mYSTQbeRD ily traian L9KxJecD8 */ using namespace std;
/* mYSTQbeRD ily traian L9KxJecD8 */ 
/* mYSTQbeRD ily traian L9KxJecD8 */ int n, a[1001], k;
/* mYSTQbeRD ily traian L9KxJecD8 */ 
/* mYSTQbeRD ily traian L9KxJecD8 */ int main(){
/* mYSTQbeRD ily traian L9KxJecD8 */     cin >> n >> k;
/* mYSTQbeRD ily traian L9KxJecD8 */     for(int i = 1; i <= n; ++i)
/* mYSTQbeRD ily traian L9KxJecD8 */         cin >> a[i];
/* mYSTQbeRD ily traian L9KxJecD8 */     sort(a + 1, a + n + 1);
/* mYSTQbeRD ily traian L9KxJecD8 */     for(int i = n/2+1; k && i <= n; ++i)
/* mYSTQbeRD ily traian L9KxJecD8 */         a[i] ++, k--;
/* mYSTQbeRD ily traian L9KxJecD8 */     sort(a + 1, a + n + 1);
/* mYSTQbeRD ily traian L9KxJecD8 */     cout << a[n/2+1];
/* mYSTQbeRD ily traian L9KxJecD8 */     return 0;
/* mYSTQbeRD ily traian L9KxJecD8 */ }