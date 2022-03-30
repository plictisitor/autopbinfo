/* s8MzjPdx7 ily traian 37Ds9qoET */ #include <algorithm>
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
/* s8MzjPdx7 ily traian 37Ds9qoET */ 
/* s8MzjPdx7 ily traian 37Ds9qoET */ using namespace std;
/* s8MzjPdx7 ily traian 37Ds9qoET */ 
/* s8MzjPdx7 ily traian 37Ds9qoET */ int main()
/* s8MzjPdx7 ily traian 37Ds9qoET */ {
/* s8MzjPdx7 ily traian 37Ds9qoET */     int n;
/* s8MzjPdx7 ily traian 37Ds9qoET */     cin >> n;
/* s8MzjPdx7 ily traian 37Ds9qoET */     int a[501];
/* s8MzjPdx7 ily traian 37Ds9qoET */     int rez[11];
/* s8MzjPdx7 ily traian 37Ds9qoET */     for(int i = 1; i <= n; ++i){
/* s8MzjPdx7 ily traian 37Ds9qoET */         int nelem;
/* s8MzjPdx7 ily traian 37Ds9qoET */         cin >> nelem;
/* s8MzjPdx7 ily traian 37Ds9qoET */         for(int j = 1; j <= nelem; ++j)
/* s8MzjPdx7 ily traian 37Ds9qoET */             cin >> a[j];
/* s8MzjPdx7 ily traian 37Ds9qoET */         bool crescator = true;
/* s8MzjPdx7 ily traian 37Ds9qoET */         for(int j = 2; j <= nelem; ++j)
/* s8MzjPdx7 ily traian 37Ds9qoET */             if(a[j] < a[j-1])
/* s8MzjPdx7 ily traian 37Ds9qoET */                 crescator = false;
/* s8MzjPdx7 ily traian 37Ds9qoET */         if(crescator)
/* s8MzjPdx7 ily traian 37Ds9qoET */             rez[i] = 1;
/* s8MzjPdx7 ily traian 37Ds9qoET */         else
/* s8MzjPdx7 ily traian 37Ds9qoET */             rez[i] = 0;
/* s8MzjPdx7 ily traian 37Ds9qoET */     }
/* s8MzjPdx7 ily traian 37Ds9qoET */ 
/* s8MzjPdx7 ily traian 37Ds9qoET */     for(int i = 1; i <= n; ++i)
/* s8MzjPdx7 ily traian 37Ds9qoET */         cout << rez[i] << ' ';
/* s8MzjPdx7 ily traian 37Ds9qoET */ 
/* s8MzjPdx7 ily traian 37Ds9qoET */     return 0;
/* s8MzjPdx7 ily traian 37Ds9qoET */ }