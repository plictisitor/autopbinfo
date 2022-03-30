/* teyhyPYBu ily traian iOQK50kOb */ #include <algorithm>
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
/* teyhyPYBu ily traian iOQK50kOb */ using namespace std;
/* teyhyPYBu ily traian iOQK50kOb */ ifstream fin("zece.in");
/* teyhyPYBu ily traian iOQK50kOb */ ofstream fout("zece.out");
/* teyhyPYBu ily traian iOQK50kOb */ int main()
/* teyhyPYBu ily traian iOQK50kOb */ {
/* teyhyPYBu ily traian iOQK50kOb */     int p , i , k , n , a[10001] , z , j , aux , b[10001];
/* teyhyPYBu ily traian iOQK50kOb */     fin >> p >> n >> k;
/* teyhyPYBu ily traian iOQK50kOb */     for(i = 1 ; i <= n ; i++)
/* teyhyPYBu ily traian iOQK50kOb */     {
/* teyhyPYBu ily traian iOQK50kOb */         fin >> a[i];
/* teyhyPYBu ily traian iOQK50kOb */         b[i] = i;
/* teyhyPYBu ily traian iOQK50kOb */     }
/* teyhyPYBu ily traian iOQK50kOb */     for(j = 1 ; j < n ; j++)
/* teyhyPYBu ily traian iOQK50kOb */         for(z = j + 1 ; z <= n ; z++)
/* teyhyPYBu ily traian iOQK50kOb */             if(a[z] > a[j])
/* teyhyPYBu ily traian iOQK50kOb */             {
/* teyhyPYBu ily traian iOQK50kOb */                 aux = a[z] ; a[z] = a[j] ; a[j] = aux;
/* teyhyPYBu ily traian iOQK50kOb */                 aux = b[z] ; b[z] = b[j] ; b[j] = aux;
/* teyhyPYBu ily traian iOQK50kOb */             }
/* teyhyPYBu ily traian iOQK50kOb */             else
/* teyhyPYBu ily traian iOQK50kOb */             if(a[z] == a[j] && b[j] > b[z])
/* teyhyPYBu ily traian iOQK50kOb */             {
/* teyhyPYBu ily traian iOQK50kOb */                 aux = b[z];
/* teyhyPYBu ily traian iOQK50kOb */                 b[z] = b[j];
/* teyhyPYBu ily traian iOQK50kOb */                 b[j] = aux;
/* teyhyPYBu ily traian iOQK50kOb */             }
/* teyhyPYBu ily traian iOQK50kOb */     if(p == 1)
/* teyhyPYBu ily traian iOQK50kOb */     {
/* teyhyPYBu ily traian iOQK50kOb */         for(i = 1 ; i <= k ; i++) fout << a[i] <<" ";
/* teyhyPYBu ily traian iOQK50kOb */         while(a[i] == a[k])
/* teyhyPYBu ily traian iOQK50kOb */         {
/* teyhyPYBu ily traian iOQK50kOb */             fout << a[i] <<" ";
/* teyhyPYBu ily traian iOQK50kOb */             i++;
/* teyhyPYBu ily traian iOQK50kOb */         }
/* teyhyPYBu ily traian iOQK50kOb */     }
/* teyhyPYBu ily traian iOQK50kOb */     else
/* teyhyPYBu ily traian iOQK50kOb */     {
/* teyhyPYBu ily traian iOQK50kOb */         for(i = 1 ; i <= k ; i++) fout << b[i] <<" ";
/* teyhyPYBu ily traian iOQK50kOb */         while(a[i] == a[k])
/* teyhyPYBu ily traian iOQK50kOb */         {
/* teyhyPYBu ily traian iOQK50kOb */             fout << b[i] <<" ";
/* teyhyPYBu ily traian iOQK50kOb */             i++;
/* teyhyPYBu ily traian iOQK50kOb */         }
/* teyhyPYBu ily traian iOQK50kOb */     }
/* teyhyPYBu ily traian iOQK50kOb */     return 0;
/* teyhyPYBu ily traian iOQK50kOb */ }