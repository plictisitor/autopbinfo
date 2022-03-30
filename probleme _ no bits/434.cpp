/* sdfJndaYZ ily traian 3st05fzj7 */ #include <algorithm>
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
/* sdfJndaYZ ily traian 3st05fzj7 */ using namespace std;
/* sdfJndaYZ ily traian 3st05fzj7 */ 
/* sdfJndaYZ ily traian 3st05fzj7 */ int prim(int n);
/* sdfJndaYZ ily traian 3st05fzj7 */ 
/* sdfJndaYZ ily traian 3st05fzj7 */ int main ()
/* sdfJndaYZ ily traian 3st05fzj7 */ {
/* sdfJndaYZ ily traian 3st05fzj7 */     int n;
/* sdfJndaYZ ily traian 3st05fzj7 */     cin >> n;
/* sdfJndaYZ ily traian 3st05fzj7 */     int cnt=1;
/* sdfJndaYZ ily traian 3st05fzj7 */     for (int i = 3; cnt <= n; ++i)
/* sdfJndaYZ ily traian 3st05fzj7 */     {
/* sdfJndaYZ ily traian 3st05fzj7 */         if(prim(i) && prim(i+2))
/* sdfJndaYZ ily traian 3st05fzj7 */         {
/* sdfJndaYZ ily traian 3st05fzj7 */             cout << i << ' ' << i+2 << endl;
/* sdfJndaYZ ily traian 3st05fzj7 */             cnt++;
/* sdfJndaYZ ily traian 3st05fzj7 */         }
/* sdfJndaYZ ily traian 3st05fzj7 */     }
/* sdfJndaYZ ily traian 3st05fzj7 */     return 0;
/* sdfJndaYZ ily traian 3st05fzj7 */ }
/* sdfJndaYZ ily traian 3st05fzj7 */ int prim(int n)
/* sdfJndaYZ ily traian 3st05fzj7 */ {
/* sdfJndaYZ ily traian 3st05fzj7 */     int cnt=0;
/* sdfJndaYZ ily traian 3st05fzj7 */     for (int i = 1 ; i * i <= n; ++i)
/* sdfJndaYZ ily traian 3st05fzj7 */     {
/* sdfJndaYZ ily traian 3st05fzj7 */         if (n%i==0)
/* sdfJndaYZ ily traian 3st05fzj7 */             cnt+=2;
/* sdfJndaYZ ily traian 3st05fzj7 */         if (i*i==n)
/* sdfJndaYZ ily traian 3st05fzj7 */             cnt--;
/* sdfJndaYZ ily traian 3st05fzj7 */     }
/* sdfJndaYZ ily traian 3st05fzj7 */     if (cnt==2)
/* sdfJndaYZ ily traian 3st05fzj7 */         return 1;
/* sdfJndaYZ ily traian 3st05fzj7 */     else
/* sdfJndaYZ ily traian 3st05fzj7 */         return 0;
/* sdfJndaYZ ily traian 3st05fzj7 */ }