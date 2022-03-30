/* xLLDF0QG4 ily traian rWVFiDUUH */ #include <algorithm>
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
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */ using namespace std;
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */ int main()
/* xLLDF0QG4 ily traian rWVFiDUUH */ {
/* xLLDF0QG4 ily traian rWVFiDUUH */     int n;
/* xLLDF0QG4 ily traian rWVFiDUUH */     cin >> n;
/* xLLDF0QG4 ily traian rWVFiDUUH */     int a[1001];
/* xLLDF0QG4 ily traian rWVFiDUUH */     int min = 1000001, max = 0, imin, imax;
/* xLLDF0QG4 ily traian rWVFiDUUH */     for(int i = 1; i <= n; ++i)
/* xLLDF0QG4 ily traian rWVFiDUUH */         cin >> a[i];
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */     for(int i = 1; i <= n; ++i){
/* xLLDF0QG4 ily traian rWVFiDUUH */         if(a[i] < min)
/* xLLDF0QG4 ily traian rWVFiDUUH */             min = a[i], imin = i;
/* xLLDF0QG4 ily traian rWVFiDUUH */         if(a[i] > max)
/* xLLDF0QG4 ily traian rWVFiDUUH */             max = a[i], imax = i;
/* xLLDF0QG4 ily traian rWVFiDUUH */     }
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */     if(imin > imax) swap(imin, imax);
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */     for(int i = imin; i < imax; ++i)
/* xLLDF0QG4 ily traian rWVFiDUUH */         for(int j = i + 1; j <= imax; ++j)
/* xLLDF0QG4 ily traian rWVFiDUUH */             if(a[i] > a[j])
/* xLLDF0QG4 ily traian rWVFiDUUH */                 swap(a[i], a[j]);
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */     for(int i = 1; i <= n; ++i)
/* xLLDF0QG4 ily traian rWVFiDUUH */         cout << a[i] << " ";
/* xLLDF0QG4 ily traian rWVFiDUUH */ 
/* xLLDF0QG4 ily traian rWVFiDUUH */     return 0;
/* xLLDF0QG4 ily traian rWVFiDUUH */ }