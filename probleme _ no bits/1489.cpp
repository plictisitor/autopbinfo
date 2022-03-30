/* aDeTxH3O8 ily traian 8urbq7BK9 */ #include <algorithm>
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
/* aDeTxH3O8 ily traian 8urbq7BK9 */ using namespace std;
/* aDeTxH3O8 ily traian 8urbq7BK9 */ ifstream cin("bile1.in");
/* aDeTxH3O8 ily traian 8urbq7BK9 */ ofstream cout("bile1.out");
/* aDeTxH3O8 ily traian 8urbq7BK9 */ 
/* aDeTxH3O8 ily traian 8urbq7BK9 */ int main()
/* aDeTxH3O8 ily traian 8urbq7BK9 */ {
/* aDeTxH3O8 ily traian 8urbq7BK9 */     int n, a[10001]={0}, c=1 , m;
/* aDeTxH3O8 ily traian 8urbq7BK9 */     cin >> n;
/* aDeTxH3O8 ily traian 8urbq7BK9 */     a[1]=3;
/* aDeTxH3O8 ily traian 8urbq7BK9 */     for(int i = 1; i <= n-1; i++)
/* aDeTxH3O8 ily traian 8urbq7BK9 */     {
/* aDeTxH3O8 ily traian 8urbq7BK9 */         int t = 0;
/* aDeTxH3O8 ily traian 8urbq7BK9 */         for(int j = 1; j <= c; j++)
/* aDeTxH3O8 ily traian 8urbq7BK9 */         {
/* aDeTxH3O8 ily traian 8urbq7BK9 */             int cif = a[j] * 2 + t;
/* aDeTxH3O8 ily traian 8urbq7BK9 */             a[j] = cif % 10;
/* aDeTxH3O8 ily traian 8urbq7BK9 */             t = cif / 10;
/* aDeTxH3O8 ily traian 8urbq7BK9 */         }
/* aDeTxH3O8 ily traian 8urbq7BK9 */         while(t)
/* aDeTxH3O8 ily traian 8urbq7BK9 */         {
/* aDeTxH3O8 ily traian 8urbq7BK9 */             a[++c] = t % 10;
/* aDeTxH3O8 ily traian 8urbq7BK9 */             t /=10;
/* aDeTxH3O8 ily traian 8urbq7BK9 */         }
/* aDeTxH3O8 ily traian 8urbq7BK9 */     }
/* aDeTxH3O8 ily traian 8urbq7BK9 */     for(int i = c ; i >= 1; i--)
/* aDeTxH3O8 ily traian 8urbq7BK9 */         cout << a[i];
/* aDeTxH3O8 ily traian 8urbq7BK9 */     return 0;
/* aDeTxH3O8 ily traian 8urbq7BK9 */ }