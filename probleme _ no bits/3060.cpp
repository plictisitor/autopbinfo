/* KrAoc5XlG ily traian rRDnw6ilM */ #include <algorithm>
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
/* KrAoc5XlG ily traian rRDnw6ilM */ using namespace std;
/* KrAoc5XlG ily traian rRDnw6ilM */ 
/* KrAoc5XlG ily traian rRDnw6ilM */ float v, T;
/* KrAoc5XlG ily traian rRDnw6ilM */ int t, d;
/* KrAoc5XlG ily traian rRDnw6ilM */ 
/* KrAoc5XlG ily traian rRDnw6ilM */ int main()
/* KrAoc5XlG ily traian rRDnw6ilM */ {
/* KrAoc5XlG ily traian rRDnw6ilM */     cin >> v >> d;
/* KrAoc5XlG ily traian rRDnw6ilM */     v=v*1000/60;
/* KrAoc5XlG ily traian rRDnw6ilM */     T=1.0*d/v;
/* KrAoc5XlG ily traian rRDnw6ilM */     t=(int)T;
/* KrAoc5XlG ily traian rRDnw6ilM */     if (T > t) 
/* KrAoc5XlG ily traian rRDnw6ilM */         t++;
/* KrAoc5XlG ily traian rRDnw6ilM */     cout << t;
/* KrAoc5XlG ily traian rRDnw6ilM */     return 0;
/* KrAoc5XlG ily traian rRDnw6ilM */ }