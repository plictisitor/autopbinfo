/* vqjsEQJ9f ily traian raFpwPQN3 */ #include <algorithm>
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
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */ using namespace std;
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */ ifstream cin("countprimsub.in");
/* vqjsEQJ9f ily traian raFpwPQN3 */ ofstream cout("countprimsub.out");
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */ int n , St[1001] , Dr[1001] , val[1001] , T[1001] , k , x , cnt;
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */ int prim(int n)
/* vqjsEQJ9f ily traian raFpwPQN3 */ {
/* vqjsEQJ9f ily traian raFpwPQN3 */     if(n < 2) return 0;
/* vqjsEQJ9f ily traian raFpwPQN3 */     else if(n == 2) return 1;
/* vqjsEQJ9f ily traian raFpwPQN3 */     else if(n % 2 == 0) return 0;
/* vqjsEQJ9f ily traian raFpwPQN3 */     else for(int i = 3 ; i*i <= n ; i+= 2)
/* vqjsEQJ9f ily traian raFpwPQN3 */         if(n % i == 0) return 0;
/* vqjsEQJ9f ily traian raFpwPQN3 */     return 1;
/* vqjsEQJ9f ily traian raFpwPQN3 */ }
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */ void RSD(int p)
/* vqjsEQJ9f ily traian raFpwPQN3 */ {
/* vqjsEQJ9f ily traian raFpwPQN3 */     if(p > 0)
/* vqjsEQJ9f ily traian raFpwPQN3 */     {
/* vqjsEQJ9f ily traian raFpwPQN3 */         if(prim(val[p])) cnt++;
/* vqjsEQJ9f ily traian raFpwPQN3 */         RSD(St[p]);
/* vqjsEQJ9f ily traian raFpwPQN3 */         RSD(Dr[p]);
/* vqjsEQJ9f ily traian raFpwPQN3 */     }
/* vqjsEQJ9f ily traian raFpwPQN3 */ }
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */  int main()
/* vqjsEQJ9f ily traian raFpwPQN3 */ {
/* vqjsEQJ9f ily traian raFpwPQN3 */     cin >> n;
/* vqjsEQJ9f ily traian raFpwPQN3 */     for(int i = 1 ; i <= n ; i++)
/* vqjsEQJ9f ily traian raFpwPQN3 */     {
/* vqjsEQJ9f ily traian raFpwPQN3 */         cin >> val[i] >> St[i] >> Dr[i];
/* vqjsEQJ9f ily traian raFpwPQN3 */         T[St[i]] = i;
/* vqjsEQJ9f ily traian raFpwPQN3 */         T[Dr[i]] = i;
/* vqjsEQJ9f ily traian raFpwPQN3 */     }
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */     cin >> k;
/* vqjsEQJ9f ily traian raFpwPQN3 */     for(int i = 1 ; i <= k ; i++)
/* vqjsEQJ9f ily traian raFpwPQN3 */     {
/* vqjsEQJ9f ily traian raFpwPQN3 */         cin >> x;
/* vqjsEQJ9f ily traian raFpwPQN3 */         cnt = 0;
/* vqjsEQJ9f ily traian raFpwPQN3 */         RSD(x);
/* vqjsEQJ9f ily traian raFpwPQN3 */         cout << cnt << '\n';
/* vqjsEQJ9f ily traian raFpwPQN3 */     }
/* vqjsEQJ9f ily traian raFpwPQN3 */ 
/* vqjsEQJ9f ily traian raFpwPQN3 */ }