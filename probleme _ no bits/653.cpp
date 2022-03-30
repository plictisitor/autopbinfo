/* kxrVP602a ily traian hCSZr46B3 */ #include <algorithm>
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
/* kxrVP602a ily traian hCSZr46B3 */ 
/* kxrVP602a ily traian hCSZr46B3 */ 
/* kxrVP602a ily traian hCSZr46B3 */ using namespace std;
/* kxrVP602a ily traian hCSZr46B3 */ 
/* kxrVP602a ily traian hCSZr46B3 */ ifstream cin("firma1.in");
/* kxrVP602a ily traian hCSZr46B3 */ ofstream cout("firma1.out");
/* kxrVP602a ily traian hCSZr46B3 */ 
/* kxrVP602a ily traian hCSZr46B3 */ int n, d[101], c[101], r, p[101];
/* kxrVP602a ily traian hCSZr46B3 */ vector<vector<int>> G(101);
/* kxrVP602a ily traian hCSZr46B3 */ queue<int> Q;
/* kxrVP602a ily traian hCSZr46B3 */ 
/* kxrVP602a ily traian hCSZr46B3 */ void lee(){
/* kxrVP602a ily traian hCSZr46B3 */     while(!Q.empty()){
/* kxrVP602a ily traian hCSZr46B3 */         int x = Q.front();
/* kxrVP602a ily traian hCSZr46B3 */         bool ok = true;
/* kxrVP602a ily traian hCSZr46B3 */         for(auto i:G[x])
/* kxrVP602a ily traian hCSZr46B3 */             if(!p[i])
/* kxrVP602a ily traian hCSZr46B3 */                 ok = false;
/* kxrVP602a ily traian hCSZr46B3 */         if(!ok){
/* kxrVP602a ily traian hCSZr46B3 */             Q.pop(), Q.push(x);
/* kxrVP602a ily traian hCSZr46B3 */             continue;
/* kxrVP602a ily traian hCSZr46B3 */         }
/* kxrVP602a ily traian hCSZr46B3 */         if(!p[x]){
/* kxrVP602a ily traian hCSZr46B3 */             int sum=0, cnt=0;
/* kxrVP602a ily traian hCSZr46B3 */             for(auto i:G[x]){
/* kxrVP602a ily traian hCSZr46B3 */                 sum += c[i];
/* kxrVP602a ily traian hCSZr46B3 */                 cnt++;
/* kxrVP602a ily traian hCSZr46B3 */             }
/* kxrVP602a ily traian hCSZr46B3 */             p[x] = 1;
/* kxrVP602a ily traian hCSZr46B3 */             if(cnt > 0){
/* kxrVP602a ily traian hCSZr46B3 */                 int s = sum / cnt;
/* kxrVP602a ily traian hCSZr46B3 */                 if(s * cnt != sum)
/* kxrVP602a ily traian hCSZr46B3 */                     s++;
/* kxrVP602a ily traian hCSZr46B3 */                 c[x] += s;
/* kxrVP602a ily traian hCSZr46B3 */             }
/* kxrVP602a ily traian hCSZr46B3 */             Q.push(d[x]);
/* kxrVP602a ily traian hCSZr46B3 */         }
/* kxrVP602a ily traian hCSZr46B3 */         Q.pop();
/* kxrVP602a ily traian hCSZr46B3 */     }
/* kxrVP602a ily traian hCSZr46B3 */     cout << c[r];
/* kxrVP602a ily traian hCSZr46B3 */ }
/* kxrVP602a ily traian hCSZr46B3 */ 
/* kxrVP602a ily traian hCSZr46B3 */ int main(){
/* kxrVP602a ily traian hCSZr46B3 */     cin >> n;
/* kxrVP602a ily traian hCSZr46B3 */     for(int i = 1; i <= n; ++i){
/* kxrVP602a ily traian hCSZr46B3 */         cin >> d[i];
/* kxrVP602a ily traian hCSZr46B3 */         if(d[i] != 0)
/* kxrVP602a ily traian hCSZr46B3 */             G[d[i]].push_back(i);
/* kxrVP602a ily traian hCSZr46B3 */         else
/* kxrVP602a ily traian hCSZr46B3 */             r = i;
/* kxrVP602a ily traian hCSZr46B3 */     }
/* kxrVP602a ily traian hCSZr46B3 */     for(int i = 1; i <= n; ++i)
/* kxrVP602a ily traian hCSZr46B3 */         cin >> c[i];
/* kxrVP602a ily traian hCSZr46B3 */     for(int i = 1; i <= n; ++i){
/* kxrVP602a ily traian hCSZr46B3 */         int cnt = 0;
/* kxrVP602a ily traian hCSZr46B3 */         for(auto j:G[i])
/* kxrVP602a ily traian hCSZr46B3 */             if(d[i] != j)
/* kxrVP602a ily traian hCSZr46B3 */                 cnt++;
/* kxrVP602a ily traian hCSZr46B3 */         if(!cnt)
/* kxrVP602a ily traian hCSZr46B3 */             Q.push(d[i]), p[i] = 1;
/* kxrVP602a ily traian hCSZr46B3 */     }
/* kxrVP602a ily traian hCSZr46B3 */     lee();
/* kxrVP602a ily traian hCSZr46B3 */     return 0;
/* kxrVP602a ily traian hCSZr46B3 */ }