/* EtQF2DXsp ily traian iys5GwWfu */ #include <algorithm>
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
/* EtQF2DXsp ily traian iys5GwWfu */ 
/* EtQF2DXsp ily traian iys5GwWfu */ using namespace std;
/* EtQF2DXsp ily traian iys5GwWfu */ 
/* EtQF2DXsp ily traian iys5GwWfu */ int main()
/* EtQF2DXsp ily traian iys5GwWfu */ {
/* EtQF2DXsp ily traian iys5GwWfu */     long long n, a[100001],s1=0,s2=0;
/* EtQF2DXsp ily traian iys5GwWfu */     cin >> n;
/* EtQF2DXsp ily traian iys5GwWfu */     for (int i = 1 ; i <= n; ++i)
/* EtQF2DXsp ily traian iys5GwWfu */     {
/* EtQF2DXsp ily traian iys5GwWfu */         cin >> a[i];
/* EtQF2DXsp ily traian iys5GwWfu */     }
/* EtQF2DXsp ily traian iys5GwWfu */     for (int i = 1 ; i <= n; ++i)
/* EtQF2DXsp ily traian iys5GwWfu */     {
/* EtQF2DXsp ily traian iys5GwWfu */         if (i <= n/2)
/* EtQF2DXsp ily traian iys5GwWfu */             s1+=a[i];
/* EtQF2DXsp ily traian iys5GwWfu */         else
/* EtQF2DXsp ily traian iys5GwWfu */             s2+=a[i];
/* EtQF2DXsp ily traian iys5GwWfu */     }
/* EtQF2DXsp ily traian iys5GwWfu */     cout << s1*s2;
/* EtQF2DXsp ily traian iys5GwWfu */     return 0;
/* EtQF2DXsp ily traian iys5GwWfu */ }