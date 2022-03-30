/* BUgQsXfXq ily traian xpDAcJNny */ #include <algorithm>
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
/* BUgQsXfXq ily traian xpDAcJNny */ 
/* BUgQsXfXq ily traian xpDAcJNny */ using namespace std;
/* BUgQsXfXq ily traian xpDAcJNny */ 
/* BUgQsXfXq ily traian xpDAcJNny */ int main()
/* BUgQsXfXq ily traian xpDAcJNny */ {
/* BUgQsXfXq ily traian xpDAcJNny */     bool ok = false;
/* BUgQsXfXq ily traian xpDAcJNny */     long long int n;
/* BUgQsXfXq ily traian xpDAcJNny */     cin >> n;
/* BUgQsXfXq ily traian xpDAcJNny */     for (int i = 1 ; i * i <= n / 2 && !ok; ++i)
/* BUgQsXfXq ily traian xpDAcJNny */     {
/* BUgQsXfXq ily traian xpDAcJNny */         long long int x = 1LL * i * i;
/* BUgQsXfXq ily traian xpDAcJNny */         long long int y = n - x;
/* BUgQsXfXq ily traian xpDAcJNny */         long long int j = sqrt(y);
/* BUgQsXfXq ily traian xpDAcJNny */         if(1LL * j * j == y && !ok)
/* BUgQsXfXq ily traian xpDAcJNny */             cout << min(y, x) << ' ' << max(x, y), ok = true;
/* BUgQsXfXq ily traian xpDAcJNny */     }
/* BUgQsXfXq ily traian xpDAcJNny */     if(!ok)
/* BUgQsXfXq ily traian xpDAcJNny */         cout << "NU";
/* BUgQsXfXq ily traian xpDAcJNny */     return 0;
/* BUgQsXfXq ily traian xpDAcJNny */ }