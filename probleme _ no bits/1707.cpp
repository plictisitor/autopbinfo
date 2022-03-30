/* MDmRsmNnN ily traian GcUPx7Lg8 */ #include <algorithm>
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
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */ using namespace std;
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */ ifstream cin("retea.in");
/* MDmRsmNnN ily traian GcUPx7Lg8 */ ofstream cout("retea.out");
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */ int n , x , y , C[101] , m;
/* MDmRsmNnN ily traian GcUPx7Lg8 */ vector <int> G[101];
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */ void dfs(int v , int x)
/* MDmRsmNnN ily traian GcUPx7Lg8 */ {
/* MDmRsmNnN ily traian GcUPx7Lg8 */     C[v] = 1;
/* MDmRsmNnN ily traian GcUPx7Lg8 */     for(int i : G[v])
/* MDmRsmNnN ily traian GcUPx7Lg8 */         if(!C[i] && i != x) dfs(i , x);
/* MDmRsmNnN ily traian GcUPx7Lg8 */ }
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */ int main()
/* MDmRsmNnN ily traian GcUPx7Lg8 */ {
/* MDmRsmNnN ily traian GcUPx7Lg8 */     cin >> n >> m;
/* MDmRsmNnN ily traian GcUPx7Lg8 */     for(int i = 1 ; i <= m ; i++)
/* MDmRsmNnN ily traian GcUPx7Lg8 */     {
/* MDmRsmNnN ily traian GcUPx7Lg8 */         cin >> x >> y;
/* MDmRsmNnN ily traian GcUPx7Lg8 */         G[x].push_back(y);
/* MDmRsmNnN ily traian GcUPx7Lg8 */         G[y].push_back(x);
/* MDmRsmNnN ily traian GcUPx7Lg8 */     }
/* MDmRsmNnN ily traian GcUPx7Lg8 */ 
/* MDmRsmNnN ily traian GcUPx7Lg8 */     for(int i = 1 ; i <= n ; i++)
/* MDmRsmNnN ily traian GcUPx7Lg8 */     {
/* MDmRsmNnN ily traian GcUPx7Lg8 */         if(i != 1)
/* MDmRsmNnN ily traian GcUPx7Lg8 */         {
/* MDmRsmNnN ily traian GcUPx7Lg8 */             for(int j = 1 ; j <= n ; j++) C[j] = 0;
/* MDmRsmNnN ily traian GcUPx7Lg8 */             dfs(1 , i);
/* MDmRsmNnN ily traian GcUPx7Lg8 */             int ok = 0;
/* MDmRsmNnN ily traian GcUPx7Lg8 */             for(int j = 1 ; j <= n ; j++)
/* MDmRsmNnN ily traian GcUPx7Lg8 */                 if(C[j] == 0 && j != i) ok = 1;
/* MDmRsmNnN ily traian GcUPx7Lg8 */             cout << ok << " ";
/* MDmRsmNnN ily traian GcUPx7Lg8 */         }
/* MDmRsmNnN ily traian GcUPx7Lg8 */         else
/* MDmRsmNnN ily traian GcUPx7Lg8 */         {
/* MDmRsmNnN ily traian GcUPx7Lg8 */             for(int j = 1 ; j <= n ; j++) C[j] = 0;
/* MDmRsmNnN ily traian GcUPx7Lg8 */             dfs(2 , i);
/* MDmRsmNnN ily traian GcUPx7Lg8 */             int ok = 0;
/* MDmRsmNnN ily traian GcUPx7Lg8 */             for(int j = 1 ; j <= n ; j++)
/* MDmRsmNnN ily traian GcUPx7Lg8 */                 if(C[j] == 0 && j != i) ok = 1;
/* MDmRsmNnN ily traian GcUPx7Lg8 */             cout << ok << " ";
/* MDmRsmNnN ily traian GcUPx7Lg8 */         }
/* MDmRsmNnN ily traian GcUPx7Lg8 */     }
/* MDmRsmNnN ily traian GcUPx7Lg8 */ }