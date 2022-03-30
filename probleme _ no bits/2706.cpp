/* 02dBooHW6 ily traian OybpREuj1 */ #include <algorithm>
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
/* 02dBooHW6 ily traian OybpREuj1 */ 
/* 02dBooHW6 ily traian OybpREuj1 */ using namespace std;
/* 02dBooHW6 ily traian OybpREuj1 */ 
/* 02dBooHW6 ily traian OybpREuj1 */ ifstream cin("serbare2.in");
/* 02dBooHW6 ily traian OybpREuj1 */ ofstream cout("serbare2.out");
/* 02dBooHW6 ily traian OybpREuj1 */ 
/* 02dBooHW6 ily traian OybpREuj1 */ int n , k , p[20] , x[11] , a[101][101] , maxi;
/* 02dBooHW6 ily traian OybpREuj1 */ 
/* 02dBooHW6 ily traian OybpREuj1 */ int verifica(int p)
/* 02dBooHW6 ily traian OybpREuj1 */ {
/* 02dBooHW6 ily traian OybpREuj1 */     for(int i = 1 ; i < p ; i++)
/* 02dBooHW6 ily traian OybpREuj1 */             if(a[x[i]][x[p]] == 0) return 0;
/* 02dBooHW6 ily traian OybpREuj1 */     return 1;
/* 02dBooHW6 ily traian OybpREuj1 */ }
/* 02dBooHW6 ily traian OybpREuj1 */ 
/* 02dBooHW6 ily traian OybpREuj1 */ void back(int p)
/* 02dBooHW6 ily traian OybpREuj1 */ {
/* 02dBooHW6 ily traian OybpREuj1 */     for(int i = x[p - 1] + 1 ; i <= n && maxi <= k; i++)
/* 02dBooHW6 ily traian OybpREuj1 */     {
/* 02dBooHW6 ily traian OybpREuj1 */         x[p] = i;
/* 02dBooHW6 ily traian OybpREuj1 */         if(verifica(p))
/* 02dBooHW6 ily traian OybpREuj1 */         {
/* 02dBooHW6 ily traian OybpREuj1 */             if(p > maxi) maxi = p;
/* 02dBooHW6 ily traian OybpREuj1 */             back(p + 1);
/* 02dBooHW6 ily traian OybpREuj1 */         }
/* 02dBooHW6 ily traian OybpREuj1 */     }
/* 02dBooHW6 ily traian OybpREuj1 */ }
/* 02dBooHW6 ily traian OybpREuj1 */ 
/* 02dBooHW6 ily traian OybpREuj1 */ int main()
/* 02dBooHW6 ily traian OybpREuj1 */ {
/* 02dBooHW6 ily traian OybpREuj1 */     cin >> n >> k;
/* 02dBooHW6 ily traian OybpREuj1 */     for(int i = 1 ; i <= n ; i++)
/* 02dBooHW6 ily traian OybpREuj1 */         for(int j = 1 ; j <= n ; j++)
/* 02dBooHW6 ily traian OybpREuj1 */             cin >> a[i][j];
/* 02dBooHW6 ily traian OybpREuj1 */     back(1);
/* 02dBooHW6 ily traian OybpREuj1 */     cout << maxi;
/* 02dBooHW6 ily traian OybpREuj1 */ }