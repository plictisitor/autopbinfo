/* aLsqXCmp8 ily traian 1NDvIxWnt */ #include <algorithm>
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
/* aLsqXCmp8 ily traian 1NDvIxWnt */ #define DIM 1000002
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */ using namespace std;
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */ ifstream fin("placa.in");
/* aLsqXCmp8 ily traian 1NDvIxWnt */ ofstream fout("placa.out");
/* aLsqXCmp8 ily traian 1NDvIxWnt */     
/* aLsqXCmp8 ily traian 1NDvIxWnt */ int v[DIM], a[DIM], b[DIM];
/* aLsqXCmp8 ily traian 1NDvIxWnt */ int n, m, k, x, y, i, j, sol, solc, p, u, mid;
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */ int main() 
/* aLsqXCmp8 ily traian 1NDvIxWnt */ {
/* aLsqXCmp8 ily traian 1NDvIxWnt */     fin>>n>>m>>k;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     for (i=1;i<=m;i++) 
/* aLsqXCmp8 ily traian 1NDvIxWnt */     {
/* aLsqXCmp8 ily traian 1NDvIxWnt */         fin>>x>>y;
/* aLsqXCmp8 ily traian 1NDvIxWnt */         if (x!=n)
/* aLsqXCmp8 ily traian 1NDvIxWnt */             v[i] = x+y;
/* aLsqXCmp8 ily traian 1NDvIxWnt */         else
/* aLsqXCmp8 ily traian 1NDvIxWnt */             v[i] = n;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     }
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */     a[1] = v[1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */     for (i=2;i<=m;i++)
/* aLsqXCmp8 ily traian 1NDvIxWnt */         if (a[i-1] > v[i])
/* aLsqXCmp8 ily traian 1NDvIxWnt */             a[i] = a[i-1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */         else
/* aLsqXCmp8 ily traian 1NDvIxWnt */             a[i] = v[i];
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */     b[m] = v[m];
/* aLsqXCmp8 ily traian 1NDvIxWnt */     for (i=m-1;i>=1;i--)
/* aLsqXCmp8 ily traian 1NDvIxWnt */         if (v[i] > b[i+1])
/* aLsqXCmp8 ily traian 1NDvIxWnt */             b[i] = v[i];
/* aLsqXCmp8 ily traian 1NDvIxWnt */         else
/* aLsqXCmp8 ily traian 1NDvIxWnt */             b[i] = b[i+1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */     sol = m+2;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     for (i=1,j=k;j<=m;i++,j++) {
/* aLsqXCmp8 ily traian 1NDvIxWnt */         if (a[i-1] > b[j+1])
/* aLsqXCmp8 ily traian 1NDvIxWnt */             x = a[i-1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */         else
/* aLsqXCmp8 ily traian 1NDvIxWnt */             x = b[j+1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */         if (x < sol)
/* aLsqXCmp8 ily traian 1NDvIxWnt */             sol = x;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     }
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */     fout<<sol<<"\n";
/* aLsqXCmp8 ily traian 1NDvIxWnt */     if (sol == n) {
/* aLsqXCmp8 ily traian 1NDvIxWnt */         fout<<"0\n";
/* aLsqXCmp8 ily traian 1NDvIxWnt */         return 0;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     }
/* aLsqXCmp8 ily traian 1NDvIxWnt */     p = 1;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     u = k;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     while (p<=u) {
/* aLsqXCmp8 ily traian 1NDvIxWnt */         mid = (p+u)/2;
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */         solc = m+2;
/* aLsqXCmp8 ily traian 1NDvIxWnt */         for (i=1,j=mid;j<=m;i++,j++) {
/* aLsqXCmp8 ily traian 1NDvIxWnt */             if (a[i-1] > b[j+1])
/* aLsqXCmp8 ily traian 1NDvIxWnt */                 x = a[i-1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */             else
/* aLsqXCmp8 ily traian 1NDvIxWnt */                 x = b[j+1];
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */             if (x < solc)
/* aLsqXCmp8 ily traian 1NDvIxWnt */                 solc = x;
/* aLsqXCmp8 ily traian 1NDvIxWnt */         }
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */         if (solc == sol)
/* aLsqXCmp8 ily traian 1NDvIxWnt */             u = mid-1;
/* aLsqXCmp8 ily traian 1NDvIxWnt */         else
/* aLsqXCmp8 ily traian 1NDvIxWnt */             p = mid+1;
/* aLsqXCmp8 ily traian 1NDvIxWnt */     }
/* aLsqXCmp8 ily traian 1NDvIxWnt */     fout<<p<<"\n";
/* aLsqXCmp8 ily traian 1NDvIxWnt */ 
/* aLsqXCmp8 ily traian 1NDvIxWnt */     return 0;
/* aLsqXCmp8 ily traian 1NDvIxWnt */ }