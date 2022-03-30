/* trTjnsIyy ily traian 8xgZ3KKpe */ #include <algorithm>
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
/* trTjnsIyy ily traian 8xgZ3KKpe */ 
/* trTjnsIyy ily traian 8xgZ3KKpe */ using namespace std;
/* trTjnsIyy ily traian 8xgZ3KKpe */ 
/* trTjnsIyy ily traian 8xgZ3KKpe */ int main ()
/* trTjnsIyy ily traian 8xgZ3KKpe */ {
/* trTjnsIyy ily traian 8xgZ3KKpe */     int n;
/* trTjnsIyy ily traian 8xgZ3KKpe */     cin >> n;
/* trTjnsIyy ily traian 8xgZ3KKpe */     int a,b,s=0;
/* trTjnsIyy ily traian 8xgZ3KKpe */     cin >> a >> b;
/* trTjnsIyy ily traian 8xgZ3KKpe */     int c;
/* trTjnsIyy ily traian 8xgZ3KKpe */     for (int i = 3 ; i <= n; ++i)
/* trTjnsIyy ily traian 8xgZ3KKpe */     {
/* trTjnsIyy ily traian 8xgZ3KKpe */         cin >> c;
/* trTjnsIyy ily traian 8xgZ3KKpe */         if (a<b && b>c)
/* trTjnsIyy ily traian 8xgZ3KKpe */             s+=b;
/* trTjnsIyy ily traian 8xgZ3KKpe */         a=b;
/* trTjnsIyy ily traian 8xgZ3KKpe */         b=c;
/* trTjnsIyy ily traian 8xgZ3KKpe */     }
/* trTjnsIyy ily traian 8xgZ3KKpe */     cout << s;
/* trTjnsIyy ily traian 8xgZ3KKpe */ }