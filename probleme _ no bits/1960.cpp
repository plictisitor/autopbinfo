/* VMnZNEq4v ily traian qEp3968J4 */ #include <algorithm>
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
/* VMnZNEq4v ily traian qEp3968J4 */ using namespace std;
/* VMnZNEq4v ily traian qEp3968J4 */ unsigned long long perf[8]={6, 28, 496, 8128, 33550336, 8589869056, 137438691328,2305843008139952128};
/* VMnZNEq4v ily traian qEp3968J4 */ int a[1001];
/* VMnZNEq4v ily traian qEp3968J4 */ int main()
/* VMnZNEq4v ily traian qEp3968J4 */ {
/* VMnZNEq4v ily traian qEp3968J4 */     int n;
/* VMnZNEq4v ily traian qEp3968J4 */     unsigned long long x;
/* VMnZNEq4v ily traian qEp3968J4 */     cin >> n;
/* VMnZNEq4v ily traian qEp3968J4 */     for(int i = 1 ; i <= n ; i++)
/* VMnZNEq4v ily traian qEp3968J4 */     {
/* VMnZNEq4v ily traian qEp3968J4 */         cin >> x;
/* VMnZNEq4v ily traian qEp3968J4 */         int ok = 0;
/* VMnZNEq4v ily traian qEp3968J4 */         for(int j = 0 ; j <= 8 ; j++)
/* VMnZNEq4v ily traian qEp3968J4 */             if(x==perf[j]) ok=1;
/* VMnZNEq4v ily traian qEp3968J4 */             if(ok==1) a[i]=1;
/* VMnZNEq4v ily traian qEp3968J4 */             else a[i]=0;
/* VMnZNEq4v ily traian qEp3968J4 */     }
/* VMnZNEq4v ily traian qEp3968J4 */     for(int i = 1 ; i <= n ; i++)
/* VMnZNEq4v ily traian qEp3968J4 */         cout << a[i] << " ";
/* VMnZNEq4v ily traian qEp3968J4 */ }