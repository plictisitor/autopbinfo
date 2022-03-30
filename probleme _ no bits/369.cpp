/* ZpmjqvSGE ily traian swOjgnGZM */ #include <algorithm>
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
/* ZpmjqvSGE ily traian swOjgnGZM */ using namespace std;
/* ZpmjqvSGE ily traian swOjgnGZM */ int main ()
/* ZpmjqvSGE ily traian swOjgnGZM */ {
/* ZpmjqvSGE ily traian swOjgnGZM */     int n,s=0,ogl=0;
/* ZpmjqvSGE ily traian swOjgnGZM */     cin >> n;
/* ZpmjqvSGE ily traian swOjgnGZM */     while (n != 0)
/* ZpmjqvSGE ily traian swOjgnGZM */     {
/* ZpmjqvSGE ily traian swOjgnGZM */         s=s+n%10;
/* ZpmjqvSGE ily traian swOjgnGZM */         n=n/10;
/* ZpmjqvSGE ily traian swOjgnGZM */     }
/* ZpmjqvSGE ily traian swOjgnGZM */ 
/* ZpmjqvSGE ily traian swOjgnGZM */     while (s)
/* ZpmjqvSGE ily traian swOjgnGZM */     {
/* ZpmjqvSGE ily traian swOjgnGZM */         ogl=ogl*10+s%10;
/* ZpmjqvSGE ily traian swOjgnGZM */         s=s/10;
/* ZpmjqvSGE ily traian swOjgnGZM */     }
/* ZpmjqvSGE ily traian swOjgnGZM */     cout << ogl;
/* ZpmjqvSGE ily traian swOjgnGZM */     return 0;
/* ZpmjqvSGE ily traian swOjgnGZM */ 
/* ZpmjqvSGE ily traian swOjgnGZM */ 
/* ZpmjqvSGE ily traian swOjgnGZM */ }