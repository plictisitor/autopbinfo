/* 8zLXSgeaq ily traian qAien2xB8 */ #include <algorithm>
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
/* 8zLXSgeaq ily traian qAien2xB8 */ 
/* 8zLXSgeaq ily traian qAien2xB8 */ using namespace std;
/* 8zLXSgeaq ily traian qAien2xB8 */ 
/* 8zLXSgeaq ily traian qAien2xB8 */ ifstream cin("gradinita.in");
/* 8zLXSgeaq ily traian qAien2xB8 */ ofstream cout("gradinita.out");
/* 8zLXSgeaq ily traian qAien2xB8 */ 
/* 8zLXSgeaq ily traian qAien2xB8 */ int n , a[100001] , x , cnt , t;
/* 8zLXSgeaq ily traian qAien2xB8 */ 
/* 8zLXSgeaq ily traian qAien2xB8 */ int prim(int n)
/* 8zLXSgeaq ily traian qAien2xB8 */ {
/* 8zLXSgeaq ily traian qAien2xB8 */     if(n == 0 || n == 1) return 0;
/* 8zLXSgeaq ily traian qAien2xB8 */     if(n == 2) return 1;
/* 8zLXSgeaq ily traian qAien2xB8 */     if(n % 2 == 0) return 0;
/* 8zLXSgeaq ily traian qAien2xB8 */     for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
/* 8zLXSgeaq ily traian qAien2xB8 */     return 1;
/* 8zLXSgeaq ily traian qAien2xB8 */ }
/* 8zLXSgeaq ily traian qAien2xB8 */ int nrcif(int n)
/* 8zLXSgeaq ily traian qAien2xB8 */ {
/* 8zLXSgeaq ily traian qAien2xB8 */     int c = 0;
/* 8zLXSgeaq ily traian qAien2xB8 */     while(n != 0)
/* 8zLXSgeaq ily traian qAien2xB8 */     {
/* 8zLXSgeaq ily traian qAien2xB8 */         c++;
/* 8zLXSgeaq ily traian qAien2xB8 */         n /= 10;
/* 8zLXSgeaq ily traian qAien2xB8 */     }
/* 8zLXSgeaq ily traian qAien2xB8 */     return c;
/* 8zLXSgeaq ily traian qAien2xB8 */ }
/* 8zLXSgeaq ily traian qAien2xB8 */ 
/* 8zLXSgeaq ily traian qAien2xB8 */ int sumcifimp(int n)
/* 8zLXSgeaq ily traian qAien2xB8 */ {
/* 8zLXSgeaq ily traian qAien2xB8 */     if(nrcif(n) % 2 == 0)
/* 8zLXSgeaq ily traian qAien2xB8 */         n /= 10;
/* 8zLXSgeaq ily traian qAien2xB8 */     int sum = 0;
/* 8zLXSgeaq ily traian qAien2xB8 */     while(n != 0)
/* 8zLXSgeaq ily traian qAien2xB8 */     {
/* 8zLXSgeaq ily traian qAien2xB8 */         sum += n % 10;
/* 8zLXSgeaq ily traian qAien2xB8 */         n /= 100;
/* 8zLXSgeaq ily traian qAien2xB8 */     }
/* 8zLXSgeaq ily traian qAien2xB8 */     return sum;
/* 8zLXSgeaq ily traian qAien2xB8 */ }
/* 8zLXSgeaq ily traian qAien2xB8 */ 
/* 8zLXSgeaq ily traian qAien2xB8 */ int main()
/* 8zLXSgeaq ily traian qAien2xB8 */ {
/* 8zLXSgeaq ily traian qAien2xB8 */     cin >> n >> t;
/* 8zLXSgeaq ily traian qAien2xB8 */     for(int i = 1 ; i <= n ; i++)
/* 8zLXSgeaq ily traian qAien2xB8 */     {
/* 8zLXSgeaq ily traian qAien2xB8 */         cin >> x;
/* 8zLXSgeaq ily traian qAien2xB8 */         if(!prim(x) && !prim(sumcifimp(x))) a[++cnt] = x;
/* 8zLXSgeaq ily traian qAien2xB8 */     }
/* 8zLXSgeaq ily traian qAien2xB8 */     if(cnt != 0)
/* 8zLXSgeaq ily traian qAien2xB8 */     {
/* 8zLXSgeaq ily traian qAien2xB8 */         for(int i = 1 ; i <= cnt ; i++)
/* 8zLXSgeaq ily traian qAien2xB8 */             if(i % t != 0) cout << a[i] << " ";
/* 8zLXSgeaq ily traian qAien2xB8 */     }
/* 8zLXSgeaq ily traian qAien2xB8 */     if(cnt == 0 || t == 1) cout << "Toti copiii sunt obraznici!";
/* 8zLXSgeaq ily traian qAien2xB8 */ }