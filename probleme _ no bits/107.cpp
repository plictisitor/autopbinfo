/* yIxpq2rjz ily traian 9O1zfM3qp */ #include <algorithm>
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
/* yIxpq2rjz ily traian 9O1zfM3qp */ 
/* yIxpq2rjz ily traian 9O1zfM3qp */ using namespace std;
/* yIxpq2rjz ily traian 9O1zfM3qp */ 
/* yIxpq2rjz ily traian 9O1zfM3qp */ int main ()
/* yIxpq2rjz ily traian 9O1zfM3qp */ {
/* yIxpq2rjz ily traian 9O1zfM3qp */     int n;
/* yIxpq2rjz ily traian 9O1zfM3qp */     cin >> n;
/* yIxpq2rjz ily traian 9O1zfM3qp */     int cnt=0;
/* yIxpq2rjz ily traian 9O1zfM3qp */     int u=n%10;
/* yIxpq2rjz ily traian 9O1zfM3qp */     if (n == 0)
/* yIxpq2rjz ily traian 9O1zfM3qp */     cnt++;
/* yIxpq2rjz ily traian 9O1zfM3qp */     while (n)
/* yIxpq2rjz ily traian 9O1zfM3qp */     {
/* yIxpq2rjz ily traian 9O1zfM3qp */     if (n%10 == u)
/* yIxpq2rjz ily traian 9O1zfM3qp */     cnt ++;
/* yIxpq2rjz ily traian 9O1zfM3qp */     n/=10;
/* yIxpq2rjz ily traian 9O1zfM3qp */     }
/* yIxpq2rjz ily traian 9O1zfM3qp */     cout << cnt;
/* yIxpq2rjz ily traian 9O1zfM3qp */     return 0;
/* yIxpq2rjz ily traian 9O1zfM3qp */ }