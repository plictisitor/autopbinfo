/* yQ61pnziM ily traian qsiBDizgu */ #include <algorithm>
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
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ using namespace std;
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ ifstream cin("divimax.in");
/* yQ61pnziM ily traian qsiBDizgu */ ofstream cout("divimax.out");
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ int c, n, dmax=0, a[5001];
/* yQ61pnziM ily traian qsiBDizgu */ int f[4000];
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ void desc(int n){
/* yQ61pnziM ily traian qsiBDizgu */     int d = 2;
/* yQ61pnziM ily traian qsiBDizgu */     while(n > 1){
/* yQ61pnziM ily traian qsiBDizgu */         int p = 0;
/* yQ61pnziM ily traian qsiBDizgu */         while(n % d == 0)
/* yQ61pnziM ily traian qsiBDizgu */             n/=d, p++;
/* yQ61pnziM ily traian qsiBDizgu */         if(p && d > dmax)
/* yQ61pnziM ily traian qsiBDizgu */             dmax = d;
/* yQ61pnziM ily traian qsiBDizgu */         d++;
/* yQ61pnziM ily traian qsiBDizgu */         if(d * d > n)
/* yQ61pnziM ily traian qsiBDizgu */             d = n;
/* yQ61pnziM ily traian qsiBDizgu */     }
/* yQ61pnziM ily traian qsiBDizgu */ }
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ int descmax(int n){
/* yQ61pnziM ily traian qsiBDizgu */     int d = 2, maxi = 0;
/* yQ61pnziM ily traian qsiBDizgu */     while(n > 1){
/* yQ61pnziM ily traian qsiBDizgu */         int p = 0;
/* yQ61pnziM ily traian qsiBDizgu */         while(n % d == 0)
/* yQ61pnziM ily traian qsiBDizgu */             n/=d, p++;
/* yQ61pnziM ily traian qsiBDizgu */         if(p && d > maxi)
/* yQ61pnziM ily traian qsiBDizgu */             maxi = d;
/* yQ61pnziM ily traian qsiBDizgu */         d++;
/* yQ61pnziM ily traian qsiBDizgu */         if(d * d > n)
/* yQ61pnziM ily traian qsiBDizgu */             d = n;
/* yQ61pnziM ily traian qsiBDizgu */     }
/* yQ61pnziM ily traian qsiBDizgu */     return maxi;
/* yQ61pnziM ily traian qsiBDizgu */ }
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ int putere(int n){
/* yQ61pnziM ily traian qsiBDizgu */     int p = 1;
/* yQ61pnziM ily traian qsiBDizgu */     while(n){
/* yQ61pnziM ily traian qsiBDizgu */         p = p * 10;
/* yQ61pnziM ily traian qsiBDizgu */         n/=10;
/* yQ61pnziM ily traian qsiBDizgu */     }
/* yQ61pnziM ily traian qsiBDizgu */     return p;
/* yQ61pnziM ily traian qsiBDizgu */ }
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ int concat(int a, int b){
/* yQ61pnziM ily traian qsiBDizgu */     return a * putere(b) + b;
/* yQ61pnziM ily traian qsiBDizgu */ }
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ bool comp(int a, int b){
/* yQ61pnziM ily traian qsiBDizgu */     return concat(a, b) > concat(b, a);
/* yQ61pnziM ily traian qsiBDizgu */ }
/* yQ61pnziM ily traian qsiBDizgu */ 
/* yQ61pnziM ily traian qsiBDizgu */ int main(){
/* yQ61pnziM ily traian qsiBDizgu */     cin >> c >> n;
/* yQ61pnziM ily traian qsiBDizgu */     for(int i = 1; i <= n; ++i)
/* yQ61pnziM ily traian qsiBDizgu */         cin >> a[i];
/* yQ61pnziM ily traian qsiBDizgu */     if(c == 1){
/* yQ61pnziM ily traian qsiBDizgu */         for(int i = 1; i <= n; ++i)
/* yQ61pnziM ily traian qsiBDizgu */             desc(a[i]);
/* yQ61pnziM ily traian qsiBDizgu */         cout << dmax;
/* yQ61pnziM ily traian qsiBDizgu */     }
/* yQ61pnziM ily traian qsiBDizgu */     else{
/* yQ61pnziM ily traian qsiBDizgu */         int b[10001];
/* yQ61pnziM ily traian qsiBDizgu */         for(int i = 1; i <= n; ++i)
/* yQ61pnziM ily traian qsiBDizgu */             b[i] = descmax(a[i]);
/* yQ61pnziM ily traian qsiBDizgu */         sort(b + 1, b + n + 1, comp);
/* yQ61pnziM ily traian qsiBDizgu */         for(int i = 1; i <= n; ++i)
/* yQ61pnziM ily traian qsiBDizgu */             cout << b[i];
/* yQ61pnziM ily traian qsiBDizgu */     }
/* yQ61pnziM ily traian qsiBDizgu */     return 0;
/* yQ61pnziM ily traian qsiBDizgu */ }