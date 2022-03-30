/* hxwqph11D ily traian KR39CQdtm */ #include <algorithm>
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
/* hxwqph11D ily traian KR39CQdtm */ using namespace std;
/* hxwqph11D ily traian KR39CQdtm */ int main()
/* hxwqph11D ily traian KR39CQdtm */ {
/* hxwqph11D ily traian KR39CQdtm */     int n, a[22][22];
/* hxwqph11D ily traian KR39CQdtm */     cin>>n;
/* hxwqph11D ily traian KR39CQdtm */     int i=1, j=1, k=1;
/* hxwqph11D ily traian KR39CQdtm */     while (i<=n)
/* hxwqph11D ily traian KR39CQdtm */     {
/* hxwqph11D ily traian KR39CQdtm */         if (k%2==0 && k%3!=0)
/* hxwqph11D ily traian KR39CQdtm */         {
/* hxwqph11D ily traian KR39CQdtm */                 a[i][j]=k;
/* hxwqph11D ily traian KR39CQdtm */                 k++;
/* hxwqph11D ily traian KR39CQdtm */                 j++;
/* hxwqph11D ily traian KR39CQdtm */                 if (j==n+1)
/* hxwqph11D ily traian KR39CQdtm */                 {
/* hxwqph11D ily traian KR39CQdtm */                         j=1;
/* hxwqph11D ily traian KR39CQdtm */                         i++;
/* hxwqph11D ily traian KR39CQdtm */                 }
/* hxwqph11D ily traian KR39CQdtm */         }
/* hxwqph11D ily traian KR39CQdtm */         else k++;
/* hxwqph11D ily traian KR39CQdtm */     }
/* hxwqph11D ily traian KR39CQdtm */ 
/* hxwqph11D ily traian KR39CQdtm */     for (int i=1; i<=n; i++)
/* hxwqph11D ily traian KR39CQdtm */     {
/* hxwqph11D ily traian KR39CQdtm */         for (int j=1; j<=n; j++)
/* hxwqph11D ily traian KR39CQdtm */             cout<<a[i][j]<<" ";
/* hxwqph11D ily traian KR39CQdtm */         cout<<endl;
/* hxwqph11D ily traian KR39CQdtm */     }
/* hxwqph11D ily traian KR39CQdtm */     return 0;
/* hxwqph11D ily traian KR39CQdtm */ }