/* Yk6hrJ7R8 ily traian xzkC74pr9 */ #include <algorithm>
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
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ using namespace std;
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ ifstream cin("subarbore.in");
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ ofstream cout("subarbore.out");
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ vector <int> G[101];
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ int n  , p , x , y , k , T[102] , P[101] , rez[101] , cnt;
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ void dfs(int x)
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ {
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     P[x] = 1;
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     rez[++cnt] = x;
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     for(auto i:G[x])
/* Yk6hrJ7R8 ily traian xzkC74pr9 */         if(!P[i]) dfs(i);
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ }
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ int main()
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ {
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     cin >> n >> p;
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     for(int i = 1 ; i <= n ; i++)
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     {
/* Yk6hrJ7R8 ily traian xzkC74pr9 */         cin >> T[i];
/* Yk6hrJ7R8 ily traian xzkC74pr9 */         if(T[i] != 0)
/* Yk6hrJ7R8 ily traian xzkC74pr9 */             G[T[i]].push_back(i);
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     }
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     dfs(p);
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     sort(rez + 1 , rez + cnt + 1);
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */     for(int i = 1 ; i <= cnt ; i++)
/* Yk6hrJ7R8 ily traian xzkC74pr9 */         cout << rez[i] << " ";
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ 
/* Yk6hrJ7R8 ily traian xzkC74pr9 */ }