/* tfhL26oJK ily traian RN1Nim78i */ #include <algorithm>
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
/* tfhL26oJK ily traian RN1Nim78i */ using namespace std;
/* tfhL26oJK ily traian RN1Nim78i */ 
/* tfhL26oJK ily traian RN1Nim78i */ ifstream cin("oaste2.in");
/* tfhL26oJK ily traian RN1Nim78i */ ofstream cout("oaste2.out");
/* tfhL26oJK ily traian RN1Nim78i */ 
/* tfhL26oJK ily traian RN1Nim78i */ int n, m, a[101][101], c, sum, cmin = 1000000, smax = 0;
/* tfhL26oJK ily traian RN1Nim78i */ 
/* tfhL26oJK ily traian RN1Nim78i */ bool inmat(int i, int j){
/* tfhL26oJK ily traian RN1Nim78i */     return i >= 1 && j >= 1 && i <= n && j <= m;
/* tfhL26oJK ily traian RN1Nim78i */ }
/* tfhL26oJK ily traian RN1Nim78i */ 
/* tfhL26oJK ily traian RN1Nim78i */ int di[]={0,0,-1,1}, dj[]={-1,1,0,0};
/* tfhL26oJK ily traian RN1Nim78i */ 
/* tfhL26oJK ily traian RN1Nim78i */ void fill(int i, int j){
/* tfhL26oJK ily traian RN1Nim78i */     c++;
/* tfhL26oJK ily traian RN1Nim78i */     sum += a[i][j];
/* tfhL26oJK ily traian RN1Nim78i */     a[i][j] = 0;
/* tfhL26oJK ily traian RN1Nim78i */     for(int d = 0; d < 4; ++d){
/* tfhL26oJK ily traian RN1Nim78i */         int inou = i + di[d];
/* tfhL26oJK ily traian RN1Nim78i */         int jnou = j + dj[d];
/* tfhL26oJK ily traian RN1Nim78i */         if(inmat(inou, jnou) && a[inou][jnou])
/* tfhL26oJK ily traian RN1Nim78i */             fill(inou, jnou);
/* tfhL26oJK ily traian RN1Nim78i */     }
/* tfhL26oJK ily traian RN1Nim78i */ }
/* tfhL26oJK ily traian RN1Nim78i */ 
/* tfhL26oJK ily traian RN1Nim78i */ int main(){
/* tfhL26oJK ily traian RN1Nim78i */     cin >> n >> m;
/* tfhL26oJK ily traian RN1Nim78i */     for(int i = 1; i <= n; ++i)
/* tfhL26oJK ily traian RN1Nim78i */         for(int j = 1; j <= m; ++j)
/* tfhL26oJK ily traian RN1Nim78i */             cin >> a[i][j];
/* tfhL26oJK ily traian RN1Nim78i */     for(int i = 1; i <= n; ++i)
/* tfhL26oJK ily traian RN1Nim78i */         for(int j = 1; j <= m; ++j)
/* tfhL26oJK ily traian RN1Nim78i */             if(a[i][j]){
/* tfhL26oJK ily traian RN1Nim78i */                 c = 0, sum = 0;
/* tfhL26oJK ily traian RN1Nim78i */                 fill(i,j);
/* tfhL26oJK ily traian RN1Nim78i */                 if(sum > smax)
/* tfhL26oJK ily traian RN1Nim78i */                     smax = sum, cmin = c;
/* tfhL26oJK ily traian RN1Nim78i */                 else if(sum == smax && c < cmin)
/* tfhL26oJK ily traian RN1Nim78i */                     cmin = c;
/* tfhL26oJK ily traian RN1Nim78i */             }
/* tfhL26oJK ily traian RN1Nim78i */     cout << smax << ' ' << cmin;
/* tfhL26oJK ily traian RN1Nim78i */     return 0;
/* tfhL26oJK ily traian RN1Nim78i */ }