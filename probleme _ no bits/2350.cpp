/* QK783bvr6 ily traian 5BtxpQ7Sn */ #include <algorithm>
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
/* QK783bvr6 ily traian 5BtxpQ7Sn */ 
/* QK783bvr6 ily traian 5BtxpQ7Sn */ using namespace std;
/* QK783bvr6 ily traian 5BtxpQ7Sn */ ifstream cin("grup.in");
/* QK783bvr6 ily traian 5BtxpQ7Sn */ ofstream cout("grup.out");
/* QK783bvr6 ily traian 5BtxpQ7Sn */ int pc(int n)
/* QK783bvr6 ily traian 5BtxpQ7Sn */ {
/* QK783bvr6 ily traian 5BtxpQ7Sn */     int p = 0;
/* QK783bvr6 ily traian 5BtxpQ7Sn */     while(n != 0)
/* QK783bvr6 ily traian 5BtxpQ7Sn */     {
/* QK783bvr6 ily traian 5BtxpQ7Sn */         p = n % 10;
/* QK783bvr6 ily traian 5BtxpQ7Sn */         n /= 10;
/* QK783bvr6 ily traian 5BtxpQ7Sn */     }
/* QK783bvr6 ily traian 5BtxpQ7Sn */     return p;
/* QK783bvr6 ily traian 5BtxpQ7Sn */ }
/* QK783bvr6 ily traian 5BtxpQ7Sn */ int main()
/* QK783bvr6 ily traian 5BtxpQ7Sn */ {
/* QK783bvr6 ily traian 5BtxpQ7Sn */     int n , p , pmax = 0 , ind = 0 , mini = 500001;
/* QK783bvr6 ily traian 5BtxpQ7Sn */     cin >> n >> p;
/* QK783bvr6 ily traian 5BtxpQ7Sn */     if(p == 1)
/* QK783bvr6 ily traian 5BtxpQ7Sn */     {
/* QK783bvr6 ily traian 5BtxpQ7Sn */         int a[50001] , f[50001]={0};
/* QK783bvr6 ily traian 5BtxpQ7Sn */         for(int i = 1 ; i <= n ; ++i)
/* QK783bvr6 ily traian 5BtxpQ7Sn */         {
/* QK783bvr6 ily traian 5BtxpQ7Sn */             cin >> a[i];
/* QK783bvr6 ily traian 5BtxpQ7Sn */             f[pc(a[i])]++;
/* QK783bvr6 ily traian 5BtxpQ7Sn */         }
/* QK783bvr6 ily traian 5BtxpQ7Sn */         for(int i = 1 ; i <=9 ; ++i)
/* QK783bvr6 ily traian 5BtxpQ7Sn */         {
/* QK783bvr6 ily traian 5BtxpQ7Sn */             if(f[i] > pmax) pmax = f[i] , ind = i;
/* QK783bvr6 ily traian 5BtxpQ7Sn */         }
/* QK783bvr6 ily traian 5BtxpQ7Sn */         for(int i = 1 ; i <=n ; ++i)
/* QK783bvr6 ily traian 5BtxpQ7Sn */         {
/* QK783bvr6 ily traian 5BtxpQ7Sn */             if(pc(a[i])==ind && a[i] <mini) mini = a[i];
/* QK783bvr6 ily traian 5BtxpQ7Sn */         }
/* QK783bvr6 ily traian 5BtxpQ7Sn */         cout << mini;
/* QK783bvr6 ily traian 5BtxpQ7Sn */     }
/* QK783bvr6 ily traian 5BtxpQ7Sn */     else if(p == 2)
/* QK783bvr6 ily traian 5BtxpQ7Sn */     {
/* QK783bvr6 ily traian 5BtxpQ7Sn */         int a[50001] , l = 1 , lmax = 1 , p[50001]={0};
/* QK783bvr6 ily traian 5BtxpQ7Sn */         for(int i = 1 ; i <=n ; ++i)
/* QK783bvr6 ily traian 5BtxpQ7Sn */         {
/* QK783bvr6 ily traian 5BtxpQ7Sn */             cin >> a[i];
/* QK783bvr6 ily traian 5BtxpQ7Sn */             int x = a[i] , f[50001]={0} , prod = 0;
/* QK783bvr6 ily traian 5BtxpQ7Sn */             while(x != 0)
/* QK783bvr6 ily traian 5BtxpQ7Sn */             {
/* QK783bvr6 ily traian 5BtxpQ7Sn */                 f[x%10]++;
/* QK783bvr6 ily traian 5BtxpQ7Sn */                 x /= 10;
/* QK783bvr6 ily traian 5BtxpQ7Sn */             }
/* QK783bvr6 ily traian 5BtxpQ7Sn */             for(int i = 1 ; i <= 9 ; ++i)
/* QK783bvr6 ily traian 5BtxpQ7Sn */             {
/* QK783bvr6 ily traian 5BtxpQ7Sn */                 if(f[i]) prod = prod * 10 + i;
/* QK783bvr6 ily traian 5BtxpQ7Sn */             }
/* QK783bvr6 ily traian 5BtxpQ7Sn */             if(f[0]) prod *= 10;
/* QK783bvr6 ily traian 5BtxpQ7Sn */             p[i] = prod;
/* QK783bvr6 ily traian 5BtxpQ7Sn */         }
/* QK783bvr6 ily traian 5BtxpQ7Sn */         sort(p+1 , p+n+1);
/* QK783bvr6 ily traian 5BtxpQ7Sn */         for(int i = 1 ; i <= n ; ++i)
/* QK783bvr6 ily traian 5BtxpQ7Sn */         {
/* QK783bvr6 ily traian 5BtxpQ7Sn */             if(p[i] == p[i+1])
/* QK783bvr6 ily traian 5BtxpQ7Sn */             {
/* QK783bvr6 ily traian 5BtxpQ7Sn */                 l++;
/* QK783bvr6 ily traian 5BtxpQ7Sn */                 if(l > lmax) lmax = l;
/* QK783bvr6 ily traian 5BtxpQ7Sn */             }
/* QK783bvr6 ily traian 5BtxpQ7Sn */             else l=1;
/* QK783bvr6 ily traian 5BtxpQ7Sn */         }
/* QK783bvr6 ily traian 5BtxpQ7Sn */         cout << lmax;
/* QK783bvr6 ily traian 5BtxpQ7Sn */     }
/* QK783bvr6 ily traian 5BtxpQ7Sn */ }