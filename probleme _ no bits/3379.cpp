/* afkpu07lb ily traian HcDX2lw7L */ #include <algorithm>
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
/* afkpu07lb ily traian HcDX2lw7L */ using namespace std;
/* afkpu07lb ily traian HcDX2lw7L */ 
/* afkpu07lb ily traian HcDX2lw7L */ ifstream cin("nkgraf.in");
/* afkpu07lb ily traian HcDX2lw7L */ ofstream cout("nkgraf.out");
/* afkpu07lb ily traian HcDX2lw7L */ 
/* afkpu07lb ily traian HcDX2lw7L */ int cer , n , k , p , v[1001] , x[1001], r[1001];
/* afkpu07lb ily traian HcDX2lw7L */ 
/* afkpu07lb ily traian HcDX2lw7L */ void comb(int n , int k)
/* afkpu07lb ily traian HcDX2lw7L */ {
/* afkpu07lb ily traian HcDX2lw7L */     for(int i = 1 ; i <= k ; i++)
/* afkpu07lb ily traian HcDX2lw7L */         v[i] = n - i + 1;
/* afkpu07lb ily traian HcDX2lw7L */     for(int i = 1 ; i <= k ; i++)
/* afkpu07lb ily traian HcDX2lw7L */     {
/* afkpu07lb ily traian HcDX2lw7L */         int x = i , d = 2;
/* afkpu07lb ily traian HcDX2lw7L */         while(x > 1)
/* afkpu07lb ily traian HcDX2lw7L */         {
/* afkpu07lb ily traian HcDX2lw7L */             if(x % d == 0)
/* afkpu07lb ily traian HcDX2lw7L */             {
/* afkpu07lb ily traian HcDX2lw7L */                 int p = 0;
/* afkpu07lb ily traian HcDX2lw7L */                 for(int j = 1 ; j <= k ; j++)
/* afkpu07lb ily traian HcDX2lw7L */                     if(v[j] % d == 0) p = j;
/* afkpu07lb ily traian HcDX2lw7L */                 v[p] /= d;
/* afkpu07lb ily traian HcDX2lw7L */                 x /= d;
/* afkpu07lb ily traian HcDX2lw7L */             }
/* afkpu07lb ily traian HcDX2lw7L */             else d++;
/* afkpu07lb ily traian HcDX2lw7L */             if(d * d > x) d = x;
/* afkpu07lb ily traian HcDX2lw7L */         }
/* afkpu07lb ily traian HcDX2lw7L */     }
/* afkpu07lb ily traian HcDX2lw7L */     int r[1001];
/* afkpu07lb ily traian HcDX2lw7L */     r[0] = 1 , r[1] = 1;
/* afkpu07lb ily traian HcDX2lw7L */     for(int i = 1 ; i <= k ; i++)
/* afkpu07lb ily traian HcDX2lw7L */     {
/* afkpu07lb ily traian HcDX2lw7L */         int t = 0;
/* afkpu07lb ily traian HcDX2lw7L */         for(int j = 1 ; j <= r[0] ; j++)
/* afkpu07lb ily traian HcDX2lw7L */         {
/* afkpu07lb ily traian HcDX2lw7L */             int x = t + r[j] * v[i];
/* afkpu07lb ily traian HcDX2lw7L */             r[j] = x % 10;
/* afkpu07lb ily traian HcDX2lw7L */             t = x / 10;
/* afkpu07lb ily traian HcDX2lw7L */         }
/* afkpu07lb ily traian HcDX2lw7L */         while(t) r[++r[0]] = t % 10 , t /=10;
/* afkpu07lb ily traian HcDX2lw7L */     }
/* afkpu07lb ily traian HcDX2lw7L */     for(int i = r[0] ; i > 0 ; i--)
/* afkpu07lb ily traian HcDX2lw7L */         cout << r[i];
/* afkpu07lb ily traian HcDX2lw7L */ }
/* afkpu07lb ily traian HcDX2lw7L */ 
/* afkpu07lb ily traian HcDX2lw7L */ void afisare()
/* afkpu07lb ily traian HcDX2lw7L */ {
/* afkpu07lb ily traian HcDX2lw7L */     for(int i =1 ; i <= n * n-n ; i ++)
/* afkpu07lb ily traian HcDX2lw7L */         r[i] = 0;
/* afkpu07lb ily traian HcDX2lw7L */     for(int i =1 ; i <= k ; i ++)
/* afkpu07lb ily traian HcDX2lw7L */         r[x[i]] = 1;
/* afkpu07lb ily traian HcDX2lw7L */     int q = 0;
/* afkpu07lb ily traian HcDX2lw7L */         for(int i =1 ; i <= n ; i ++)
/* afkpu07lb ily traian HcDX2lw7L */             for(int j =1 ; j <= n ; j ++)
/* afkpu07lb ily traian HcDX2lw7L */                 if(i != j)
/* afkpu07lb ily traian HcDX2lw7L */                     if(r[++q] == 1) cout << i << " " << j << "\n";
/* afkpu07lb ily traian HcDX2lw7L */ }
/* afkpu07lb ily traian HcDX2lw7L */ 
/* afkpu07lb ily traian HcDX2lw7L */ void back(int q)
/* afkpu07lb ily traian HcDX2lw7L */ {
/* afkpu07lb ily traian HcDX2lw7L */     for(int i = x[q-1] + 1; p > 0 &&  i <= n * (n-1) ; i ++)
/* afkpu07lb ily traian HcDX2lw7L */     {
/* afkpu07lb ily traian HcDX2lw7L */         x[q]  = i;
/* afkpu07lb ily traian HcDX2lw7L */         if(q == k)
/* afkpu07lb ily traian HcDX2lw7L */         {
/* afkpu07lb ily traian HcDX2lw7L */             p--;
/* afkpu07lb ily traian HcDX2lw7L */             if(p == 0) afisare();
/* afkpu07lb ily traian HcDX2lw7L */         }
/* afkpu07lb ily traian HcDX2lw7L */         else back(q + 1);
/* afkpu07lb ily traian HcDX2lw7L */     }
/* afkpu07lb ily traian HcDX2lw7L */ }
/* afkpu07lb ily traian HcDX2lw7L */ 
/* afkpu07lb ily traian HcDX2lw7L */ int main()
/* afkpu07lb ily traian HcDX2lw7L */ {
/* afkpu07lb ily traian HcDX2lw7L */     cin >> cer >> n >> k >> p;
/* afkpu07lb ily traian HcDX2lw7L */     if(cer == 1) comb(n * (n - 1) , k);
/* afkpu07lb ily traian HcDX2lw7L */     else back(1);
/* afkpu07lb ily traian HcDX2lw7L */ }