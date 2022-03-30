/* 7e7aR5bIH ily traian HHO24z4c2 */ #include <algorithm>
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
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ using namespace std;
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ vector <int> G[102];
/* 7e7aR5bIH ily traian HHO24z4c2 */ vector <int> H[102];
/* 7e7aR5bIH ily traian HHO24z4c2 */ int n , m , x , y , S[101] , D[101] , c , cnt;
/* 7e7aR5bIH ily traian HHO24z4c2 */ struct poz
/* 7e7aR5bIH ily traian HHO24z4c2 */ {
/* 7e7aR5bIH ily traian HHO24z4c2 */     int i , j;
/* 7e7aR5bIH ily traian HHO24z4c2 */ }M[501];
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ void dfs_succ(int v , int c)
/* 7e7aR5bIH ily traian HHO24z4c2 */ {
/* 7e7aR5bIH ily traian HHO24z4c2 */     S[v] = c;
/* 7e7aR5bIH ily traian HHO24z4c2 */     for(int i : G[v])
/* 7e7aR5bIH ily traian HHO24z4c2 */         if(!S[i]) dfs_succ(i , c);
/* 7e7aR5bIH ily traian HHO24z4c2 */ }
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ void dfs_pred(int v , int c)
/* 7e7aR5bIH ily traian HHO24z4c2 */ {
/* 7e7aR5bIH ily traian HHO24z4c2 */     D[v] = c;
/* 7e7aR5bIH ily traian HHO24z4c2 */     for(int i : H[v])
/* 7e7aR5bIH ily traian HHO24z4c2 */         if(!D[i]) dfs_pred(i , c);
/* 7e7aR5bIH ily traian HHO24z4c2 */ }
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ int comp(poz a , poz b)
/* 7e7aR5bIH ily traian HHO24z4c2 */ {
/* 7e7aR5bIH ily traian HHO24z4c2 */     if(a.i < b.i) return 1;
/* 7e7aR5bIH ily traian HHO24z4c2 */     else if(a.i == b.i && a.j < b.j) return 1;
/* 7e7aR5bIH ily traian HHO24z4c2 */     else return 0;
/* 7e7aR5bIH ily traian HHO24z4c2 */ }
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ int main()
/* 7e7aR5bIH ily traian HHO24z4c2 */ {
/* 7e7aR5bIH ily traian HHO24z4c2 */     cin >> n >> m;
/* 7e7aR5bIH ily traian HHO24z4c2 */     for(int i = 1 ; i <= m ; i++)
/* 7e7aR5bIH ily traian HHO24z4c2 */     {
/* 7e7aR5bIH ily traian HHO24z4c2 */         cin >> x >> y;
/* 7e7aR5bIH ily traian HHO24z4c2 */         G[x].push_back(y);
/* 7e7aR5bIH ily traian HHO24z4c2 */         H[y].push_back(x);
/* 7e7aR5bIH ily traian HHO24z4c2 */         M[i].i = x , M[i].j = y;
/* 7e7aR5bIH ily traian HHO24z4c2 */     }
/* 7e7aR5bIH ily traian HHO24z4c2 */     sort(M + 1 , M + m + 1 , comp);
/* 7e7aR5bIH ily traian HHO24z4c2 */     for(int i = 1 ; i <= n ; i++)
/* 7e7aR5bIH ily traian HHO24z4c2 */         if(!S[i])
/* 7e7aR5bIH ily traian HHO24z4c2 */         {
/* 7e7aR5bIH ily traian HHO24z4c2 */             c++;
/* 7e7aR5bIH ily traian HHO24z4c2 */             dfs_succ(i , c);
/* 7e7aR5bIH ily traian HHO24z4c2 */             dfs_pred(i , c);
/* 7e7aR5bIH ily traian HHO24z4c2 */             for(int i = 1 ; i <= n ; i++)
/* 7e7aR5bIH ily traian HHO24z4c2 */                 if(S[i] != D[i]) S[i] = D[i] = 0;
/* 7e7aR5bIH ily traian HHO24z4c2 */         }
/* 7e7aR5bIH ily traian HHO24z4c2 */     for(int i = 1 ; i <= m ; i++)
/* 7e7aR5bIH ily traian HHO24z4c2 */         if(S[M[i].i] != S[M[i].j]) cnt++;
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */     cout << cnt << '\n';
/* 7e7aR5bIH ily traian HHO24z4c2 */     for(int i = 1 ; i <= m ; i++)
/* 7e7aR5bIH ily traian HHO24z4c2 */         if(S[M[i].i] != S[M[i].j]) cout << M[i].i << " " << M[i].j << '\n';
/* 7e7aR5bIH ily traian HHO24z4c2 */     
/* 7e7aR5bIH ily traian HHO24z4c2 */     return 0;
/* 7e7aR5bIH ily traian HHO24z4c2 */ 
/* 7e7aR5bIH ily traian HHO24z4c2 */ }