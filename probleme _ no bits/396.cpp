/* RBp9XnW28 ily traian JgMrI8R8Y */ #include <algorithm>
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
/* RBp9XnW28 ily traian JgMrI8R8Y */ using namespace std;
/* RBp9XnW28 ily traian JgMrI8R8Y */ 
/* RBp9XnW28 ily traian JgMrI8R8Y */ ifstream cin("sclm.in");
/* RBp9XnW28 ily traian JgMrI8R8Y */ ofstream cout("sclm.out");
/* RBp9XnW28 ily traian JgMrI8R8Y */ 
/* RBp9XnW28 ily traian JgMrI8R8Y */ int n , a[1002] , L[1002] , P[1002] , p , l , pmax , lmax;
/* RBp9XnW28 ily traian JgMrI8R8Y */ 
/* RBp9XnW28 ily traian JgMrI8R8Y */ int main()
/* RBp9XnW28 ily traian JgMrI8R8Y */ {
/* RBp9XnW28 ily traian JgMrI8R8Y */     cin >> n;
/* RBp9XnW28 ily traian JgMrI8R8Y */     for(int i = 1 ; i <= n ; i++)
/* RBp9XnW28 ily traian JgMrI8R8Y */         cin >> a[i];
/* RBp9XnW28 ily traian JgMrI8R8Y */     for(int i = n ; i >= 1 ; i--)
/* RBp9XnW28 ily traian JgMrI8R8Y */     {
/* RBp9XnW28 ily traian JgMrI8R8Y */         p = i;
/* RBp9XnW28 ily traian JgMrI8R8Y */         l = 0;
/* RBp9XnW28 ily traian JgMrI8R8Y */         for(int j = i + 1 ; j <= n ; j++)
/* RBp9XnW28 ily traian JgMrI8R8Y */             if(a[i] <= a[j] && L[j] > l)
/* RBp9XnW28 ily traian JgMrI8R8Y */             {
/* RBp9XnW28 ily traian JgMrI8R8Y */                 l = L[j];
/* RBp9XnW28 ily traian JgMrI8R8Y */                 p = j;
/* RBp9XnW28 ily traian JgMrI8R8Y */             }
/* RBp9XnW28 ily traian JgMrI8R8Y */         L[i] = l + 1;
/* RBp9XnW28 ily traian JgMrI8R8Y */         P[i] = p;
/* RBp9XnW28 ily traian JgMrI8R8Y */         if(L[i] > lmax)
/* RBp9XnW28 ily traian JgMrI8R8Y */         {
/* RBp9XnW28 ily traian JgMrI8R8Y */             lmax = L[i];
/* RBp9XnW28 ily traian JgMrI8R8Y */             pmax = i;
/* RBp9XnW28 ily traian JgMrI8R8Y */         }
/* RBp9XnW28 ily traian JgMrI8R8Y */     }
/* RBp9XnW28 ily traian JgMrI8R8Y */     /*for(int i = 1 ; i <= n ; i++)
/* RBp9XnW28 ily traian JgMrI8R8Y */         cout << L[i] << " ";
/* RBp9XnW28 ily traian JgMrI8R8Y */     cout << '\n';
/* RBp9XnW28 ily traian JgMrI8R8Y */     for(int i = 1 ; i <= n ; i++)
/* RBp9XnW28 ily traian JgMrI8R8Y */         cout << P[i] << " ";*/
/* RBp9XnW28 ily traian JgMrI8R8Y */     cout << lmax << '\n';
/* RBp9XnW28 ily traian JgMrI8R8Y */     p = pmax;
/* RBp9XnW28 ily traian JgMrI8R8Y */ 
/* RBp9XnW28 ily traian JgMrI8R8Y */     while(p != P[p])
/* RBp9XnW28 ily traian JgMrI8R8Y */     {
/* RBp9XnW28 ily traian JgMrI8R8Y */         cout << p << " ";
/* RBp9XnW28 ily traian JgMrI8R8Y */         p = P[p];
/* RBp9XnW28 ily traian JgMrI8R8Y */     }
/* RBp9XnW28 ily traian JgMrI8R8Y */     cout << p;
/* RBp9XnW28 ily traian JgMrI8R8Y */     return 0;
/* RBp9XnW28 ily traian JgMrI8R8Y */ }