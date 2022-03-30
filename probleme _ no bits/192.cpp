/* L5Lc9W63j ily traian NKbiKpvIG */ #include <algorithm>
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
/* L5Lc9W63j ily traian NKbiKpvIG */ 
/* L5Lc9W63j ily traian NKbiKpvIG */ using namespace std;
/* L5Lc9W63j ily traian NKbiKpvIG */ ifstream fin("sumcolmax.in");
/* L5Lc9W63j ily traian NKbiKpvIG */ ofstream fout("sumcolmax.out");
/* L5Lc9W63j ily traian NKbiKpvIG */ int main()
/* L5Lc9W63j ily traian NKbiKpvIG */ {
/* L5Lc9W63j ily traian NKbiKpvIG */     int n , a[27][27] , ind = 0 , m , smax = -100001;
/* L5Lc9W63j ily traian NKbiKpvIG */     fin >> n >> m;
/* L5Lc9W63j ily traian NKbiKpvIG */     for(int i = 0 ; i < n ; ++i)
/* L5Lc9W63j ily traian NKbiKpvIG */         for(int j = 0 ; j < m ; ++j) fin >> a[i][j];
/* L5Lc9W63j ily traian NKbiKpvIG */     for(int j = 0 ; j < m ; ++j)
/* L5Lc9W63j ily traian NKbiKpvIG */     {
/* L5Lc9W63j ily traian NKbiKpvIG */         int s = 0;
/* L5Lc9W63j ily traian NKbiKpvIG */         for(int i = 0 ; i < n ; ++i)
/* L5Lc9W63j ily traian NKbiKpvIG */         {
/* L5Lc9W63j ily traian NKbiKpvIG */             s += a[i][j];
/* L5Lc9W63j ily traian NKbiKpvIG */         }
/* L5Lc9W63j ily traian NKbiKpvIG */         if ( s > smax) {smax = s;ind = j;}
/* L5Lc9W63j ily traian NKbiKpvIG */     }
/* L5Lc9W63j ily traian NKbiKpvIG */     for(int i = 0 ; i< n ; ++i) fout<<a[i][ind]<<" ";
/* L5Lc9W63j ily traian NKbiKpvIG */ 
/* L5Lc9W63j ily traian NKbiKpvIG */     fin.close();
/* L5Lc9W63j ily traian NKbiKpvIG */     fout.close();
/* L5Lc9W63j ily traian NKbiKpvIG */ 
/* L5Lc9W63j ily traian NKbiKpvIG */     return 0;
/* L5Lc9W63j ily traian NKbiKpvIG */ }