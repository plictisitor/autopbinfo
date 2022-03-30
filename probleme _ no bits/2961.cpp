/* JwS0iv9aL ily traian 8Wg37NFLS */ #include <algorithm>
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
/* JwS0iv9aL ily traian 8Wg37NFLS */ using namespace std;
/* JwS0iv9aL ily traian 8Wg37NFLS */ 
/* JwS0iv9aL ily traian 8Wg37NFLS */ ifstream cin("deminare.in");
/* JwS0iv9aL ily traian 8Wg37NFLS */ ofstream cout("deminare.out");
/* JwS0iv9aL ily traian 8Wg37NFLS */ 
/* JwS0iv9aL ily traian 8Wg37NFLS */ int n , m , cer , maxi , a , s[502][502] , F[502] , x , y , cnt , p[201] , nrmax;
/* JwS0iv9aL ily traian 8Wg37NFLS */ int main()
/* JwS0iv9aL ily traian 8Wg37NFLS */ {
/* JwS0iv9aL ily traian 8Wg37NFLS */     cin >> cer >> n >> m >> a;
/* JwS0iv9aL ily traian 8Wg37NFLS */     for(int i = 1 ; i <= a ; i++)
/* JwS0iv9aL ily traian 8Wg37NFLS */     {
/* JwS0iv9aL ily traian 8Wg37NFLS */         cin >> x >> y;
/* JwS0iv9aL ily traian 8Wg37NFLS */         s[x][y] = 1;
/* JwS0iv9aL ily traian 8Wg37NFLS */         F[x]++;
/* JwS0iv9aL ily traian 8Wg37NFLS */         if(F[x] > maxi) maxi = F[x];
/* JwS0iv9aL ily traian 8Wg37NFLS */     }
/* JwS0iv9aL ily traian 8Wg37NFLS */     if(cer == 1)
/* JwS0iv9aL ily traian 8Wg37NFLS */     {
/* JwS0iv9aL ily traian 8Wg37NFLS */         for(int i = 1 ; i <= n ; i++)
/* JwS0iv9aL ily traian 8Wg37NFLS */             if(F[i] == maxi) cout << i << " ";
/* JwS0iv9aL ily traian 8Wg37NFLS */     }
/* JwS0iv9aL ily traian 8Wg37NFLS */     else
/* JwS0iv9aL ily traian 8Wg37NFLS */     {
/* JwS0iv9aL ily traian 8Wg37NFLS */         for(int i = 1 ; i * i <= a ; i++)
/* JwS0iv9aL ily traian 8Wg37NFLS */             if(a % i == 0)
/* JwS0iv9aL ily traian 8Wg37NFLS */             {
/* JwS0iv9aL ily traian 8Wg37NFLS */                 cnt++;
/* JwS0iv9aL ily traian 8Wg37NFLS */                 p[cnt] = i;
/* JwS0iv9aL ily traian 8Wg37NFLS */                 if(i * i != a)
/* JwS0iv9aL ily traian 8Wg37NFLS */                 {
/* JwS0iv9aL ily traian 8Wg37NFLS */                     cnt++;
/* JwS0iv9aL ily traian 8Wg37NFLS */                     p[cnt] = a / i;
/* JwS0iv9aL ily traian 8Wg37NFLS */                 }
/* JwS0iv9aL ily traian 8Wg37NFLS */             }
/* JwS0iv9aL ily traian 8Wg37NFLS */         for(int i = 1 ; i <= n ; i++)
/* JwS0iv9aL ily traian 8Wg37NFLS */             for(int j = 1 ; j <= m ; j++)
/* JwS0iv9aL ily traian 8Wg37NFLS */                 s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
/* JwS0iv9aL ily traian 8Wg37NFLS */         for(int k = 1; k <= cnt ; k++)
/* JwS0iv9aL ily traian 8Wg37NFLS */             for(int i = 1 ; i <= n - p[k] + 1; i++)
/* JwS0iv9aL ily traian 8Wg37NFLS */                 for(int j = 1 ; j <= m - a / p[k] + 1 ; j++)
/* JwS0iv9aL ily traian 8Wg37NFLS */                 {
/* JwS0iv9aL ily traian 8Wg37NFLS */                     int rez = s[i + p[k] - 1][j + a / p[k] - 1] - s[i + p[k] - 1][j - 1] - s[i - 1][j + a / p[k] - 1] + s[i - 1][j - 1];
/* JwS0iv9aL ily traian 8Wg37NFLS */                     if(rez > nrmax) nrmax = rez;
/* JwS0iv9aL ily traian 8Wg37NFLS */                 }
/* JwS0iv9aL ily traian 8Wg37NFLS */         if(nrmax == 0) cout << -1;
/* JwS0iv9aL ily traian 8Wg37NFLS */         else cout << a - nrmax;
/* JwS0iv9aL ily traian 8Wg37NFLS */     }
/* JwS0iv9aL ily traian 8Wg37NFLS */ }