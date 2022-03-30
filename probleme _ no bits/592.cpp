/* tx0vgMDvr ily traian 70A52WGG7 */ #include <algorithm>
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
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ using namespace std;
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ ifstream cin("kruskal.in");
/* tx0vgMDvr ily traian 70A52WGG7 */ ofstream cout("kruskal.out");
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ int n , m , x , y , w , T[1001] , rez , cnt;
/* tx0vgMDvr ily traian 70A52WGG7 */ struct poz
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     int i , j , c;
/* tx0vgMDvr ily traian 70A52WGG7 */ }M[1001];
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ poz A[1001];
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ int leaga(int a , int b)
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     T[a] = T[b];
/* tx0vgMDvr ily traian 70A52WGG7 */ }
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ int radacina(int a)
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     if(a == T[a]) return a;
/* tx0vgMDvr ily traian 70A52WGG7 */     else return T[a] = radacina(T[a]);
/* tx0vgMDvr ily traian 70A52WGG7 */ }
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ void kruskal()
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     int r1 , r2;
/* tx0vgMDvr ily traian 70A52WGG7 */     for(int i = 1 ; i <= m ; i++)
/* tx0vgMDvr ily traian 70A52WGG7 */     {
/* tx0vgMDvr ily traian 70A52WGG7 */         r1 = radacina(M[i].i);
/* tx0vgMDvr ily traian 70A52WGG7 */         r2 = radacina(M[i].j);
/* tx0vgMDvr ily traian 70A52WGG7 */         if(r1 != r2)
/* tx0vgMDvr ily traian 70A52WGG7 */         {
/* tx0vgMDvr ily traian 70A52WGG7 */             rez += M[i].c;
/* tx0vgMDvr ily traian 70A52WGG7 */             A[++cnt] = M[i];
/* tx0vgMDvr ily traian 70A52WGG7 */             leaga(r1 , r2);
/* tx0vgMDvr ily traian 70A52WGG7 */         }
/* tx0vgMDvr ily traian 70A52WGG7 */     }
/* tx0vgMDvr ily traian 70A52WGG7 */ }
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ int comp(poz a , poz b)
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     return a.c < b.c;
/* tx0vgMDvr ily traian 70A52WGG7 */ }
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ void init()
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     for(int i = 1 ; i <= n ; i++)
/* tx0vgMDvr ily traian 70A52WGG7 */         T[i] = i;
/* tx0vgMDvr ily traian 70A52WGG7 */ }
/* tx0vgMDvr ily traian 70A52WGG7 */ 
/* tx0vgMDvr ily traian 70A52WGG7 */ int main()
/* tx0vgMDvr ily traian 70A52WGG7 */ {
/* tx0vgMDvr ily traian 70A52WGG7 */     cin >> n >> m;
/* tx0vgMDvr ily traian 70A52WGG7 */     for(int i = 1 ; i <= m ; i++)
/* tx0vgMDvr ily traian 70A52WGG7 */     {
/* tx0vgMDvr ily traian 70A52WGG7 */         cin >> x >> y >> w;
/* tx0vgMDvr ily traian 70A52WGG7 */         M[i].i = x , M[i].j = y , M[i].c = w;
/* tx0vgMDvr ily traian 70A52WGG7 */     }
/* tx0vgMDvr ily traian 70A52WGG7 */     sort(M + 1 , M + m + 1 , comp);
/* tx0vgMDvr ily traian 70A52WGG7 */     init();
/* tx0vgMDvr ily traian 70A52WGG7 */     kruskal();
/* tx0vgMDvr ily traian 70A52WGG7 */     cout << rez << '\n';
/* tx0vgMDvr ily traian 70A52WGG7 */     for(int i = 1 ; i < n ; i++)
/* tx0vgMDvr ily traian 70A52WGG7 */         cout << A[i].i << " " << A[i].j << '\n';
/* tx0vgMDvr ily traian 70A52WGG7 */ }