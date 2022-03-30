/* 2U3R438mJ ily traian IVb2lcSl3 */ #include <algorithm>
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
/* 2U3R438mJ ily traian IVb2lcSl3 */ 
/* 2U3R438mJ ily traian IVb2lcSl3 */ 
/* 2U3R438mJ ily traian IVb2lcSl3 */ using namespace std;
/* 2U3R438mJ ily traian IVb2lcSl3 */ 
/* 2U3R438mJ ily traian IVb2lcSl3 */ ifstream cin("graph.in");
/* 2U3R438mJ ily traian IVb2lcSl3 */ ofstream cout("graph.out");
/* 2U3R438mJ ily traian IVb2lcSl3 */ 
/* 2U3R438mJ ily traian IVb2lcSl3 */ vector<vector<pair<int, int>>> G(30001);
/* 2U3R438mJ ily traian IVb2lcSl3 */ int n, m, x, y, c, a[1501][1501];
/* 2U3R438mJ ily traian IVb2lcSl3 */ 
/* 2U3R438mJ ily traian IVb2lcSl3 */ void lee(int nod){
/* 2U3R438mJ ily traian IVb2lcSl3 */     int d[1501];
/* 2U3R438mJ ily traian IVb2lcSl3 */     for(int i = 1; i <= n; ++i)
/* 2U3R438mJ ily traian IVb2lcSl3 */         d[i] = 1000000001;
/* 2U3R438mJ ily traian IVb2lcSl3 */     queue<int> Q;
/* 2U3R438mJ ily traian IVb2lcSl3 */     Q.push(nod);
/* 2U3R438mJ ily traian IVb2lcSl3 */     d[nod] = 0;
/* 2U3R438mJ ily traian IVb2lcSl3 */     while(!Q.empty()){
/* 2U3R438mJ ily traian IVb2lcSl3 */         int x = Q.front();
/* 2U3R438mJ ily traian IVb2lcSl3 */         for(auto i:G[x]){
/* 2U3R438mJ ily traian IVb2lcSl3 */             if(d[i.first] > d[x] + i.second)
/* 2U3R438mJ ily traian IVb2lcSl3 */                 d[i.first] = d[x] + i.second, Q.push(i.first);
/* 2U3R438mJ ily traian IVb2lcSl3 */         }
/* 2U3R438mJ ily traian IVb2lcSl3 */         Q.pop();
/* 2U3R438mJ ily traian IVb2lcSl3 */     }
/* 2U3R438mJ ily traian IVb2lcSl3 */     for(int i = 1; i <= n; ++i)
/* 2U3R438mJ ily traian IVb2lcSl3 */         if(d[i] != 1000000001)
/* 2U3R438mJ ily traian IVb2lcSl3 */             a[nod][i] = d[i];
/* 2U3R438mJ ily traian IVb2lcSl3 */         else
/* 2U3R438mJ ily traian IVb2lcSl3 */             a[nod][i] = -1000000000;
/* 2U3R438mJ ily traian IVb2lcSl3 */ }
/* 2U3R438mJ ily traian IVb2lcSl3 */ 
/* 2U3R438mJ ily traian IVb2lcSl3 */ int main(){
/* 2U3R438mJ ily traian IVb2lcSl3 */     cin >> n >> m;
/* 2U3R438mJ ily traian IVb2lcSl3 */     for(int i = 1; i <= m; ++i){
/* 2U3R438mJ ily traian IVb2lcSl3 */         cin >> x >> y >> c;
/* 2U3R438mJ ily traian IVb2lcSl3 */         G[x].push_back(make_pair(y, c));
/* 2U3R438mJ ily traian IVb2lcSl3 */     }
/* 2U3R438mJ ily traian IVb2lcSl3 */     for(int i = 1; i <= n; ++i){
/* 2U3R438mJ ily traian IVb2lcSl3 */         lee(i);
/* 2U3R438mJ ily traian IVb2lcSl3 */     }
/* 2U3R438mJ ily traian IVb2lcSl3 */     for(int i = 1; i <= n; ++i, cout << '\n')
/* 2U3R438mJ ily traian IVb2lcSl3 */         for(int j = 1; j <= n; ++j)
/* 2U3R438mJ ily traian IVb2lcSl3 */             if(a[i][j] != -1000000000)
/* 2U3R438mJ ily traian IVb2lcSl3 */                 cout << a[i][j] << ' ';
/* 2U3R438mJ ily traian IVb2lcSl3 */             else cout << 'x' << ' ';
/* 2U3R438mJ ily traian IVb2lcSl3 */     return 0;
/* 2U3R438mJ ily traian IVb2lcSl3 */ }