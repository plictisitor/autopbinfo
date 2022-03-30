/* AMo1xk12B ily traian y8snxAcCw */ #include <algorithm>
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
/* AMo1xk12B ily traian y8snxAcCw */ using namespace std;
/* AMo1xk12B ily traian y8snxAcCw */ ifstream cin("covoare.in");
/* AMo1xk12B ily traian y8snxAcCw */ ofstream cout("covoare.out");
/* AMo1xk12B ily traian y8snxAcCw */ int main()
/* AMo1xk12B ily traian y8snxAcCw */ {
/* AMo1xk12B ily traian y8snxAcCw */     int n , m , k , a[101][101]={0} , x , y , z;
/* AMo1xk12B ily traian y8snxAcCw */     cin >> n >> m >> k;
/* AMo1xk12B ily traian y8snxAcCw */     for(int p = 1 ; p <= k ; ++p)
/* AMo1xk12B ily traian y8snxAcCw */     {
/* AMo1xk12B ily traian y8snxAcCw */         cin >> x >> y >> z;
/* AMo1xk12B ily traian y8snxAcCw */         int ok = 0;
/* AMo1xk12B ily traian y8snxAcCw */         for(int i = 1 ; i <= n && ok == 0; ++i)
/* AMo1xk12B ily traian y8snxAcCw */             for(int j = 1 ; j <= m && ok == 0; ++j)
/* AMo1xk12B ily traian y8snxAcCw */             {
/* AMo1xk12B ily traian y8snxAcCw */                 if(a[i][j]==0)
/* AMo1xk12B ily traian y8snxAcCw */                 {
/* AMo1xk12B ily traian y8snxAcCw */                     for(int l = i ; l <= i + y - 1 ; ++l)
/* AMo1xk12B ily traian y8snxAcCw */                         for(int h = j ; h <= j + x - 1 ; ++h)
/* AMo1xk12B ily traian y8snxAcCw */                             a[l][h]=z;
/* AMo1xk12B ily traian y8snxAcCw */                             ok = 1;
/* AMo1xk12B ily traian y8snxAcCw */                 }
/* AMo1xk12B ily traian y8snxAcCw */             }
/* AMo1xk12B ily traian y8snxAcCw */     }
/* AMo1xk12B ily traian y8snxAcCw */     for(int i = 1 ; i <=n ; ++i)
/* AMo1xk12B ily traian y8snxAcCw */     {
/* AMo1xk12B ily traian y8snxAcCw */         for(int j = 1 ; j <= m; ++j)
/* AMo1xk12B ily traian y8snxAcCw */             cout << a[i][j] << " ";
/* AMo1xk12B ily traian y8snxAcCw */         cout << endl;
/* AMo1xk12B ily traian y8snxAcCw */     }
/* AMo1xk12B ily traian y8snxAcCw */ }