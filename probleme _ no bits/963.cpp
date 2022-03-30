/* zKyIsyHWq ily traian BBOwXNA13 */ #include <algorithm>
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
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ using namespace std;
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ ifstream cin("bazine.in");
/* zKyIsyHWq ily traian BBOwXNA13 */ ofstream cout("bazine.out");
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ int n , m , x , y , v[101];
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ vector<int> G[101];
/* zKyIsyHWq ily traian BBOwXNA13 */ vector<vector <int> > CC;
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ void dfs(int nod, vector<int> &C)
/* zKyIsyHWq ily traian BBOwXNA13 */ {
/* zKyIsyHWq ily traian BBOwXNA13 */     v[nod] = 1;
/* zKyIsyHWq ily traian BBOwXNA13 */     C.push_back(nod);
/* zKyIsyHWq ily traian BBOwXNA13 */     for(auto y : G[nod])
/* zKyIsyHWq ily traian BBOwXNA13 */         if(v[y] == 0) dfs(y,C);
/* zKyIsyHWq ily traian BBOwXNA13 */ }
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ int main()
/* zKyIsyHWq ily traian BBOwXNA13 */ {
/* zKyIsyHWq ily traian BBOwXNA13 */     cin >> n >> m;
/* zKyIsyHWq ily traian BBOwXNA13 */     for(int i = 1 ; i <= m ; i++)
/* zKyIsyHWq ily traian BBOwXNA13 */     {
/* zKyIsyHWq ily traian BBOwXNA13 */         cin >> x >> y;
/* zKyIsyHWq ily traian BBOwXNA13 */         G[x].push_back(y);
/* zKyIsyHWq ily traian BBOwXNA13 */         G[y].push_back(x);
/* zKyIsyHWq ily traian BBOwXNA13 */     }
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */     for(int i = 1; i <= n ; i++)
/* zKyIsyHWq ily traian BBOwXNA13 */         if(!v[i])
/* zKyIsyHWq ily traian BBOwXNA13 */         {
/* zKyIsyHWq ily traian BBOwXNA13 */             CC.push_back(vector<int>());
/* zKyIsyHWq ily traian BBOwXNA13 */             dfs(i,*(CC.end()-1));
/* zKyIsyHWq ily traian BBOwXNA13 */         }
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */     cout << CC.size();
/* zKyIsyHWq ily traian BBOwXNA13 */     return 0;
/* zKyIsyHWq ily traian BBOwXNA13 */ 
/* zKyIsyHWq ily traian BBOwXNA13 */ }