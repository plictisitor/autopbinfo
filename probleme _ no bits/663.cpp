/* fXVmxdP9m ily traian 2nahucQTL */ #include <algorithm>
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
/* fXVmxdP9m ily traian 2nahucQTL */ using namespace std;
/* fXVmxdP9m ily traian 2nahucQTL */ ifstream cin("lungime1.in");
/* fXVmxdP9m ily traian 2nahucQTL */ ofstream cout("lungime1.out");
/* fXVmxdP9m ily traian 2nahucQTL */ int f[100001] , v[100001];
/* fXVmxdP9m ily traian 2nahucQTL */ int main()
/* fXVmxdP9m ily traian 2nahucQTL */ {
/* fXVmxdP9m ily traian 2nahucQTL */     int n , x , max = 0 , ind = 1;
/* fXVmxdP9m ily traian 2nahucQTL */     cin >> n;
/* fXVmxdP9m ily traian 2nahucQTL */     for(int i = 1 ; i <= n ; ++i)
/* fXVmxdP9m ily traian 2nahucQTL */     {
/* fXVmxdP9m ily traian 2nahucQTL */         cin >> x;
/* fXVmxdP9m ily traian 2nahucQTL */         if(f[x]==1)
/* fXVmxdP9m ily traian 2nahucQTL */             {
/* fXVmxdP9m ily traian 2nahucQTL */                 if(ind - v[x] > max)
/* fXVmxdP9m ily traian 2nahucQTL */                     max=ind-v[x];
/* fXVmxdP9m ily traian 2nahucQTL */             }
/* fXVmxdP9m ily traian 2nahucQTL */         else
/* fXVmxdP9m ily traian 2nahucQTL */             f[x]++ , v[x]=ind;
/* fXVmxdP9m ily traian 2nahucQTL */         ind++;
/* fXVmxdP9m ily traian 2nahucQTL */     }
/* fXVmxdP9m ily traian 2nahucQTL */     cout << max+1;
/* fXVmxdP9m ily traian 2nahucQTL */     return 0;
/* fXVmxdP9m ily traian 2nahucQTL */ }