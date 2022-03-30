/* JwIKDR1xF ily traian 7yMCED8QU */ #include <algorithm>
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
/* JwIKDR1xF ily traian 7yMCED8QU */ using namespace std;
/* JwIKDR1xF ily traian 7yMCED8QU */ 
/* JwIKDR1xF ily traian 7yMCED8QU */ int a, b, c;
/* JwIKDR1xF ily traian 7yMCED8QU */ 
/* JwIKDR1xF ily traian 7yMCED8QU */ int main()
/* JwIKDR1xF ily traian 7yMCED8QU */ {
/* JwIKDR1xF ily traian 7yMCED8QU */     cin >> a >> b;
/* JwIKDR1xF ily traian 7yMCED8QU */     int p = 1;
/* JwIKDR1xF ily traian 7yMCED8QU */     while(a)
/* JwIKDR1xF ily traian 7yMCED8QU */     {
/* JwIKDR1xF ily traian 7yMCED8QU */         c = c + ((a % 10 + b % 10) / 2 * p);
/* JwIKDR1xF ily traian 7yMCED8QU */         a/=10;
/* JwIKDR1xF ily traian 7yMCED8QU */         b/=10;
/* JwIKDR1xF ily traian 7yMCED8QU */         p*=10;
/* JwIKDR1xF ily traian 7yMCED8QU */     }
/* JwIKDR1xF ily traian 7yMCED8QU */     cout << c;
/* JwIKDR1xF ily traian 7yMCED8QU */     return 0;
/* JwIKDR1xF ily traian 7yMCED8QU */ }