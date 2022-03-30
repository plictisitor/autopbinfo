/* VhnF3kw1b ily traian BEgaGVTBJ */ #include <algorithm>
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
/* VhnF3kw1b ily traian BEgaGVTBJ */ using namespace std;
/* VhnF3kw1b ily traian BEgaGVTBJ */ 
/* VhnF3kw1b ily traian BEgaGVTBJ */ int n, m, k, p, a[10][10];
/* VhnF3kw1b ily traian BEgaGVTBJ */ 
/* VhnF3kw1b ily traian BEgaGVTBJ */ int fact(int n){
/* VhnF3kw1b ily traian BEgaGVTBJ */     if(n == 0)
/* VhnF3kw1b ily traian BEgaGVTBJ */         return 1;
/* VhnF3kw1b ily traian BEgaGVTBJ */     else
/* VhnF3kw1b ily traian BEgaGVTBJ */         return n * fact(n-1);
/* VhnF3kw1b ily traian BEgaGVTBJ */ }
/* VhnF3kw1b ily traian BEgaGVTBJ */ 
/* VhnF3kw1b ily traian BEgaGVTBJ */ int main(){
/* VhnF3kw1b ily traian BEgaGVTBJ */     cin >> n >> m >> k >> p;
/* VhnF3kw1b ily traian BEgaGVTBJ */     int x, y;
/* VhnF3kw1b ily traian BEgaGVTBJ */     for(int i = 1; i <= k; ++i){
/* VhnF3kw1b ily traian BEgaGVTBJ */         cin >> x >> y;
/* VhnF3kw1b ily traian BEgaGVTBJ */         for(int j = 1; j <= m; ++j)
/* VhnF3kw1b ily traian BEgaGVTBJ */             a[x][j] = 1;
/* VhnF3kw1b ily traian BEgaGVTBJ */         for(int j = 1; j <= n; ++j)
/* VhnF3kw1b ily traian BEgaGVTBJ */             a[j][y] = 1;
/* VhnF3kw1b ily traian BEgaGVTBJ */     }
/* VhnF3kw1b ily traian BEgaGVTBJ */     int cnt = 0;
/* VhnF3kw1b ily traian BEgaGVTBJ */     for(int i = 1; i <= n; ++i)
/* VhnF3kw1b ily traian BEgaGVTBJ */         for(int j = 1; j <= m; ++j)
/* VhnF3kw1b ily traian BEgaGVTBJ */             if(a[i][j] == 0)
/* VhnF3kw1b ily traian BEgaGVTBJ */                 cnt++;
/* VhnF3kw1b ily traian BEgaGVTBJ */     if(cnt < p)
/* VhnF3kw1b ily traian BEgaGVTBJ */         cout << 0;
/* VhnF3kw1b ily traian BEgaGVTBJ */     else{
/* VhnF3kw1b ily traian BEgaGVTBJ */         cout << fact(cnt) / fact(cnt - p);
/* VhnF3kw1b ily traian BEgaGVTBJ */     }
/* VhnF3kw1b ily traian BEgaGVTBJ */ }