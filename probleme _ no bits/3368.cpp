/* kAPrTW5Sq ily traian 0YTaw8O95 */ #include <algorithm>
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
/* kAPrTW5Sq ily traian 0YTaw8O95 */ 
/* kAPrTW5Sq ily traian 0YTaw8O95 */ using namespace std;
/* kAPrTW5Sq ily traian 0YTaw8O95 */ 
/* kAPrTW5Sq ily traian 0YTaw8O95 */ int n, X, Y, Z, T, inf = 1000000001;
/* kAPrTW5Sq ily traian 0YTaw8O95 */ int a[1501][1501];
/* kAPrTW5Sq ily traian 0YTaw8O95 */ int d[1501][1501];
/* kAPrTW5Sq ily traian 0YTaw8O95 */ 
/* kAPrTW5Sq ily traian 0YTaw8O95 */ bool inmat(int i, int j){
/* kAPrTW5Sq ily traian 0YTaw8O95 */     return i >= 1 && i <= n && j >= 1 && j <= n;
/* kAPrTW5Sq ily traian 0YTaw8O95 */ }
/* kAPrTW5Sq ily traian 0YTaw8O95 */ 
/* kAPrTW5Sq ily traian 0YTaw8O95 */ int di[]={0,-1,1,0};
/* kAPrTW5Sq ily traian 0YTaw8O95 */ int dj[]={-1,0,0,1};
/* kAPrTW5Sq ily traian 0YTaw8O95 */ 
/* kAPrTW5Sq ily traian 0YTaw8O95 */ void lee(int i, int j){
/* kAPrTW5Sq ily traian 0YTaw8O95 */     priority_queue<pair<int, pair<int, int>>,vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int, int>>>> Q;
/* kAPrTW5Sq ily traian 0YTaw8O95 */     for(int i = 1; i <= n; ++i)
/* kAPrTW5Sq ily traian 0YTaw8O95 */         for(int j = 1; j <= n; ++j)
/* kAPrTW5Sq ily traian 0YTaw8O95 */             d[i][j] = inf;
/* kAPrTW5Sq ily traian 0YTaw8O95 */     d[i][j] = a[i][j];
/* kAPrTW5Sq ily traian 0YTaw8O95 */     Q.push({a[i][j],{i, j}});
/* kAPrTW5Sq ily traian 0YTaw8O95 */     while(!Q.empty()){
/* kAPrTW5Sq ily traian 0YTaw8O95 */         pair<int, pair<int, int>> x = Q.top();
/* kAPrTW5Sq ily traian 0YTaw8O95 */         for(int i = 0; i <= 3; ++i){
/* kAPrTW5Sq ily traian 0YTaw8O95 */             int inou = x.second.first + di[i];
/* kAPrTW5Sq ily traian 0YTaw8O95 */             int jnou = x.second.second + dj[i];
/* kAPrTW5Sq ily traian 0YTaw8O95 */             if(inmat(inou, jnou) && d[x.second.first][x.second.second] + a[inou][jnou] < d[inou][jnou])
/* kAPrTW5Sq ily traian 0YTaw8O95 */                 d[inou][jnou] = d[x.second.first][x.second.second] + a[inou][jnou], Q.push({d[inou][jnou], {inou, jnou}});
/* kAPrTW5Sq ily traian 0YTaw8O95 */         }
/* kAPrTW5Sq ily traian 0YTaw8O95 */         Q.pop();
/* kAPrTW5Sq ily traian 0YTaw8O95 */     }
/* kAPrTW5Sq ily traian 0YTaw8O95 */     cout << d[n][n];
/* kAPrTW5Sq ily traian 0YTaw8O95 */ }
/* kAPrTW5Sq ily traian 0YTaw8O95 */ 
/* kAPrTW5Sq ily traian 0YTaw8O95 */ int main(){
/* kAPrTW5Sq ily traian 0YTaw8O95 */     cin >> n >> X >> Y >> Z >> T;
/* kAPrTW5Sq ily traian 0YTaw8O95 */     for(int i = 1; i <= n; ++i)
/* kAPrTW5Sq ily traian 0YTaw8O95 */         cin >> a[1][i];
/* kAPrTW5Sq ily traian 0YTaw8O95 */     for(int i = 2; i <= n; ++i)
/* kAPrTW5Sq ily traian 0YTaw8O95 */         for(int j = 1; j <= n; ++j)
/* kAPrTW5Sq ily traian 0YTaw8O95 */              a[i][j] = 1 + (a[i-1][j-1] * X + a[i-1][j] * Y + a[i-1][j+1] * Z) % T;
/* kAPrTW5Sq ily traian 0YTaw8O95 */     lee(1, 1);
/* kAPrTW5Sq ily traian 0YTaw8O95 */     return 0;
/* kAPrTW5Sq ily traian 0YTaw8O95 */ }