/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ #include <algorithm>
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
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ using namespace std;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ ifstream fin("cufar.in");
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ ofstream fout("cufar.out");
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ 
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ int P[200000] , np;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ bool E[1000001];
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ 
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ void ciur(bool E[] , int n)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     //ciurul lui Eratostene
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     for(int i = 2 ; i <= n ; i++) E[i] = 1;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     for(int i = 2 ; i * i <= n ; i++)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         if(E[i] == 1)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */             for(int j = i * i ; j <= n ; j = j + i)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */                 E[j] = 0;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ 
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ void prime(int n , int P[], int &np)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     //numerele prime pana la n
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     np = 0;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     for(int i = 2 ; i <= n ; i++)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         if(E[i] == 1) P[++np] = i;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ 
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ int  descnk(int n, int k)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     //al k-lea div prim al lui n (fara D)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     int d = 1 , l = 0;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     while(n > 1)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         if(n % P[d] == 0)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */             l++;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */             if(l == k) return P[d];
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */             while(n % P[d] == 0) n /= P[d];
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         else d++;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         if(n > 1 && P[d] * P[d] > n)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */             return n;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     return 0;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ 
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ int main()
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     ciur(E,1000001);
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     prime(1000001,P,np);
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     int n , p , x , k;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     fin >> p >> n;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     if(p == 1)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         fin >> x >> k;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         fout << descnk(x,k);
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     else
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         unsigned long long  s = 0;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         for(int i = 1 ; i <= n ; i++)
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */            {
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */                fin >> x >> k;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */                s += descnk(x,k);
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */            }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         fout << s;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */         }
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */     return 0;
/* PZ4PP3Vd4 ily traian 2qzaVIcr7 */ }