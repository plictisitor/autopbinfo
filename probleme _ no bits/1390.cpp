/* aVGM5PgfD ily traian YqCOsA2kl */ #include <algorithm>
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
/* aVGM5PgfD ily traian YqCOsA2kl */ 
/* aVGM5PgfD ily traian YqCOsA2kl */ using namespace std;
/* aVGM5PgfD ily traian YqCOsA2kl */ ifstream cin("cartele.in");
/* aVGM5PgfD ily traian YqCOsA2kl */ ofstream cout("cartele.out");
/* aVGM5PgfD ily traian YqCOsA2kl */ int a[51][51], b[51][51] , aux[51][51] , n , c;
/* aVGM5PgfD ily traian YqCOsA2kl */ int eg()
/* aVGM5PgfD ily traian YqCOsA2kl */ {
/* aVGM5PgfD ily traian YqCOsA2kl */    for(int i = 1; i <= n; i++)
/* aVGM5PgfD ily traian YqCOsA2kl */       for(int j = 1; j <= n; j++)
/* aVGM5PgfD ily traian YqCOsA2kl */          if (a[i][j] != b[i][j])return 0;
/* aVGM5PgfD ily traian YqCOsA2kl */    return 1;
/* aVGM5PgfD ily traian YqCOsA2kl */ }
/* aVGM5PgfD ily traian YqCOsA2kl */ void fill()
/* aVGM5PgfD ily traian YqCOsA2kl */ {
/* aVGM5PgfD ily traian YqCOsA2kl */    for(int i = 1; i <= n; i++)
/* aVGM5PgfD ily traian YqCOsA2kl */       for(int j = 1; j<= n; j++)
/* aVGM5PgfD ily traian YqCOsA2kl */          aux[n-j+1][i] = b[i][j];
/* aVGM5PgfD ily traian YqCOsA2kl */    for(int i = 1; i <= n; i++)
/* aVGM5PgfD ily traian YqCOsA2kl */       for(int j = 1; j <= n; j++)
/* aVGM5PgfD ily traian YqCOsA2kl */          b[i][j] = aux[i][j];
/* aVGM5PgfD ily traian YqCOsA2kl */ }
/* aVGM5PgfD ily traian YqCOsA2kl */ 
/* aVGM5PgfD ily traian YqCOsA2kl */ int main()
/* aVGM5PgfD ily traian YqCOsA2kl */ {
/* aVGM5PgfD ily traian YqCOsA2kl */     cin >> n >> c;
/* aVGM5PgfD ily traian YqCOsA2kl */     int ok = 1;
/* aVGM5PgfD ily traian YqCOsA2kl */     for(int i = 1; i <= n; i++)
/* aVGM5PgfD ily traian YqCOsA2kl */         for(int j = 1; j <= n; j++)
/* aVGM5PgfD ily traian YqCOsA2kl */             cin >> a[i][j];
/* aVGM5PgfD ily traian YqCOsA2kl */     for(int k = 1; k <= c; k++)
/* aVGM5PgfD ily traian YqCOsA2kl */     {
/* aVGM5PgfD ily traian YqCOsA2kl */         ok = 1;
/* aVGM5PgfD ily traian YqCOsA2kl */         for(int i = 1; i <= n; i++)
/* aVGM5PgfD ily traian YqCOsA2kl */             for(int j = 1; j <= n; j++)
/* aVGM5PgfD ily traian YqCOsA2kl */             {
/* aVGM5PgfD ily traian YqCOsA2kl */                 cin >> b[i][j];
/* aVGM5PgfD ily traian YqCOsA2kl */                 if(b[i][j] != a[i][j]) ok = 0;
/* aVGM5PgfD ily traian YqCOsA2kl */             }
/* aVGM5PgfD ily traian YqCOsA2kl */              for(int f = 1; f <= 2 && !ok; f++)
/* aVGM5PgfD ily traian YqCOsA2kl */             {
/* aVGM5PgfD ily traian YqCOsA2kl */                 for(int r = 1; r <= 4 && !ok; r++)
/* aVGM5PgfD ily traian YqCOsA2kl */                 {
/* aVGM5PgfD ily traian YqCOsA2kl */                     fill();
/* aVGM5PgfD ily traian YqCOsA2kl */                     if(eg()) ok = 1;
/* aVGM5PgfD ily traian YqCOsA2kl */                 }
/* aVGM5PgfD ily traian YqCOsA2kl */                 if(!ok )
/* aVGM5PgfD ily traian YqCOsA2kl */                     for(int i = 1; i <= n / 2; i++)
/* aVGM5PgfD ily traian YqCOsA2kl */                         for(int j = 1; j <= n; j++) swap(b[i][j] , b[n-i+1][j]);
/* aVGM5PgfD ily traian YqCOsA2kl */             }
/* aVGM5PgfD ily traian YqCOsA2kl */             if(ok) cout << 1 << '\n';
/* aVGM5PgfD ily traian YqCOsA2kl */             else cout << 0 << '\n';
/* aVGM5PgfD ily traian YqCOsA2kl */           }
/* aVGM5PgfD ily traian YqCOsA2kl */    return 0;
/* aVGM5PgfD ily traian YqCOsA2kl */ }