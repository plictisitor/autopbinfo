/* YmmENjkgc ily traian 4Djb2AxzJ */ #include <algorithm>
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
/* YmmENjkgc ily traian 4Djb2AxzJ */ using namespace std;
/* YmmENjkgc ily traian 4Djb2AxzJ */ ifstream cin("padure.in");
/* YmmENjkgc ily traian 4Djb2AxzJ */ ofstream cout("padure.out");
/* YmmENjkgc ily traian 4Djb2AxzJ */ int n , m , k , A[101][101] , smax=-200000000 , s , i1 , j1  , i2 , j2 , S[101][101];
/* YmmENjkgc ily traian 4Djb2AxzJ */ int prim(int n)
/* YmmENjkgc ily traian 4Djb2AxzJ */ {
/* YmmENjkgc ily traian 4Djb2AxzJ */     if(n == 0 || n == 1) return 0;
/* YmmENjkgc ily traian 4Djb2AxzJ */     if(n == 2) return 1;
/* YmmENjkgc ily traian 4Djb2AxzJ */     if(n % 2 == 0) return 0;
/* YmmENjkgc ily traian 4Djb2AxzJ */     for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
/* YmmENjkgc ily traian 4Djb2AxzJ */     return 1;
/* YmmENjkgc ily traian 4Djb2AxzJ */ }
/* YmmENjkgc ily traian 4Djb2AxzJ */ int main()
/* YmmENjkgc ily traian 4Djb2AxzJ */ {
/* YmmENjkgc ily traian 4Djb2AxzJ */     cin >> n >> m >> k;
/* YmmENjkgc ily traian 4Djb2AxzJ */     for(int i = 1 ; i <= n ; i++)
/* YmmENjkgc ily traian 4Djb2AxzJ */         for(int j = 1 ; j <= m ; j++)
/* YmmENjkgc ily traian 4Djb2AxzJ */             cin >> A[i][j];
/* YmmENjkgc ily traian 4Djb2AxzJ */     for(int i = 1 ; i <= n ; i++)
/* YmmENjkgc ily traian 4Djb2AxzJ */         for(int j = 1 ; j <= m ; j++)
/* YmmENjkgc ily traian 4Djb2AxzJ */             S[i][j]=S[i-1][j]+S[i][j-1]-S[i-1][j-1]+A[i][j];
/* YmmENjkgc ily traian 4Djb2AxzJ */     for(int i = 1 ; i <= k ; i++)
/* YmmENjkgc ily traian 4Djb2AxzJ */     {
/* YmmENjkgc ily traian 4Djb2AxzJ */         cin >> i1 >> j1 >> i2 >> j2;
/* YmmENjkgc ily traian 4Djb2AxzJ */         int s=S[i2][j2]-S[i1-1][j2]-S[i2][j1-1]+S[i1-1][j1-1];
/* YmmENjkgc ily traian 4Djb2AxzJ */         if(s > smax && prim(s)) smax=s;
/* YmmENjkgc ily traian 4Djb2AxzJ */     }
/* YmmENjkgc ily traian 4Djb2AxzJ */     cout<<smax;
/* YmmENjkgc ily traian 4Djb2AxzJ */     return 0;
/* YmmENjkgc ily traian 4Djb2AxzJ */ }