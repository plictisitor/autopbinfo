/* g4Q8RoJN9 ily traian LzABmTGVW */ #include <algorithm>
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
/* g4Q8RoJN9 ily traian LzABmTGVW */ using namespace std;
/* g4Q8RoJN9 ily traian LzABmTGVW */ 
/* g4Q8RoJN9 ily traian LzABmTGVW */ int main()
/* g4Q8RoJN9 ily traian LzABmTGVW */ {
/* g4Q8RoJN9 ily traian LzABmTGVW */     int n, r;
/* g4Q8RoJN9 ily traian LzABmTGVW */     cin >> n >> r;
/* g4Q8RoJN9 ily traian LzABmTGVW */     int cnt = 0;
/* g4Q8RoJN9 ily traian LzABmTGVW */     for(int i = 1; i <= n; ++i){
/* g4Q8RoJN9 ily traian LzABmTGVW */         long long x;
/* g4Q8RoJN9 ily traian LzABmTGVW */         cin >> x;
/* g4Q8RoJN9 ily traian LzABmTGVW */         if(x % 9 == r)
/* g4Q8RoJN9 ily traian LzABmTGVW */             cnt++;
/* g4Q8RoJN9 ily traian LzABmTGVW */     }
/* g4Q8RoJN9 ily traian LzABmTGVW */     cout << cnt;
/* g4Q8RoJN9 ily traian LzABmTGVW */     return 0;
/* g4Q8RoJN9 ily traian LzABmTGVW */ }