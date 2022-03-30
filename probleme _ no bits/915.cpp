/* NHicL5e4W ily traian 5tkeZLnL7 */ #include <algorithm>
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
/* NHicL5e4W ily traian 5tkeZLnL7 */ using namespace std;
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */ void citire(int& n, int a[]){
/* NHicL5e4W ily traian 5tkeZLnL7 */     cin >> n;
/* NHicL5e4W ily traian 5tkeZLnL7 */     for(int i = 1; i <= n; ++i)
/* NHicL5e4W ily traian 5tkeZLnL7 */         cin >> a[i];
/* NHicL5e4W ily traian 5tkeZLnL7 */ }
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */ bool palindrom(int n){
/* NHicL5e4W ily traian 5tkeZLnL7 */     int cn = n;
/* NHicL5e4W ily traian 5tkeZLnL7 */     int ogl = 0;
/* NHicL5e4W ily traian 5tkeZLnL7 */     while(n){
/* NHicL5e4W ily traian 5tkeZLnL7 */         ogl = ogl * 10 + n % 10;
/* NHicL5e4W ily traian 5tkeZLnL7 */         n/=10;
/* NHicL5e4W ily traian 5tkeZLnL7 */     }
/* NHicL5e4W ily traian 5tkeZLnL7 */     return cn == ogl;
/* NHicL5e4W ily traian 5tkeZLnL7 */ }
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */ void eliminare(int a[], int& i, int& n){
/* NHicL5e4W ily traian 5tkeZLnL7 */     for(int j = i + 1; j <= n; ++j)
/* NHicL5e4W ily traian 5tkeZLnL7 */         a[j-1] = a[j];
/* NHicL5e4W ily traian 5tkeZLnL7 */     n--;
/* NHicL5e4W ily traian 5tkeZLnL7 */     i--;
/* NHicL5e4W ily traian 5tkeZLnL7 */ }
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */ void afisare(int n, int a[]){
/* NHicL5e4W ily traian 5tkeZLnL7 */     for(int i = 1; i <= n; ++i)
/* NHicL5e4W ily traian 5tkeZLnL7 */         cout << a[i] << " ";
/* NHicL5e4W ily traian 5tkeZLnL7 */ }
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */ int main()
/* NHicL5e4W ily traian 5tkeZLnL7 */ {
/* NHicL5e4W ily traian 5tkeZLnL7 */     int n, a[1001];
/* NHicL5e4W ily traian 5tkeZLnL7 */     citire(n, a);
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */     for(int i = 1; i <= n; ++i)
/* NHicL5e4W ily traian 5tkeZLnL7 */         if(palindrom(a[i]))
/* NHicL5e4W ily traian 5tkeZLnL7 */             eliminare(a, i, n);
/* NHicL5e4W ily traian 5tkeZLnL7 */ 
/* NHicL5e4W ily traian 5tkeZLnL7 */     afisare(n, a);
/* NHicL5e4W ily traian 5tkeZLnL7 */     return 0;
/* NHicL5e4W ily traian 5tkeZLnL7 */ }