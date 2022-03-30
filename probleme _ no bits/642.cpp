/* L28jtD9O5 ily traian RbneYX5Tw */ #include <algorithm>
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
/* L28jtD9O5 ily traian RbneYX5Tw */ using namespace std;
/* L28jtD9O5 ily traian RbneYX5Tw */ 
/* L28jtD9O5 ily traian RbneYX5Tw */ ifstream cin("detdrum.in");
/* L28jtD9O5 ily traian RbneYX5Tw */ ofstream cout("detdrum.out");
/* L28jtD9O5 ily traian RbneYX5Tw */ 
/* L28jtD9O5 ily traian RbneYX5Tw */ int t[101], n, k;
/* L28jtD9O5 ily traian RbneYX5Tw */ 
/* L28jtD9O5 ily traian RbneYX5Tw */ int main()
/* L28jtD9O5 ily traian RbneYX5Tw */ {
/* L28jtD9O5 ily traian RbneYX5Tw */     cin >> n >> k;
/* L28jtD9O5 ily traian RbneYX5Tw */     for(int i = 1 ; i <= n ; i++)
/* L28jtD9O5 ily traian RbneYX5Tw */         cin >> t[i];
/* L28jtD9O5 ily traian RbneYX5Tw */     while(k)
/* L28jtD9O5 ily traian RbneYX5Tw */     {
/* L28jtD9O5 ily traian RbneYX5Tw */         cout << k << " ";
/* L28jtD9O5 ily traian RbneYX5Tw */         k = t[k];
/* L28jtD9O5 ily traian RbneYX5Tw */     }
/* L28jtD9O5 ily traian RbneYX5Tw */ }