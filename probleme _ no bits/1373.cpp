/* CFNhZtDt2 ily traian NOMP9fDxt */ #include <algorithm>
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
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */ using namespace std;
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */ ifstream cin("reactivi.in");
/* CFNhZtDt2 ily traian NOMP9fDxt */ ofstream cout("reactivi.out");
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */ struct elem
/* CFNhZtDt2 ily traian NOMP9fDxt */ {
/* CFNhZtDt2 ily traian NOMP9fDxt */     int i , j;
/* CFNhZtDt2 ily traian NOMP9fDxt */ };
/* CFNhZtDt2 ily traian NOMP9fDxt */ elem a[8002];
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */ int comp(elem a , elem b)
/* CFNhZtDt2 ily traian NOMP9fDxt */ {
/* CFNhZtDt2 ily traian NOMP9fDxt */     return a.j > b.j || a.j == b.j && a.i < b.i;
/* CFNhZtDt2 ily traian NOMP9fDxt */ }
/* CFNhZtDt2 ily traian NOMP9fDxt */ int n , nr, fr[8002];
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */ int main()
/* CFNhZtDt2 ily traian NOMP9fDxt */ {
/* CFNhZtDt2 ily traian NOMP9fDxt */     cin >> n;
/* CFNhZtDt2 ily traian NOMP9fDxt */     for(int i = 1 ; i <= n ; i++)
/* CFNhZtDt2 ily traian NOMP9fDxt */     {
/* CFNhZtDt2 ily traian NOMP9fDxt */         cin >> a[i].i >> a[i].j;
/* CFNhZtDt2 ily traian NOMP9fDxt */         fr[i] = 1;
/* CFNhZtDt2 ily traian NOMP9fDxt */     }
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */     sort(a + 1 , a+ n + 1 , comp);
/* CFNhZtDt2 ily traian NOMP9fDxt */ 
/* CFNhZtDt2 ily traian NOMP9fDxt */     for(int i = 1; i <= n - 1 ; i++)
/* CFNhZtDt2 ily traian NOMP9fDxt */       for(int j = i + 1 ; j <= n ; j++)
/* CFNhZtDt2 ily traian NOMP9fDxt */              if(fr[i] != 0 && fr[j] != 0)
/* CFNhZtDt2 ily traian NOMP9fDxt */                     if(a[i].j >= a[j].i && a[j].j >= a[i].i)
/* CFNhZtDt2 ily traian NOMP9fDxt */                     {
/* CFNhZtDt2 ily traian NOMP9fDxt */                         if(a[i].i < a[j].i) a[i].i = a[j].i;
/* CFNhZtDt2 ily traian NOMP9fDxt */                         if(a[i].j > a[j].j) a[i].j = a[j].j;
/* CFNhZtDt2 ily traian NOMP9fDxt */                         fr[i]++;
/* CFNhZtDt2 ily traian NOMP9fDxt */                         fr[j] = 0;
/* CFNhZtDt2 ily traian NOMP9fDxt */                     }
/* CFNhZtDt2 ily traian NOMP9fDxt */     for(int i = 1 ; i <= n ; i++)
/* CFNhZtDt2 ily traian NOMP9fDxt */       if(fr[i] >= 1)nr++;
/* CFNhZtDt2 ily traian NOMP9fDxt */     cout << nr;
/* CFNhZtDt2 ily traian NOMP9fDxt */     return 0;
/* CFNhZtDt2 ily traian NOMP9fDxt */ }