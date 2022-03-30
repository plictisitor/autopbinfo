/* 5J88BsCfk ily traian FDs8xGeL1 */ #include <algorithm>
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
/* 5J88BsCfk ily traian FDs8xGeL1 */ using namespace std;
/* 5J88BsCfk ily traian FDs8xGeL1 */ 
/* 5J88BsCfk ily traian FDs8xGeL1 */ ifstream cin("livada_xi.in");
/* 5J88BsCfk ily traian FDs8xGeL1 */ ofstream cout("livada_xi.out");
/* 5J88BsCfk ily traian FDs8xGeL1 */ 
/* 5J88BsCfk ily traian FDs8xGeL1 */ # define inf 1000000001
/* 5J88BsCfk ily traian FDs8xGeL1 */ 
/* 5J88BsCfk ily traian FDs8xGeL1 */ int n, a[102][102], d[102][102];
/* 5J88BsCfk ily traian FDs8xGeL1 */ 
/* 5J88BsCfk ily traian FDs8xGeL1 */ int main(){
/* 5J88BsCfk ily traian FDs8xGeL1 */     cin >> n;
/* 5J88BsCfk ily traian FDs8xGeL1 */     for(int i = 1; i <= n; ++i)
/* 5J88BsCfk ily traian FDs8xGeL1 */         for(int j = 1; j <= i; ++j)
/* 5J88BsCfk ily traian FDs8xGeL1 */             cin >> a[i][j], d[i][j] = inf;
/* 5J88BsCfk ily traian FDs8xGeL1 */     for(int j = 1; j <= n; ++j)
/* 5J88BsCfk ily traian FDs8xGeL1 */         d[n][j] = d[n][j-1] + a[n][j];
/* 5J88BsCfk ily traian FDs8xGeL1 */     for(int i = n; i >= 1; --i)
/* 5J88BsCfk ily traian FDs8xGeL1 */         d[i][1] = d[i+1][1] + a[i][1];
/* 5J88BsCfk ily traian FDs8xGeL1 */     for(int i = n-1; i >= 1; --i)
/* 5J88BsCfk ily traian FDs8xGeL1 */         for(int j = 2; j <= i; ++j){
/* 5J88BsCfk ily traian FDs8xGeL1 */             if(d[i+1][j] + a[i][j] < d[i][j])
/* 5J88BsCfk ily traian FDs8xGeL1 */                 d[i][j] = d[i+1][j] + a[i][j];
/* 5J88BsCfk ily traian FDs8xGeL1 */             if(d[i][j-1] + a[i][j] < d[i][j])
/* 5J88BsCfk ily traian FDs8xGeL1 */                 d[i][j] = d[i][j-1] + a[i][j];
/* 5J88BsCfk ily traian FDs8xGeL1 */         }
/* 5J88BsCfk ily traian FDs8xGeL1 */     int min = inf;
/* 5J88BsCfk ily traian FDs8xGeL1 */     for(int i = 1; i <= n; ++i)
/* 5J88BsCfk ily traian FDs8xGeL1 */        if(d[i][i] < min)
/* 5J88BsCfk ily traian FDs8xGeL1 */             min = d[i][i];
/* 5J88BsCfk ily traian FDs8xGeL1 */     cout << min;
/* 5J88BsCfk ily traian FDs8xGeL1 */     return 0;
/* 5J88BsCfk ily traian FDs8xGeL1 */ }