/* xiDMv3GhS ily traian Mcm4EqIC8 */ #include <algorithm>
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
/* xiDMv3GhS ily traian Mcm4EqIC8 */ 
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ using namespace std;
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ ifstream fin("divizori4.in");
/* xiDMv3GhS ily traian Mcm4EqIC8 */ ofstream fout("divizori4.out");
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ int P[200000],np;
/* xiDMv3GhS ily traian Mcm4EqIC8 */ bool E[1000001];
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ void ciur(bool E[], int n)
/* xiDMv3GhS ily traian Mcm4EqIC8 */ {//ciurul lui Eratostene
/* xiDMv3GhS ily traian Mcm4EqIC8 */     for(int i=2;i<=n;i++) E[i]=1;
/* xiDMv3GhS ily traian Mcm4EqIC8 */     for(int i=2;i*i<=n;i++)
/* xiDMv3GhS ily traian Mcm4EqIC8 */         if(E[i]==1)
/* xiDMv3GhS ily traian Mcm4EqIC8 */             for(int j=i*i;j<=n;j=j+i)
/* xiDMv3GhS ily traian Mcm4EqIC8 */                 E[j]=0;
/* xiDMv3GhS ily traian Mcm4EqIC8 */ }
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ void prime(int n, int P[], int &np)
/* xiDMv3GhS ily traian Mcm4EqIC8 */ {//numerele prime pana la n
/* xiDMv3GhS ily traian Mcm4EqIC8 */     np=0;
/* xiDMv3GhS ily traian Mcm4EqIC8 */     for(int i=2;i<=n;i++)
/* xiDMv3GhS ily traian Mcm4EqIC8 */         if(E[i]==1) P[++np]=i;
/* xiDMv3GhS ily traian Mcm4EqIC8 */ }
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ int nrdiv(int n)
/* xiDMv3GhS ily traian Mcm4EqIC8 */ {
/* xiDMv3GhS ily traian Mcm4EqIC8 */     int d=1,c=1;
/* xiDMv3GhS ily traian Mcm4EqIC8 */     while(n>1)
/* xiDMv3GhS ily traian Mcm4EqIC8 */     {
/* xiDMv3GhS ily traian Mcm4EqIC8 */         if(n%P[d]==0)
/* xiDMv3GhS ily traian Mcm4EqIC8 */         {
/* xiDMv3GhS ily traian Mcm4EqIC8 */             int p = 0;
/* xiDMv3GhS ily traian Mcm4EqIC8 */             while(n%P[d]==0) n=n/P[d], ++p;
/* xiDMv3GhS ily traian Mcm4EqIC8 */             c*=(p+1);
/* xiDMv3GhS ily traian Mcm4EqIC8 */         }
/* xiDMv3GhS ily traian Mcm4EqIC8 */         else ++d;
/* xiDMv3GhS ily traian Mcm4EqIC8 */         if(n>1 && P[d]*P[d]>n)
/* xiDMv3GhS ily traian Mcm4EqIC8 */         {
/* xiDMv3GhS ily traian Mcm4EqIC8 */             return 2*c;
/* xiDMv3GhS ily traian Mcm4EqIC8 */         }
/* xiDMv3GhS ily traian Mcm4EqIC8 */     }
/* xiDMv3GhS ily traian Mcm4EqIC8 */     return c;
/* xiDMv3GhS ily traian Mcm4EqIC8 */ }
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ int v[50001];
/* xiDMv3GhS ily traian Mcm4EqIC8 */  
/* xiDMv3GhS ily traian Mcm4EqIC8 */ int main()
/* xiDMv3GhS ily traian Mcm4EqIC8 */ {
/* xiDMv3GhS ily traian Mcm4EqIC8 */     ios::sync_with_stdio(false);
/* xiDMv3GhS ily traian Mcm4EqIC8 */     ciur(E,1000001);
/* xiDMv3GhS ily traian Mcm4EqIC8 */     prime(1000001,P,np);
/* xiDMv3GhS ily traian Mcm4EqIC8 */     int n, c, p;
/* xiDMv3GhS ily traian Mcm4EqIC8 */     fin>>n>>c;
/* xiDMv3GhS ily traian Mcm4EqIC8 */     for(int i=1;i<=n;++i)
/* xiDMv3GhS ily traian Mcm4EqIC8 */         fin>>v[i];
/* xiDMv3GhS ily traian Mcm4EqIC8 */     fin>>p;
/* xiDMv3GhS ily traian Mcm4EqIC8 */     if(c==1) {fout<<nrdiv(v[p]); return 0;}
/* xiDMv3GhS ily traian Mcm4EqIC8 */     else{
/* xiDMv3GhS ily traian Mcm4EqIC8 */         int nd = nrdiv(v[p]);
/* xiDMv3GhS ily traian Mcm4EqIC8 */         sort(v+1, v+n+1);
/* xiDMv3GhS ily traian Mcm4EqIC8 */         for(int i=n;i>0;--i)
/* xiDMv3GhS ily traian Mcm4EqIC8 */             if(nrdiv(v[i]) == nd) fout<<v[i]<<' ';
/* xiDMv3GhS ily traian Mcm4EqIC8 */     }
/* xiDMv3GhS ily traian Mcm4EqIC8 */     return 0;
/* xiDMv3GhS ily traian Mcm4EqIC8 */ }