/* KRvErVCOB ily traian Y4X9SMpkz */ #include <algorithm>
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
/* KRvErVCOB ily traian Y4X9SMpkz */ using namespace std;
/* KRvErVCOB ily traian Y4X9SMpkz */ bool a[102][102] , b[102][102];
/* KRvErVCOB ily traian Y4X9SMpkz */ int main()
/* KRvErVCOB ily traian Y4X9SMpkz */ {
/* KRvErVCOB ily traian Y4X9SMpkz */     int n , cnt = -1 , ok = 0 , v[101] , p = 0 , s = 0 , suma = 0;
/* KRvErVCOB ily traian Y4X9SMpkz */     cin >> n;
/* KRvErVCOB ily traian Y4X9SMpkz */     for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */     {
/* KRvErVCOB ily traian Y4X9SMpkz */         a[i][0]=1;
/* KRvErVCOB ily traian Y4X9SMpkz */         a[i][n+1]=1;
/* KRvErVCOB ily traian Y4X9SMpkz */     }
/* KRvErVCOB ily traian Y4X9SMpkz */     for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */     {
/* KRvErVCOB ily traian Y4X9SMpkz */         a[0][i]=1;
/* KRvErVCOB ily traian Y4X9SMpkz */         a[n+1][i]=1;
/* KRvErVCOB ily traian Y4X9SMpkz */     }
/* KRvErVCOB ily traian Y4X9SMpkz */     for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */         for(int j = 1 ; j <= n ; ++j)
/* KRvErVCOB ily traian Y4X9SMpkz */         {
/* KRvErVCOB ily traian Y4X9SMpkz */             cin >> a[i][j];
/* KRvErVCOB ily traian Y4X9SMpkz */             b[i][j]=a[i][j];
/* KRvErVCOB ily traian Y4X9SMpkz */             if(a[i][j]==1) s++;
/* KRvErVCOB ily traian Y4X9SMpkz */         }
/* KRvErVCOB ily traian Y4X9SMpkz */     suma = s;
/* KRvErVCOB ily traian Y4X9SMpkz */     v[p]=s , p++;
/* KRvErVCOB ily traian Y4X9SMpkz */     for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */         for(int j = 1 ; j <= n ; ++j)
/* KRvErVCOB ily traian Y4X9SMpkz */             if(a[i][j]==1) ok = 1;
/* KRvErVCOB ily traian Y4X9SMpkz */     while(ok == 1)
/* KRvErVCOB ily traian Y4X9SMpkz */     {
/* KRvErVCOB ily traian Y4X9SMpkz */         int r = 0;
/* KRvErVCOB ily traian Y4X9SMpkz */         ok = 0;
/* KRvErVCOB ily traian Y4X9SMpkz */         cnt++;
/* KRvErVCOB ily traian Y4X9SMpkz */         for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */             for(int j = 1 ; j <= n ; ++j)
/* KRvErVCOB ily traian Y4X9SMpkz */                 if((a[i+1][j]==0 && a[i][j+1]==0)||(a[i+1][j]==0 && a[i-1][j]==0)||(a[i+1][j]==0 && a[i][j-1]==0)||(a[i][j+1]==0 && a[i-1][j]==0)||(a[i][j+1]==0 && a[i][j-1]==0)||(a[i-1][j]==0 && a[i][j-1]==0))
/* KRvErVCOB ily traian Y4X9SMpkz */                     b[i][j]=0;
/* KRvErVCOB ily traian Y4X9SMpkz */         for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */             for(int j = 1 ; j <= n ; ++j)
/* KRvErVCOB ily traian Y4X9SMpkz */                 if(b[i][j]!=a[i][j]) ok = 1 , r++;
/* KRvErVCOB ily traian Y4X9SMpkz */         for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */             for(int j = 1 ; j <= n ; ++j)
/* KRvErVCOB ily traian Y4X9SMpkz */                 a[i][j]=b[i][j];
/* KRvErVCOB ily traian Y4X9SMpkz */         suma = suma - r;
/* KRvErVCOB ily traian Y4X9SMpkz */         v[p]=suma , p++;
/* KRvErVCOB ily traian Y4X9SMpkz */     }
/* KRvErVCOB ily traian Y4X9SMpkz */     ok = 0;
/* KRvErVCOB ily traian Y4X9SMpkz */     for(int i = 1 ; i <= n ; ++i)
/* KRvErVCOB ily traian Y4X9SMpkz */         for(int j = 1 ; j <= n ; ++j)
/* KRvErVCOB ily traian Y4X9SMpkz */             if(a[i][j]==1) ok=1;
/* KRvErVCOB ily traian Y4X9SMpkz */     if(ok==0) cout << cnt;
/* KRvErVCOB ily traian Y4X9SMpkz */     else cout << -1;
/* KRvErVCOB ily traian Y4X9SMpkz */     cout << endl;
/* KRvErVCOB ily traian Y4X9SMpkz */     for(int i = 0 ; i < p ; ++i) if(v[i]!=0)cout << v[i] << endl;
/* KRvErVCOB ily traian Y4X9SMpkz */     return 0;
/* KRvErVCOB ily traian Y4X9SMpkz */ }