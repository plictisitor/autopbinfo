/* tRjoMyZdv ily traian SXFXJyuc4 */ #include <algorithm>
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
/* tRjoMyZdv ily traian SXFXJyuc4 */ 
/* tRjoMyZdv ily traian SXFXJyuc4 */ using namespace std;
/* tRjoMyZdv ily traian SXFXJyuc4 */ 
/* tRjoMyZdv ily traian SXFXJyuc4 */ ifstream cin("dvorak.in");
/* tRjoMyZdv ily traian SXFXJyuc4 */ ofstream cout("dvorak.out");
/* tRjoMyZdv ily traian SXFXJyuc4 */ 
/* tRjoMyZdv ily traian SXFXJyuc4 */ bool verif(int i , char s[501] , char sir[501])
/* tRjoMyZdv ily traian SXFXJyuc4 */ {
/* tRjoMyZdv ily traian SXFXJyuc4 */     for(int j = 0 ; j < strlen(s) && sir[i] ; ++j , ++i)
/* tRjoMyZdv ily traian SXFXJyuc4 */         if(s[j]!=sir[i])
/* tRjoMyZdv ily traian SXFXJyuc4 */             return 0;
/* tRjoMyZdv ily traian SXFXJyuc4 */     return 1;
/* tRjoMyZdv ily traian SXFXJyuc4 */ }
/* tRjoMyZdv ily traian SXFXJyuc4 */ 
/* tRjoMyZdv ily traian SXFXJyuc4 */ bool inclus(char s[501] , char sir[501])
/* tRjoMyZdv ily traian SXFXJyuc4 */ {
/* tRjoMyZdv ily traian SXFXJyuc4 */     if(strlen(s) > strlen(sir))
/* tRjoMyZdv ily traian SXFXJyuc4 */         return 0;
/* tRjoMyZdv ily traian SXFXJyuc4 */     bool ok = false;
/* tRjoMyZdv ily traian SXFXJyuc4 */     for(int i = 0 ; i <= strlen(sir)-strlen(s) ; ++i)
/* tRjoMyZdv ily traian SXFXJyuc4 */         if(verif(i , s , sir))
/* tRjoMyZdv ily traian SXFXJyuc4 */             ok=true;
/* tRjoMyZdv ily traian SXFXJyuc4 */     return ok;
/* tRjoMyZdv ily traian SXFXJyuc4 */ }
/* tRjoMyZdv ily traian SXFXJyuc4 */ 
/* tRjoMyZdv ily traian SXFXJyuc4 */ int main()
/* tRjoMyZdv ily traian SXFXJyuc4 */ {
/* tRjoMyZdv ily traian SXFXJyuc4 */     int q;
/* tRjoMyZdv ily traian SXFXJyuc4 */     cin >> q;
/* tRjoMyZdv ily traian SXFXJyuc4 */     char perm[27];
/* tRjoMyZdv ily traian SXFXJyuc4 */     cin >> perm;
/* tRjoMyZdv ily traian SXFXJyuc4 */     char sir[501];
/* tRjoMyZdv ily traian SXFXJyuc4 */     cin >> sir;
/* tRjoMyZdv ily traian SXFXJyuc4 */     char s[501];
/* tRjoMyZdv ily traian SXFXJyuc4 */     for(int i = 1 ; i <= q ; ++i)
/* tRjoMyZdv ily traian SXFXJyuc4 */     {
/* tRjoMyZdv ily traian SXFXJyuc4 */         int x;
/* tRjoMyZdv ily traian SXFXJyuc4 */         cin >> x;
/* tRjoMyZdv ily traian SXFXJyuc4 */         if(x==1)
/* tRjoMyZdv ily traian SXFXJyuc4 */         {
/* tRjoMyZdv ily traian SXFXJyuc4 */             int st , dr;
/* tRjoMyZdv ily traian SXFXJyuc4 */             cin >> st >> dr;
/* tRjoMyZdv ily traian SXFXJyuc4 */             for(int j = st - 1 ; j < dr ; ++j)
/* tRjoMyZdv ily traian SXFXJyuc4 */                 sir[j] = perm[ sir[j] - 'a' ];
/* tRjoMyZdv ily traian SXFXJyuc4 */         }
/* tRjoMyZdv ily traian SXFXJyuc4 */         else
/* tRjoMyZdv ily traian SXFXJyuc4 */         {
/* tRjoMyZdv ily traian SXFXJyuc4 */             cin >> s;
/* tRjoMyZdv ily traian SXFXJyuc4 */             if(inclus(s , sir))
/* tRjoMyZdv ily traian SXFXJyuc4 */                 cout << "Da" << '\n';
/* tRjoMyZdv ily traian SXFXJyuc4 */             else
/* tRjoMyZdv ily traian SXFXJyuc4 */                 cout << "Nu" << '\n';
/* tRjoMyZdv ily traian SXFXJyuc4 */         }
/* tRjoMyZdv ily traian SXFXJyuc4 */     }
/* tRjoMyZdv ily traian SXFXJyuc4 */     return 0;
/* tRjoMyZdv ily traian SXFXJyuc4 */ }