/* Bysfla5UN ily traian povxJV1zL */ #include <algorithm>
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
/* Bysfla5UN ily traian povxJV1zL */ void ordonare(int a[] , int n)
/* Bysfla5UN ily traian povxJV1zL */ {
/* Bysfla5UN ily traian povxJV1zL */     int b[1000];
/* Bysfla5UN ily traian povxJV1zL */     for(int i = 0 ; i < n ; ++i)
/* Bysfla5UN ily traian povxJV1zL */     {
/* Bysfla5UN ily traian povxJV1zL */         b[i]=a[i];
/* Bysfla5UN ily traian povxJV1zL */     }
/* Bysfla5UN ily traian povxJV1zL */     sort(b , b+n);
/* Bysfla5UN ily traian povxJV1zL */     int p=0;
/* Bysfla5UN ily traian povxJV1zL */     for(int i = n-1 ; i >= 0 ; --i)
/* Bysfla5UN ily traian povxJV1zL */     {
/* Bysfla5UN ily traian povxJV1zL */         a[p]=b[i];
/* Bysfla5UN ily traian povxJV1zL */         p++;
/* Bysfla5UN ily traian povxJV1zL */     }
/* Bysfla5UN ily traian povxJV1zL */ }