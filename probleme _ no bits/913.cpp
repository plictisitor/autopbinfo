/* RtPlzghbJ ily traian qIbIsDLdi */ #include <algorithm>
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
/* RtPlzghbJ ily traian qIbIsDLdi */ using namespace std;
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */ void citire(int& n, int a[]){
/* RtPlzghbJ ily traian qIbIsDLdi */     cin >> n;
/* RtPlzghbJ ily traian qIbIsDLdi */     for(int i = 1; i <= n; ++i)
/* RtPlzghbJ ily traian qIbIsDLdi */         cin >> a[i];
/* RtPlzghbJ ily traian qIbIsDLdi */ }
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */ bool prim(int n){
/* RtPlzghbJ ily traian qIbIsDLdi */     int cnt = 1;
/* RtPlzghbJ ily traian qIbIsDLdi */     int d = 2;
/* RtPlzghbJ ily traian qIbIsDLdi */     while(n > 1){
/* RtPlzghbJ ily traian qIbIsDLdi */         int p = 0;
/* RtPlzghbJ ily traian qIbIsDLdi */         while(n % d == 0)
/* RtPlzghbJ ily traian qIbIsDLdi */             n/=d, p++;
/* RtPlzghbJ ily traian qIbIsDLdi */         cnt *= (p + 1);
/* RtPlzghbJ ily traian qIbIsDLdi */         d++;
/* RtPlzghbJ ily traian qIbIsDLdi */         if(d * d > n)
/* RtPlzghbJ ily traian qIbIsDLdi */             d = n;
/* RtPlzghbJ ily traian qIbIsDLdi */     }
/* RtPlzghbJ ily traian qIbIsDLdi */     return cnt == 2;
/* RtPlzghbJ ily traian qIbIsDLdi */ }
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */ int urmatorul_prim(int n){
/* RtPlzghbJ ily traian qIbIsDLdi */     if(n == 0 || n == 1)
/* RtPlzghbJ ily traian qIbIsDLdi */         return 2;
/* RtPlzghbJ ily traian qIbIsDLdi */     if(n % 2 == 0)
/* RtPlzghbJ ily traian qIbIsDLdi */         n++;
/* RtPlzghbJ ily traian qIbIsDLdi */     while(!prim(n))
/* RtPlzghbJ ily traian qIbIsDLdi */         n+=2;
/* RtPlzghbJ ily traian qIbIsDLdi */     return n;
/* RtPlzghbJ ily traian qIbIsDLdi */ }
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */ void inloc(int a[], int i, int nr){
/* RtPlzghbJ ily traian qIbIsDLdi */     a[i] = nr;
/* RtPlzghbJ ily traian qIbIsDLdi */ }
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */ void afisare(int n, int a[]){
/* RtPlzghbJ ily traian qIbIsDLdi */     for(int i = 1; i <= n; ++i)
/* RtPlzghbJ ily traian qIbIsDLdi */         cout << a[i] << " ";
/* RtPlzghbJ ily traian qIbIsDLdi */ }
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */ int main()
/* RtPlzghbJ ily traian qIbIsDLdi */ {
/* RtPlzghbJ ily traian qIbIsDLdi */     int n, a[1001];
/* RtPlzghbJ ily traian qIbIsDLdi */     citire(n, a);
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */     for(int i = 1; i <= n; ++i){
/* RtPlzghbJ ily traian qIbIsDLdi */         if(!prim(a[i]))
/* RtPlzghbJ ily traian qIbIsDLdi */             inloc(a, i, urmatorul_prim(a[i]));
/* RtPlzghbJ ily traian qIbIsDLdi */     }
/* RtPlzghbJ ily traian qIbIsDLdi */ 
/* RtPlzghbJ ily traian qIbIsDLdi */     afisare(n, a);
/* RtPlzghbJ ily traian qIbIsDLdi */     return 0;
/* RtPlzghbJ ily traian qIbIsDLdi */ }