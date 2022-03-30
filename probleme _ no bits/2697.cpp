/* lE5OCaiwO ily traian qvvExyfqv */ #include <algorithm>
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
/* lE5OCaiwO ily traian qvvExyfqv */ using namespace std;
/* lE5OCaiwO ily traian qvvExyfqv */ 
/* lE5OCaiwO ily traian qvvExyfqv */ long long int cmdi(long long int x)
/* lE5OCaiwO ily traian qvvExyfqv */ {
/* lE5OCaiwO ily traian qvvExyfqv */     if(x % 2 == 1) return x;
/* lE5OCaiwO ily traian qvvExyfqv */     else
/* lE5OCaiwO ily traian qvvExyfqv */         while(x % 2 == 0) x/=2;
/* lE5OCaiwO ily traian qvvExyfqv */     return x;
/* lE5OCaiwO ily traian qvvExyfqv */ }
/* lE5OCaiwO ily traian qvvExyfqv */ 
/* lE5OCaiwO ily traian qvvExyfqv */ int main()
/* lE5OCaiwO ily traian qvvExyfqv */ {
/* lE5OCaiwO ily traian qvvExyfqv */     int n;
/* lE5OCaiwO ily traian qvvExyfqv */     cin >> n;
/* lE5OCaiwO ily traian qvvExyfqv */     long long int x;
/* lE5OCaiwO ily traian qvvExyfqv */     for(int i = 1 ; i <= n ; ++i)
/* lE5OCaiwO ily traian qvvExyfqv */     {
/* lE5OCaiwO ily traian qvvExyfqv */         cin >> x;
/* lE5OCaiwO ily traian qvvExyfqv */         cout << cmdi(x) << ' ';
/* lE5OCaiwO ily traian qvvExyfqv */     }
/* lE5OCaiwO ily traian qvvExyfqv */     return 0;
/* lE5OCaiwO ily traian qvvExyfqv */ }