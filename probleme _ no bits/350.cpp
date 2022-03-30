/* IiPgTCW9r ily traian XxYkUPhQw */ #include <algorithm>
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
/* IiPgTCW9r ily traian XxYkUPhQw */ using namespace std;
/* IiPgTCW9r ily traian XxYkUPhQw */ 
/* IiPgTCW9r ily traian XxYkUPhQw */ 
/* IiPgTCW9r ily traian XxYkUPhQw */ int main()
/* IiPgTCW9r ily traian XxYkUPhQw */ {
/* IiPgTCW9r ily traian XxYkUPhQw */     int n, m;
/* IiPgTCW9r ily traian XxYkUPhQw */     cin >> n >> m;
/* IiPgTCW9r ily traian XxYkUPhQw */     cout << "{";
/* IiPgTCW9r ily traian XxYkUPhQw */     for (int i = 1; i <= n; ++i) 
/* IiPgTCW9r ily traian XxYkUPhQw */     {
/* IiPgTCW9r ily traian XxYkUPhQw */         for (int j = 1; j < m; ++j)
/* IiPgTCW9r ily traian XxYkUPhQw */             cout << '(' << i << ',' << j << "),";
/* IiPgTCW9r ily traian XxYkUPhQw */         if (i==n)
/* IiPgTCW9r ily traian XxYkUPhQw */         cout << "(" << i << "," << m << ")";
/* IiPgTCW9r ily traian XxYkUPhQw */         else
/* IiPgTCW9r ily traian XxYkUPhQw */         cout << "(" << i << "," << m << "),";
/* IiPgTCW9r ily traian XxYkUPhQw */         
/* IiPgTCW9r ily traian XxYkUPhQw */     }
/* IiPgTCW9r ily traian XxYkUPhQw */     cout << "}";
/* IiPgTCW9r ily traian XxYkUPhQw */     return 0;
/* IiPgTCW9r ily traian XxYkUPhQw */ }