/* prwB9xLwi ily traian hX1YUIcC8 */ #include <algorithm>
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
/* prwB9xLwi ily traian hX1YUIcC8 */ 
/* prwB9xLwi ily traian hX1YUIcC8 */ using namespace std;
/* prwB9xLwi ily traian hX1YUIcC8 */ 
/* prwB9xLwi ily traian hX1YUIcC8 */ ifstream cin("Ohoo.in");
/* prwB9xLwi ily traian hX1YUIcC8 */ ofstream cout("Ohoo.out");
/* prwB9xLwi ily traian hX1YUIcC8 */ 
/* prwB9xLwi ily traian hX1YUIcC8 */ int n, m, rez;
/* prwB9xLwi ily traian hX1YUIcC8 */ vector<vector<pair<int, int>>> G(100001);
/* prwB9xLwi ily traian hX1YUIcC8 */ queue<int> Q;
/* prwB9xLwi ily traian hX1YUIcC8 */ 
/* prwB9xLwi ily traian hX1YUIcC8 */ bool potajung(int k){
/* prwB9xLwi ily traian hX1YUIcC8 */     int P[100001] = {0};
/* prwB9xLwi ily traian hX1YUIcC8 */     P[1] = 1;
/* prwB9xLwi ily traian hX1YUIcC8 */     Q.push(1);
/* prwB9xLwi ily traian hX1YUIcC8 */     while(!Q.empty()){
/* prwB9xLwi ily traian hX1YUIcC8 */         int x = Q.front();
/* prwB9xLwi ily traian hX1YUIcC8 */         for(auto i:G[x])
/* prwB9xLwi ily traian hX1YUIcC8 */             if(!P[i.first] && i.second <= k)
/* prwB9xLwi ily traian hX1YUIcC8 */                 P[i.first] = 1, Q.push(i.first);
/* prwB9xLwi ily traian hX1YUIcC8 */         Q.pop();
/* prwB9xLwi ily traian hX1YUIcC8 */     }
/* prwB9xLwi ily traian hX1YUIcC8 */     return P[n] == 1;
/* prwB9xLwi ily traian hX1YUIcC8 */ }
/* prwB9xLwi ily traian hX1YUIcC8 */ 
/* prwB9xLwi ily traian hX1YUIcC8 */ void CB(){
/* prwB9xLwi ily traian hX1YUIcC8 */     int st = 0, dr = 1000000;
/* prwB9xLwi ily traian hX1YUIcC8 */     int mij = 0;
/* prwB9xLwi ily traian hX1YUIcC8 */     while(st <= dr){
/* prwB9xLwi ily traian hX1YUIcC8 */         mij = (st + dr) / 2;
/* prwB9xLwi ily traian hX1YUIcC8 */         if(potajung(mij)){
/* prwB9xLwi ily traian hX1YUIcC8 */             rez = mij;
/* prwB9xLwi ily traian hX1YUIcC8 */             dr = mij - 1;
/* prwB9xLwi ily traian hX1YUIcC8 */         }
/* prwB9xLwi ily traian hX1YUIcC8 */         else
/* prwB9xLwi ily traian hX1YUIcC8 */             st = mij + 1;
/* prwB9xLwi ily traian hX1YUIcC8 */     }
/* prwB9xLwi ily traian hX1YUIcC8 */     if(potajung(dr))
/* prwB9xLwi ily traian hX1YUIcC8 */         rez = dr;
/* prwB9xLwi ily traian hX1YUIcC8 */ }
/* prwB9xLwi ily traian hX1YUIcC8 */ 
/* prwB9xLwi ily traian hX1YUIcC8 */ int main(){
/* prwB9xLwi ily traian hX1YUIcC8 */     cin >> n >> m;
/* prwB9xLwi ily traian hX1YUIcC8 */     for(int i = 1; i <= m; ++i){
/* prwB9xLwi ily traian hX1YUIcC8 */         int x, y, c;
/* prwB9xLwi ily traian hX1YUIcC8 */         cin >> x >> y >> c;
/* prwB9xLwi ily traian hX1YUIcC8 */         G[x].push_back({y, c});
/* prwB9xLwi ily traian hX1YUIcC8 */         G[y].push_back({x, c});
/* prwB9xLwi ily traian hX1YUIcC8 */     }
/* prwB9xLwi ily traian hX1YUIcC8 */     CB();
/* prwB9xLwi ily traian hX1YUIcC8 */     cout << rez;
/* prwB9xLwi ily traian hX1YUIcC8 */     return 0;
/* prwB9xLwi ily traian hX1YUIcC8 */ }