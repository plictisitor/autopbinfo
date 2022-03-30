/* URBtphrjt ily traian OfoVCsAF3 */ #include <algorithm>
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
/* URBtphrjt ily traian OfoVCsAF3 */ using namespace std;
/* URBtphrjt ily traian OfoVCsAF3 */ 
/* URBtphrjt ily traian OfoVCsAF3 */ int n, a[100001];
/* URBtphrjt ily traian OfoVCsAF3 */ 
/* URBtphrjt ily traian OfoVCsAF3 */ void Quicksort(int st, int dr){
/* URBtphrjt ily traian OfoVCsAF3 */     if(st < dr){
/* URBtphrjt ily traian OfoVCsAF3 */         int mij = (st + dr) / 2;
/* URBtphrjt ily traian OfoVCsAF3 */         swap(a[st], a[mij]);
/* URBtphrjt ily traian OfoVCsAF3 */         int i = st, j = dr, d = 0;
/* URBtphrjt ily traian OfoVCsAF3 */         while(i < j){
/* URBtphrjt ily traian OfoVCsAF3 */             if(a[i] > a[j]){
/* URBtphrjt ily traian OfoVCsAF3 */                 swap(a[i], a[j]);
/* URBtphrjt ily traian OfoVCsAF3 */                 d = 1 - d;
/* URBtphrjt ily traian OfoVCsAF3 */             }
/* URBtphrjt ily traian OfoVCsAF3 */             i += d;
/* URBtphrjt ily traian OfoVCsAF3 */             j -= 1-d;
/* URBtphrjt ily traian OfoVCsAF3 */         }
/* URBtphrjt ily traian OfoVCsAF3 */         Quicksort(st, i - 1);
/* URBtphrjt ily traian OfoVCsAF3 */         Quicksort(i + 1, dr);
/* URBtphrjt ily traian OfoVCsAF3 */     }
/* URBtphrjt ily traian OfoVCsAF3 */ }
/* URBtphrjt ily traian OfoVCsAF3 */ 
/* URBtphrjt ily traian OfoVCsAF3 */ int main(){
/* URBtphrjt ily traian OfoVCsAF3 */     cin >> n;
/* URBtphrjt ily traian OfoVCsAF3 */     for(int i = 1; i <= n; ++i)
/* URBtphrjt ily traian OfoVCsAF3 */         cin >> a[i];
/* URBtphrjt ily traian OfoVCsAF3 */     Quicksort(1, n);
/* URBtphrjt ily traian OfoVCsAF3 */     for(int i = 1; i <= n; ++i)
/* URBtphrjt ily traian OfoVCsAF3 */         cout << a[i] << ' ';
/* URBtphrjt ily traian OfoVCsAF3 */     return 0;
/* URBtphrjt ily traian OfoVCsAF3 */ }