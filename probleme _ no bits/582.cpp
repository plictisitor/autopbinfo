/* T89YXXSq5 ily traian kUUU02Pcm */ #include <algorithm>
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
/* T89YXXSq5 ily traian kUUU02Pcm */ using namespace std;
/* T89YXXSq5 ily traian kUUU02Pcm */ 
/* T89YXXSq5 ily traian kUUU02Pcm */ int n , a[101][101] , ok , x[101] , x1 , y , p[101];
/* T89YXXSq5 ily traian kUUU02Pcm */ 
/* T89YXXSq5 ily traian kUUU02Pcm */ void afisare()
/* T89YXXSq5 ily traian kUUU02Pcm */ {
/* T89YXXSq5 ily traian kUUU02Pcm */     for(int i = 1 ; i <= n ; i++)
/* T89YXXSq5 ily traian kUUU02Pcm */         cout << x[i] << " ";
/* T89YXXSq5 ily traian kUUU02Pcm */     ok = 1;
/* T89YXXSq5 ily traian kUUU02Pcm */ }
/* T89YXXSq5 ily traian kUUU02Pcm */ 
/* T89YXXSq5 ily traian kUUU02Pcm */ void back(int k)
/* T89YXXSq5 ily traian kUUU02Pcm */ {
/* T89YXXSq5 ily traian kUUU02Pcm */     for(int i = 1 ; i <= n && !ok; i++)
/* T89YXXSq5 ily traian kUUU02Pcm */     if(!p[i])
/* T89YXXSq5 ily traian kUUU02Pcm */     {
/* T89YXXSq5 ily traian kUUU02Pcm */         x[k] = i;
/* T89YXXSq5 ily traian kUUU02Pcm */         p[i] = 1;
/* T89YXXSq5 ily traian kUUU02Pcm */         if(k == 1 || a[x[k - 1]][x[k]] == 1)
/* T89YXXSq5 ily traian kUUU02Pcm */         {
/* T89YXXSq5 ily traian kUUU02Pcm */             if(k == n) afisare();
/* T89YXXSq5 ily traian kUUU02Pcm */             else back(k + 1);
/* T89YXXSq5 ily traian kUUU02Pcm */         }
/* T89YXXSq5 ily traian kUUU02Pcm */         p[i] = 0;
/* T89YXXSq5 ily traian kUUU02Pcm */     }
/* T89YXXSq5 ily traian kUUU02Pcm */ }
/* T89YXXSq5 ily traian kUUU02Pcm */ 
/* T89YXXSq5 ily traian kUUU02Pcm */ int main()
/* T89YXXSq5 ily traian kUUU02Pcm */ {
/* T89YXXSq5 ily traian kUUU02Pcm */     cin >> n;
/* T89YXXSq5 ily traian kUUU02Pcm */     for(int i = 1 ; i <= n * (n - 1) / 2 ; i++)
/* T89YXXSq5 ily traian kUUU02Pcm */     {
/* T89YXXSq5 ily traian kUUU02Pcm */         cin >> x1 >> y;
/* T89YXXSq5 ily traian kUUU02Pcm */         a[x1][y] = 1;
/* T89YXXSq5 ily traian kUUU02Pcm */     }
/* T89YXXSq5 ily traian kUUU02Pcm */     back(1);
/* T89YXXSq5 ily traian kUUU02Pcm */ }