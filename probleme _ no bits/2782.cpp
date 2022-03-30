/* Q4E1yvfn2 ily traian te8avSimP */ #include <algorithm>
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
/* Q4E1yvfn2 ily traian te8avSimP */ 
/* Q4E1yvfn2 ily traian te8avSimP */ using namespace std;
/* Q4E1yvfn2 ily traian te8avSimP */ 
/* Q4E1yvfn2 ily traian te8avSimP */ int main()
/* Q4E1yvfn2 ily traian te8avSimP */ {
/* Q4E1yvfn2 ily traian te8avSimP */     int a , b , d;
/* Q4E1yvfn2 ily traian te8avSimP */     cin >> a >> b >> d;
/* Q4E1yvfn2 ily traian te8avSimP */     if(a < b)
/* Q4E1yvfn2 ily traian te8avSimP */         swap(a , b);
/* Q4E1yvfn2 ily traian te8avSimP */     int x;
/* Q4E1yvfn2 ily traian te8avSimP */     int ms = abs(b * b - a * a + d * d);
/* Q4E1yvfn2 ily traian te8avSimP */     x = ms / (2 * d);
/* Q4E1yvfn2 ily traian te8avSimP */     cout << x;
/* Q4E1yvfn2 ily traian te8avSimP */     return 0;
/* Q4E1yvfn2 ily traian te8avSimP */ }