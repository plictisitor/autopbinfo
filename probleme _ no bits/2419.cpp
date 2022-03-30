/* xsNFS5DV9 ily traian 5MhFmDFxl */ #include <algorithm>
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
/* xsNFS5DV9 ily traian 5MhFmDFxl */ using namespace std;
/* xsNFS5DV9 ily traian 5MhFmDFxl */ 
/* xsNFS5DV9 ily traian 5MhFmDFxl */ int main()
/* xsNFS5DV9 ily traian 5MhFmDFxl */ {
/* xsNFS5DV9 ily traian 5MhFmDFxl */     int a , b;
/* xsNFS5DV9 ily traian 5MhFmDFxl */     cin >> a >> b;
/* xsNFS5DV9 ily traian 5MhFmDFxl */     if(a > b)
/* xsNFS5DV9 ily traian 5MhFmDFxl */         swap(a , b);
/* xsNFS5DV9 ily traian 5MhFmDFxl */     bool ok = true;
/* xsNFS5DV9 ily traian 5MhFmDFxl */     int cnt = 0;
/* xsNFS5DV9 ily traian 5MhFmDFxl */     for(int i = 1 ; ok ; ++i)
/* xsNFS5DV9 ily traian 5MhFmDFxl */     {
/* xsNFS5DV9 ily traian 5MhFmDFxl */         if(a != b)
/* xsNFS5DV9 ily traian 5MhFmDFxl */         {
/* xsNFS5DV9 ily traian 5MhFmDFxl */             a++;
/* xsNFS5DV9 ily traian 5MhFmDFxl */             cnt+=i;
/* xsNFS5DV9 ily traian 5MhFmDFxl */             if(a == b)
/* xsNFS5DV9 ily traian 5MhFmDFxl */                 ok=false;
/* xsNFS5DV9 ily traian 5MhFmDFxl */             else
/* xsNFS5DV9 ily traian 5MhFmDFxl */                 b-- , cnt+=i;
/* xsNFS5DV9 ily traian 5MhFmDFxl */         }
/* xsNFS5DV9 ily traian 5MhFmDFxl */         else
/* xsNFS5DV9 ily traian 5MhFmDFxl */         {
/* xsNFS5DV9 ily traian 5MhFmDFxl */             ok = false;
/* xsNFS5DV9 ily traian 5MhFmDFxl */         }
/* xsNFS5DV9 ily traian 5MhFmDFxl */     }
/* xsNFS5DV9 ily traian 5MhFmDFxl */     cout << cnt;
/* xsNFS5DV9 ily traian 5MhFmDFxl */     return 0;
/* xsNFS5DV9 ily traian 5MhFmDFxl */ }