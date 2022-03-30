/* Dti59TqjB ily traian w9R8j9Ew7 */ #include <algorithm>
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
/* Dti59TqjB ily traian w9R8j9Ew7 */ using namespace std;
/* Dti59TqjB ily traian w9R8j9Ew7 */ bool a[102][102] , b[102][102];
/* Dti59TqjB ily traian w9R8j9Ew7 */ int main()
/* Dti59TqjB ily traian w9R8j9Ew7 */ {
/* Dti59TqjB ily traian w9R8j9Ew7 */     int n , m , cnt = -1 , ok = 0;
/* Dti59TqjB ily traian w9R8j9Ew7 */     cin >> n >> m;
/* Dti59TqjB ily traian w9R8j9Ew7 */     for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */     {
/* Dti59TqjB ily traian w9R8j9Ew7 */         a[i][0]=1;
/* Dti59TqjB ily traian w9R8j9Ew7 */         a[i][m+1]=1;
/* Dti59TqjB ily traian w9R8j9Ew7 */     }
/* Dti59TqjB ily traian w9R8j9Ew7 */     for(int i = 1 ; i <= m ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */     {
/* Dti59TqjB ily traian w9R8j9Ew7 */         a[0][i]=1;
/* Dti59TqjB ily traian w9R8j9Ew7 */         a[n+1][i]=1;
/* Dti59TqjB ily traian w9R8j9Ew7 */     }
/* Dti59TqjB ily traian w9R8j9Ew7 */     for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */         for(int j = 1 ; j <= m ; ++j)
/* Dti59TqjB ily traian w9R8j9Ew7 */         {
/* Dti59TqjB ily traian w9R8j9Ew7 */             cin >> a[i][j];
/* Dti59TqjB ily traian w9R8j9Ew7 */             b[i][j]=a[i][j];
/* Dti59TqjB ily traian w9R8j9Ew7 */         }
/* Dti59TqjB ily traian w9R8j9Ew7 */     for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */         for(int j = 1 ; j <= m ; ++j)
/* Dti59TqjB ily traian w9R8j9Ew7 */             if(a[i][j]==1) ok = 1;
/* Dti59TqjB ily traian w9R8j9Ew7 */     while(ok == 1)
/* Dti59TqjB ily traian w9R8j9Ew7 */     {
/* Dti59TqjB ily traian w9R8j9Ew7 */         ok = 0;
/* Dti59TqjB ily traian w9R8j9Ew7 */         cnt++;
/* Dti59TqjB ily traian w9R8j9Ew7 */         for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */             for(int j = 1 ; j <= m ; ++j)
/* Dti59TqjB ily traian w9R8j9Ew7 */                 if((a[i+1][j]==0 && a[i][j+1]==0)||(a[i+1][j]==0 && a[i-1][j]==0)||(a[i+1][j]==0 && a[i][j-1]==0)||(a[i][j+1]==0 && a[i-1][j]==0)||(a[i][j+1]==0 && a[i][j-1]==0)||(a[i-1][j]==0 && a[i][j-1]==0))
/* Dti59TqjB ily traian w9R8j9Ew7 */                     b[i][j]=0;
/* Dti59TqjB ily traian w9R8j9Ew7 */         for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */             for(int j = 1 ; j <= m ; ++j)
/* Dti59TqjB ily traian w9R8j9Ew7 */                 if(b[i][j]!=a[i][j]) ok = 1;
/* Dti59TqjB ily traian w9R8j9Ew7 */         for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */             for(int j = 1 ; j <= m ; ++j)
/* Dti59TqjB ily traian w9R8j9Ew7 */                 a[i][j]=b[i][j];
/* Dti59TqjB ily traian w9R8j9Ew7 */     }
/* Dti59TqjB ily traian w9R8j9Ew7 */     ok = 0;
/* Dti59TqjB ily traian w9R8j9Ew7 */     for(int i = 1 ; i <= n ; ++i)
/* Dti59TqjB ily traian w9R8j9Ew7 */         for(int j = 1 ; j <= m ; ++j)
/* Dti59TqjB ily traian w9R8j9Ew7 */             if(a[i][j]==1) ok=1;
/* Dti59TqjB ily traian w9R8j9Ew7 */     if(ok==0) cout << cnt;
/* Dti59TqjB ily traian w9R8j9Ew7 */     else cout << -1;
/* Dti59TqjB ily traian w9R8j9Ew7 */     return 0;
/* Dti59TqjB ily traian w9R8j9Ew7 */ }