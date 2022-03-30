/* x70oLYUi7 ily traian vyndY5wyI */ #include <algorithm>
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
/* x70oLYUi7 ily traian vyndY5wyI */ using namespace std;
/* x70oLYUi7 ily traian vyndY5wyI */ 
/* x70oLYUi7 ily traian vyndY5wyI */ ifstream cin("nrdiv.in");
/* x70oLYUi7 ily traian vyndY5wyI */ ofstream cout("nrdiv.out");
/* x70oLYUi7 ily traian vyndY5wyI */ 
/* x70oLYUi7 ily traian vyndY5wyI */ unsigned long long n , x;
/* x70oLYUi7 ily traian vyndY5wyI */ 
/* x70oLYUi7 ily traian vyndY5wyI */ int main()
/* x70oLYUi7 ily traian vyndY5wyI */ {
/* x70oLYUi7 ily traian vyndY5wyI */     cin >> n;
/* x70oLYUi7 ily traian vyndY5wyI */     for(int i = 1 ; i <= n ; i++)
/* x70oLYUi7 ily traian vyndY5wyI */     {
/* x70oLYUi7 ily traian vyndY5wyI */         cin >> x;
/* x70oLYUi7 ily traian vyndY5wyI */         unsigned long long cnt = 1 , d = 2;
/* x70oLYUi7 ily traian vyndY5wyI */         while(x > 1)
/* x70oLYUi7 ily traian vyndY5wyI */         {
/* x70oLYUi7 ily traian vyndY5wyI */             unsigned long long p = 0;
/* x70oLYUi7 ily traian vyndY5wyI */             while(x % d == 0) p++ , x /= d;
/* x70oLYUi7 ily traian vyndY5wyI */             if(p) cnt *= (p + 1);
/* x70oLYUi7 ily traian vyndY5wyI */             d++;
/* x70oLYUi7 ily traian vyndY5wyI */             if(d * d > x) d = x;
/* x70oLYUi7 ily traian vyndY5wyI */         }
/* x70oLYUi7 ily traian vyndY5wyI */         cout << cnt << '\n';
/* x70oLYUi7 ily traian vyndY5wyI */     }
/* x70oLYUi7 ily traian vyndY5wyI */     return 0;
/* x70oLYUi7 ily traian vyndY5wyI */ }