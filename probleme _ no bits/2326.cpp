/* DnV9hVyum ily traian GuA2vjauA */ #include <algorithm>
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
/* DnV9hVyum ily traian GuA2vjauA */ using namespace std;
/* DnV9hVyum ily traian GuA2vjauA */ int main()
/* DnV9hVyum ily traian GuA2vjauA */ {
/* DnV9hVyum ily traian GuA2vjauA */     unsigned long long n , cnt = 0;
/* DnV9hVyum ily traian GuA2vjauA */     cin >> n;
/* DnV9hVyum ily traian GuA2vjauA */     if(n == 1) cout << 0;
/* DnV9hVyum ily traian GuA2vjauA */     else
/* DnV9hVyum ily traian GuA2vjauA */     if(n % 2 == 1 || n == 0) cout << -1;
/* DnV9hVyum ily traian GuA2vjauA */     else
/* DnV9hVyum ily traian GuA2vjauA */     {
/* DnV9hVyum ily traian GuA2vjauA */         while(n % 2 == 0)
/* DnV9hVyum ily traian GuA2vjauA */         {
/* DnV9hVyum ily traian GuA2vjauA */             cnt++;
/* DnV9hVyum ily traian GuA2vjauA */             n /= 2;
/* DnV9hVyum ily traian GuA2vjauA */         }
/* DnV9hVyum ily traian GuA2vjauA */         if(cnt > 0 && n == 1) cout << cnt ;
/* DnV9hVyum ily traian GuA2vjauA */         else cout << -1;
/* DnV9hVyum ily traian GuA2vjauA */     }
/* DnV9hVyum ily traian GuA2vjauA */     return 0;
/* DnV9hVyum ily traian GuA2vjauA */ }