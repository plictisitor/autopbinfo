/* l2youcyQU ily traian IofKlHucE */ #include <algorithm>
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
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ using namespace std;
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ ifstream cin("reteta1.in");
/* l2youcyQU ily traian IofKlHucE */ ofstream cout("reteta1.out");
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ int n , m , A[21] , X[21];
/* l2youcyQU ily traian IofKlHucE */ double mini = 10000001;
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ struct poz
/* l2youcyQU ily traian IofKlHucE */ {
/* l2youcyQU ily traian IofKlHucE */     int c , n , a[21];
/* l2youcyQU ily traian IofKlHucE */     double val;
/* l2youcyQU ily traian IofKlHucE */ }r[21];
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ int afisare(int k)
/* l2youcyQU ily traian IofKlHucE */ {
/* l2youcyQU ily traian IofKlHucE */     for(int i = 1 ; i <= k ; i++)
/* l2youcyQU ily traian IofKlHucE */         cout << X[i] << " ";
/* l2youcyQU ily traian IofKlHucE */     cout << '\n';
/* l2youcyQU ily traian IofKlHucE */ }
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ void alegemin(int k)
/* l2youcyQU ily traian IofKlHucE */ {
/* l2youcyQU ily traian IofKlHucE */     /*for(int i = 1 ; i <= k ; i++)
/* l2youcyQU ily traian IofKlHucE */         cout << X[i] << " ";
/* l2youcyQU ily traian IofKlHucE */     cout << endl;*/
/* l2youcyQU ily traian IofKlHucE */     double v = 0;
/* l2youcyQU ily traian IofKlHucE */     int ok = 0 , f[21] = {0};
/* l2youcyQU ily traian IofKlHucE */     for(int i = 1 ; i <= k ; i++)
/* l2youcyQU ily traian IofKlHucE */     {
/* l2youcyQU ily traian IofKlHucE */         v += r[X[i]].val;
/* l2youcyQU ily traian IofKlHucE */         for(int j = 1 ; j <= r[X[i]].n ; j++)
/* l2youcyQU ily traian IofKlHucE */             f[r[X[i]].a[j]]++;
/* l2youcyQU ily traian IofKlHucE */     }
/* l2youcyQU ily traian IofKlHucE */     /*for(int j = 1 ; j <= n ; j++)
/* l2youcyQU ily traian IofKlHucE */         cout << f[j] << " ";
/* l2youcyQU ily traian IofKlHucE */     cout << endl;*/
/* l2youcyQU ily traian IofKlHucE */     for(int j = 1 ; j <= n ; j++)
/* l2youcyQU ily traian IofKlHucE */         if(f[j] != 1) ok = 1;
/* l2youcyQU ily traian IofKlHucE */     if(ok == 0 && v < mini) mini = v;
/* l2youcyQU ily traian IofKlHucE */ }
/* l2youcyQU ily traian IofKlHucE */ void back(int k)
/* l2youcyQU ily traian IofKlHucE */ {
/* l2youcyQU ily traian IofKlHucE */     for(int i = X[k - 1] + 1 ; i <= m ; i++)
/* l2youcyQU ily traian IofKlHucE */     {
/* l2youcyQU ily traian IofKlHucE */         X[k] = i;
/* l2youcyQU ily traian IofKlHucE */         alegemin(k);
/* l2youcyQU ily traian IofKlHucE */         back(k + 1);
/* l2youcyQU ily traian IofKlHucE */     }
/* l2youcyQU ily traian IofKlHucE */ }
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */ int main()
/* l2youcyQU ily traian IofKlHucE */ {
/* l2youcyQU ily traian IofKlHucE */     cin >> n >> m;
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */     for(int i = 1 ; i <= m ; i++)
/* l2youcyQU ily traian IofKlHucE */     {
/* l2youcyQU ily traian IofKlHucE */         cin >> r[i].c >> r[i].n;
/* l2youcyQU ily traian IofKlHucE */         for(int j = 1 ; j <= r[i].n ; j++)
/* l2youcyQU ily traian IofKlHucE */             cin >> r[i].a[j];
/* l2youcyQU ily traian IofKlHucE */     }
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */     for(int i = 1 ; i <= n ; i++)
/* l2youcyQU ily traian IofKlHucE */         cin >> A[i];
/* l2youcyQU ily traian IofKlHucE */ 
/* l2youcyQU ily traian IofKlHucE */     for(int i = 1 ; i <= m ; i++)
/* l2youcyQU ily traian IofKlHucE */     {
/* l2youcyQU ily traian IofKlHucE */         r[i].val = 0;
/* l2youcyQU ily traian IofKlHucE */         for(int j = 1 ; j <= r[i].n ; j++)
/* l2youcyQU ily traian IofKlHucE */             if(r[i].c == 1)
/* l2youcyQU ily traian IofKlHucE */                 r[i].val += A[r[i].a[j]];
/* l2youcyQU ily traian IofKlHucE */             else
/* l2youcyQU ily traian IofKlHucE */                 r[i].val += A[r[i].a[j]] / 2.0;
/* l2youcyQU ily traian IofKlHucE */     }
/* l2youcyQU ily traian IofKlHucE */     back(1);
/* l2youcyQU ily traian IofKlHucE */     cout << fixed << setprecision(1) << mini;
/* l2youcyQU ily traian IofKlHucE */ }