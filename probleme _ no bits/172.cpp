/* IAiUcIfbi ily traian NjNm48Beo */ #include <algorithm>
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
/* IAiUcIfbi ily traian NjNm48Beo */ 
/* IAiUcIfbi ily traian NjNm48Beo */ using namespace std;
/* IAiUcIfbi ily traian NjNm48Beo */ 
/* IAiUcIfbi ily traian NjNm48Beo */ int main()
/* IAiUcIfbi ily traian NjNm48Beo */ {
/* IAiUcIfbi ily traian NjNm48Beo */     int n;
/* IAiUcIfbi ily traian NjNm48Beo */     cin >> n;
/* IAiUcIfbi ily traian NjNm48Beo */     int x , y;
/* IAiUcIfbi ily traian NjNm48Beo */     cin >> x;
/* IAiUcIfbi ily traian NjNm48Beo */     int a , b , min=1000000000;
/* IAiUcIfbi ily traian NjNm48Beo */     int smin=2000000000;
/* IAiUcIfbi ily traian NjNm48Beo */     for(int i = 2 ; i <= n ; ++i)
/* IAiUcIfbi ily traian NjNm48Beo */     {
/* IAiUcIfbi ily traian NjNm48Beo */         cin >> y;
/* IAiUcIfbi ily traian NjNm48Beo */         if(abs(x - y) < min)
/* IAiUcIfbi ily traian NjNm48Beo */             min = abs(x - y) , a = x , b = y;
/* IAiUcIfbi ily traian NjNm48Beo */         else if(abs(x-y)==min)
/* IAiUcIfbi ily traian NjNm48Beo */         {
/* IAiUcIfbi ily traian NjNm48Beo */             if(x + y < smin)
/* IAiUcIfbi ily traian NjNm48Beo */                 smin=x+y , a=x , b=y;
/* IAiUcIfbi ily traian NjNm48Beo */         }
/* IAiUcIfbi ily traian NjNm48Beo */         x=y;
/* IAiUcIfbi ily traian NjNm48Beo */     }
/* IAiUcIfbi ily traian NjNm48Beo */     cout << a << ' ' << b;
/* IAiUcIfbi ily traian NjNm48Beo */     return 0;
/* IAiUcIfbi ily traian NjNm48Beo */ }