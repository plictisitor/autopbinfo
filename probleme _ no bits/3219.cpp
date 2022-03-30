/* xS91QA5Tf ily traian wlEIoXo77 */ #include <algorithm>
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
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ using namespace std;
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ ifstream cin("colina.in");
/* xS91QA5Tf ily traian wlEIoXo77 */ ofstream cout("colina.out");
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ int n, m;
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ struct bla{
/* xS91QA5Tf ily traian wlEIoXo77 */     int val, poz;
/* xS91QA5Tf ily traian wlEIoXo77 */ }a[100001];
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ bool comp(bla a, bla b){
/* xS91QA5Tf ily traian wlEIoXo77 */     if(a.val != b.val)
/* xS91QA5Tf ily traian wlEIoXo77 */         return a.val < b.val;
/* xS91QA5Tf ily traian wlEIoXo77 */     return a.poz < b.poz;
/* xS91QA5Tf ily traian wlEIoXo77 */ }
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ void CB(int x){
/* xS91QA5Tf ily traian wlEIoXo77 */     int st = 1, dr = n;
/* xS91QA5Tf ily traian wlEIoXo77 */     while(st <= dr){
/* xS91QA5Tf ily traian wlEIoXo77 */         int mij = (st + dr) / 2;
/* xS91QA5Tf ily traian wlEIoXo77 */         if(a[mij].val > x)
/* xS91QA5Tf ily traian wlEIoXo77 */             dr = mij-1;
/* xS91QA5Tf ily traian wlEIoXo77 */         else if(a[mij].val < x)
/* xS91QA5Tf ily traian wlEIoXo77 */             st = mij+1;
/* xS91QA5Tf ily traian wlEIoXo77 */         else{
/* xS91QA5Tf ily traian wlEIoXo77 */             int i = mij;
/* xS91QA5Tf ily traian wlEIoXo77 */             while(a[i].val == x)
/* xS91QA5Tf ily traian wlEIoXo77 */                 i--;
/* xS91QA5Tf ily traian wlEIoXo77 */             i++;
/* xS91QA5Tf ily traian wlEIoXo77 */             cout << "DA ";
/* xS91QA5Tf ily traian wlEIoXo77 */             while(a[i].val == x)
/* xS91QA5Tf ily traian wlEIoXo77 */                 cout << a[i].poz << ' ', i++;
/* xS91QA5Tf ily traian wlEIoXo77 */             cout << "\n";
/* xS91QA5Tf ily traian wlEIoXo77 */             return;
/* xS91QA5Tf ily traian wlEIoXo77 */         }
/* xS91QA5Tf ily traian wlEIoXo77 */     }
/* xS91QA5Tf ily traian wlEIoXo77 */     cout << "NU" << "\n";
/* xS91QA5Tf ily traian wlEIoXo77 */ }
/* xS91QA5Tf ily traian wlEIoXo77 */ 
/* xS91QA5Tf ily traian wlEIoXo77 */ int main(){
/* xS91QA5Tf ily traian wlEIoXo77 */     cin >> n >> m;
/* xS91QA5Tf ily traian wlEIoXo77 */     for(int i = 1; i <= n; ++i)
/* xS91QA5Tf ily traian wlEIoXo77 */         cin >> a[i].val, a[i].poz = i;
/* xS91QA5Tf ily traian wlEIoXo77 */     sort(a + 1, a + n + 1, comp);
/* xS91QA5Tf ily traian wlEIoXo77 */     int x;
/* xS91QA5Tf ily traian wlEIoXo77 */     for(int i = 1; i <= m; ++i){
/* xS91QA5Tf ily traian wlEIoXo77 */         cin >> x;
/* xS91QA5Tf ily traian wlEIoXo77 */         CB(x);
/* xS91QA5Tf ily traian wlEIoXo77 */     }
/* xS91QA5Tf ily traian wlEIoXo77 */     return 0;
/* xS91QA5Tf ily traian wlEIoXo77 */ }