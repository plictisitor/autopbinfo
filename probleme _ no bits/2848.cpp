/* L8tlIWKeH ily traian wuohMPQ2a */ #include <algorithm>
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
/* L8tlIWKeH ily traian wuohMPQ2a */ #define mod 777013
/* L8tlIWKeH ily traian wuohMPQ2a */ using namespace std;
/* L8tlIWKeH ily traian wuohMPQ2a */ 
/* L8tlIWKeH ily traian wuohMPQ2a */ int n , a[100005] , b[100005];
/* L8tlIWKeH ily traian wuohMPQ2a */ 
/* L8tlIWKeH ily traian wuohMPQ2a */ int main()
/* L8tlIWKeH ily traian wuohMPQ2a */ {
/* L8tlIWKeH ily traian wuohMPQ2a */     cin >> n;
/* L8tlIWKeH ily traian wuohMPQ2a */     a[1] = 2 , b[1] = 2;
/* L8tlIWKeH ily traian wuohMPQ2a */     for(int i = 2 ; i <= n ; i++)
/* L8tlIWKeH ily traian wuohMPQ2a */     {
/* L8tlIWKeH ily traian wuohMPQ2a */         a[i] = (a[i - 1] + 2 * b[i - 1])%mod;
/* L8tlIWKeH ily traian wuohMPQ2a */         b[i] = (2 * (a[i - 1] + b[i - 1]))%mod;
/* L8tlIWKeH ily traian wuohMPQ2a */     }
/* L8tlIWKeH ily traian wuohMPQ2a */     cout << (a[n] + b[n])%mod;
/* L8tlIWKeH ily traian wuohMPQ2a */     return 0;
/* L8tlIWKeH ily traian wuohMPQ2a */ }