/* YgLNN1eYl ily traian ZYl4dvHq9 */ #include <algorithm>
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
/* YgLNN1eYl ily traian ZYl4dvHq9 */ using namespace std;
/* YgLNN1eYl ily traian ZYl4dvHq9 */ 
/* YgLNN1eYl ily traian ZYl4dvHq9 */ ifstream cin("nivelebin.in");
/* YgLNN1eYl ily traian ZYl4dvHq9 */ ofstream cout("nivelebin.out");
/* YgLNN1eYl ily traian ZYl4dvHq9 */ 
/* YgLNN1eYl ily traian ZYl4dvHq9 */ int n , St[1001] , Dr[1001] , val[1001] , T[1001] , nivel[1001] , maxi , cnt;
/* YgLNN1eYl ily traian ZYl4dvHq9 */ 
/* YgLNN1eYl ily traian ZYl4dvHq9 */ void RSD(int p)
/* YgLNN1eYl ily traian ZYl4dvHq9 */ {
/* YgLNN1eYl ily traian ZYl4dvHq9 */     if(p > 0)
/* YgLNN1eYl ily traian ZYl4dvHq9 */     {
/* YgLNN1eYl ily traian ZYl4dvHq9 */         cnt++;
/* YgLNN1eYl ily traian ZYl4dvHq9 */         nivel[p] = cnt;
/* YgLNN1eYl ily traian ZYl4dvHq9 */         RSD(St[p]);
/* YgLNN1eYl ily traian ZYl4dvHq9 */         RSD(Dr[p]);
/* YgLNN1eYl ily traian ZYl4dvHq9 */         cnt--;
/* YgLNN1eYl ily traian ZYl4dvHq9 */     }
/* YgLNN1eYl ily traian ZYl4dvHq9 */ }
/* YgLNN1eYl ily traian ZYl4dvHq9 */ 
/* YgLNN1eYl ily traian ZYl4dvHq9 */  int main()
/* YgLNN1eYl ily traian ZYl4dvHq9 */ {
/* YgLNN1eYl ily traian ZYl4dvHq9 */     cin >> n;
/* YgLNN1eYl ily traian ZYl4dvHq9 */     for(int i = 1 ; i <= n ; i++)
/* YgLNN1eYl ily traian ZYl4dvHq9 */     {
/* YgLNN1eYl ily traian ZYl4dvHq9 */         cin >> val[i] >> St[i] >> Dr[i];
/* YgLNN1eYl ily traian ZYl4dvHq9 */         T[St[i]] = i;
/* YgLNN1eYl ily traian ZYl4dvHq9 */         T[Dr[i]] = i;
/* YgLNN1eYl ily traian ZYl4dvHq9 */     }
/* YgLNN1eYl ily traian ZYl4dvHq9 */     int rez;
/* YgLNN1eYl ily traian ZYl4dvHq9 */     for(int i = 1 ; i <= n ; i++)
/* YgLNN1eYl ily traian ZYl4dvHq9 */         if(!T[i]) rez = i;
/* YgLNN1eYl ily traian ZYl4dvHq9 */     RSD(rez);
/* YgLNN1eYl ily traian ZYl4dvHq9 */ 
/* YgLNN1eYl ily traian ZYl4dvHq9 */     for(int i = 1 ; i <= n ; i++)
/* YgLNN1eYl ily traian ZYl4dvHq9 */         if(nivel[i] > maxi) maxi = nivel[i];
/* YgLNN1eYl ily traian ZYl4dvHq9 */       cout << maxi << endl;
/* YgLNN1eYl ily traian ZYl4dvHq9 */     for(int i = 1 ; i <= maxi ; i++)
/* YgLNN1eYl ily traian ZYl4dvHq9 */     {
/* YgLNN1eYl ily traian ZYl4dvHq9 */         int cnt = 0;
/* YgLNN1eYl ily traian ZYl4dvHq9 */         for(int j = 1 ; j <= n ; j++)
/* YgLNN1eYl ily traian ZYl4dvHq9 */             if(nivel[j] == i) cnt++;
/* YgLNN1eYl ily traian ZYl4dvHq9 */             cout << cnt << " ";
/* YgLNN1eYl ily traian ZYl4dvHq9 */     }
/* YgLNN1eYl ily traian ZYl4dvHq9 */ 
/* YgLNN1eYl ily traian ZYl4dvHq9 */ }