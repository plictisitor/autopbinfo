/* VBl8VJrdw ily traian i3AZwMmCQ */ #include <algorithm>
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
/* VBl8VJrdw ily traian i3AZwMmCQ */ using namespace std;
/* VBl8VJrdw ily traian i3AZwMmCQ */ 
/* VBl8VJrdw ily traian i3AZwMmCQ */ int main()
/* VBl8VJrdw ily traian i3AZwMmCQ */ {
/* VBl8VJrdw ily traian i3AZwMmCQ */     int a , b;
/* VBl8VJrdw ily traian i3AZwMmCQ */     cin >> a >> b;
/* VBl8VJrdw ily traian i3AZwMmCQ */     cout << min(a , b) << ' ';
/* VBl8VJrdw ily traian i3AZwMmCQ */     int cnt = 0;
/* VBl8VJrdw ily traian i3AZwMmCQ */     while(a!=0 && b!=0)
/* VBl8VJrdw ily traian i3AZwMmCQ */     {
/* VBl8VJrdw ily traian i3AZwMmCQ */         if(a > b)
/* VBl8VJrdw ily traian i3AZwMmCQ */         {
/* VBl8VJrdw ily traian i3AZwMmCQ */             int x = a/b;
/* VBl8VJrdw ily traian i3AZwMmCQ */             a-=(x*b);
/* VBl8VJrdw ily traian i3AZwMmCQ */             cnt += x;
/* VBl8VJrdw ily traian i3AZwMmCQ */         }
/* VBl8VJrdw ily traian i3AZwMmCQ */         else
/* VBl8VJrdw ily traian i3AZwMmCQ */         {
/* VBl8VJrdw ily traian i3AZwMmCQ */             int x = b/a;
/* VBl8VJrdw ily traian i3AZwMmCQ */             b-=(x*a);
/* VBl8VJrdw ily traian i3AZwMmCQ */             cnt += x;
/* VBl8VJrdw ily traian i3AZwMmCQ */         }
/* VBl8VJrdw ily traian i3AZwMmCQ */     }
/* VBl8VJrdw ily traian i3AZwMmCQ */     cout << cnt;
/* VBl8VJrdw ily traian i3AZwMmCQ */     return 0;
/* VBl8VJrdw ily traian i3AZwMmCQ */ }