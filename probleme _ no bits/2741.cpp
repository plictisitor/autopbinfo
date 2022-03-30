/* zPmSCUx6L ily traian WtgA8xKmA */ #include <algorithm>
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
/* zPmSCUx6L ily traian WtgA8xKmA */ using namespace std;
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */ ifstream cin("sao1.in");
/* zPmSCUx6L ily traian WtgA8xKmA */ ofstream cout("sao1.out");
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */ long long a[501][501], c, f;
/* zPmSCUx6L ily traian WtgA8xKmA */ int n, m;
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */ void fill(int i, int j){
/* zPmSCUx6L ily traian WtgA8xKmA */     c++;
/* zPmSCUx6L ily traian WtgA8xKmA */     a[i][j] = 0;
/* zPmSCUx6L ily traian WtgA8xKmA */     if(a[i+1][j] == f)
/* zPmSCUx6L ily traian WtgA8xKmA */         fill(i+1, j);
/* zPmSCUx6L ily traian WtgA8xKmA */     if(a[i-1][j] == f)
/* zPmSCUx6L ily traian WtgA8xKmA */         fill(i-1, j);
/* zPmSCUx6L ily traian WtgA8xKmA */     if(a[i][j+1] == f)
/* zPmSCUx6L ily traian WtgA8xKmA */         fill(i, j+1);
/* zPmSCUx6L ily traian WtgA8xKmA */     if(a[i][j-1] == f)
/* zPmSCUx6L ily traian WtgA8xKmA */         fill(i, j-1);
/* zPmSCUx6L ily traian WtgA8xKmA */ }
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */ int main()
/* zPmSCUx6L ily traian WtgA8xKmA */ {
/* zPmSCUx6L ily traian WtgA8xKmA */     cin >> n >> m;
/* zPmSCUx6L ily traian WtgA8xKmA */     for(int i = 1; i <= n; ++i)
/* zPmSCUx6L ily traian WtgA8xKmA */         for(int j = 1; j <= m; ++j)
/* zPmSCUx6L ily traian WtgA8xKmA */             cin >> a[i][j];
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */     long long maxi = 0;
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */     for(int i = 1; i <= n; ++i)
/* zPmSCUx6L ily traian WtgA8xKmA */         for(int j = 1; j <= m; ++j)
/* zPmSCUx6L ily traian WtgA8xKmA */             if(a[i][j] != 0){
/* zPmSCUx6L ily traian WtgA8xKmA */                 f = a[i][j];
/* zPmSCUx6L ily traian WtgA8xKmA */                 c = 0;
/* zPmSCUx6L ily traian WtgA8xKmA */                 fill(i, j);
/* zPmSCUx6L ily traian WtgA8xKmA */                 if(c * f > maxi)
/* zPmSCUx6L ily traian WtgA8xKmA */                     maxi = c * f;
/* zPmSCUx6L ily traian WtgA8xKmA */             }
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */     cout << maxi;
/* zPmSCUx6L ily traian WtgA8xKmA */ 
/* zPmSCUx6L ily traian WtgA8xKmA */     return 0;
/* zPmSCUx6L ily traian WtgA8xKmA */ }