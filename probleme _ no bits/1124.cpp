/* y4EizQ2Tl ily traian vqJSi5wIj */ #include <algorithm>
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
/* y4EizQ2Tl ily traian vqJSi5wIj */ #define mod 666013
/* y4EizQ2Tl ily traian vqJSi5wIj */ using namespace std;
/* y4EizQ2Tl ily traian vqJSi5wIj */ 
/* y4EizQ2Tl ily traian vqJSi5wIj */ long long n , n1 , n2;
/* y4EizQ2Tl ily traian vqJSi5wIj */ 
/* y4EizQ2Tl ily traian vqJSi5wIj */ int main()
/* y4EizQ2Tl ily traian vqJSi5wIj */ {
/* y4EizQ2Tl ily traian vqJSi5wIj */     cin >> n;
/* y4EizQ2Tl ily traian vqJSi5wIj */ 
/* y4EizQ2Tl ily traian vqJSi5wIj */     n1 = (n + 1) * (n + 1);
/* y4EizQ2Tl ily traian vqJSi5wIj */     n2 = n1 - 1;
/* y4EizQ2Tl ily traian vqJSi5wIj */ 
/* y4EizQ2Tl ily traian vqJSi5wIj */     if(n1 % 4 == 0) n1 /= 4;
/* y4EizQ2Tl ily traian vqJSi5wIj */     else n2 /= 4;
/* y4EizQ2Tl ily traian vqJSi5wIj */ 
/* y4EizQ2Tl ily traian vqJSi5wIj */     if(n1 % 3 == 0) n1 /= 3;
/* y4EizQ2Tl ily traian vqJSi5wIj */     else n2 /= 3;
/* y4EizQ2Tl ily traian vqJSi5wIj */ 
/* y4EizQ2Tl ily traian vqJSi5wIj */     cout<<((n1 % mod) * (n2 % mod)) % mod;
/* y4EizQ2Tl ily traian vqJSi5wIj */     return 0;
/* y4EizQ2Tl ily traian vqJSi5wIj */ }