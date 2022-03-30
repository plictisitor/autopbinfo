/* 8NTiUZsuH ily traian 1U9wZ2I07 */ #include <algorithm>
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
/* 8NTiUZsuH ily traian 1U9wZ2I07 */ using namespace std;
/* 8NTiUZsuH ily traian 1U9wZ2I07 */ 
/* 8NTiUZsuH ily traian 1U9wZ2I07 */ int main()
/* 8NTiUZsuH ily traian 1U9wZ2I07 */ {
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     int n;
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     cin >> n;
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     int sum=0;
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     for(int i = 2 ; i < n ; ++i)
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     {
/* 8NTiUZsuH ily traian 1U9wZ2I07 */         sum+=n/i;    
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     }
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     if(n==1)
/* 8NTiUZsuH ily traian 1U9wZ2I07 */         cout << n;
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     else
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     cout << sum+n+1;
/* 8NTiUZsuH ily traian 1U9wZ2I07 */     return 0;    
/* 8NTiUZsuH ily traian 1U9wZ2I07 */ }