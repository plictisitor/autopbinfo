/* mxpxhF1Iz ily traian D88yqQ80a */ #include <algorithm>
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
/* mxpxhF1Iz ily traian D88yqQ80a */ using namespace std;
/* mxpxhF1Iz ily traian D88yqQ80a */ 
/* mxpxhF1Iz ily traian D88yqQ80a */ ifstream cin("maria.in");
/* mxpxhF1Iz ily traian D88yqQ80a */ ofstream cout("maria.out");
/* mxpxhF1Iz ily traian D88yqQ80a */ 
/* mxpxhF1Iz ily traian D88yqQ80a */ int n , m , p , q , a[1001][1001] , k , x , y , s[1001][1001] , cnt;
/* mxpxhF1Iz ily traian D88yqQ80a */ 
/* mxpxhF1Iz ily traian D88yqQ80a */ bool inside(int i , int j)
/* mxpxhF1Iz ily traian D88yqQ80a */ {
/* mxpxhF1Iz ily traian D88yqQ80a */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* mxpxhF1Iz ily traian D88yqQ80a */ }
/* mxpxhF1Iz ily traian D88yqQ80a */ 
/* mxpxhF1Iz ily traian D88yqQ80a */ int main()
/* mxpxhF1Iz ily traian D88yqQ80a */ {
/* mxpxhF1Iz ily traian D88yqQ80a */     cin >> n >> m >> p >> q >> k;
/* mxpxhF1Iz ily traian D88yqQ80a */     for(int i = 1 ; i <= k ; i++)
/* mxpxhF1Iz ily traian D88yqQ80a */     {
/* mxpxhF1Iz ily traian D88yqQ80a */         cin >> x >> y;
/* mxpxhF1Iz ily traian D88yqQ80a */         a[x][y] = 1;
/* mxpxhF1Iz ily traian D88yqQ80a */     }
/* mxpxhF1Iz ily traian D88yqQ80a */ 
/* mxpxhF1Iz ily traian D88yqQ80a */     for(int i = 1 ; i <= n ; i++)
/* mxpxhF1Iz ily traian D88yqQ80a */         for(int j = 1 ; j <= m ; j++)
/* mxpxhF1Iz ily traian D88yqQ80a */             s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
/* mxpxhF1Iz ily traian D88yqQ80a */ 
/* mxpxhF1Iz ily traian D88yqQ80a */     for(int i = 1 ; i <= n ; i++)
/* mxpxhF1Iz ily traian D88yqQ80a */     {
/* mxpxhF1Iz ily traian D88yqQ80a */         for(int j = 1 ; j <= m ; j++)
/* mxpxhF1Iz ily traian D88yqQ80a */         {
/* mxpxhF1Iz ily traian D88yqQ80a */             int inou = i + p - 1 , jnou = j + q - 1;
/* mxpxhF1Iz ily traian D88yqQ80a */             if(inside(inou , jnou) && s[inou][jnou] - s[i - 1][jnou] - s[inou][j - 1] + s[i - 1][j - 1] == 0) cnt++;
/* mxpxhF1Iz ily traian D88yqQ80a */             inou = i + q - 1 , jnou = j + p - 1;
/* mxpxhF1Iz ily traian D88yqQ80a */             if(inside(inou , jnou) && s[inou][jnou] - s[i - 1][jnou] - s[inou][j - 1] + s[i - 1][j - 1] == 0) cnt++;
/* mxpxhF1Iz ily traian D88yqQ80a */         }
/* mxpxhF1Iz ily traian D88yqQ80a */     }
/* mxpxhF1Iz ily traian D88yqQ80a */     cout << cnt;
/* mxpxhF1Iz ily traian D88yqQ80a */ }