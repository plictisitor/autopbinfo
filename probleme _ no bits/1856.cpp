/* PVlMtZY2o ily traian 2LihyCRmB */ #include <algorithm>
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
/* PVlMtZY2o ily traian 2LihyCRmB */ 
/* PVlMtZY2o ily traian 2LihyCRmB */ using namespace std;
/* PVlMtZY2o ily traian 2LihyCRmB */ ifstream cin("taxe2.in");
/* PVlMtZY2o ily traian 2LihyCRmB */ ofstream cout("taxe2.out");
/* PVlMtZY2o ily traian 2LihyCRmB */ int di[]={0 , 0 , 1 , -1};
/* PVlMtZY2o ily traian 2LihyCRmB */ int dj[]={1 , -1 , 0 , 0};
/* PVlMtZY2o ily traian 2LihyCRmB */ struct per {int i , j;};
/* PVlMtZY2o ily traian 2LihyCRmB */ queue<per> Q;
/* PVlMtZY2o ily traian 2LihyCRmB */ int n , a[101][101] , b[101][101] , s;
/* PVlMtZY2o ily traian 2LihyCRmB */ int inside(int i , int j)
/* PVlMtZY2o ily traian 2LihyCRmB */ {
/* PVlMtZY2o ily traian 2LihyCRmB */     return i > 0 && i <= n && j <= n && j > 0;
/* PVlMtZY2o ily traian 2LihyCRmB */ }
/* PVlMtZY2o ily traian 2LihyCRmB */ void lee()
/* PVlMtZY2o ily traian 2LihyCRmB */ {
/* PVlMtZY2o ily traian 2LihyCRmB */     per x;
/* PVlMtZY2o ily traian 2LihyCRmB */     x.i = 1;
/* PVlMtZY2o ily traian 2LihyCRmB */     x.j = 1;
/* PVlMtZY2o ily traian 2LihyCRmB */     Q.push(x);
/* PVlMtZY2o ily traian 2LihyCRmB */     while(!Q.empty())
/* PVlMtZY2o ily traian 2LihyCRmB */     {
/* PVlMtZY2o ily traian 2LihyCRmB */         per y;
/* PVlMtZY2o ily traian 2LihyCRmB */         y = Q.front();
/* PVlMtZY2o ily traian 2LihyCRmB */         for(int d = 0 ; d < 4 ; ++d)
/* PVlMtZY2o ily traian 2LihyCRmB */         {
/* PVlMtZY2o ily traian 2LihyCRmB */             int inou = y.i + di[d];
/* PVlMtZY2o ily traian 2LihyCRmB */             int jnou = y.j + dj[d];
/* PVlMtZY2o ily traian 2LihyCRmB */             if(inside(inou , jnou) && b[inou][jnou] > a[inou][jnou] + b[y.i][y.j])
/* PVlMtZY2o ily traian 2LihyCRmB */             {
/* PVlMtZY2o ily traian 2LihyCRmB */                 b[inou][jnou] = b[y.i][y.j] + a[inou][jnou];
/* PVlMtZY2o ily traian 2LihyCRmB */                 per z;
/* PVlMtZY2o ily traian 2LihyCRmB */                 z.i=inou , z.j=jnou;
/* PVlMtZY2o ily traian 2LihyCRmB */                 Q.push(z);
/* PVlMtZY2o ily traian 2LihyCRmB */             }
/* PVlMtZY2o ily traian 2LihyCRmB */         }
/* PVlMtZY2o ily traian 2LihyCRmB */         Q.pop();
/* PVlMtZY2o ily traian 2LihyCRmB */     }
/* PVlMtZY2o ily traian 2LihyCRmB */ }
/* PVlMtZY2o ily traian 2LihyCRmB */ 
/* PVlMtZY2o ily traian 2LihyCRmB */ int main()
/* PVlMtZY2o ily traian 2LihyCRmB */ {
/* PVlMtZY2o ily traian 2LihyCRmB */     cin >> s >> n;
/* PVlMtZY2o ily traian 2LihyCRmB */     for(int i = 1 ; i <= n ; ++i)
/* PVlMtZY2o ily traian 2LihyCRmB */         for(int j = 1 ; j <= n ; ++j)
/* PVlMtZY2o ily traian 2LihyCRmB */             cin >> a[i][j];
/* PVlMtZY2o ily traian 2LihyCRmB */     for(int i = 1 ; i <= n ; ++i)
/* PVlMtZY2o ily traian 2LihyCRmB */         for(int j = 1 ; j <= n ; ++j)
/* PVlMtZY2o ily traian 2LihyCRmB */             b[i][j]=2000000001;
/* PVlMtZY2o ily traian 2LihyCRmB */     b[1][1] = a[1][1];
/* PVlMtZY2o ily traian 2LihyCRmB */     lee();
/* PVlMtZY2o ily traian 2LihyCRmB */     if(s - b[n][n] >= 0)cout << s - b[n][n];
/* PVlMtZY2o ily traian 2LihyCRmB */     else cout << -1;
/* PVlMtZY2o ily traian 2LihyCRmB */     return 0;
/* PVlMtZY2o ily traian 2LihyCRmB */ }