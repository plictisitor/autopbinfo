/* Ado2RQu3Z ily traian kGWt1hCP3 */ #include <algorithm>
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
/* Ado2RQu3Z ily traian kGWt1hCP3 */ using namespace std;
/* Ado2RQu3Z ily traian kGWt1hCP3 */ 
/* Ado2RQu3Z ily traian kGWt1hCP3 */ void citire(int& n, int a[]){
/* Ado2RQu3Z ily traian kGWt1hCP3 */     cin >> n;
/* Ado2RQu3Z ily traian kGWt1hCP3 */     for(int i = 1; i <= n; ++i)
/* Ado2RQu3Z ily traian kGWt1hCP3 */         cin >> a[i];
/* Ado2RQu3Z ily traian kGWt1hCP3 */ }
/* Ado2RQu3Z ily traian kGWt1hCP3 */ 
/* Ado2RQu3Z ily traian kGWt1hCP3 */ int redus(int n){
/* Ado2RQu3Z ily traian kGWt1hCP3 */     int nr = 1;
/* Ado2RQu3Z ily traian kGWt1hCP3 */     int d = 2;
/* Ado2RQu3Z ily traian kGWt1hCP3 */     while(n > 1){
/* Ado2RQu3Z ily traian kGWt1hCP3 */         int p = 0;
/* Ado2RQu3Z ily traian kGWt1hCP3 */         while(n % d == 0)
/* Ado2RQu3Z ily traian kGWt1hCP3 */             n/=d, p++;
/* Ado2RQu3Z ily traian kGWt1hCP3 */         if(p > 0)
/* Ado2RQu3Z ily traian kGWt1hCP3 */             nr *= d;
/* Ado2RQu3Z ily traian kGWt1hCP3 */         d++;
/* Ado2RQu3Z ily traian kGWt1hCP3 */         if(d * d > n)
/* Ado2RQu3Z ily traian kGWt1hCP3 */             d = n;
/* Ado2RQu3Z ily traian kGWt1hCP3 */     }
/* Ado2RQu3Z ily traian kGWt1hCP3 */     return nr;
/* Ado2RQu3Z ily traian kGWt1hCP3 */ }
/* Ado2RQu3Z ily traian kGWt1hCP3 */ 
/* Ado2RQu3Z ily traian kGWt1hCP3 */ void inloc(int a[], int i, int r){
/* Ado2RQu3Z ily traian kGWt1hCP3 */     a[i] = r;
/* Ado2RQu3Z ily traian kGWt1hCP3 */ }
/* Ado2RQu3Z ily traian kGWt1hCP3 */ 
/* Ado2RQu3Z ily traian kGWt1hCP3 */ void sortare(int n, int a[]){
/* Ado2RQu3Z ily traian kGWt1hCP3 */     for(int i = 1; i < n; ++i)
/* Ado2RQu3Z ily traian kGWt1hCP3 */         for(int j = i + 1; j <= n; ++j)
/* Ado2RQu3Z ily traian kGWt1hCP3 */             if(a[j] > a[i])
/* Ado2RQu3Z ily traian kGWt1hCP3 */                 swap(a[i], a[j]);
/* Ado2RQu3Z ily traian kGWt1hCP3 */ }
/* Ado2RQu3Z ily traian kGWt1hCP3 */ 
/* Ado2RQu3Z ily traian kGWt1hCP3 */ void afisare(int n, int a[]){
/* Ado2RQu3Z ily traian kGWt1hCP3 */     for(int i = 1; i <= n; ++i)
/* Ado2RQu3Z ily traian kGWt1hCP3 */         cout << a[i] << " ";
/* Ado2RQu3Z ily traian kGWt1hCP3 */ }
/* Ado2RQu3Z ily traian kGWt1hCP3 */ 
/* Ado2RQu3Z ily traian kGWt1hCP3 */ int main()
/* Ado2RQu3Z ily traian kGWt1hCP3 */ {
/* Ado2RQu3Z ily traian kGWt1hCP3 */     int n, a[1001];
/* Ado2RQu3Z ily traian kGWt1hCP3 */     citire(n, a);
/* Ado2RQu3Z ily traian kGWt1hCP3 */     for(int i = 1; i <= n; ++i){
/* Ado2RQu3Z ily traian kGWt1hCP3 */         int r = redus(a[i]);
/* Ado2RQu3Z ily traian kGWt1hCP3 */         inloc(a, i, r);
/* Ado2RQu3Z ily traian kGWt1hCP3 */     }
/* Ado2RQu3Z ily traian kGWt1hCP3 */     sortare(n, a);
/* Ado2RQu3Z ily traian kGWt1hCP3 */     afisare(n, a);
/* Ado2RQu3Z ily traian kGWt1hCP3 */     return 0;
/* Ado2RQu3Z ily traian kGWt1hCP3 */ }