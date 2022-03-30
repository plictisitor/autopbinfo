/* k8lic4BkK ily traian 9Aj4VbKMe */ #include <algorithm>
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
/* k8lic4BkK ily traian 9Aj4VbKMe */ using namespace std;
/* k8lic4BkK ily traian 9Aj4VbKMe */ long long a[11] , n , nr , x;
/* k8lic4BkK ily traian 9Aj4VbKMe */ int main()
/* k8lic4BkK ily traian 9Aj4VbKMe */ {
/* k8lic4BkK ily traian 9Aj4VbKMe */     cin >> n;
/* k8lic4BkK ily traian 9Aj4VbKMe */     for(int i = 1 ; i <= n ; ++i)
/* k8lic4BkK ily traian 9Aj4VbKMe */     {
/* k8lic4BkK ily traian 9Aj4VbKMe */         cin >> x;
/* k8lic4BkK ily traian 9Aj4VbKMe */         int max = 0;
/* k8lic4BkK ily traian 9Aj4VbKMe */         while(x != 0)
/* k8lic4BkK ily traian 9Aj4VbKMe */         {
/* k8lic4BkK ily traian 9Aj4VbKMe */             if(x % 10 > max) max = x % 10;
/* k8lic4BkK ily traian 9Aj4VbKMe */             x /= 10;
/* k8lic4BkK ily traian 9Aj4VbKMe */         }
/* k8lic4BkK ily traian 9Aj4VbKMe */         a[i] = max;
/* k8lic4BkK ily traian 9Aj4VbKMe */     }
/* k8lic4BkK ily traian 9Aj4VbKMe */     for(int i = 1 ; i <= n ; ++i) nr = nr * 10 + a[i];
/* k8lic4BkK ily traian 9Aj4VbKMe */     cout << 1LL * nr * nr;
/* k8lic4BkK ily traian 9Aj4VbKMe */     return 0;
/* k8lic4BkK ily traian 9Aj4VbKMe */ }