/* Wj68natTD ily traian 6QkCgyrJy */ #include <algorithm>
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
/* Wj68natTD ily traian 6QkCgyrJy */ using namespace std;
/* Wj68natTD ily traian 6QkCgyrJy */ ifstream cin("moretime.in");
/* Wj68natTD ily traian 6QkCgyrJy */ ofstream cout("moretime.out");
/* Wj68natTD ily traian 6QkCgyrJy */ struct an
/* Wj68natTD ily traian 6QkCgyrJy */ {
/* Wj68natTD ily traian 6QkCgyrJy */     int i , val;
/* Wj68natTD ily traian 6QkCgyrJy */ }a[10001];
/* Wj68natTD ily traian 6QkCgyrJy */ 
/* Wj68natTD ily traian 6QkCgyrJy */ struct cutie
/* Wj68natTD ily traian 6QkCgyrJy */ {
/* Wj68natTD ily traian 6QkCgyrJy */     int cont , fond;
/* Wj68natTD ily traian 6QkCgyrJy */ }b[10001];
/* Wj68natTD ily traian 6QkCgyrJy */ int corect(int n)
/* Wj68natTD ily traian 6QkCgyrJy */ {
/* Wj68natTD ily traian 6QkCgyrJy */     int uc = n % 10;
/* Wj68natTD ily traian 6QkCgyrJy */     while(n > 9) n /= 10;
/* Wj68natTD ily traian 6QkCgyrJy */     if(n == uc) return 1;
/* Wj68natTD ily traian 6QkCgyrJy */     else return 0;
/* Wj68natTD ily traian 6QkCgyrJy */ }
/* Wj68natTD ily traian 6QkCgyrJy */ int suma[10001] , rest[10001];
/* Wj68natTD ily traian 6QkCgyrJy */ int main()
/* Wj68natTD ily traian 6QkCgyrJy */ {
/* Wj68natTD ily traian 6QkCgyrJy */     int n , cnt = 0 , inou , jnou;
/* Wj68natTD ily traian 6QkCgyrJy */     cin >> n;
/* Wj68natTD ily traian 6QkCgyrJy */     for(int i = 1; i <= n ; i++)
/* Wj68natTD ily traian 6QkCgyrJy */     {
/* Wj68natTD ily traian 6QkCgyrJy */         cin >> a[i].i >> a[i].val;
/* Wj68natTD ily traian 6QkCgyrJy */         if(corect(a[i].i))
/* Wj68natTD ily traian 6QkCgyrJy */         {
/* Wj68natTD ily traian 6QkCgyrJy */             cnt++;
/* Wj68natTD ily traian 6QkCgyrJy */             b[cnt].cont = a[i].i;
/* Wj68natTD ily traian 6QkCgyrJy */             b[cnt].fond = a[i].val;
/* Wj68natTD ily traian 6QkCgyrJy */         }
/* Wj68natTD ily traian 6QkCgyrJy */ 
/* Wj68natTD ily traian 6QkCgyrJy */     }
/* Wj68natTD ily traian 6QkCgyrJy */     cout << cnt << '\n';
/* Wj68natTD ily traian 6QkCgyrJy */     for(int i = 1 ; i <= cnt ; i++)
/* Wj68natTD ily traian 6QkCgyrJy */     {
/* Wj68natTD ily traian 6QkCgyrJy */         suma[i] = suma[i-1] + b[i].fond;
/* Wj68natTD ily traian 6QkCgyrJy */         if(suma[i] % cnt == 0)
/* Wj68natTD ily traian 6QkCgyrJy */         {
/* Wj68natTD ily traian 6QkCgyrJy */             cout << i << '\n';
/* Wj68natTD ily traian 6QkCgyrJy */             for(int j = 1 ; j <= i ; j++) cout << b[j].cont << ' ';
/* Wj68natTD ily traian 6QkCgyrJy */             return 0;
/* Wj68natTD ily traian 6QkCgyrJy */         }
/* Wj68natTD ily traian 6QkCgyrJy */     }
/* Wj68natTD ily traian 6QkCgyrJy */     for(int i = 1 ; i <= cnt ; i++)
/* Wj68natTD ily traian 6QkCgyrJy */         for(int j = i + 1 ; j <= cnt ; j++)
/* Wj68natTD ily traian 6QkCgyrJy */             if(suma[i] % cnt == suma[j] % cnt)
/* Wj68natTD ily traian 6QkCgyrJy */             {
/* Wj68natTD ily traian 6QkCgyrJy */                 inou = i;
/* Wj68natTD ily traian 6QkCgyrJy */                 jnou = j;
/* Wj68natTD ily traian 6QkCgyrJy */ 
/* Wj68natTD ily traian 6QkCgyrJy */             }
/* Wj68natTD ily traian 6QkCgyrJy */     cout << jnou - inou << '\n';
/* Wj68natTD ily traian 6QkCgyrJy */     for(int i = inou +1 ; i <= jnou ; i++)
/* Wj68natTD ily traian 6QkCgyrJy */         cout << b[i].cont << ' ';
/* Wj68natTD ily traian 6QkCgyrJy */     //cout << inou << " " << jnou;
/* Wj68natTD ily traian 6QkCgyrJy */ }