/* HsGU7Kuvj ily traian 6U0TakHhf */ #include <algorithm>
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
/* HsGU7Kuvj ily traian 6U0TakHhf */ using namespace std;
/* HsGU7Kuvj ily traian 6U0TakHhf */ 
/* HsGU7Kuvj ily traian 6U0TakHhf */ int main()
/* HsGU7Kuvj ily traian 6U0TakHhf */ {
/* HsGU7Kuvj ily traian 6U0TakHhf */     int n;
/* HsGU7Kuvj ily traian 6U0TakHhf */     cin >> n;
/* HsGU7Kuvj ily traian 6U0TakHhf */     int a[1001];
/* HsGU7Kuvj ily traian 6U0TakHhf */     int cnt=0;
/* HsGU7Kuvj ily traian 6U0TakHhf */     for(int i = 1 ; i <= n ; ++i)
/* HsGU7Kuvj ily traian 6U0TakHhf */     cin >> a[i];
/* HsGU7Kuvj ily traian 6U0TakHhf */     for(int i = 1 ; i <= n ; ++i)
/* HsGU7Kuvj ily traian 6U0TakHhf */     {
/* HsGU7Kuvj ily traian 6U0TakHhf */         a[0]=a[1];
/* HsGU7Kuvj ily traian 6U0TakHhf */         if(a[i]==a[i-1])
/* HsGU7Kuvj ily traian 6U0TakHhf */             cnt++;
/* HsGU7Kuvj ily traian 6U0TakHhf */     }
/* HsGU7Kuvj ily traian 6U0TakHhf */     if(cnt==n)
/* HsGU7Kuvj ily traian 6U0TakHhf */        cout << "sir constant";
/* HsGU7Kuvj ily traian 6U0TakHhf */     else
/* HsGU7Kuvj ily traian 6U0TakHhf */     {
/* HsGU7Kuvj ily traian 6U0TakHhf */         cnt=0;
/* HsGU7Kuvj ily traian 6U0TakHhf */         a[0]=-1;
/* HsGU7Kuvj ily traian 6U0TakHhf */     for(int i = 1 ; i <= n ; ++i)
/* HsGU7Kuvj ily traian 6U0TakHhf */     {
/* HsGU7Kuvj ily traian 6U0TakHhf */         if(a[i]>a[i-1])
/* HsGU7Kuvj ily traian 6U0TakHhf */         cnt++;
/* HsGU7Kuvj ily traian 6U0TakHhf */     }
/* HsGU7Kuvj ily traian 6U0TakHhf */     if(cnt==n)
/* HsGU7Kuvj ily traian 6U0TakHhf */     cout << "sir strict crescator";
/* HsGU7Kuvj ily traian 6U0TakHhf */     else
/* HsGU7Kuvj ily traian 6U0TakHhf */     {
/* HsGU7Kuvj ily traian 6U0TakHhf */         cnt=0;
/* HsGU7Kuvj ily traian 6U0TakHhf */         for(int i = 1 ; i <= n ; ++i)
/* HsGU7Kuvj ily traian 6U0TakHhf */         if(a[i]>=a[i-1])
/* HsGU7Kuvj ily traian 6U0TakHhf */         cnt++;
/* HsGU7Kuvj ily traian 6U0TakHhf */         if(cnt==n)
/* HsGU7Kuvj ily traian 6U0TakHhf */         cout << "sir crescator";
/* HsGU7Kuvj ily traian 6U0TakHhf */         else
/* HsGU7Kuvj ily traian 6U0TakHhf */         {
/* HsGU7Kuvj ily traian 6U0TakHhf */             cnt=0;
/* HsGU7Kuvj ily traian 6U0TakHhf */             for(int i = 1 ; i <= n ; ++i)
/* HsGU7Kuvj ily traian 6U0TakHhf */             {
/* HsGU7Kuvj ily traian 6U0TakHhf */                 a[0]=1000000001;
/* HsGU7Kuvj ily traian 6U0TakHhf */                 if(a[i]<a[i-1])
/* HsGU7Kuvj ily traian 6U0TakHhf */                 cnt++;
/* HsGU7Kuvj ily traian 6U0TakHhf */             }
/* HsGU7Kuvj ily traian 6U0TakHhf */             if(cnt==n)
/* HsGU7Kuvj ily traian 6U0TakHhf */             cout << "sir strict descrescator";
/* HsGU7Kuvj ily traian 6U0TakHhf */             else
/* HsGU7Kuvj ily traian 6U0TakHhf */             {
/* HsGU7Kuvj ily traian 6U0TakHhf */                 cnt=0;
/* HsGU7Kuvj ily traian 6U0TakHhf */                 for(int i = 1 ; i <= n ; ++i) 
/* HsGU7Kuvj ily traian 6U0TakHhf */                 if(a[i]<=a[i-1])
/* HsGU7Kuvj ily traian 6U0TakHhf */                 cnt++;
/* HsGU7Kuvj ily traian 6U0TakHhf */                 if(cnt==n)
/* HsGU7Kuvj ily traian 6U0TakHhf */                 cout << "sir descrescator";
/* HsGU7Kuvj ily traian 6U0TakHhf */                 else
/* HsGU7Kuvj ily traian 6U0TakHhf */                 cout << "sir neordonat";
/* HsGU7Kuvj ily traian 6U0TakHhf */             }
/* HsGU7Kuvj ily traian 6U0TakHhf */         }
/* HsGU7Kuvj ily traian 6U0TakHhf */     }
/* HsGU7Kuvj ily traian 6U0TakHhf */     }
/* HsGU7Kuvj ily traian 6U0TakHhf */ }