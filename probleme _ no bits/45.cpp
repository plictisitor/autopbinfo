/* TDP4KWrY6 ily traian G6WrcRy2p */ #include <algorithm>
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
/* TDP4KWrY6 ily traian G6WrcRy2p */ using namespace std;
/* TDP4KWrY6 ily traian G6WrcRy2p */ 
/* TDP4KWrY6 ily traian G6WrcRy2p */ int main()
/* TDP4KWrY6 ily traian G6WrcRy2p */ {
/* TDP4KWrY6 ily traian G6WrcRy2p */     int n;
/* TDP4KWrY6 ily traian G6WrcRy2p */     cin >> n;
/* TDP4KWrY6 ily traian G6WrcRy2p */     int d = 2;
/* TDP4KWrY6 ily traian G6WrcRy2p */     int nrdiv = 1;
/* TDP4KWrY6 ily traian G6WrcRy2p */     while(n > 1){
/* TDP4KWrY6 ily traian G6WrcRy2p */         int p = 0;
/* TDP4KWrY6 ily traian G6WrcRy2p */         while(n % d == 0)
/* TDP4KWrY6 ily traian G6WrcRy2p */             n /= d, p++;
/* TDP4KWrY6 ily traian G6WrcRy2p */         nrdiv = nrdiv * (p + 1);
/* TDP4KWrY6 ily traian G6WrcRy2p */         d++;
/* TDP4KWrY6 ily traian G6WrcRy2p */         if(d * d > n)
/* TDP4KWrY6 ily traian G6WrcRy2p */             d = n;
/* TDP4KWrY6 ily traian G6WrcRy2p */     }
/* TDP4KWrY6 ily traian G6WrcRy2p */     if(nrdiv != 2)
/* TDP4KWrY6 ily traian G6WrcRy2p */         cout << "NU";
/* TDP4KWrY6 ily traian G6WrcRy2p */     else
/* TDP4KWrY6 ily traian G6WrcRy2p */         cout << "DA";
/* TDP4KWrY6 ily traian G6WrcRy2p */     return 0;
/* TDP4KWrY6 ily traian G6WrcRy2p */ }