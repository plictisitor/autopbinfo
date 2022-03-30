/* GzPSQkK8l ily traian VPCLjgNvM */ #include <algorithm>
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
/* GzPSQkK8l ily traian VPCLjgNvM */ using namespace std;
/* GzPSQkK8l ily traian VPCLjgNvM */ 
/* GzPSQkK8l ily traian VPCLjgNvM */ int main ()
/* GzPSQkK8l ily traian VPCLjgNvM */ {
/* GzPSQkK8l ily traian VPCLjgNvM */     int n;
/* GzPSQkK8l ily traian VPCLjgNvM */     cin >> n;
/* GzPSQkK8l ily traian VPCLjgNvM */     int m=n;
/* GzPSQkK8l ily traian VPCLjgNvM */     int a , b;
/* GzPSQkK8l ily traian VPCLjgNvM */     int cnt=0;
/* GzPSQkK8l ily traian VPCLjgNvM */     int p = 1;
/* GzPSQkK8l ily traian VPCLjgNvM */     int r;
/* GzPSQkK8l ily traian VPCLjgNvM */     while(n)
/* GzPSQkK8l ily traian VPCLjgNvM */     {
/* GzPSQkK8l ily traian VPCLjgNvM */         n/=10;
/* GzPSQkK8l ily traian VPCLjgNvM */         cnt++;
/* GzPSQkK8l ily traian VPCLjgNvM */     }
/* GzPSQkK8l ily traian VPCLjgNvM */     for (int i = 1; i <= cnt/2; ++i)
/* GzPSQkK8l ily traian VPCLjgNvM */         p*=10;
/* GzPSQkK8l ily traian VPCLjgNvM */     if (cnt%2==0)
/* GzPSQkK8l ily traian VPCLjgNvM */     {
/* GzPSQkK8l ily traian VPCLjgNvM */         b = m % p;
/* GzPSQkK8l ily traian VPCLjgNvM */         a = m / p;
/* GzPSQkK8l ily traian VPCLjgNvM */     }
/* GzPSQkK8l ily traian VPCLjgNvM */     else if (cnt%2==1)
/* GzPSQkK8l ily traian VPCLjgNvM */     {
/* GzPSQkK8l ily traian VPCLjgNvM */         b = m % p;
/* GzPSQkK8l ily traian VPCLjgNvM */         a = m / (p*10);
/* GzPSQkK8l ily traian VPCLjgNvM */     }
/* GzPSQkK8l ily traian VPCLjgNvM */         while (b)
/* GzPSQkK8l ily traian VPCLjgNvM */     {
/* GzPSQkK8l ily traian VPCLjgNvM */         r=a%b;
/* GzPSQkK8l ily traian VPCLjgNvM */         a=b;
/* GzPSQkK8l ily traian VPCLjgNvM */         b=r;
/* GzPSQkK8l ily traian VPCLjgNvM */     }
/* GzPSQkK8l ily traian VPCLjgNvM */     cout << a;
/* GzPSQkK8l ily traian VPCLjgNvM */     return 0;
/* GzPSQkK8l ily traian VPCLjgNvM */ }