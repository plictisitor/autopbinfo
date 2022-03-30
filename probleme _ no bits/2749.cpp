/* HN7V7Lidv ily traian ZA5BPbki2 */ #include <algorithm>
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
/* HN7V7Lidv ily traian ZA5BPbki2 */ 
/* HN7V7Lidv ily traian ZA5BPbki2 */ using namespace std;
/* HN7V7Lidv ily traian ZA5BPbki2 */ 
/* HN7V7Lidv ily traian ZA5BPbki2 */ 
/* HN7V7Lidv ily traian ZA5BPbki2 */ vector <int> G[100001];
/* HN7V7Lidv ily traian ZA5BPbki2 */ int n  , p , x , y , k , T[100002] , P[100001];
/* HN7V7Lidv ily traian ZA5BPbki2 */ 
/* HN7V7Lidv ily traian ZA5BPbki2 */ void dfs(int x)
/* HN7V7Lidv ily traian ZA5BPbki2 */ {
/* HN7V7Lidv ily traian ZA5BPbki2 */     P[x] = 1;
/* HN7V7Lidv ily traian ZA5BPbki2 */     for(auto i:G[x])
/* HN7V7Lidv ily traian ZA5BPbki2 */         if(!P[i]) dfs(i);
/* HN7V7Lidv ily traian ZA5BPbki2 */ }
/* HN7V7Lidv ily traian ZA5BPbki2 */ 
/* HN7V7Lidv ily traian ZA5BPbki2 */ int main()
/* HN7V7Lidv ily traian ZA5BPbki2 */ {
/* HN7V7Lidv ily traian ZA5BPbki2 */     cin >> n;
/* HN7V7Lidv ily traian ZA5BPbki2 */     for(int i = 1 ; i <= n ; i++)
/* HN7V7Lidv ily traian ZA5BPbki2 */     {
/* HN7V7Lidv ily traian ZA5BPbki2 */         cin >> T[i];
/* HN7V7Lidv ily traian ZA5BPbki2 */         if(T[i] != 0)
/* HN7V7Lidv ily traian ZA5BPbki2 */         {
/* HN7V7Lidv ily traian ZA5BPbki2 */             G[T[i]].push_back(i);
/* HN7V7Lidv ily traian ZA5BPbki2 */             G[i].push_back(T[i]);
/* HN7V7Lidv ily traian ZA5BPbki2 */         }
/* HN7V7Lidv ily traian ZA5BPbki2 */         if(T[i] == 0) p = i;
/* HN7V7Lidv ily traian ZA5BPbki2 */     }
/* HN7V7Lidv ily traian ZA5BPbki2 */     dfs(p);
/* HN7V7Lidv ily traian ZA5BPbki2 */     int ok = 0;
/* HN7V7Lidv ily traian ZA5BPbki2 */     for(int i = 1 ; i <= n ; i++)
/* HN7V7Lidv ily traian ZA5BPbki2 */         if(!P[i]) ok++;
/* HN7V7Lidv ily traian ZA5BPbki2 */ 
/* HN7V7Lidv ily traian ZA5BPbki2 */     if(ok == 0 && p != 0) cout << "DA";
/* HN7V7Lidv ily traian ZA5BPbki2 */     else cout << "NU";
/* HN7V7Lidv ily traian ZA5BPbki2 */ }