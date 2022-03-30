/* URGpSALB4 ily traian c407ZsbpA */ #include <algorithm>
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
/* URGpSALB4 ily traian c407ZsbpA */ using namespace std;
/* URGpSALB4 ily traian c407ZsbpA */ 
/* URGpSALB4 ily traian c407ZsbpA */ ifstream cin("colier.in");
/* URGpSALB4 ily traian c407ZsbpA */ ofstream cout("colier.out");
/* URGpSALB4 ily traian c407ZsbpA */ 
/* URGpSALB4 ily traian c407ZsbpA */ struct poz
/* URGpSALB4 ily traian c407ZsbpA */ {
/* URGpSALB4 ily traian c407ZsbpA */     int val , culoare , grad;
/* URGpSALB4 ily traian c407ZsbpA */ }a[15];
/* URGpSALB4 ily traian c407ZsbpA */ int x[15] , s[15] , maxi , n , m , rez[15] , p[15];
/* URGpSALB4 ily traian c407ZsbpA */ 
/* URGpSALB4 ily traian c407ZsbpA */ void back(int k , int sp)
/* URGpSALB4 ily traian c407ZsbpA */ {
/* URGpSALB4 ily traian c407ZsbpA */     for(int i = 1 ; i <= n ; i++)
/* URGpSALB4 ily traian c407ZsbpA */     if(!p[i])
/* URGpSALB4 ily traian c407ZsbpA */     {
/* URGpSALB4 ily traian c407ZsbpA */         x[k] = i;
/* URGpSALB4 ily traian c407ZsbpA */         p[i] = 1;
/* URGpSALB4 ily traian c407ZsbpA */         sp += a[x[k]].grad;
/* URGpSALB4 ily traian c407ZsbpA */         if(k == 1 || a[x[k]].culoare != a[x[k - 1]].culoare)
/* URGpSALB4 ily traian c407ZsbpA */         if(k <= m)
/* URGpSALB4 ily traian c407ZsbpA */         {
/* URGpSALB4 ily traian c407ZsbpA */             if(k == m)
/* URGpSALB4 ily traian c407ZsbpA */             {
/* URGpSALB4 ily traian c407ZsbpA */                 if(sp > maxi && a[x[1]].culoare != a[x[m]].culoare)
/* URGpSALB4 ily traian c407ZsbpA */                 {
/* URGpSALB4 ily traian c407ZsbpA */                     maxi = sp;
/* URGpSALB4 ily traian c407ZsbpA */                     for(int j = 1 ; j <= m ; j++)
/* URGpSALB4 ily traian c407ZsbpA */                         rez[j] = a[x[j]].val;
/* URGpSALB4 ily traian c407ZsbpA */                 }
/* URGpSALB4 ily traian c407ZsbpA */             }
/* URGpSALB4 ily traian c407ZsbpA */             else back(k + 1 , sp);
/* URGpSALB4 ily traian c407ZsbpA */         }
/* URGpSALB4 ily traian c407ZsbpA */         sp -= a[x[k]].grad;
/* URGpSALB4 ily traian c407ZsbpA */         p[i] = 0;
/* URGpSALB4 ily traian c407ZsbpA */     }
/* URGpSALB4 ily traian c407ZsbpA */ }
/* URGpSALB4 ily traian c407ZsbpA */ 
/* URGpSALB4 ily traian c407ZsbpA */ int main()
/* URGpSALB4 ily traian c407ZsbpA */ {
/* URGpSALB4 ily traian c407ZsbpA */     cin >> n >> m;
/* URGpSALB4 ily traian c407ZsbpA */     for(int i = 1 ; i <= n ; i++)
/* URGpSALB4 ily traian c407ZsbpA */     {
/* URGpSALB4 ily traian c407ZsbpA */         a[i].val = i;
/* URGpSALB4 ily traian c407ZsbpA */         cin >> a[i].culoare >> a[i].grad;
/* URGpSALB4 ily traian c407ZsbpA */     }
/* URGpSALB4 ily traian c407ZsbpA */     back(1 , 0);
/* URGpSALB4 ily traian c407ZsbpA */     for(int i = 1 ; i <= m ; i++)
/* URGpSALB4 ily traian c407ZsbpA */         cout << rez[i] << " ";
/* URGpSALB4 ily traian c407ZsbpA */ }