/* sszY0pVoZ ily traian 15cpq5d6k */ #include <algorithm>
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
/* sszY0pVoZ ily traian 15cpq5d6k */ using namespace std;
/* sszY0pVoZ ily traian 15cpq5d6k */ ifstream cin("acces.in");
/* sszY0pVoZ ily traian 15cpq5d6k */ ofstream cout("acces.out");
/* sszY0pVoZ ily traian 15cpq5d6k */ const int di[]={-1 , 0 , 1 , 0};
/* sszY0pVoZ ily traian 15cpq5d6k */ const int dj[]={0 , 1, 0 , -1};
/* sszY0pVoZ ily traian 15cpq5d6k */ int n , m , a[1002][1002] , x[1000001] , y[1000001];
/* sszY0pVoZ ily traian 15cpq5d6k */ int ip , jp , is=1 , js=1;
/* sszY0pVoZ ily traian 15cpq5d6k */ char v[1002][1002];
/* sszY0pVoZ ily traian 15cpq5d6k */ 
/* sszY0pVoZ ily traian 15cpq5d6k */ bool inside(int i , int j)
/* sszY0pVoZ ily traian 15cpq5d6k */ {
/* sszY0pVoZ ily traian 15cpq5d6k */     return i>=1 && i<=n && j>=1 && j<=m;
/* sszY0pVoZ ily traian 15cpq5d6k */ }
/* sszY0pVoZ ily traian 15cpq5d6k */ 
/* sszY0pVoZ ily traian 15cpq5d6k */ int main()
/* sszY0pVoZ ily traian 15cpq5d6k */ {
/* sszY0pVoZ ily traian 15cpq5d6k */     cin >> n >> m;
/* sszY0pVoZ ily traian 15cpq5d6k */     for(int i = 1 ; i <= n ; ++i)
/* sszY0pVoZ ily traian 15cpq5d6k */     {
/* sszY0pVoZ ily traian 15cpq5d6k */         for(int j = 1 ; j <= m ; ++j)
/* sszY0pVoZ ily traian 15cpq5d6k */         {
/* sszY0pVoZ ily traian 15cpq5d6k */             cin >> v[i][j];
/* sszY0pVoZ ily traian 15cpq5d6k */             if(v[i][j]=='-') a[i][j]=0;
/* sszY0pVoZ ily traian 15cpq5d6k */             else if(v[i][j]=='P') {ip=i; jp=j; a[i][j]=0;}
/* sszY0pVoZ ily traian 15cpq5d6k */             else a[i][j]=1;
/* sszY0pVoZ ily traian 15cpq5d6k */         }
/* sszY0pVoZ ily traian 15cpq5d6k */     }
/* sszY0pVoZ ily traian 15cpq5d6k */     int st=1 , dr=1;
/* sszY0pVoZ ily traian 15cpq5d6k */     a[ip][jp]=1;
/* sszY0pVoZ ily traian 15cpq5d6k */     x[1]=ip;
/* sszY0pVoZ ily traian 15cpq5d6k */     y[1]=jp;
/* sszY0pVoZ ily traian 15cpq5d6k */     while(st <= dr )
/* sszY0pVoZ ily traian 15cpq5d6k */     {
/* sszY0pVoZ ily traian 15cpq5d6k */         int i = x[st] , j = y[st];
/* sszY0pVoZ ily traian 15cpq5d6k */         for(int k = 0 ; k < 4 ; k++)
/* sszY0pVoZ ily traian 15cpq5d6k */         {
/* sszY0pVoZ ily traian 15cpq5d6k */             int ii=i+di[k];
/* sszY0pVoZ ily traian 15cpq5d6k */             int jj=j+dj[k];
/* sszY0pVoZ ily traian 15cpq5d6k */             if(inside(ii , jj) && a[ii][jj]==0)
/* sszY0pVoZ ily traian 15cpq5d6k */             {
/* sszY0pVoZ ily traian 15cpq5d6k */                 dr++;
/* sszY0pVoZ ily traian 15cpq5d6k */                 x[dr]=ii , y[dr]=jj , a[ii][jj]=a[i][j]+1;
/* sszY0pVoZ ily traian 15cpq5d6k */             }
/* sszY0pVoZ ily traian 15cpq5d6k */         }
/* sszY0pVoZ ily traian 15cpq5d6k */         st++;
/* sszY0pVoZ ily traian 15cpq5d6k */     }
/* sszY0pVoZ ily traian 15cpq5d6k */     for(int i = 1 ; i <= n ; ++i)
/* sszY0pVoZ ily traian 15cpq5d6k */     {
/* sszY0pVoZ ily traian 15cpq5d6k */         for(int j = 1 ; j <= m ; ++j)
/* sszY0pVoZ ily traian 15cpq5d6k */         {
/* sszY0pVoZ ily traian 15cpq5d6k */             if(a[i][j]==1 && (i!=ip || j!=jp)) cout << -1 << ' ';
/* sszY0pVoZ ily traian 15cpq5d6k */             else cout << a[i][j]-1 << ' ';
/* sszY0pVoZ ily traian 15cpq5d6k */         }
/* sszY0pVoZ ily traian 15cpq5d6k */         cout << endl;
/* sszY0pVoZ ily traian 15cpq5d6k */     }
/* sszY0pVoZ ily traian 15cpq5d6k */     return 0;
/* sszY0pVoZ ily traian 15cpq5d6k */ }