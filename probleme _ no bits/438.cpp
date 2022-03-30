/* FFqpLECxH ily traian r4WBVHYY7 */ #include <algorithm>
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
/* FFqpLECxH ily traian r4WBVHYY7 */ using namespace std;
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */ ifstream cin("componenteconexe.in");
/* FFqpLECxH ily traian r4WBVHYY7 */ ofstream cout("componenteconexe.out");
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */ int n , m , x , y , a[101][101] , v[101] , nrc;
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */ void dfs(int x , int val)
/* FFqpLECxH ily traian r4WBVHYY7 */ {
/* FFqpLECxH ily traian r4WBVHYY7 */     v[x] = val;
/* FFqpLECxH ily traian r4WBVHYY7 */     for(int i = 1 ; i <= n ; i++)
/* FFqpLECxH ily traian r4WBVHYY7 */         if(!v[i] && a[x][i] == 1) 
/* FFqpLECxH ily traian r4WBVHYY7 */         {
/* FFqpLECxH ily traian r4WBVHYY7 */             dfs(i , val);
/* FFqpLECxH ily traian r4WBVHYY7 */             v[i] = val;
/* FFqpLECxH ily traian r4WBVHYY7 */         }
/* FFqpLECxH ily traian r4WBVHYY7 */ }
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */ int main()
/* FFqpLECxH ily traian r4WBVHYY7 */ {
/* FFqpLECxH ily traian r4WBVHYY7 */     cin >> n;
/* FFqpLECxH ily traian r4WBVHYY7 */     while(cin >> x >> y) 
/* FFqpLECxH ily traian r4WBVHYY7 */     {
/* FFqpLECxH ily traian r4WBVHYY7 */         a[x][y] = a[y][x] = 1;
/* FFqpLECxH ily traian r4WBVHYY7 */         m++;
/* FFqpLECxH ily traian r4WBVHYY7 */     }
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */     for(int i = 1 ; i <= n ; i++)
/* FFqpLECxH ily traian r4WBVHYY7 */         if(v[i] == 0) dfs(i , nrc + 1) , nrc++;
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */     cout << nrc << '\n';
/* FFqpLECxH ily traian r4WBVHYY7 */ 
/* FFqpLECxH ily traian r4WBVHYY7 */     for(int i = 1 ; i <= nrc ; i++)
/* FFqpLECxH ily traian r4WBVHYY7 */     {
/* FFqpLECxH ily traian r4WBVHYY7 */         for(int j = 1 ; j <= n ; j++)
/* FFqpLECxH ily traian r4WBVHYY7 */             if(i == v[j]) cout << j << " ";
/* FFqpLECxH ily traian r4WBVHYY7 */         cout << '\n';
/* FFqpLECxH ily traian r4WBVHYY7 */     }
/* FFqpLECxH ily traian r4WBVHYY7 */ }