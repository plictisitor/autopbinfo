/* Q3eOayfhM ily traian UvTi2vMht */ #include <algorithm>
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
/* Q3eOayfhM ily traian UvTi2vMht */ using namespace std;
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ ifstream cin("tabla.in");
/* Q3eOayfhM ily traian UvTi2vMht */ ofstream cout("tabla.out");
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ int a[21][21], n, cnt, b[21][21];
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ bool inmat(int i, int j)
/* Q3eOayfhM ily traian UvTi2vMht */ {
/* Q3eOayfhM ily traian UvTi2vMht */     return i <= n && j <= n && i >= 1 && j >= 1;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ bool cont3pr(int i, int j){
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i-1][j] && a[i-1][j] == a[i-2][j] && inmat(i-2, j))
/* Q3eOayfhM ily traian UvTi2vMht */         return 1;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i-1][j] && a[i-1][j] == a[i+1][j] && inmat(i-1,j) && inmat(i+1, j))
/* Q3eOayfhM ily traian UvTi2vMht */         return 1;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i+1][j] && a[i+1][j] == a[i+2][j] && inmat(i+2, j))
/* Q3eOayfhM ily traian UvTi2vMht */         return 1;
/* Q3eOayfhM ily traian UvTi2vMht */     return 0;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ bool cont3pl(int i, int j){
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i][j+1] && a[i][j+1] == a[i][j+2] && inmat(i, j+2))
/* Q3eOayfhM ily traian UvTi2vMht */         return 1;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i][j-1] && a[i][j-1] == a[i][j+1] && inmat(i, j-1) && inmat(i, j+1))
/* Q3eOayfhM ily traian UvTi2vMht */         return 1;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i][j-1] && a[i][j-1] == a[i][j-2] && inmat(i, j-2))
/* Q3eOayfhM ily traian UvTi2vMht */         return 1;
/* Q3eOayfhM ily traian UvTi2vMht */     return 0;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ void transfB(int i, int j){
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i-1][j] && a[i-1][j] == a[i-2][j] && inmat(i-2, j))
/* Q3eOayfhM ily traian UvTi2vMht */         b[i][j] = b[i-1][j] = b[i-2][j] = 1;
/* Q3eOayfhM ily traian UvTi2vMht */     else if(a[i][j] == a[i-1][j] && a[i-1][j] == a[i+1][j] && inmat(i+1, j) && inmat(i-1, j))
/* Q3eOayfhM ily traian UvTi2vMht */         b[i][j] = b[i-1][j] = b[i+1][j] = 1;
/* Q3eOayfhM ily traian UvTi2vMht */     else if(a[i][j] == a[i+1][j] && a[i+1][j] == a[i+2][j] && inmat(i + 2, j))
/* Q3eOayfhM ily traian UvTi2vMht */         b[i][j] = b[i+1][j] = b[i+2][j] = 1;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i][j-1] && a[i][j-1] == a[i][j-2] && inmat(i, j-2))
/* Q3eOayfhM ily traian UvTi2vMht */         b[i][j] = b[i][j-1] = b[i][j-2] = 1;
/* Q3eOayfhM ily traian UvTi2vMht */     else if(a[i][j] == a[i][j+1] && a[i][j+1] == a[i][j-1] && inmat(i, j-1) && inmat(i, j+1))
/* Q3eOayfhM ily traian UvTi2vMht */         b[i][j] = b[i][j+1] = b[i][j-1] = 1;
/* Q3eOayfhM ily traian UvTi2vMht */     else if(a[i][j] == a[i][j+1] && a[i][j+1] == a[i][j+2] && inmat(i, j+2))
/* Q3eOayfhM ily traian UvTi2vMht */         b[i][j] = b[i][j+1] = b[i][j+2] = 1;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ bool ladr3(int i, int j){
/* Q3eOayfhM ily traian UvTi2vMht */     bool ok = false;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i][j-1] && a[i][j-1] == a[i][j-2] && inmat(i, j-2))
/* Q3eOayfhM ily traian UvTi2vMht */         ok = true;
/* Q3eOayfhM ily traian UvTi2vMht */     if(b[i][j] == b[i][j-1] && b[i][j-1] == b[i][j-2] && b[i][j] == 1 && inmat(i, j-2))
/* Q3eOayfhM ily traian UvTi2vMht */         ok = false;
/* Q3eOayfhM ily traian UvTi2vMht */     return ok;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ bool lasus3(int i, int j){
/* Q3eOayfhM ily traian UvTi2vMht */     bool ok = false;
/* Q3eOayfhM ily traian UvTi2vMht */     if(a[i][j] == a[i-1][j] && a[i][j] == a[i-2][j] && inmat(i-2, j))
/* Q3eOayfhM ily traian UvTi2vMht */         ok = true;
/* Q3eOayfhM ily traian UvTi2vMht */     if(b[i][j] == b[i-1][j] && b[i][j] == b[i-2][j] && b[i][j] == 1 && inmat(i-2, j))
/* Q3eOayfhM ily traian UvTi2vMht */         ok = false;
/* Q3eOayfhM ily traian UvTi2vMht */     return ok;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ void verif(int i, int j){
/* Q3eOayfhM ily traian UvTi2vMht */     if(cont3pr(i, j) && cont3pl(i, j))
/* Q3eOayfhM ily traian UvTi2vMht */         cnt+=5, transfB(i, j);
/* Q3eOayfhM ily traian UvTi2vMht */     else if(ladr3(i, j))
/* Q3eOayfhM ily traian UvTi2vMht */         cnt++;
/* Q3eOayfhM ily traian UvTi2vMht */     else if(lasus3(i, j))
/* Q3eOayfhM ily traian UvTi2vMht */         cnt++;
/* Q3eOayfhM ily traian UvTi2vMht */ }
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ int di[]={0,1,-1,0};
/* Q3eOayfhM ily traian UvTi2vMht */ int dj[]={-1,0,0,1};
/* Q3eOayfhM ily traian UvTi2vMht */ 
/* Q3eOayfhM ily traian UvTi2vMht */ int main(){
/* Q3eOayfhM ily traian UvTi2vMht */     int max = 0;
/* Q3eOayfhM ily traian UvTi2vMht */     cin >> n;
/* Q3eOayfhM ily traian UvTi2vMht */     for(int i = 1; i <= n; ++i)
/* Q3eOayfhM ily traian UvTi2vMht */         for(int j = 1; j <= n; ++j)
/* Q3eOayfhM ily traian UvTi2vMht */             cin >> a[i][j];
/* Q3eOayfhM ily traian UvTi2vMht */     for(int i = 1; i <= n; ++i)
/* Q3eOayfhM ily traian UvTi2vMht */         for(int j = 1; j <= n; ++j){
/* Q3eOayfhM ily traian UvTi2vMht */                 int k, t;
/* Q3eOayfhM ily traian UvTi2vMht */                 for(int d = 0; d <= 3; ++d)
/* Q3eOayfhM ily traian UvTi2vMht */                     if(inmat(i + di[d], j + dj[d])){
/* Q3eOayfhM ily traian UvTi2vMht */                         k = i + di[d], t = j + dj[d];
/* Q3eOayfhM ily traian UvTi2vMht */                         cnt = 0;
/* Q3eOayfhM ily traian UvTi2vMht */                         swap(a[i][j], a[k][t]);
/* Q3eOayfhM ily traian UvTi2vMht */                         for(int q = 1; q <= n; ++q)
/* Q3eOayfhM ily traian UvTi2vMht */                             for(int w = 1; w <= n; ++w)
/* Q3eOayfhM ily traian UvTi2vMht */                                 verif(q,w);
/* Q3eOayfhM ily traian UvTi2vMht */                         if(cnt > max)
/* Q3eOayfhM ily traian UvTi2vMht */                             max = cnt;
/* Q3eOayfhM ily traian UvTi2vMht */                         swap(a[i][j], a[k][t]);
/* Q3eOayfhM ily traian UvTi2vMht */                         for(int q = 1; q <= n; ++q)
/* Q3eOayfhM ily traian UvTi2vMht */                             for(int w = 1; w <= n; ++w)
/* Q3eOayfhM ily traian UvTi2vMht */                                 b[q][w] = 0;
/* Q3eOayfhM ily traian UvTi2vMht */                     }
/* Q3eOayfhM ily traian UvTi2vMht */             }
/* Q3eOayfhM ily traian UvTi2vMht */     cout << max;
/* Q3eOayfhM ily traian UvTi2vMht */     return 0;
/* Q3eOayfhM ily traian UvTi2vMht */ }