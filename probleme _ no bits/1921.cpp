/* n3l8VpDt3 ily traian 7PWrca5vI */ #include <algorithm>
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
/* n3l8VpDt3 ily traian 7PWrca5vI */ 
/* n3l8VpDt3 ily traian 7PWrca5vI */ 
/* n3l8VpDt3 ily traian 7PWrca5vI */ #define PI 3.14159265
/* n3l8VpDt3 ily traian 7PWrca5vI */ using namespace std;
/* n3l8VpDt3 ily traian 7PWrca5vI */ ifstream cin("ceas.in");
/* n3l8VpDt3 ily traian 7PWrca5vI */ ofstream cout("ceas.out");
/* n3l8VpDt3 ily traian 7PWrca5vI */ 
/* n3l8VpDt3 ily traian 7PWrca5vI */ int r , hr , mn;
/* n3l8VpDt3 ily traian 7PWrca5vI */ double xz , yz , x , y;
/* n3l8VpDt3 ily traian 7PWrca5vI */ 
/* n3l8VpDt3 ily traian 7PWrca5vI */ int main()
/* n3l8VpDt3 ily traian 7PWrca5vI */ {
/* n3l8VpDt3 ily traian 7PWrca5vI */     cin  >> r >> hr >> mn;
/* n3l8VpDt3 ily traian 7PWrca5vI */     x = 0; 
/* n3l8VpDt3 ily traian 7PWrca5vI */     y = r;
/* n3l8VpDt3 ily traian 7PWrca5vI */     mn = mn + hr * 60;
/* n3l8VpDt3 ily traian 7PWrca5vI */     double rad = 1.0 * 2 * mn * PI / 720;
/* n3l8VpDt3 ily traian 7PWrca5vI */     xz = x * cos(rad) + y * sin(rad);
/* n3l8VpDt3 ily traian 7PWrca5vI */     yz = -x * sin(rad) + y * cos(rad);
/* n3l8VpDt3 ily traian 7PWrca5vI */     cout << fixed << setprecision(3) << xz << ' ' << yz << '\n';
/* n3l8VpDt3 ily traian 7PWrca5vI */     return 0;
/* n3l8VpDt3 ily traian 7PWrca5vI */ }