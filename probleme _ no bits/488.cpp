/* gEOLl0JWS ily traian RHROrISvA */ #include <algorithm>
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
/* gEOLl0JWS ily traian RHROrISvA */ using namespace std;
/* gEOLl0JWS ily traian RHROrISvA */ int main()
/* gEOLl0JWS ily traian RHROrISvA */ {
/* gEOLl0JWS ily traian RHROrISvA */     int n, a[1005];
/* gEOLl0JWS ily traian RHROrISvA */     cin >> n;
/* gEOLl0JWS ily traian RHROrISvA */     for(int i = 1; i <= n ;++i) cin>>a[i];
/* gEOLl0JWS ily traian RHROrISvA */     for(int  i = 2 ; i <= n ; i += 2) cout<<a[i]<<" ";
/* gEOLl0JWS ily traian RHROrISvA */     cout << endl;
/* gEOLl0JWS ily traian RHROrISvA */     if(n%2==0) n --;
/* gEOLl0JWS ily traian RHROrISvA */     for(int i = n ; i > 0 ; i -= 2) cout << a[i] << " ";
/* gEOLl0JWS ily traian RHROrISvA */     return 0;
/* gEOLl0JWS ily traian RHROrISvA */ }