/* iRKA2SHL4 ily traian pOnQyzWYb */ #include <algorithm>
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
/* iRKA2SHL4 ily traian pOnQyzWYb */ 
/* iRKA2SHL4 ily traian pOnQyzWYb */ using namespace std;
/* iRKA2SHL4 ily traian pOnQyzWYb */ ifstream cin("soarece2.in");
/* iRKA2SHL4 ily traian pOnQyzWYb */ ofstream cout("soarece2.out");
/* iRKA2SHL4 ily traian pOnQyzWYb */ const int di[]={-1 , 0 , 1 , 0};
/* iRKA2SHL4 ily traian pOnQyzWYb */ const int dj[]={0 , 1, 0 , -1};
/* iRKA2SHL4 ily traian pOnQyzWYb */ int n , m , a[1002][1002] , x[1000001] , y[1000001];
/* iRKA2SHL4 ily traian pOnQyzWYb */ int ip , jp , is=1 , js=1 , ind , jnd;
/* iRKA2SHL4 ily traian pOnQyzWYb */ int st = 1 , dr = 1 , rez[10000] , p=1;
/* iRKA2SHL4 ily traian pOnQyzWYb */ char v[1002][1002];
/* iRKA2SHL4 ily traian pOnQyzWYb */ bool inside(int i , int j){return i>=1 && i<=n && j>=1 && j<=m;}
/* iRKA2SHL4 ily traian pOnQyzWYb */ int main()
/* iRKA2SHL4 ily traian pOnQyzWYb */ {
/* iRKA2SHL4 ily traian pOnQyzWYb */     cin >> n >> m;
/* iRKA2SHL4 ily traian pOnQyzWYb */     for(int i = 1 ; i <= n ; ++i)
/* iRKA2SHL4 ily traian pOnQyzWYb */     {
/* iRKA2SHL4 ily traian pOnQyzWYb */         for(int j = 1 ; j <= m ; ++j)
/* iRKA2SHL4 ily traian pOnQyzWYb */         {
/* iRKA2SHL4 ily traian pOnQyzWYb */             cin >> v[i][j];
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(v[i][j]=='_') a[i][j] = 0;
/* iRKA2SHL4 ily traian pOnQyzWYb */             else if(v[i][j]=='S') ip = i , jp = j , a[i][j] = 0;
/* iRKA2SHL4 ily traian pOnQyzWYb */             else if(v[i][j]=='B') a[i][j] = 0 , ind = i , jnd = j;
/* iRKA2SHL4 ily traian pOnQyzWYb */             else a[i][j] = -1;
/* iRKA2SHL4 ily traian pOnQyzWYb */         }
/* iRKA2SHL4 ily traian pOnQyzWYb */     }
/* iRKA2SHL4 ily traian pOnQyzWYb */     a[ip][jp] = 1;
/* iRKA2SHL4 ily traian pOnQyzWYb */     x[1] = ip;
/* iRKA2SHL4 ily traian pOnQyzWYb */     y[1] = jp;
/* iRKA2SHL4 ily traian pOnQyzWYb */     while(st <= dr )
/* iRKA2SHL4 ily traian pOnQyzWYb */     {
/* iRKA2SHL4 ily traian pOnQyzWYb */         int i = x[st] , j = y[st];
/* iRKA2SHL4 ily traian pOnQyzWYb */         for(int k = 0 ; k < 4 ; k++)
/* iRKA2SHL4 ily traian pOnQyzWYb */         {
/* iRKA2SHL4 ily traian pOnQyzWYb */             int ii=i+di[k];
/* iRKA2SHL4 ily traian pOnQyzWYb */             int jj=j+dj[k];
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(inside(ii , jj) && a[ii][jj]==0)
/* iRKA2SHL4 ily traian pOnQyzWYb */             {
/* iRKA2SHL4 ily traian pOnQyzWYb */                 dr++;
/* iRKA2SHL4 ily traian pOnQyzWYb */                 x[dr]=ii , y[dr]=jj , a[ii][jj]=a[i][j]+1;
/* iRKA2SHL4 ily traian pOnQyzWYb */             }
/* iRKA2SHL4 ily traian pOnQyzWYb */         }
/* iRKA2SHL4 ily traian pOnQyzWYb */         st++;
/* iRKA2SHL4 ily traian pOnQyzWYb */     }
/* iRKA2SHL4 ily traian pOnQyzWYb */     if(a[ind][jnd]==-1) cout << 0;
/* iRKA2SHL4 ily traian pOnQyzWYb */     else
/* iRKA2SHL4 ily traian pOnQyzWYb */     {
/* iRKA2SHL4 ily traian pOnQyzWYb */         cout << a[ind][jnd]-1 << endl;
/* iRKA2SHL4 ily traian pOnQyzWYb */         int i = ind , j = jnd;
/* iRKA2SHL4 ily traian pOnQyzWYb */         while(i!=ip || j!=jp)
/* iRKA2SHL4 ily traian pOnQyzWYb */         {
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(a[i-1][j]==a[i][j]-1 && inside(i-1 , j))
/* iRKA2SHL4 ily traian pOnQyzWYb */                 i-- , rez[p]=1 , p++;
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(a[i+1][j]==a[i][j]-1 && inside(i+1 , j))
/* iRKA2SHL4 ily traian pOnQyzWYb */                 i++ , rez[p]=3 , p++;
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(a[i][j+1]==a[i][j]-1 && inside(i , j+1))
/* iRKA2SHL4 ily traian pOnQyzWYb */                 j++ , rez[p]=2 , p++;
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(a[i][j-1]==a[i][j]-1 && inside(i , j-1))
/* iRKA2SHL4 ily traian pOnQyzWYb */                 j-- , rez[p]=4 , p++;
/* iRKA2SHL4 ily traian pOnQyzWYb */         }
/* iRKA2SHL4 ily traian pOnQyzWYb */         for(int i = p - 1 ; i >= 1 ; --i)
/* iRKA2SHL4 ily traian pOnQyzWYb */         {
/* iRKA2SHL4 ily traian pOnQyzWYb */             if(rez[i]==1) cout << 'S';
/* iRKA2SHL4 ily traian pOnQyzWYb */             else if(rez[i]==2) cout << 'V';
/* iRKA2SHL4 ily traian pOnQyzWYb */             else if(rez[i]==3) cout << 'N';
/* iRKA2SHL4 ily traian pOnQyzWYb */             else if(rez[i]==4) cout << 'E';
/* iRKA2SHL4 ily traian pOnQyzWYb */         }
/* iRKA2SHL4 ily traian pOnQyzWYb */     }
/* iRKA2SHL4 ily traian pOnQyzWYb */     return 0;
/* iRKA2SHL4 ily traian pOnQyzWYb */ }