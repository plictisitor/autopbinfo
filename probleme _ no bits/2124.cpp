/* ahuLQ8SQO ily traian wnxxu8E26 */ #include <algorithm>
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
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ using namespace std;
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ ifstream cin("ornament.in");
/* ahuLQ8SQO ily traian wnxxu8E26 */ ofstream cout("ornament.out");
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ struct poz
/* ahuLQ8SQO ily traian wnxxu8E26 */ {
/* ahuLQ8SQO ily traian wnxxu8E26 */     int N , E , S , V;
/* ahuLQ8SQO ily traian wnxxu8E26 */ }a[20];
/* ahuLQ8SQO ily traian wnxxu8E26 */ int x[6][6] , n , m , p[20] , cer , nrsol , gata;
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ void afisare()
/* ahuLQ8SQO ily traian wnxxu8E26 */ {
/* ahuLQ8SQO ily traian wnxxu8E26 */     if(cer == 2) nrsol++;
/* ahuLQ8SQO ily traian wnxxu8E26 */     else
/* ahuLQ8SQO ily traian wnxxu8E26 */     {
/* ahuLQ8SQO ily traian wnxxu8E26 */         for(int i = 1 ; i <= m ; i++)
/* ahuLQ8SQO ily traian wnxxu8E26 */         {
/* ahuLQ8SQO ily traian wnxxu8E26 */             for(int j = 1 ; j <= m ; j++)
/* ahuLQ8SQO ily traian wnxxu8E26 */                 cout << x[i][j] << " ";
/* ahuLQ8SQO ily traian wnxxu8E26 */             cout << '\n';
/* ahuLQ8SQO ily traian wnxxu8E26 */         }
/* ahuLQ8SQO ily traian wnxxu8E26 */         gata = 1;
/* ahuLQ8SQO ily traian wnxxu8E26 */     }
/* ahuLQ8SQO ily traian wnxxu8E26 */ }
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ int verifica(int l , int c)
/* ahuLQ8SQO ily traian wnxxu8E26 */ {
/* ahuLQ8SQO ily traian wnxxu8E26 */     if(c > 1) if(a[x[l][c - 1]].E != a[x[l][c]].V) return 0;
/* ahuLQ8SQO ily traian wnxxu8E26 */     if(l > 1) if(a[x[l - 1][c]].S != a[x[l][c]].N) return 0;
/* ahuLQ8SQO ily traian wnxxu8E26 */     return 1;
/* ahuLQ8SQO ily traian wnxxu8E26 */ }
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ void back(int l , int c)
/* ahuLQ8SQO ily traian wnxxu8E26 */ {
/* ahuLQ8SQO ily traian wnxxu8E26 */     for(int i = 1 ; i <= n && !gata; i++)
/* ahuLQ8SQO ily traian wnxxu8E26 */         if(!p[i])
/* ahuLQ8SQO ily traian wnxxu8E26 */         {
/* ahuLQ8SQO ily traian wnxxu8E26 */             p[i] = 1;
/* ahuLQ8SQO ily traian wnxxu8E26 */             x[l][c] = i;
/* ahuLQ8SQO ily traian wnxxu8E26 */             if(verifica(l , c))
/* ahuLQ8SQO ily traian wnxxu8E26 */                 if(l == m && c == m) afisare();
/* ahuLQ8SQO ily traian wnxxu8E26 */                 else if(c < m) back(l , c + 1);
/* ahuLQ8SQO ily traian wnxxu8E26 */                     else back(l + 1 , 1);
/* ahuLQ8SQO ily traian wnxxu8E26 */             p[i] = 0;
/* ahuLQ8SQO ily traian wnxxu8E26 */         }
/* ahuLQ8SQO ily traian wnxxu8E26 */ }
/* ahuLQ8SQO ily traian wnxxu8E26 */ 
/* ahuLQ8SQO ily traian wnxxu8E26 */ int main()
/* ahuLQ8SQO ily traian wnxxu8E26 */ {
/* ahuLQ8SQO ily traian wnxxu8E26 */     cin >> n;
/* ahuLQ8SQO ily traian wnxxu8E26 */     m = sqrt(n);
/* ahuLQ8SQO ily traian wnxxu8E26 */     for(int i = 1 ; i <= n ; i++)
/* ahuLQ8SQO ily traian wnxxu8E26 */         cin >> a[i].N >> a[i].E >> a[i].S >> a[i].V;
/* ahuLQ8SQO ily traian wnxxu8E26 */     cin >> cer;
/* ahuLQ8SQO ily traian wnxxu8E26 */     back(1 , 1);
/* ahuLQ8SQO ily traian wnxxu8E26 */     if(cer == 2) cout << nrsol;
/* ahuLQ8SQO ily traian wnxxu8E26 */ }