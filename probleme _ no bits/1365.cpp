/* o712c6Txj ily traian EQUipnHTV */ #include <algorithm>
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
/* o712c6Txj ily traian EQUipnHTV */ using namespace std;
/* o712c6Txj ily traian EQUipnHTV */ 
/* o712c6Txj ily traian EQUipnHTV */ int main ()
/* o712c6Txj ily traian EQUipnHTV */ {
/* o712c6Txj ily traian EQUipnHTV */     int a[1000001];
/* o712c6Txj ily traian EQUipnHTV */     int n;
/* o712c6Txj ily traian EQUipnHTV */     cin >> n;
/* o712c6Txj ily traian EQUipnHTV */     for (int i = 0 ; i < n ; ++i)
/* o712c6Txj ily traian EQUipnHTV */         cin >> a[i];
/* o712c6Txj ily traian EQUipnHTV */     for (int i = 0 ; i < n ; ++i)
/* o712c6Txj ily traian EQUipnHTV */     {
/* o712c6Txj ily traian EQUipnHTV */         cout << a[i] << ' ';
/* o712c6Txj ily traian EQUipnHTV */         if ((a[i]+a[i+1])%2==0)
/* o712c6Txj ily traian EQUipnHTV */         {
/* o712c6Txj ily traian EQUipnHTV */         if (i==n-1)
/* o712c6Txj ily traian EQUipnHTV */         {}
/* o712c6Txj ily traian EQUipnHTV */         else
/* o712c6Txj ily traian EQUipnHTV */         cout << (a[i]+a[i+1])/2 << ' ';
/* o712c6Txj ily traian EQUipnHTV */         }
/* o712c6Txj ily traian EQUipnHTV */     }
/* o712c6Txj ily traian EQUipnHTV */     return 0;
/* o712c6Txj ily traian EQUipnHTV */     
/* o712c6Txj ily traian EQUipnHTV */ }