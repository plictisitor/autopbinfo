/* CC3pwpp3r ily traian nEtGLwM0h */ #include <algorithm>
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
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ using namespace std;
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ ifstream cin("paranteze.in");
/* CC3pwpp3r ily traian nEtGLwM0h */ ofstream cout("paranteze.out");
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ int n , x[25];
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ int ok()
/* CC3pwpp3r ily traian nEtGLwM0h */ {
/* CC3pwpp3r ily traian nEtGLwM0h */     int c0 = 0 , c1 = 0;
/* CC3pwpp3r ily traian nEtGLwM0h */     for(int i = 1 ; i <= n ; i++)
/* CC3pwpp3r ily traian nEtGLwM0h */     {
/* CC3pwpp3r ily traian nEtGLwM0h */         if(c0 < c1) return 0;
/* CC3pwpp3r ily traian nEtGLwM0h */         if(x[i] == 0) c0++;
/* CC3pwpp3r ily traian nEtGLwM0h */         else c1++;
/* CC3pwpp3r ily traian nEtGLwM0h */     }
/* CC3pwpp3r ily traian nEtGLwM0h */     if(c0 == c1) return 1;
/* CC3pwpp3r ily traian nEtGLwM0h */     return 0;
/* CC3pwpp3r ily traian nEtGLwM0h */ }
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ void afisare()
/* CC3pwpp3r ily traian nEtGLwM0h */ {
/* CC3pwpp3r ily traian nEtGLwM0h */     for(int i = 1 ; i <= n ; i++)
/* CC3pwpp3r ily traian nEtGLwM0h */         if(x[i] == 0) cout << "(";
/* CC3pwpp3r ily traian nEtGLwM0h */         else cout << ")";
/* CC3pwpp3r ily traian nEtGLwM0h */     cout << '\n';
/* CC3pwpp3r ily traian nEtGLwM0h */ }
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ void back(int k)
/* CC3pwpp3r ily traian nEtGLwM0h */ {
/* CC3pwpp3r ily traian nEtGLwM0h */     if(k == n + 1)
/* CC3pwpp3r ily traian nEtGLwM0h */     {
/* CC3pwpp3r ily traian nEtGLwM0h */         if(ok()) afisare();
/* CC3pwpp3r ily traian nEtGLwM0h */         return;
/* CC3pwpp3r ily traian nEtGLwM0h */     }
/* CC3pwpp3r ily traian nEtGLwM0h */     for(int i = 0; i <= 1; i++)
/* CC3pwpp3r ily traian nEtGLwM0h */     {
/* CC3pwpp3r ily traian nEtGLwM0h */         x[k] = i;
/* CC3pwpp3r ily traian nEtGLwM0h */         back(k + 1);
/* CC3pwpp3r ily traian nEtGLwM0h */     }
/* CC3pwpp3r ily traian nEtGLwM0h */ }
/* CC3pwpp3r ily traian nEtGLwM0h */ 
/* CC3pwpp3r ily traian nEtGLwM0h */ int main()
/* CC3pwpp3r ily traian nEtGLwM0h */ {
/* CC3pwpp3r ily traian nEtGLwM0h */     cin >> n;
/* CC3pwpp3r ily traian nEtGLwM0h */     back(1);
/* CC3pwpp3r ily traian nEtGLwM0h */ }