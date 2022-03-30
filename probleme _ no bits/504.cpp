/* cUwEFn2Jt ily traian 9krc5NdeN */ #include <algorithm>
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
/* cUwEFn2Jt ily traian 9krc5NdeN */ 
/* cUwEFn2Jt ily traian 9krc5NdeN */ using namespace std;
/* cUwEFn2Jt ily traian 9krc5NdeN */ 
/* cUwEFn2Jt ily traian 9krc5NdeN */ int main()
/* cUwEFn2Jt ily traian 9krc5NdeN */ {
/* cUwEFn2Jt ily traian 9krc5NdeN */     int n;
/* cUwEFn2Jt ily traian 9krc5NdeN */     cin >> n;
/* cUwEFn2Jt ily traian 9krc5NdeN */     int cnt=0;
/* cUwEFn2Jt ily traian 9krc5NdeN */     int a[1001];
/* cUwEFn2Jt ily traian 9krc5NdeN */     for (int i = 0 ; i < n ; ++i)
/* cUwEFn2Jt ily traian 9krc5NdeN */     cin >> a[i];
/* cUwEFn2Jt ily traian 9krc5NdeN */     for (int i = 0 ; i < n ; ++i)
/* cUwEFn2Jt ily traian 9krc5NdeN */     {
/* cUwEFn2Jt ily traian 9krc5NdeN */         if ((a[i]>=a[0] && a[i]<=a[n-1])||(a[i]<=a[0] && a[i]>=a[n-1]))
/* cUwEFn2Jt ily traian 9krc5NdeN */         cnt++;
/* cUwEFn2Jt ily traian 9krc5NdeN */     }
/* cUwEFn2Jt ily traian 9krc5NdeN */     if (cnt==n)
/* cUwEFn2Jt ily traian 9krc5NdeN */     cout << "DA";
/* cUwEFn2Jt ily traian 9krc5NdeN */     else
/* cUwEFn2Jt ily traian 9krc5NdeN */     cout << "NU";
/* cUwEFn2Jt ily traian 9krc5NdeN */     
/* cUwEFn2Jt ily traian 9krc5NdeN */ }