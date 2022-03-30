/* nuaV5PXnL ily traian YEBOMPj24 */ #include <algorithm>
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
/* nuaV5PXnL ily traian YEBOMPj24 */ using namespace std;
/* nuaV5PXnL ily traian YEBOMPj24 */ 
/* nuaV5PXnL ily traian YEBOMPj24 */ bool prim(int n){
/* nuaV5PXnL ily traian YEBOMPj24 */     int cnt = 1, d = 2;
/* nuaV5PXnL ily traian YEBOMPj24 */     while(n > 1){
/* nuaV5PXnL ily traian YEBOMPj24 */         int p = 0;
/* nuaV5PXnL ily traian YEBOMPj24 */         while(n % d == 0)
/* nuaV5PXnL ily traian YEBOMPj24 */             n /= d, p++;
/* nuaV5PXnL ily traian YEBOMPj24 */         cnt *= (p + 1);
/* nuaV5PXnL ily traian YEBOMPj24 */         d++;
/* nuaV5PXnL ily traian YEBOMPj24 */         if(d * d > n)
/* nuaV5PXnL ily traian YEBOMPj24 */             d = n;
/* nuaV5PXnL ily traian YEBOMPj24 */     }
/* nuaV5PXnL ily traian YEBOMPj24 */     return cnt == 2;
/* nuaV5PXnL ily traian YEBOMPj24 */ }
/* nuaV5PXnL ily traian YEBOMPj24 */ 
/* nuaV5PXnL ily traian YEBOMPj24 */ bool exista_prime(int a[], int st, int dr){
/* nuaV5PXnL ily traian YEBOMPj24 */     if(st == dr)
/* nuaV5PXnL ily traian YEBOMPj24 */         return prim(a[st]);
/* nuaV5PXnL ily traian YEBOMPj24 */     else{
/* nuaV5PXnL ily traian YEBOMPj24 */         int mij = (st + dr) / 2;
/* nuaV5PXnL ily traian YEBOMPj24 */         return exista_prime(a, st, mij) || exista_prime(a, mij + 1, dr);
/* nuaV5PXnL ily traian YEBOMPj24 */     }
/* nuaV5PXnL ily traian YEBOMPj24 */ }
/* nuaV5PXnL ily traian YEBOMPj24 */ 
/* nuaV5PXnL ily traian YEBOMPj24 */ int main()
/* nuaV5PXnL ily traian YEBOMPj24 */ {
/* nuaV5PXnL ily traian YEBOMPj24 */     int n, a[201];
/* nuaV5PXnL ily traian YEBOMPj24 */     cin >> n;
/* nuaV5PXnL ily traian YEBOMPj24 */     for(int i = 1; i <= n; ++i)
/* nuaV5PXnL ily traian YEBOMPj24 */         cin >> a[i];
/* nuaV5PXnL ily traian YEBOMPj24 */ 
/* nuaV5PXnL ily traian YEBOMPj24 */     if(exista_prime(a, 1, n))
/* nuaV5PXnL ily traian YEBOMPj24 */         cout << "DA";
/* nuaV5PXnL ily traian YEBOMPj24 */     else
/* nuaV5PXnL ily traian YEBOMPj24 */         cout << "NU";
/* nuaV5PXnL ily traian YEBOMPj24 */ 
/* nuaV5PXnL ily traian YEBOMPj24 */     return 0;
/* nuaV5PXnL ily traian YEBOMPj24 */ }