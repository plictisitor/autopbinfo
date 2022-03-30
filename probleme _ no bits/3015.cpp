/* eEyF3Hz26 ily traian 0HVFdmG28 */ #include <algorithm>
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
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ using namespace std;
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ ifstream cin("fibointerval.in");
/* eEyF3Hz26 ily traian 0HVFdmG28 */ ofstream cout("fibointerval.out");
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ struct poz
/* eEyF3Hz26 ily traian 0HVFdmG28 */ {
/* eEyF3Hz26 ily traian 0HVFdmG28 */     int n;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     char C[1001];
/* eEyF3Hz26 ily traian 0HVFdmG28 */ }F[1005];
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ int n , k , a , b;
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ poz aduna(poz a , poz b)
/* eEyF3Hz26 ily traian 0HVFdmG28 */ {
/* eEyF3Hz26 ily traian 0HVFdmG28 */     poz s = {0 , {0}};
/* eEyF3Hz26 ily traian 0HVFdmG28 */     s.n = a.n;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     int t = 0;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     for(int i = 1 ; i <= a.n ; i++)
/* eEyF3Hz26 ily traian 0HVFdmG28 */     {
/* eEyF3Hz26 ily traian 0HVFdmG28 */         int c = a.C[i] + b.C[i] + t;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         s.C[i] = c % 10;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         t = c / 10;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     }
/* eEyF3Hz26 ily traian 0HVFdmG28 */     if(t > 0)
/* eEyF3Hz26 ily traian 0HVFdmG28 */     {
/* eEyF3Hz26 ily traian 0HVFdmG28 */         s.n++;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         s.C[s.n] = t;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     }
/* eEyF3Hz26 ily traian 0HVFdmG28 */     return s;
/* eEyF3Hz26 ily traian 0HVFdmG28 */ }
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ poz scade(poz a , poz b)
/* eEyF3Hz26 ily traian 0HVFdmG28 */ {
/* eEyF3Hz26 ily traian 0HVFdmG28 */     int t = 0;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     for(int i = 1 ; i <= a.n ; i++)
/* eEyF3Hz26 ily traian 0HVFdmG28 */     {
/* eEyF3Hz26 ily traian 0HVFdmG28 */         int c = a.C[i] - b.C[i] + t;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         if(c < 0)
/* eEyF3Hz26 ily traian 0HVFdmG28 */         {
/* eEyF3Hz26 ily traian 0HVFdmG28 */             a.C[i] = 10 + c;
/* eEyF3Hz26 ily traian 0HVFdmG28 */             t = -1;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         }
/* eEyF3Hz26 ily traian 0HVFdmG28 */         else
/* eEyF3Hz26 ily traian 0HVFdmG28 */         {
/* eEyF3Hz26 ily traian 0HVFdmG28 */             a.C[i] = c;
/* eEyF3Hz26 ily traian 0HVFdmG28 */             t = 0;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         }
/* eEyF3Hz26 ily traian 0HVFdmG28 */     }
/* eEyF3Hz26 ily traian 0HVFdmG28 */     while(a.C[a.n] == 0) a.n--;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     return a;
/* eEyF3Hz26 ily traian 0HVFdmG28 */ }
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ void afisare(poz a)
/* eEyF3Hz26 ily traian 0HVFdmG28 */ {
/* eEyF3Hz26 ily traian 0HVFdmG28 */     for(int i = a.n ; i >= 1 ; i--)
/* eEyF3Hz26 ily traian 0HVFdmG28 */         cout << (int)a.C[i];
/* eEyF3Hz26 ily traian 0HVFdmG28 */ }
/* eEyF3Hz26 ily traian 0HVFdmG28 */ 
/* eEyF3Hz26 ily traian 0HVFdmG28 */ int main()
/* eEyF3Hz26 ily traian 0HVFdmG28 */ {
/* eEyF3Hz26 ily traian 0HVFdmG28 */     cin >> k >> n;
/* eEyF3Hz26 ily traian 0HVFdmG28 */     F[1] = {1 , {0 , 1}};
/* eEyF3Hz26 ily traian 0HVFdmG28 */     F[2] = {1 , {0 , 1}};
/* eEyF3Hz26 ily traian 0HVFdmG28 */     for(int i = 3 ; i <= k +2; i++)
/* eEyF3Hz26 ily traian 0HVFdmG28 */         F[i] = aduna(F[i - 1] , F[i - 2]);
/* eEyF3Hz26 ily traian 0HVFdmG28 */     for(int i = 1 ; i <= n ; i++)
/* eEyF3Hz26 ily traian 0HVFdmG28 */     {
/* eEyF3Hz26 ily traian 0HVFdmG28 */         cin >> a >> b;
/* eEyF3Hz26 ily traian 0HVFdmG28 */         afisare(F[a]);
/* eEyF3Hz26 ily traian 0HVFdmG28 */         cout << " ";
/* eEyF3Hz26 ily traian 0HVFdmG28 */         afisare(F[b]);
/* eEyF3Hz26 ily traian 0HVFdmG28 */         cout << " ";
/* eEyF3Hz26 ily traian 0HVFdmG28 */         afisare(scade(F[b + 2] , F[a + 1]));
/* eEyF3Hz26 ily traian 0HVFdmG28 */         cout << '\n';
/* eEyF3Hz26 ily traian 0HVFdmG28 */     }
/* eEyF3Hz26 ily traian 0HVFdmG28 */ }