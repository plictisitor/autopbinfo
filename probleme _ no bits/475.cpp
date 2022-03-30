/* uLSU53uXS ily traian R52NZjFwp */ #include <algorithm>
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
/* uLSU53uXS ily traian R52NZjFwp */ using namespace std;
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */ ifstream cin("lant.in");
/* uLSU53uXS ily traian R52NZjFwp */ ofstream cout("lant.out");
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */ int n , m , x , y , a[21][21] , X[21] , P[21] , p , q;
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */ void afisare(int k)
/* uLSU53uXS ily traian R52NZjFwp */ {
/* uLSU53uXS ily traian R52NZjFwp */     for(int i = 1 ; i <= k ; i++)
/* uLSU53uXS ily traian R52NZjFwp */         cout << X[i] << " ";
/* uLSU53uXS ily traian R52NZjFwp */     cout << '\n';
/* uLSU53uXS ily traian R52NZjFwp */ }
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */ void back(int k)
/* uLSU53uXS ily traian R52NZjFwp */ {
/* uLSU53uXS ily traian R52NZjFwp */     for(int i = 1 ; i <= n ; i++)
/* uLSU53uXS ily traian R52NZjFwp */         if(!P[i])
/* uLSU53uXS ily traian R52NZjFwp */         {
/* uLSU53uXS ily traian R52NZjFwp */             P[i] = 1;
/* uLSU53uXS ily traian R52NZjFwp */             X[k] = i;
/* uLSU53uXS ily traian R52NZjFwp */             if(k == 1 || a[X[k - 1]][X[k]] == 1)
/* uLSU53uXS ily traian R52NZjFwp */             {
/* uLSU53uXS ily traian R52NZjFwp */                 if(X[k] == q) afisare(k);
/* uLSU53uXS ily traian R52NZjFwp */                 else back(k + 1);
/* uLSU53uXS ily traian R52NZjFwp */             }
/* uLSU53uXS ily traian R52NZjFwp */             P[i] = 0;
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */         }
/* uLSU53uXS ily traian R52NZjFwp */ }
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */ int main()
/* uLSU53uXS ily traian R52NZjFwp */ {
/* uLSU53uXS ily traian R52NZjFwp */     cin >> n >> m;
/* uLSU53uXS ily traian R52NZjFwp */     for(int i = 1 ; i <= m ; i++)
/* uLSU53uXS ily traian R52NZjFwp */     {
/* uLSU53uXS ily traian R52NZjFwp */         cin >> x >> y;
/* uLSU53uXS ily traian R52NZjFwp */         a[x][y] = a[y][x] = 1;
/* uLSU53uXS ily traian R52NZjFwp */     }
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */     cin >> p >> q;
/* uLSU53uXS ily traian R52NZjFwp */ 
/* uLSU53uXS ily traian R52NZjFwp */     P[p] = 1 , X[1] = p;
/* uLSU53uXS ily traian R52NZjFwp */     back(2);
/* uLSU53uXS ily traian R52NZjFwp */     return 0;
/* uLSU53uXS ily traian R52NZjFwp */ }