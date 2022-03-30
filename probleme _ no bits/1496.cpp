/* Ubqbl2HVI ily traian HleAAUTsf */ #include <algorithm>
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
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ using namespace std;
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ ifstream cin("harta1.in");
/* Ubqbl2HVI ily traian HleAAUTsf */ ofstream cout("harta1.out");
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ int n , m ,a[101][101] , b[101][101] , f[11];
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ int di[]={0 , 0 , -1 , 1};
/* Ubqbl2HVI ily traian HleAAUTsf */ int dj[]={1 , -1 , 0 , 0};
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ bool inmat(int x , int y)
/* Ubqbl2HVI ily traian HleAAUTsf */ {
/* Ubqbl2HVI ily traian HleAAUTsf */     return x >= 1 && x <= n && y >= 1 & y <= m;
/* Ubqbl2HVI ily traian HleAAUTsf */ }
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ int c = 0;
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ void fill(int x , int y , int val)
/* Ubqbl2HVI ily traian HleAAUTsf */ {
/* Ubqbl2HVI ily traian HleAAUTsf */     a[x][y]=0;
/* Ubqbl2HVI ily traian HleAAUTsf */     c++;
/* Ubqbl2HVI ily traian HleAAUTsf */     for(int d = 0 ; d < 4 ; ++d)
/* Ubqbl2HVI ily traian HleAAUTsf */     {
/* Ubqbl2HVI ily traian HleAAUTsf */         int inou = x + di[d];
/* Ubqbl2HVI ily traian HleAAUTsf */         int jnou = y + dj[d];
/* Ubqbl2HVI ily traian HleAAUTsf */         if(a[inou][jnou]==val && inmat(inou , jnou))
/* Ubqbl2HVI ily traian HleAAUTsf */             fill(inou , jnou , val);
/* Ubqbl2HVI ily traian HleAAUTsf */     }
/* Ubqbl2HVI ily traian HleAAUTsf */ }
/* Ubqbl2HVI ily traian HleAAUTsf */ 
/* Ubqbl2HVI ily traian HleAAUTsf */ int main()
/* Ubqbl2HVI ily traian HleAAUTsf */ {
/* Ubqbl2HVI ily traian HleAAUTsf */     int p , k;
/* Ubqbl2HVI ily traian HleAAUTsf */     cin >> p;
/* Ubqbl2HVI ily traian HleAAUTsf */     cin >> n >> m >> k;
/* Ubqbl2HVI ily traian HleAAUTsf */     for(int i = 1 ; i <= n ; ++i)
/* Ubqbl2HVI ily traian HleAAUTsf */         for(int j = 1 ; j <= m ; ++j)
/* Ubqbl2HVI ily traian HleAAUTsf */             cin >> a[i][j];
/* Ubqbl2HVI ily traian HleAAUTsf */     if(p == 1)
/* Ubqbl2HVI ily traian HleAAUTsf */     {
/* Ubqbl2HVI ily traian HleAAUTsf */         int cnt = 0;
/* Ubqbl2HVI ily traian HleAAUTsf */         for(int i = 1 ; i <= n ; ++i)
/* Ubqbl2HVI ily traian HleAAUTsf */             for(int j = 1 ; j <= m ; ++j)
/* Ubqbl2HVI ily traian HleAAUTsf */                 if(a[i][j]==0)
/* Ubqbl2HVI ily traian HleAAUTsf */                     cnt ++;
/* Ubqbl2HVI ily traian HleAAUTsf */         cout << cnt;
/* Ubqbl2HVI ily traian HleAAUTsf */     }
/* Ubqbl2HVI ily traian HleAAUTsf */     else
/* Ubqbl2HVI ily traian HleAAUTsf */     {
/* Ubqbl2HVI ily traian HleAAUTsf */         int max = 0;
/* Ubqbl2HVI ily traian HleAAUTsf */         int v[1001] , ind = 0;
/* Ubqbl2HVI ily traian HleAAUTsf */         for(int i = 1 ; i <= n ; ++i)
/* Ubqbl2HVI ily traian HleAAUTsf */         {
/* Ubqbl2HVI ily traian HleAAUTsf */             for(int j = 1 ; j <= m ; ++j)
/* Ubqbl2HVI ily traian HleAAUTsf */             {
/* Ubqbl2HVI ily traian HleAAUTsf */                 int val = a[i][j];
/* Ubqbl2HVI ily traian HleAAUTsf */                 if(a[i][j]!=0)
/* Ubqbl2HVI ily traian HleAAUTsf */                 {
/* Ubqbl2HVI ily traian HleAAUTsf */                     f[val]++;
/* Ubqbl2HVI ily traian HleAAUTsf */                     fill(i , j , a[i][j]);
/* Ubqbl2HVI ily traian HleAAUTsf */                     if(f[val] > max)
/* Ubqbl2HVI ily traian HleAAUTsf */                         max = f[val];
/* Ubqbl2HVI ily traian HleAAUTsf */                 }
/* Ubqbl2HVI ily traian HleAAUTsf */             }
/* Ubqbl2HVI ily traian HleAAUTsf */         }
/* Ubqbl2HVI ily traian HleAAUTsf */         for(int i = 1 ; i < 11 ; ++i)
/* Ubqbl2HVI ily traian HleAAUTsf */             if(f[i]==max)
/* Ubqbl2HVI ily traian HleAAUTsf */                 cout << i << ' ';
/* Ubqbl2HVI ily traian HleAAUTsf */     }
/* Ubqbl2HVI ily traian HleAAUTsf */     return 0;
/* Ubqbl2HVI ily traian HleAAUTsf */ }