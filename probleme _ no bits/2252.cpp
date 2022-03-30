/* OkC4rjNcF ily traian qP3IMBAa1 */ #include <algorithm>
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
/* OkC4rjNcF ily traian qP3IMBAa1 */ 
/* OkC4rjNcF ily traian qP3IMBAa1 */ using namespace std;
/* OkC4rjNcF ily traian qP3IMBAa1 */ ifstream cin("profu.in");
/* OkC4rjNcF ily traian qP3IMBAa1 */ ofstream cout("profu.out");
/* OkC4rjNcF ily traian qP3IMBAa1 */ int a[500001] , k , n;
/* OkC4rjNcF ily traian qP3IMBAa1 */ 
/* OkC4rjNcF ily traian qP3IMBAa1 */ int poate(int a[] , int n , long long x , int k)
/* OkC4rjNcF ily traian qP3IMBAa1 */ {
/* OkC4rjNcF ily traian qP3IMBAa1 */     long long s = 0;
/* OkC4rjNcF ily traian qP3IMBAa1 */     int c = 1;
/* OkC4rjNcF ily traian qP3IMBAa1 */     for(int i = 1 ; i <= n ; i++)
/* OkC4rjNcF ily traian qP3IMBAa1 */     {
/* OkC4rjNcF ily traian qP3IMBAa1 */         s += a[i];
/* OkC4rjNcF ily traian qP3IMBAa1 */         if(s > x)
/* OkC4rjNcF ily traian qP3IMBAa1 */         {
/* OkC4rjNcF ily traian qP3IMBAa1 */             c++;
/* OkC4rjNcF ily traian qP3IMBAa1 */             if(c > k) return 0;
/* OkC4rjNcF ily traian qP3IMBAa1 */             s = a[i];
/* OkC4rjNcF ily traian qP3IMBAa1 */         }
/* OkC4rjNcF ily traian qP3IMBAa1 */     }
/* OkC4rjNcF ily traian qP3IMBAa1 */     if(c <= k) return 1;
/* OkC4rjNcF ily traian qP3IMBAa1 */     else return 0;
/* OkC4rjNcF ily traian qP3IMBAa1 */ }
/* OkC4rjNcF ily traian qP3IMBAa1 */ 
/* OkC4rjNcF ily traian qP3IMBAa1 */ long long cautarebinara(int a[] , int n , int max , long long x , int k)
/* OkC4rjNcF ily traian qP3IMBAa1 */ {
/* OkC4rjNcF ily traian qP3IMBAa1 */     long long st = max , dr = x;
/* OkC4rjNcF ily traian qP3IMBAa1 */     while(st <= dr)
/* OkC4rjNcF ily traian qP3IMBAa1 */     {
/* OkC4rjNcF ily traian qP3IMBAa1 */         long long mij = (st+ dr) / 2;
/* OkC4rjNcF ily traian qP3IMBAa1 */         if(poate(a , n , mij , k)) dr = mij-1;
/* OkC4rjNcF ily traian qP3IMBAa1 */         else st = mij+1;
/* OkC4rjNcF ily traian qP3IMBAa1 */     }
/* OkC4rjNcF ily traian qP3IMBAa1 */     return st;
/* OkC4rjNcF ily traian qP3IMBAa1 */ }
/* OkC4rjNcF ily traian qP3IMBAa1 */ int main()
/* OkC4rjNcF ily traian qP3IMBAa1 */ {
/* OkC4rjNcF ily traian qP3IMBAa1 */     long long x = 0;
/* OkC4rjNcF ily traian qP3IMBAa1 */     int max = 0;
/* OkC4rjNcF ily traian qP3IMBAa1 */     cin >> n >> k;
/* OkC4rjNcF ily traian qP3IMBAa1 */     for(int i = 1 ; i <= n ; i++)
/* OkC4rjNcF ily traian qP3IMBAa1 */     {
/* OkC4rjNcF ily traian qP3IMBAa1 */         cin >> a[i];
/* OkC4rjNcF ily traian qP3IMBAa1 */         x += a[i];
/* OkC4rjNcF ily traian qP3IMBAa1 */         if(a[i] > max) max = a[i];
/* OkC4rjNcF ily traian qP3IMBAa1 */     }
/* OkC4rjNcF ily traian qP3IMBAa1 */     cout << cautarebinara(a , n , max , x , k);
/* OkC4rjNcF ily traian qP3IMBAa1 */ }