/* qfDl31bgu ily traian xWDOo9sS6 */ #include <algorithm>
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
/* qfDl31bgu ily traian xWDOo9sS6 */ using namespace std;
/* qfDl31bgu ily traian xWDOo9sS6 */ ifstream fin ("bipartitcomplet.in");
/* qfDl31bgu ily traian xWDOo9sS6 */ ofstream fout ("bipartitcomplet.out");
/* qfDl31bgu ily traian xWDOo9sS6 */ int a[101][101], n, m , x, y, k , v[2500];
/* qfDl31bgu ily traian xWDOo9sS6 */ int main()
/* qfDl31bgu ily traian xWDOo9sS6 */ {
/* qfDl31bgu ily traian xWDOo9sS6 */     fin >> n;
/* qfDl31bgu ily traian xWDOo9sS6 */     fin >> k;
/* qfDl31bgu ily traian xWDOo9sS6 */     for(int i = 1 ; i <= k ; ++i)
/* qfDl31bgu ily traian xWDOo9sS6 */         fin >> v[i];
/* qfDl31bgu ily traian xWDOo9sS6 */     for(int i = 1 ; i <= n ; i++)
/* qfDl31bgu ily traian xWDOo9sS6 */     {
/* qfDl31bgu ily traian xWDOo9sS6 */         for(int j = 1 ; j <= n ; ++j)
/* qfDl31bgu ily traian xWDOo9sS6 */         {
/* qfDl31bgu ily traian xWDOo9sS6 */             for(int p = 1 ; p <= k ; ++p)
/* qfDl31bgu ily traian xWDOo9sS6 */             {
/* qfDl31bgu ily traian xWDOo9sS6 */                 if(i == v[p])
/* qfDl31bgu ily traian xWDOo9sS6 */                 {
/* qfDl31bgu ily traian xWDOo9sS6 */                     if(a[i][j] == 0) a[i][j] = 1;
/* qfDl31bgu ily traian xWDOo9sS6 */                 }
/* qfDl31bgu ily traian xWDOo9sS6 */             }
/* qfDl31bgu ily traian xWDOo9sS6 */         }
/* qfDl31bgu ily traian xWDOo9sS6 */     }
/* qfDl31bgu ily traian xWDOo9sS6 */     for(int j = 1 ; j <= n ; j++)
/* qfDl31bgu ily traian xWDOo9sS6 */     {
/* qfDl31bgu ily traian xWDOo9sS6 */         for(int i = 1 ; i <= n ; ++i)
/* qfDl31bgu ily traian xWDOo9sS6 */         {
/* qfDl31bgu ily traian xWDOo9sS6 */             for(int p = 1 ; p <= k ; ++p)
/* qfDl31bgu ily traian xWDOo9sS6 */             {
/* qfDl31bgu ily traian xWDOo9sS6 */                 if(j == v[p])
/* qfDl31bgu ily traian xWDOo9sS6 */                 {
/* qfDl31bgu ily traian xWDOo9sS6 */                     if(a[i][j] == 1) a[i][j] = 0;
/* qfDl31bgu ily traian xWDOo9sS6 */                     else a[i][j] = 1;
/* qfDl31bgu ily traian xWDOo9sS6 */                 }
/* qfDl31bgu ily traian xWDOo9sS6 */             }
/* qfDl31bgu ily traian xWDOo9sS6 */         }
/* qfDl31bgu ily traian xWDOo9sS6 */     }
/* qfDl31bgu ily traian xWDOo9sS6 */     for(int i = 1 ; i <= n ; ++i)
/* qfDl31bgu ily traian xWDOo9sS6 */     {
/* qfDl31bgu ily traian xWDOo9sS6 */         for(int j= 1 ; j <= n ; ++j)
/* qfDl31bgu ily traian xWDOo9sS6 */             fout << a[i][j] << " ";
/* qfDl31bgu ily traian xWDOo9sS6 */         fout << endl;
/* qfDl31bgu ily traian xWDOo9sS6 */     }
/* qfDl31bgu ily traian xWDOo9sS6 */     return 0;
/* qfDl31bgu ily traian xWDOo9sS6 */ }