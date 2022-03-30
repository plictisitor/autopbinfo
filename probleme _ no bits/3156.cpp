/* 0icuEpobU ily traian pYpmnAVx6 */ #include <algorithm>
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
/* 0icuEpobU ily traian pYpmnAVx6 */ 
/* 0icuEpobU ily traian pYpmnAVx6 */ using namespace std;
/* 0icuEpobU ily traian pYpmnAVx6 */ 
/* 0icuEpobU ily traian pYpmnAVx6 */ int n , a[11] , x[11] , p[11] , indm , indM , mini = 999999999 , maxi , c[11] , cnt;
/* 0icuEpobU ily traian pYpmnAVx6 */ 
/* 0icuEpobU ily traian pYpmnAVx6 */ int afisare()
/* 0icuEpobU ily traian pYpmnAVx6 */ {
/* 0icuEpobU ily traian pYpmnAVx6 */     int pp = 1;
/* 0icuEpobU ily traian pYpmnAVx6 */     for(int i = 1 ; i <= n ; i++)
/* 0icuEpobU ily traian pYpmnAVx6 */         if(i == indm || i == indM) cout << a[i] << " ";
/* 0icuEpobU ily traian pYpmnAVx6 */         else cout << c[x[pp]] << " " , pp++;
/* 0icuEpobU ily traian pYpmnAVx6 */     cout << '\n';
/* 0icuEpobU ily traian pYpmnAVx6 */ }
/* 0icuEpobU ily traian pYpmnAVx6 */ 
/* 0icuEpobU ily traian pYpmnAVx6 */ void back(int k)
/* 0icuEpobU ily traian pYpmnAVx6 */ {
/* 0icuEpobU ily traian pYpmnAVx6 */     for(int i = 1 ; i <= cnt ; i++)
/* 0icuEpobU ily traian pYpmnAVx6 */         if(!p[i])
/* 0icuEpobU ily traian pYpmnAVx6 */         {
/* 0icuEpobU ily traian pYpmnAVx6 */             x[k] = i;
/* 0icuEpobU ily traian pYpmnAVx6 */             p[i] = 1;
/* 0icuEpobU ily traian pYpmnAVx6 */                 if(k == cnt) afisare();
/* 0icuEpobU ily traian pYpmnAVx6 */                 else back(k + 1);
/* 0icuEpobU ily traian pYpmnAVx6 */             p[i] = 0;
/* 0icuEpobU ily traian pYpmnAVx6 */         }
/* 0icuEpobU ily traian pYpmnAVx6 */ }
/* 0icuEpobU ily traian pYpmnAVx6 */ 
/* 0icuEpobU ily traian pYpmnAVx6 */ int main()
/* 0icuEpobU ily traian pYpmnAVx6 */ {
/* 0icuEpobU ily traian pYpmnAVx6 */     cin >> n;
/* 0icuEpobU ily traian pYpmnAVx6 */     for(int i = 1 ; i <= n ; i++)
/* 0icuEpobU ily traian pYpmnAVx6 */         cin >> a[i];
/* 0icuEpobU ily traian pYpmnAVx6 */     for(int i = 1 ; i <= n ; i++)
/* 0icuEpobU ily traian pYpmnAVx6 */     {
/* 0icuEpobU ily traian pYpmnAVx6 */         if(a[i] < mini) mini = a[i] , indm = i;
/* 0icuEpobU ily traian pYpmnAVx6 */         if(a[i] > maxi) maxi = a[i] , indM = i;
/* 0icuEpobU ily traian pYpmnAVx6 */     }
/* 0icuEpobU ily traian pYpmnAVx6 */     for(int i = 1 ; i <= n ; i++)
/* 0icuEpobU ily traian pYpmnAVx6 */         if(i != indm && i != indM) c[++cnt] = a[i];
/* 0icuEpobU ily traian pYpmnAVx6 */     sort(c + 1 , c + cnt + 1);
/* 0icuEpobU ily traian pYpmnAVx6 */     back(1);
/* 0icuEpobU ily traian pYpmnAVx6 */ }