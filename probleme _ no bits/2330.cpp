/* B8kBYrXX0 ily traian oKVaPpE4z */ #include <algorithm>
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
/* B8kBYrXX0 ily traian oKVaPpE4z */ using namespace std;
/* B8kBYrXX0 ily traian oKVaPpE4z */ ifstream cin("prim023.in");
/* B8kBYrXX0 ily traian oKVaPpE4z */ ofstream cout("prim023.out");
/* B8kBYrXX0 ily traian oKVaPpE4z */ int E[35005], prime[6001], nrp;
/* B8kBYrXX0 ily traian oKVaPpE4z */ int prim(int n)
/* B8kBYrXX0 ily traian oKVaPpE4z */ {
/* B8kBYrXX0 ily traian oKVaPpE4z */     if(n == 0 || n == 1) return 0;
/* B8kBYrXX0 ily traian oKVaPpE4z */     if(n == 2) return 1;
/* B8kBYrXX0 ily traian oKVaPpE4z */     if(n % 2 == 0) return 0;
/* B8kBYrXX0 ily traian oKVaPpE4z */     for(int i = 1 ; prime[i] * prime[i] <= n && i <= nrp ; i ++) if(n % prime[i] == 0) return 0;
/* B8kBYrXX0 ily traian oKVaPpE4z */     return 1;
/* B8kBYrXX0 ily traian oKVaPpE4z */ }
/* B8kBYrXX0 ily traian oKVaPpE4z */ 
/* B8kBYrXX0 ily traian oKVaPpE4z */ int main()
/* B8kBYrXX0 ily traian oKVaPpE4z */ {
/* B8kBYrXX0 ily traian oKVaPpE4z */     int n , cnt = 0 , p = 0 , x , c = 1 , a[10001];
/* B8kBYrXX0 ily traian oKVaPpE4z */     cin >> n;
/* B8kBYrXX0 ily traian oKVaPpE4z */ 
/* B8kBYrXX0 ily traian oKVaPpE4z */     for(int i = 2 ; i < 35000 ; i++) E[i] = 1;
/* B8kBYrXX0 ily traian oKVaPpE4z */     for(int i = 2 ; i < 35000 ; i++)
/* B8kBYrXX0 ily traian oKVaPpE4z */         if(E[i] == 1)
/* B8kBYrXX0 ily traian oKVaPpE4z */         {
/* B8kBYrXX0 ily traian oKVaPpE4z */             prime[ ++ nrp] = i;
/* B8kBYrXX0 ily traian oKVaPpE4z */             for(int j = i * i; j < 35000; j += i) E[j] = 0;
/* B8kBYrXX0 ily traian oKVaPpE4z */         }
/* B8kBYrXX0 ily traian oKVaPpE4z */     for(int i = 0 ; i < n ; ++i)
/* B8kBYrXX0 ily traian oKVaPpE4z */     {
/* B8kBYrXX0 ily traian oKVaPpE4z */         cin >> x;
/* B8kBYrXX0 ily traian oKVaPpE4z */         if(prim(x)) cnt++;
/* B8kBYrXX0 ily traian oKVaPpE4z */         if(x==1) p++;
/* B8kBYrXX0 ily traian oKVaPpE4z */     }
/* B8kBYrXX0 ily traian oKVaPpE4z */     while(cnt)
/* B8kBYrXX0 ily traian oKVaPpE4z */     {
/* B8kBYrXX0 ily traian oKVaPpE4z */         a[c]=cnt%10;
/* B8kBYrXX0 ily traian oKVaPpE4z */         c++;
/* B8kBYrXX0 ily traian oKVaPpE4z */         cnt/=10;
/* B8kBYrXX0 ily traian oKVaPpE4z */     }
/* B8kBYrXX0 ily traian oKVaPpE4z */     c--;
/* B8kBYrXX0 ily traian oKVaPpE4z */     for(int i = 1; i <= p ; i++)
/* B8kBYrXX0 ily traian oKVaPpE4z */     {
/* B8kBYrXX0 ily traian oKVaPpE4z */         int t = 0;
/* B8kBYrXX0 ily traian oKVaPpE4z */         for(int j = 1; j <= c ; j++)
/* B8kBYrXX0 ily traian oKVaPpE4z */         {
/* B8kBYrXX0 ily traian oKVaPpE4z */             int cif=a[j]*2+t;
/* B8kBYrXX0 ily traian oKVaPpE4z */             a[j] = cif % 10;
/* B8kBYrXX0 ily traian oKVaPpE4z */             t=cif/10;
/* B8kBYrXX0 ily traian oKVaPpE4z */         }
/* B8kBYrXX0 ily traian oKVaPpE4z */         while(t)
/* B8kBYrXX0 ily traian oKVaPpE4z */         {
/* B8kBYrXX0 ily traian oKVaPpE4z */             a[++c]=t%10;
/* B8kBYrXX0 ily traian oKVaPpE4z */             t/=10;
/* B8kBYrXX0 ily traian oKVaPpE4z */         }
/* B8kBYrXX0 ily traian oKVaPpE4z */     }
/* B8kBYrXX0 ily traian oKVaPpE4z */     for(int i = c ; i >= 1 ; --i) cout << a[i];
/* B8kBYrXX0 ily traian oKVaPpE4z */     if(c==0)cout << c;
/* B8kBYrXX0 ily traian oKVaPpE4z */ }