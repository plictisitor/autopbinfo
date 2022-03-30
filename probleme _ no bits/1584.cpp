/* 5IOFhylvI ily traian qmsCRwhw9 */ #include <algorithm>
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
/* 5IOFhylvI ily traian qmsCRwhw9 */ using namespace std;
/* 5IOFhylvI ily traian qmsCRwhw9 */ ifstream cin("spirala2.in");
/* 5IOFhylvI ily traian qmsCRwhw9 */ ofstream cout("spirala2.out");
/* 5IOFhylvI ily traian qmsCRwhw9 */ int a[501][501] , n , k , cer;
/* 5IOFhylvI ily traian qmsCRwhw9 */ int inside(int i , int j)
/* 5IOFhylvI ily traian qmsCRwhw9 */ {
/* 5IOFhylvI ily traian qmsCRwhw9 */     return i <= n && i >= 1 && j <= n && j >= 1;
/* 5IOFhylvI ily traian qmsCRwhw9 */ }
/* 5IOFhylvI ily traian qmsCRwhw9 */ int main()
/* 5IOFhylvI ily traian qmsCRwhw9 */ {
/* 5IOFhylvI ily traian qmsCRwhw9 */     cin >> cer >> n >> k;
/* 5IOFhylvI ily traian qmsCRwhw9 */     int l = n * n;
/* 5IOFhylvI ily traian qmsCRwhw9 */     int i = 1 , j = 1 , ind = 1;
/* 5IOFhylvI ily traian qmsCRwhw9 */     while(l)
/* 5IOFhylvI ily traian qmsCRwhw9 */     {
/* 5IOFhylvI ily traian qmsCRwhw9 */         while(a[i][j] == 0 && l && inside(i , j))
/* 5IOFhylvI ily traian qmsCRwhw9 */         {
/* 5IOFhylvI ily traian qmsCRwhw9 */             a[i][j] = ind;
/* 5IOFhylvI ily traian qmsCRwhw9 */             j++;
/* 5IOFhylvI ily traian qmsCRwhw9 */             ind++;
/* 5IOFhylvI ily traian qmsCRwhw9 */             l--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         }
/* 5IOFhylvI ily traian qmsCRwhw9 */         j--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         i++;
/* 5IOFhylvI ily traian qmsCRwhw9 */         while(a[i][j] == 0 && l && inside(i , j))
/* 5IOFhylvI ily traian qmsCRwhw9 */         {
/* 5IOFhylvI ily traian qmsCRwhw9 */             a[i][j] = ind;
/* 5IOFhylvI ily traian qmsCRwhw9 */             i++;
/* 5IOFhylvI ily traian qmsCRwhw9 */             ind++;
/* 5IOFhylvI ily traian qmsCRwhw9 */             l--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         }
/* 5IOFhylvI ily traian qmsCRwhw9 */         i--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         j--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         while(a[i][j] == 0 && l && inside(i , j))
/* 5IOFhylvI ily traian qmsCRwhw9 */         {
/* 5IOFhylvI ily traian qmsCRwhw9 */             a[i][j] = ind;
/* 5IOFhylvI ily traian qmsCRwhw9 */             j--;
/* 5IOFhylvI ily traian qmsCRwhw9 */             ind++;
/* 5IOFhylvI ily traian qmsCRwhw9 */             l--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         }
/* 5IOFhylvI ily traian qmsCRwhw9 */         j++;
/* 5IOFhylvI ily traian qmsCRwhw9 */         i--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         while(a[i][j] == 0 && l  && inside(i , j))
/* 5IOFhylvI ily traian qmsCRwhw9 */         {
/* 5IOFhylvI ily traian qmsCRwhw9 */             a[i][j] = ind;
/* 5IOFhylvI ily traian qmsCRwhw9 */             i--;
/* 5IOFhylvI ily traian qmsCRwhw9 */             ind++;
/* 5IOFhylvI ily traian qmsCRwhw9 */             l--;
/* 5IOFhylvI ily traian qmsCRwhw9 */         }
/* 5IOFhylvI ily traian qmsCRwhw9 */         j++;
/* 5IOFhylvI ily traian qmsCRwhw9 */         i++;
/* 5IOFhylvI ily traian qmsCRwhw9 */     }
/* 5IOFhylvI ily traian qmsCRwhw9 */     if(cer == 1)
/* 5IOFhylvI ily traian qmsCRwhw9 */     {
/* 5IOFhylvI ily traian qmsCRwhw9 */         long long sum = 0;
/* 5IOFhylvI ily traian qmsCRwhw9 */         for(int s = 1 ; s <= n ; s++)
/* 5IOFhylvI ily traian qmsCRwhw9 */              if(s != k)
/* 5IOFhylvI ily traian qmsCRwhw9 */                 sum = sum + (a[s][k] % 100003) + (a[k][s] % 100003);
/* 5IOFhylvI ily traian qmsCRwhw9 */         cout << sum;
/* 5IOFhylvI ily traian qmsCRwhw9 */     }
/* 5IOFhylvI ily traian qmsCRwhw9 */     else if(cer == 2)
/* 5IOFhylvI ily traian qmsCRwhw9 */     {
/* 5IOFhylvI ily traian qmsCRwhw9 */         for(int s = 1 ; s <= n ; s++)
/* 5IOFhylvI ily traian qmsCRwhw9 */             swap(a[s][k] , a[k][s]);
/* 5IOFhylvI ily traian qmsCRwhw9 */         for(int s = 1 ; s <= n ; s++)
/* 5IOFhylvI ily traian qmsCRwhw9 */         {
/* 5IOFhylvI ily traian qmsCRwhw9 */             for(int p = 1 ;  p <= n ; p++)
/* 5IOFhylvI ily traian qmsCRwhw9 */                 cout << a[s][p] << " ";
/* 5IOFhylvI ily traian qmsCRwhw9 */             cout << '\n';
/* 5IOFhylvI ily traian qmsCRwhw9 */         }
/* 5IOFhylvI ily traian qmsCRwhw9 */     }
/* 5IOFhylvI ily traian qmsCRwhw9 */ 
/* 5IOFhylvI ily traian qmsCRwhw9 */     return 0;
/* 5IOFhylvI ily traian qmsCRwhw9 */ }