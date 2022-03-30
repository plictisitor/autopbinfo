/* qUnWNRRR3 ily traian z4XbdrYi9 */ #include <algorithm>
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
/* qUnWNRRR3 ily traian z4XbdrYi9 */ using namespace std;
/* qUnWNRRR3 ily traian z4XbdrYi9 */ 
/* qUnWNRRR3 ily traian z4XbdrYi9 */ ifstream cin("seti.in");
/* qUnWNRRR3 ily traian z4XbdrYi9 */ ofstream cout("seti.out");
/* qUnWNRRR3 ily traian z4XbdrYi9 */ 
/* qUnWNRRR3 ily traian z4XbdrYi9 */ int f[10][10][10][10];
/* qUnWNRRR3 ily traian z4XbdrYi9 */ char s[11];
/* qUnWNRRR3 ily traian z4XbdrYi9 */ 
/* qUnWNRRR3 ily traian z4XbdrYi9 */ int poz(char ch)
/* qUnWNRRR3 ily traian z4XbdrYi9 */ {
/* qUnWNRRR3 ily traian z4XbdrYi9 */     int i = 0;
/* qUnWNRRR3 ily traian z4XbdrYi9 */     while(s[i]!='\0')
/* qUnWNRRR3 ily traian z4XbdrYi9 */     {
/* qUnWNRRR3 ily traian z4XbdrYi9 */         if(s[i]==ch)
/* qUnWNRRR3 ily traian z4XbdrYi9 */             return i;
/* qUnWNRRR3 ily traian z4XbdrYi9 */         i++;
/* qUnWNRRR3 ily traian z4XbdrYi9 */     }
/* qUnWNRRR3 ily traian z4XbdrYi9 */ }
/* qUnWNRRR3 ily traian z4XbdrYi9 */ 
/* qUnWNRRR3 ily traian z4XbdrYi9 */ int main()
/* qUnWNRRR3 ily traian z4XbdrYi9 */ {
/* qUnWNRRR3 ily traian z4XbdrYi9 */     cin >> s;
/* qUnWNRRR3 ily traian z4XbdrYi9 */     char a , b , c , d;
/* qUnWNRRR3 ily traian z4XbdrYi9 */     while(cin >> a)
/* qUnWNRRR3 ily traian z4XbdrYi9 */     {
/* qUnWNRRR3 ily traian z4XbdrYi9 */         cin >> b >> c >> d;
/* qUnWNRRR3 ily traian z4XbdrYi9 */         f[poz(a)][poz(b)][poz(c)][poz(d)]++;
/* qUnWNRRR3 ily traian z4XbdrYi9 */     }
/* qUnWNRRR3 ily traian z4XbdrYi9 */     for(int i = 0 ; i <= 9 ; ++i)
/* qUnWNRRR3 ily traian z4XbdrYi9 */         for(int j = 0 ; j <= 9 ; ++j)
/* qUnWNRRR3 ily traian z4XbdrYi9 */             for(int k = 0 ; k <= 9 ; ++k)
/* qUnWNRRR3 ily traian z4XbdrYi9 */                 for(int t = 0 ; t <= 9 ; ++t)
/* qUnWNRRR3 ily traian z4XbdrYi9 */                     if(f[i][j][k][t])
/* qUnWNRRR3 ily traian z4XbdrYi9 */                         for(int g = 0 ; g < f[i][j][k][t] ; ++g)
/* qUnWNRRR3 ily traian z4XbdrYi9 */                             cout << s[i] << s[j] << s[k] << s[t] << '\n';
/* qUnWNRRR3 ily traian z4XbdrYi9 */     return 0;
/* qUnWNRRR3 ily traian z4XbdrYi9 */ }