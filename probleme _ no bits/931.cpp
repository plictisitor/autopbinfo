/* iHWAFt941 ily traian 8CZklIVMY */ #include <algorithm>
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
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ using namespace std;
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ ifstream cin("sortareunghi.in");
/* iHWAFt941 ily traian 8CZklIVMY */ ofstream cout("sortareunghi.out");
/* iHWAFt941 ily traian 8CZklIVMY */ struct elem
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     int x , y;
/* iHWAFt941 ily traian 8CZklIVMY */ } ;
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ int dist(elem a)
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     return a.x * a.x + a.y * a.y;
/* iHWAFt941 ily traian 8CZklIVMY */ }
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ void citire(elem a[] , int &n)
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     cin >> n;
/* iHWAFt941 ily traian 8CZklIVMY */     for(int i = 1 ; i <= n ; i++)
/* iHWAFt941 ily traian 8CZklIVMY */         cin >> a[i].x >> a[i].y;
/* iHWAFt941 ily traian 8CZklIVMY */ }
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ void afisare(elem a[] , int n)
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     for(int i = 1 ; i <= n ; i++)
/* iHWAFt941 ily traian 8CZklIVMY */         cout << a[i].x << ' ' << a[i].y << '\n';
/* iHWAFt941 ily traian 8CZklIVMY */ }
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ double unghi(elem a)
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     if(a.x > 0 && a.y > 0) return 1.0 * a.y / a.x;
/* iHWAFt941 ily traian 8CZklIVMY */     if(a.x < 0 && a.y > 0) return 10000 + 1.0 * (-a.x) / a.y;
/* iHWAFt941 ily traian 8CZklIVMY */     if(a.x < 0 && a.y < 0) return 20000 + 1.0 * a.y / a.x;
/* iHWAFt941 ily traian 8CZklIVMY */     if(a.x > 0 && a.y < 0) return 30000 + 1.0 * a.x / (-a.y);
/* iHWAFt941 ily traian 8CZklIVMY */     if(a.x == 0) if(a.y > 0) return 10000;
/* iHWAFt941 ily traian 8CZklIVMY */                     else return 30000;
/* iHWAFt941 ily traian 8CZklIVMY */     else if(a.y == 0) if(a.x > 0) return 0;
/* iHWAFt941 ily traian 8CZklIVMY */     else return 20000;
/* iHWAFt941 ily traian 8CZklIVMY */ }
/* iHWAFt941 ily traian 8CZklIVMY */ 
/* iHWAFt941 ily traian 8CZklIVMY */ int comp(elem a , elem b)
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     return unghi(a) < unghi(b) || (unghi(a) == unghi(b) && dist(a) < dist(b));
/* iHWAFt941 ily traian 8CZklIVMY */ }
/* iHWAFt941 ily traian 8CZklIVMY */ int main()
/* iHWAFt941 ily traian 8CZklIVMY */ {
/* iHWAFt941 ily traian 8CZklIVMY */     elem a[1001];
/* iHWAFt941 ily traian 8CZklIVMY */     int n;
/* iHWAFt941 ily traian 8CZklIVMY */     citire(a , n);
/* iHWAFt941 ily traian 8CZklIVMY */     sort(a + 1 , a + n + 1 , comp);
/* iHWAFt941 ily traian 8CZklIVMY */     afisare(a , n);
/* iHWAFt941 ily traian 8CZklIVMY */     return 0;
/* iHWAFt941 ily traian 8CZklIVMY */ }