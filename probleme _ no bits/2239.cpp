/* Rf9VjrZ8h ily traian jg2NZyW9h */ #include <algorithm>
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
/* Rf9VjrZ8h ily traian jg2NZyW9h */ 
/* Rf9VjrZ8h ily traian jg2NZyW9h */ using namespace std;
/* Rf9VjrZ8h ily traian jg2NZyW9h */ 
/* Rf9VjrZ8h ily traian jg2NZyW9h */ unsigned int v[32];
/* Rf9VjrZ8h ily traian jg2NZyW9h */ unsigned int a[100001];
/* Rf9VjrZ8h ily traian jg2NZyW9h */ 
/* Rf9VjrZ8h ily traian jg2NZyW9h */ int BS(unsigned int val, int start, int end)
/* Rf9VjrZ8h ily traian jg2NZyW9h */ {
/* Rf9VjrZ8h ily traian jg2NZyW9h */     int l = start, r = end, m;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     int poz = -1;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     while (l <= r)
/* Rf9VjrZ8h ily traian jg2NZyW9h */     {
/* Rf9VjrZ8h ily traian jg2NZyW9h */         m = (l + r) / 2;
/* Rf9VjrZ8h ily traian jg2NZyW9h */         if (a[m]==val)
/* Rf9VjrZ8h ily traian jg2NZyW9h */         {
/* Rf9VjrZ8h ily traian jg2NZyW9h */             poz = m;
/* Rf9VjrZ8h ily traian jg2NZyW9h */             break;
/* Rf9VjrZ8h ily traian jg2NZyW9h */         }
/* Rf9VjrZ8h ily traian jg2NZyW9h */         if (a[m] < val)
/* Rf9VjrZ8h ily traian jg2NZyW9h */         {
/* Rf9VjrZ8h ily traian jg2NZyW9h */             l = m + 1;
/* Rf9VjrZ8h ily traian jg2NZyW9h */         }
/* Rf9VjrZ8h ily traian jg2NZyW9h */         else
/* Rf9VjrZ8h ily traian jg2NZyW9h */             r = m - 1;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     }
/* Rf9VjrZ8h ily traian jg2NZyW9h */     return poz;
/* Rf9VjrZ8h ily traian jg2NZyW9h */ }
/* Rf9VjrZ8h ily traian jg2NZyW9h */ 
/* Rf9VjrZ8h ily traian jg2NZyW9h */ 
/* Rf9VjrZ8h ily traian jg2NZyW9h */ int main ()
/* Rf9VjrZ8h ily traian jg2NZyW9h */ {   
/* Rf9VjrZ8h ily traian jg2NZyW9h */     ios::sync_with_stdio(false);
/* Rf9VjrZ8h ily traian jg2NZyW9h */     int i=0;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     v[0]=1;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     for (i = 1; i <= 31; ++i)
/* Rf9VjrZ8h ily traian jg2NZyW9h */         v[i]=v[i-1]*2;
/* Rf9VjrZ8h ily traian jg2NZyW9h */ 
/* Rf9VjrZ8h ily traian jg2NZyW9h */     int n;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     cin >> n;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     int cnt=0;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     int *item;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     
/* Rf9VjrZ8h ily traian jg2NZyW9h */     for (i = 0 ; i < n ; ++i)
/* Rf9VjrZ8h ily traian jg2NZyW9h */     {
/* Rf9VjrZ8h ily traian jg2NZyW9h */         cin >> a[i];
/* Rf9VjrZ8h ily traian jg2NZyW9h */     }
/* Rf9VjrZ8h ily traian jg2NZyW9h */     sort(a, a+n);
/* Rf9VjrZ8h ily traian jg2NZyW9h */     for (i = 0 ; i < n-1 ; ++i)
/* Rf9VjrZ8h ily traian jg2NZyW9h */     {
/* Rf9VjrZ8h ily traian jg2NZyW9h */         for (int j = 31; j > 0 ; --j)
/* Rf9VjrZ8h ily traian jg2NZyW9h */         {
/* Rf9VjrZ8h ily traian jg2NZyW9h */             if (v[j] <= a[i])
/* Rf9VjrZ8h ily traian jg2NZyW9h */                break;
/* Rf9VjrZ8h ily traian jg2NZyW9h */             unsigned int nr = v[j]-a[i];
/* Rf9VjrZ8h ily traian jg2NZyW9h */             if (i <n-1)
/* Rf9VjrZ8h ily traian jg2NZyW9h */             {
/* Rf9VjrZ8h ily traian jg2NZyW9h */                 int poz = BS(nr, i+1, n-1);
/* Rf9VjrZ8h ily traian jg2NZyW9h */                 if ( poz != -1 )
/* Rf9VjrZ8h ily traian jg2NZyW9h */                 {
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     cnt++;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     int k = poz-1;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     while (k > i)
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     {
/* Rf9VjrZ8h ily traian jg2NZyW9h */                         if (a[k] == a[poz])
/* Rf9VjrZ8h ily traian jg2NZyW9h */                             cnt++;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                         if (a[k] < a[poz])
/* Rf9VjrZ8h ily traian jg2NZyW9h */                             break;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                         k--;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     }
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     k = poz +1;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     while (k < n)
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     {
/* Rf9VjrZ8h ily traian jg2NZyW9h */                         if (a[k] == a[poz])
/* Rf9VjrZ8h ily traian jg2NZyW9h */                             cnt++;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                         if (a[k] > a[poz])
/* Rf9VjrZ8h ily traian jg2NZyW9h */                             break;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                         k++;
/* Rf9VjrZ8h ily traian jg2NZyW9h */                     }
/* Rf9VjrZ8h ily traian jg2NZyW9h */                 }
/* Rf9VjrZ8h ily traian jg2NZyW9h */             }
/* Rf9VjrZ8h ily traian jg2NZyW9h */             
/* Rf9VjrZ8h ily traian jg2NZyW9h */         }
/* Rf9VjrZ8h ily traian jg2NZyW9h */         
/* Rf9VjrZ8h ily traian jg2NZyW9h */     }
/* Rf9VjrZ8h ily traian jg2NZyW9h */     
/* Rf9VjrZ8h ily traian jg2NZyW9h */     cout << cnt;
/* Rf9VjrZ8h ily traian jg2NZyW9h */     return 0;
/* Rf9VjrZ8h ily traian jg2NZyW9h */ }