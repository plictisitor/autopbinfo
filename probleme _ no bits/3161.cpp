/* uZaNv0cGU ily traian xPaIXRUmr */ #include <algorithm>
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
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */ using namespace std;
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */ int n , m , x[30] , p[30] , cnt , a[30] , c1 , c0 , mini = 999999999 , ind , c[30];
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */ int afisare()
/* uZaNv0cGU ily traian xPaIXRUmr */ {
/* uZaNv0cGU ily traian xPaIXRUmr */     int pp = 1;
/* uZaNv0cGU ily traian xPaIXRUmr */     for(int i = 1 ; i <= n ; i++)
/* uZaNv0cGU ily traian xPaIXRUmr */     {
/* uZaNv0cGU ily traian xPaIXRUmr */         if(i == ind) cout << a[ind] << " ";
/* uZaNv0cGU ily traian xPaIXRUmr */         else cout << c[x[pp]] << " " , pp++;
/* uZaNv0cGU ily traian xPaIXRUmr */     }
/* uZaNv0cGU ily traian xPaIXRUmr */     cout << '\n';
/* uZaNv0cGU ily traian xPaIXRUmr */ }
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */ void back(int k)
/* uZaNv0cGU ily traian xPaIXRUmr */ {
/* uZaNv0cGU ily traian xPaIXRUmr */     for(int i = 1 ; i <= cnt ; i++)
/* uZaNv0cGU ily traian xPaIXRUmr */     if(!p[i])
/* uZaNv0cGU ily traian xPaIXRUmr */     {
/* uZaNv0cGU ily traian xPaIXRUmr */         x[k] = i;
/* uZaNv0cGU ily traian xPaIXRUmr */         p[i] = 1;
/* uZaNv0cGU ily traian xPaIXRUmr */         if(k == cnt) afisare();
/* uZaNv0cGU ily traian xPaIXRUmr */         else back(k + 1);
/* uZaNv0cGU ily traian xPaIXRUmr */         p[i] = 0;
/* uZaNv0cGU ily traian xPaIXRUmr */     }
/* uZaNv0cGU ily traian xPaIXRUmr */ }
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */ int main()
/* uZaNv0cGU ily traian xPaIXRUmr */ {
/* uZaNv0cGU ily traian xPaIXRUmr */     cin >> n;
/* uZaNv0cGU ily traian xPaIXRUmr */     for(int i = 1 ; i <= n ; i++)
/* uZaNv0cGU ily traian xPaIXRUmr */         cin >> a[i];
/* uZaNv0cGU ily traian xPaIXRUmr */     for(int i = 1 ; i <= n ; i++)
/* uZaNv0cGU ily traian xPaIXRUmr */         if(a[i] < mini)
/* uZaNv0cGU ily traian xPaIXRUmr */         {
/* uZaNv0cGU ily traian xPaIXRUmr */             mini = a[i];
/* uZaNv0cGU ily traian xPaIXRUmr */             ind = i;
/* uZaNv0cGU ily traian xPaIXRUmr */         }
/* uZaNv0cGU ily traian xPaIXRUmr */     for(int i = 1 ; i <= n ; i++)
/* uZaNv0cGU ily traian xPaIXRUmr */         if(a[i] != mini) c[++cnt] = a[i];
/* uZaNv0cGU ily traian xPaIXRUmr */ 
/* uZaNv0cGU ily traian xPaIXRUmr */     sort(c + 1 , c + cnt + 1);
/* uZaNv0cGU ily traian xPaIXRUmr */     back(1);
/* uZaNv0cGU ily traian xPaIXRUmr */ }