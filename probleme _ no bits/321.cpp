/* MWKtsI5Id ily traian QfB5U18I7 */ #include <algorithm>
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
/* MWKtsI5Id ily traian QfB5U18I7 */ using namespace std;
/* MWKtsI5Id ily traian QfB5U18I7 */ 
/* MWKtsI5Id ily traian QfB5U18I7 */ ifstream cin("partitiinumar1.in");
/* MWKtsI5Id ily traian QfB5U18I7 */ ofstream cout("partitiinumar1.out");
/* MWKtsI5Id ily traian QfB5U18I7 */ 
/* MWKtsI5Id ily traian QfB5U18I7 */ int n , x[80];
/* MWKtsI5Id ily traian QfB5U18I7 */ 
/* MWKtsI5Id ily traian QfB5U18I7 */ void afisare(int k)
/* MWKtsI5Id ily traian QfB5U18I7 */ {
/* MWKtsI5Id ily traian QfB5U18I7 */     for(int i = 1 ; i <= k ; i++)
/* MWKtsI5Id ily traian QfB5U18I7 */         cout << x[i] << " ";
/* MWKtsI5Id ily traian QfB5U18I7 */     cout << '\n';
/* MWKtsI5Id ily traian QfB5U18I7 */ }
/* MWKtsI5Id ily traian QfB5U18I7 */ 
/* MWKtsI5Id ily traian QfB5U18I7 */ void back(int k , int sp)
/* MWKtsI5Id ily traian QfB5U18I7 */ {
/* MWKtsI5Id ily traian QfB5U18I7 */     for(int i = 1 ; i <= n ; i++)
/* MWKtsI5Id ily traian QfB5U18I7 */     {
/* MWKtsI5Id ily traian QfB5U18I7 */         x[k] = i;
/* MWKtsI5Id ily traian QfB5U18I7 */         if(k == 1 || x[k] > x[k - 1])
/* MWKtsI5Id ily traian QfB5U18I7 */         {
/* MWKtsI5Id ily traian QfB5U18I7 */             sp += x[k];
/* MWKtsI5Id ily traian QfB5U18I7 */             if(sp <= n)
/* MWKtsI5Id ily traian QfB5U18I7 */                 if(sp == n) afisare(k);
/* MWKtsI5Id ily traian QfB5U18I7 */                 else back(k + 1 , sp);
/* MWKtsI5Id ily traian QfB5U18I7 */             sp -= x[k];
/* MWKtsI5Id ily traian QfB5U18I7 */         }
/* MWKtsI5Id ily traian QfB5U18I7 */     }
/* MWKtsI5Id ily traian QfB5U18I7 */ }
/* MWKtsI5Id ily traian QfB5U18I7 */ 
/* MWKtsI5Id ily traian QfB5U18I7 */ int main()
/* MWKtsI5Id ily traian QfB5U18I7 */ {
/* MWKtsI5Id ily traian QfB5U18I7 */     cin >> n;
/* MWKtsI5Id ily traian QfB5U18I7 */     back(1 , 0);
/* MWKtsI5Id ily traian QfB5U18I7 */ 
/* MWKtsI5Id ily traian QfB5U18I7 */ }