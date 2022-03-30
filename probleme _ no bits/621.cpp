/* YW6elDNf6 ily traian VArm9paZN */ #include <algorithm>
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
/* YW6elDNf6 ily traian VArm9paZN */ 
/* YW6elDNf6 ily traian VArm9paZN */ using namespace std;
/* YW6elDNf6 ily traian VArm9paZN */ int main()
/* YW6elDNf6 ily traian VArm9paZN */ {
/* YW6elDNf6 ily traian VArm9paZN */     int n , a[10001] , max = 0 , f[10001]={0} , cnt = 0;
/* YW6elDNf6 ily traian VArm9paZN */     cin >> n;
/* YW6elDNf6 ily traian VArm9paZN */     for(int i = 0  ;i < n ; ++i)
/* YW6elDNf6 ily traian VArm9paZN */     {
/* YW6elDNf6 ily traian VArm9paZN */         cin >> a[i];
/* YW6elDNf6 ily traian VArm9paZN */         if(a[i]>max) max = a[i];
/* YW6elDNf6 ily traian VArm9paZN */         f[a[i]]++;
/* YW6elDNf6 ily traian VArm9paZN */     }
/* YW6elDNf6 ily traian VArm9paZN */     sort(a , a+n);
/* YW6elDNf6 ily traian VArm9paZN */     for(int i = 1 ; i <= max ; ++i)
/* YW6elDNf6 ily traian VArm9paZN */     {
/* YW6elDNf6 ily traian VArm9paZN */         cnt++;
/* YW6elDNf6 ily traian VArm9paZN */         if(f[i]==0)
/* YW6elDNf6 ily traian VArm9paZN */         {
/* YW6elDNf6 ily traian VArm9paZN */             cout << i;
/* YW6elDNf6 ily traian VArm9paZN */             break;
/* YW6elDNf6 ily traian VArm9paZN */         }
/* YW6elDNf6 ily traian VArm9paZN */     }
/* YW6elDNf6 ily traian VArm9paZN */     if(cnt==max)cout << a[n-1]+1;
/* YW6elDNf6 ily traian VArm9paZN */     return 0;
/* YW6elDNf6 ily traian VArm9paZN */ }