/* kjlJWOiFS ily traian 6n3RtIZeg */ #include <algorithm>
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
/* kjlJWOiFS ily traian 6n3RtIZeg */ 
/* kjlJWOiFS ily traian 6n3RtIZeg */ using namespace std;
/* kjlJWOiFS ily traian 6n3RtIZeg */ 
/* kjlJWOiFS ily traian 6n3RtIZeg */ int main ()
/* kjlJWOiFS ily traian 6n3RtIZeg */ {
/* kjlJWOiFS ily traian 6n3RtIZeg */     int n;
/* kjlJWOiFS ily traian 6n3RtIZeg */     cin >> n;
/* kjlJWOiFS ily traian 6n3RtIZeg */     int a[1001];
/* kjlJWOiFS ily traian 6n3RtIZeg */     for (int i = 0 ; i < n ; ++i)
/* kjlJWOiFS ily traian 6n3RtIZeg */     cin >> a[i];
/* kjlJWOiFS ily traian 6n3RtIZeg */     sort (a,a+n);
/* kjlJWOiFS ily traian 6n3RtIZeg */     cout << a[n-1];
/* kjlJWOiFS ily traian 6n3RtIZeg */     return 0;    
/* kjlJWOiFS ily traian 6n3RtIZeg */ }