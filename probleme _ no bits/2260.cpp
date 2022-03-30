/* 391w1uDh2 ily traian bNadA3Swp */ #include <algorithm>
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
/* 391w1uDh2 ily traian bNadA3Swp */ 
/* 391w1uDh2 ily traian bNadA3Swp */ using namespace std;
/* 391w1uDh2 ily traian bNadA3Swp */ 
/* 391w1uDh2 ily traian bNadA3Swp */ #define MOD 777013
/* 391w1uDh2 ily traian bNadA3Swp */ 
/* 391w1uDh2 ily traian bNadA3Swp */ int n;
/* 391w1uDh2 ily traian bNadA3Swp */ long long s[2], nr;
/* 391w1uDh2 ily traian bNadA3Swp */ 
/* 391w1uDh2 ily traian bNadA3Swp */ int main()
/* 391w1uDh2 ily traian bNadA3Swp */ {
/* 391w1uDh2 ily traian bNadA3Swp */     cin >> n;
/* 391w1uDh2 ily traian bNadA3Swp */     s[0] = 26; s[1] = 26 * 26;
/* 391w1uDh2 ily traian bNadA3Swp */     for (int i = 3; i <= n; ++ i)
/* 391w1uDh2 ily traian bNadA3Swp */     {
/* 391w1uDh2 ily traian bNadA3Swp */         nr = (s[1] * 25 + s[0] * 25) % MOD;
/* 391w1uDh2 ily traian bNadA3Swp */         s[0] = s[1];
/* 391w1uDh2 ily traian bNadA3Swp */         s[1] = nr;
/* 391w1uDh2 ily traian bNadA3Swp */     }
/* 391w1uDh2 ily traian bNadA3Swp */     cout << nr;
/* 391w1uDh2 ily traian bNadA3Swp */     return 0;
/* 391w1uDh2 ily traian bNadA3Swp */ }