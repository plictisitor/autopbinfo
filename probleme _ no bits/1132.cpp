/* 0rY2O2HYK ily traian LNF0uqxD1 */ #include <algorithm>
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
/* 0rY2O2HYK ily traian LNF0uqxD1 */ using namespace std;
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */ ifstream fin("defrag.in");
/* 0rY2O2HYK ily traian LNF0uqxD1 */ ofstream fout("defrag.out");
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */ int V, P, S, C;
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */ bool d[100][360];
/* 0rY2O2HYK ily traian LNF0uqxD1 */ bool pista[360];
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */ int cnt[1000], sp[1000];
/* 0rY2O2HYK ily traian LNF0uqxD1 */ int pisteLibere;
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */ int main()
/* 0rY2O2HYK ily traian LNF0uqxD1 */ {
/* 0rY2O2HYK ily traian LNF0uqxD1 */     fin >> V;
/* 0rY2O2HYK ily traian LNF0uqxD1 */     fin >> P >> S >> C;
/* 0rY2O2HYK ily traian LNF0uqxD1 */     pisteLibere = P;
/* 0rY2O2HYK ily traian LNF0uqxD1 */     int p, s;
/* 0rY2O2HYK ily traian LNF0uqxD1 */     for (int c = 0; c < C; ++c )
/* 0rY2O2HYK ily traian LNF0uqxD1 */     {
/* 0rY2O2HYK ily traian LNF0uqxD1 */         fin >> p >> s;
/* 0rY2O2HYK ily traian LNF0uqxD1 */         p--; s--;
/* 0rY2O2HYK ily traian LNF0uqxD1 */         cnt[p]++; d[p][s] = true;
/* 0rY2O2HYK ily traian LNF0uqxD1 */         if ( !pista[p] )
/* 0rY2O2HYK ily traian LNF0uqxD1 */         {
/* 0rY2O2HYK ily traian LNF0uqxD1 */             pista[p] = true;
/* 0rY2O2HYK ily traian LNF0uqxD1 */             pisteLibere--;
/* 0rY2O2HYK ily traian LNF0uqxD1 */         }
/* 0rY2O2HYK ily traian LNF0uqxD1 */     }
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */     if (V == 1)
/* 0rY2O2HYK ily traian LNF0uqxD1 */         fout << pisteLibere << endl;
/* 0rY2O2HYK ily traian LNF0uqxD1 */     else
/* 0rY2O2HYK ily traian LNF0uqxD1 */     {
/* 0rY2O2HYK ily traian LNF0uqxD1 */         int k, sum;
/* 0rY2O2HYK ily traian LNF0uqxD1 */         for (int p = 0; p < P; ++p)
/* 0rY2O2HYK ily traian LNF0uqxD1 */         {
/* 0rY2O2HYK ily traian LNF0uqxD1 */             k = cnt[p];
/* 0rY2O2HYK ily traian LNF0uqxD1 */             int maxi=0;
/* 0rY2O2HYK ily traian LNF0uqxD1 */             if ( k == 0 )
/* 0rY2O2HYK ily traian LNF0uqxD1 */             {
/* 0rY2O2HYK ily traian LNF0uqxD1 */                 fout << 0 << ' ';
/* 0rY2O2HYK ily traian LNF0uqxD1 */                 continue;
/* 0rY2O2HYK ily traian LNF0uqxD1 */             }
/* 0rY2O2HYK ily traian LNF0uqxD1 */             sum = 0;
/* 0rY2O2HYK ily traian LNF0uqxD1 */             for (int i = 0; i < k; ++i)
/* 0rY2O2HYK ily traian LNF0uqxD1 */                 sum += d[p][i];
/* 0rY2O2HYK ily traian LNF0uqxD1 */             sp[k - 1] = sum;
/* 0rY2O2HYK ily traian LNF0uqxD1 */             for (int i = k; i < S + k; ++i )
/* 0rY2O2HYK ily traian LNF0uqxD1 */             {
/* 0rY2O2HYK ily traian LNF0uqxD1 */                 sp[i % S] = sp[(i - 1)% S] + d[p][i % S] - d[p][i - k];
/* 0rY2O2HYK ily traian LNF0uqxD1 */                 if(sp[i%S]>maxi)
/* 0rY2O2HYK ily traian LNF0uqxD1 */                     maxi=sp[i%S];
/* 0rY2O2HYK ily traian LNF0uqxD1 */             }
/* 0rY2O2HYK ily traian LNF0uqxD1 */ 
/* 0rY2O2HYK ily traian LNF0uqxD1 */             fout << k - maxi << ' ';
/* 0rY2O2HYK ily traian LNF0uqxD1 */         }
/* 0rY2O2HYK ily traian LNF0uqxD1 */     }
/* 0rY2O2HYK ily traian LNF0uqxD1 */     
/* 0rY2O2HYK ily traian LNF0uqxD1 */     fin.close();
/* 0rY2O2HYK ily traian LNF0uqxD1 */     fout.close();
/* 0rY2O2HYK ily traian LNF0uqxD1 */     
/* 0rY2O2HYK ily traian LNF0uqxD1 */     return 0;
/* 0rY2O2HYK ily traian LNF0uqxD1 */ }