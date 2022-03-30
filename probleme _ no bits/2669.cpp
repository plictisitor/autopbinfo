/* SQykDe08y ily traian Hw6EwQeUv */ #include <algorithm>
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
/* SQykDe08y ily traian Hw6EwQeUv */ using namespace std;
/* SQykDe08y ily traian Hw6EwQeUv */ 
/* SQykDe08y ily traian Hw6EwQeUv */ int f[101];
/* SQykDe08y ily traian Hw6EwQeUv */ 
/* SQykDe08y ily traian Hw6EwQeUv */ int sumcif(int n)
/* SQykDe08y ily traian Hw6EwQeUv */ {
/* SQykDe08y ily traian Hw6EwQeUv */     int s=0;
/* SQykDe08y ily traian Hw6EwQeUv */     while(n)
/* SQykDe08y ily traian Hw6EwQeUv */         s+=n%10 , n/=10;
/* SQykDe08y ily traian Hw6EwQeUv */     return s;
/* SQykDe08y ily traian Hw6EwQeUv */ }
/* SQykDe08y ily traian Hw6EwQeUv */ 
/* SQykDe08y ily traian Hw6EwQeUv */ int main()
/* SQykDe08y ily traian Hw6EwQeUv */ {
/* SQykDe08y ily traian Hw6EwQeUv */     int n;
/* SQykDe08y ily traian Hw6EwQeUv */     cin >> n;
/* SQykDe08y ily traian Hw6EwQeUv */     int x;
/* SQykDe08y ily traian Hw6EwQeUv */     for(int i = 1 ; i <= n ; ++i)
/* SQykDe08y ily traian Hw6EwQeUv */         cin >> x , f[sumcif(x)]++;
/* SQykDe08y ily traian Hw6EwQeUv */     int cnt=0;
/* SQykDe08y ily traian Hw6EwQeUv */     for(int i = 1 ; i <= 100 ; ++i)
/* SQykDe08y ily traian Hw6EwQeUv */         if(f[i]>1)
/* SQykDe08y ily traian Hw6EwQeUv */         cnt = cnt + (f[i]*(f[i]-1)/2);
/* SQykDe08y ily traian Hw6EwQeUv */     cout << cnt;
/* SQykDe08y ily traian Hw6EwQeUv */     return 0;
/* SQykDe08y ily traian Hw6EwQeUv */ }