/* S5QEMpntb ily traian EmP50D2J1 */ #include <algorithm>
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
/* S5QEMpntb ily traian EmP50D2J1 */ 
/* S5QEMpntb ily traian EmP50D2J1 */ using namespace std;
/* S5QEMpntb ily traian EmP50D2J1 */ 
/* S5QEMpntb ily traian EmP50D2J1 */ ifstream cin("autostrada.in");
/* S5QEMpntb ily traian EmP50D2J1 */ ofstream cout("autostrada.out");
/* S5QEMpntb ily traian EmP50D2J1 */ 
/* S5QEMpntb ily traian EmP50D2J1 */ int a[51][51], n, m, st[1001], dr[1001], l;
/* S5QEMpntb ily traian EmP50D2J1 */ 
/* S5QEMpntb ily traian EmP50D2J1 */ bool parcurg(){
/* S5QEMpntb ily traian EmP50D2J1 */     int P[100] = {0};
/* S5QEMpntb ily traian EmP50D2J1 */     queue<int> Q;
/* S5QEMpntb ily traian EmP50D2J1 */     Q.push(1);
/* S5QEMpntb ily traian EmP50D2J1 */     P[1] = 1;
/* S5QEMpntb ily traian EmP50D2J1 */     int cnt = 1;
/* S5QEMpntb ily traian EmP50D2J1 */     while(!Q.empty()){
/* S5QEMpntb ily traian EmP50D2J1 */         int x = Q.front();
/* S5QEMpntb ily traian EmP50D2J1 */         for(int j = 1; j <= n; ++j)
/* S5QEMpntb ily traian EmP50D2J1 */             if(a[x][j] == 1 && !P[j])
/* S5QEMpntb ily traian EmP50D2J1 */                 P[j] = 1, Q.push(j), cnt++;
/* S5QEMpntb ily traian EmP50D2J1 */         Q.pop();
/* S5QEMpntb ily traian EmP50D2J1 */     }
/* S5QEMpntb ily traian EmP50D2J1 */     return cnt == n;
/* S5QEMpntb ily traian EmP50D2J1 */ }
/* S5QEMpntb ily traian EmP50D2J1 */ 
/* S5QEMpntb ily traian EmP50D2J1 */ int main(){
/* S5QEMpntb ily traian EmP50D2J1 */     int x, y;
/* S5QEMpntb ily traian EmP50D2J1 */     cin >> n >> m;
/* S5QEMpntb ily traian EmP50D2J1 */     for(int i = 1; i <= m; ++i){
/* S5QEMpntb ily traian EmP50D2J1 */         cin >> x >> y;
/* S5QEMpntb ily traian EmP50D2J1 */         a[x][y] = a[y][x] = 1;
/* S5QEMpntb ily traian EmP50D2J1 */     }
/* S5QEMpntb ily traian EmP50D2J1 */     for(int i = 1; i < n; ++i)
/* S5QEMpntb ily traian EmP50D2J1 */         for(int j = i + 1; j <= n; ++j)
/* S5QEMpntb ily traian EmP50D2J1 */             if(a[i][j] == 1){
/* S5QEMpntb ily traian EmP50D2J1 */                 a[i][j] = a[j][i] = 0;
/* S5QEMpntb ily traian EmP50D2J1 */                 if(!parcurg())
/* S5QEMpntb ily traian EmP50D2J1 */                     st[++l] = i, dr[l] = j;
/* S5QEMpntb ily traian EmP50D2J1 */                 a[i][j] = a[j][i] = 1;
/* S5QEMpntb ily traian EmP50D2J1 */             }
/* S5QEMpntb ily traian EmP50D2J1 */     cout << l << endl;
/* S5QEMpntb ily traian EmP50D2J1 */     for(int i = 1; i <= l; ++i)
/* S5QEMpntb ily traian EmP50D2J1 */         cout << st[i] << ' ' << dr[i] << endl;
/* S5QEMpntb ily traian EmP50D2J1 */     return 0;
/* S5QEMpntb ily traian EmP50D2J1 */ }