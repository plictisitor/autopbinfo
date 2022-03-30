/* iOKdVFsF2 ily traian hDBvTBefb */ #include <algorithm>
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
/* iOKdVFsF2 ily traian hDBvTBefb */ using namespace std;
/* iOKdVFsF2 ily traian hDBvTBefb */ 
/* iOKdVFsF2 ily traian hDBvTBefb */ int main()
/* iOKdVFsF2 ily traian hDBvTBefb */ {
/* iOKdVFsF2 ily traian hDBvTBefb */     int n, p;
/* iOKdVFsF2 ily traian hDBvTBefb */     cin >> n >> p;
/* iOKdVFsF2 ily traian hDBvTBefb */     int a[1501];
/* iOKdVFsF2 ily traian hDBvTBefb */     for(int i = 1; i <= n; ++i)
/* iOKdVFsF2 ily traian hDBvTBefb */         cin >> a[i];
/* iOKdVFsF2 ily traian hDBvTBefb */ 
/* iOKdVFsF2 ily traian hDBvTBefb */     for(int i = p + 1; i <= n; ++i)
/* iOKdVFsF2 ily traian hDBvTBefb */         a[i-1] = a[i];
/* iOKdVFsF2 ily traian hDBvTBefb */ 
/* iOKdVFsF2 ily traian hDBvTBefb */     n--;
/* iOKdVFsF2 ily traian hDBvTBefb */ 
/* iOKdVFsF2 ily traian hDBvTBefb */     for(int i = 1; i <= n; ++i)
/* iOKdVFsF2 ily traian hDBvTBefb */         cout << a[i] << " ";
/* iOKdVFsF2 ily traian hDBvTBefb */ 
/* iOKdVFsF2 ily traian hDBvTBefb */     return 0;
/* iOKdVFsF2 ily traian hDBvTBefb */ }