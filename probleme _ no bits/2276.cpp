/* QvGrJtSn9 ily traian gEkuS3e82 */ #include <algorithm>
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
/* QvGrJtSn9 ily traian gEkuS3e82 */ 
/* QvGrJtSn9 ily traian gEkuS3e82 */ using namespace std;
/* QvGrJtSn9 ily traian gEkuS3e82 */ 
/* QvGrJtSn9 ily traian gEkuS3e82 */ const int MaxN = 200001;
/* QvGrJtSn9 ily traian gEkuS3e82 */ int a[MaxN], n, T;
/* QvGrJtSn9 ily traian gEkuS3e82 */ 
/* QvGrJtSn9 ily traian gEkuS3e82 */ int BsMax(int y); // ret poz celui mai mare numar din sirul a[] mai mic sau egal cu y
/* QvGrJtSn9 ily traian gEkuS3e82 */ int BsMin(int x); // ret poz celui mai mic numar din sirul a[], mai mare sau egal cu x
/* QvGrJtSn9 ily traian gEkuS3e82 */ 
/* QvGrJtSn9 ily traian gEkuS3e82 */ int main()
/* QvGrJtSn9 ily traian gEkuS3e82 */ {
/* QvGrJtSn9 ily traian gEkuS3e82 */     cin >> n >> T;
/* QvGrJtSn9 ily traian gEkuS3e82 */     for (int i = 0; i < n; ++i)
/* QvGrJtSn9 ily traian gEkuS3e82 */         cin >> a[i];
/* QvGrJtSn9 ily traian gEkuS3e82 */         
/* QvGrJtSn9 ily traian gEkuS3e82 */     sort(a, a + n);
/* QvGrJtSn9 ily traian gEkuS3e82 */     int x, y, cnt;
/* QvGrJtSn9 ily traian gEkuS3e82 */     
/* QvGrJtSn9 ily traian gEkuS3e82 */     for (int i = 1; i <= T; ++i)
/* QvGrJtSn9 ily traian gEkuS3e82 */     {
/* QvGrJtSn9 ily traian gEkuS3e82 */         cin >> x >> y;
/* QvGrJtSn9 ily traian gEkuS3e82 */         int p2 = BsMax(y);
/* QvGrJtSn9 ily traian gEkuS3e82 */         int p1 = BsMin(x);
/* QvGrJtSn9 ily traian gEkuS3e82 */         if (p1 == -1)
/* QvGrJtSn9 ily traian gEkuS3e82 */             cout << 0 << '\n';
/* QvGrJtSn9 ily traian gEkuS3e82 */         else
/* QvGrJtSn9 ily traian gEkuS3e82 */             cout << p2 - p1 + 1 <<  '\n';
/* QvGrJtSn9 ily traian gEkuS3e82 */         
/* QvGrJtSn9 ily traian gEkuS3e82 */     }
/* QvGrJtSn9 ily traian gEkuS3e82 */     
/* QvGrJtSn9 ily traian gEkuS3e82 */ }
/* QvGrJtSn9 ily traian gEkuS3e82 */ 
/* QvGrJtSn9 ily traian gEkuS3e82 */ int BsMin(int v)
/* QvGrJtSn9 ily traian gEkuS3e82 */ {
/* QvGrJtSn9 ily traian gEkuS3e82 */     int l = 0, r = n - 1, m;
/* QvGrJtSn9 ily traian gEkuS3e82 */     int poz = -1;
/* QvGrJtSn9 ily traian gEkuS3e82 */     while (l <= r)
/* QvGrJtSn9 ily traian gEkuS3e82 */     {
/* QvGrJtSn9 ily traian gEkuS3e82 */         m = (l + r) / 2;
/* QvGrJtSn9 ily traian gEkuS3e82 */         if (a[m] >= v)
/* QvGrJtSn9 ily traian gEkuS3e82 */         {
/* QvGrJtSn9 ily traian gEkuS3e82 */             poz = m;
/* QvGrJtSn9 ily traian gEkuS3e82 */             r = m - 1;
/* QvGrJtSn9 ily traian gEkuS3e82 */         }
/* QvGrJtSn9 ily traian gEkuS3e82 */         else
/* QvGrJtSn9 ily traian gEkuS3e82 */             l = m + 1;
/* QvGrJtSn9 ily traian gEkuS3e82 */     }
/* QvGrJtSn9 ily traian gEkuS3e82 */     return poz;
/* QvGrJtSn9 ily traian gEkuS3e82 */ }
/* QvGrJtSn9 ily traian gEkuS3e82 */ 
/* QvGrJtSn9 ily traian gEkuS3e82 */ int BsMax(int v)
/* QvGrJtSn9 ily traian gEkuS3e82 */ {
/* QvGrJtSn9 ily traian gEkuS3e82 */     int l = 0, r = n - 1, m;
/* QvGrJtSn9 ily traian gEkuS3e82 */     int poz = -1;
/* QvGrJtSn9 ily traian gEkuS3e82 */     while (l <= r)
/* QvGrJtSn9 ily traian gEkuS3e82 */     {
/* QvGrJtSn9 ily traian gEkuS3e82 */         m = (l + r) / 2;
/* QvGrJtSn9 ily traian gEkuS3e82 */         if (a[m] <= v)
/* QvGrJtSn9 ily traian gEkuS3e82 */         {
/* QvGrJtSn9 ily traian gEkuS3e82 */             poz = m;
/* QvGrJtSn9 ily traian gEkuS3e82 */             l = m + 1;
/* QvGrJtSn9 ily traian gEkuS3e82 */         }
/* QvGrJtSn9 ily traian gEkuS3e82 */         else
/* QvGrJtSn9 ily traian gEkuS3e82 */             r = m - 1;
/* QvGrJtSn9 ily traian gEkuS3e82 */     }
/* QvGrJtSn9 ily traian gEkuS3e82 */     return poz;
/* QvGrJtSn9 ily traian gEkuS3e82 */ }