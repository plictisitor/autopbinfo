/* 7SbQHCbcY ily traian FHX8LTJOy */ #include <algorithm>
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
/* 7SbQHCbcY ily traian FHX8LTJOy */ using namespace std;
/* 7SbQHCbcY ily traian FHX8LTJOy */ int main()
/* 7SbQHCbcY ily traian FHX8LTJOy */ {
/* 7SbQHCbcY ily traian FHX8LTJOy */     int n , m , a[10001] , ok = 0 , imin = -1 , imax = -1 , s = 0;
/* 7SbQHCbcY ily traian FHX8LTJOy */     cin >> n;
/* 7SbQHCbcY ily traian FHX8LTJOy */     for(int i = 0 ; i < n ; ++i)
/* 7SbQHCbcY ily traian FHX8LTJOy */     {
/* 7SbQHCbcY ily traian FHX8LTJOy */             cin >> a[i];
/* 7SbQHCbcY ily traian FHX8LTJOy */             if(a[i] % 2 == 1 && ok == 0) {imin = i ;ok = 1;}
/* 7SbQHCbcY ily traian FHX8LTJOy */             else if(a[i] % 2 == 1) imax = i;
/* 7SbQHCbcY ily traian FHX8LTJOy */     }
/* 7SbQHCbcY ily traian FHX8LTJOy */     for(int i = 0 ; i < n ; ++i)
/* 7SbQHCbcY ily traian FHX8LTJOy */     {
/* 7SbQHCbcY ily traian FHX8LTJOy */         if(i >= imin && i <= imax) s += a[i];
/* 7SbQHCbcY ily traian FHX8LTJOy */     }
/* 7SbQHCbcY ily traian FHX8LTJOy */     cout << s;
/* 7SbQHCbcY ily traian FHX8LTJOy */     return 0;
/* 7SbQHCbcY ily traian FHX8LTJOy */ }