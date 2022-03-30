/* G2NY0I4L0 ily traian yHeIP1CoC */ #include <algorithm>
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
/* G2NY0I4L0 ily traian yHeIP1CoC */ using namespace std;
/* G2NY0I4L0 ily traian yHeIP1CoC */ 
/* G2NY0I4L0 ily traian yHeIP1CoC */ ifstream cin("joc6.in");
/* G2NY0I4L0 ily traian yHeIP1CoC */ ofstream cout("joc6.out");
/* G2NY0I4L0 ily traian yHeIP1CoC */ 
/* G2NY0I4L0 ily traian yHeIP1CoC */ int n , a[160][160] , l , l1 , l2;
/* G2NY0I4L0 ily traian yHeIP1CoC */ 
/* G2NY0I4L0 ily traian yHeIP1CoC */ int main()
/* G2NY0I4L0 ily traian yHeIP1CoC */ {
/* G2NY0I4L0 ily traian yHeIP1CoC */     cin >> n;
/* G2NY0I4L0 ily traian yHeIP1CoC */     for(int i = 1 ; i <= n ; i++)
/* G2NY0I4L0 ily traian yHeIP1CoC */         for(int j = 1 ; j <= n ; j++)
/* G2NY0I4L0 ily traian yHeIP1CoC */             cin >> a[i][j];
/* G2NY0I4L0 ily traian yHeIP1CoC */     for(int i = 1 ; i <= n ; i++)
/* G2NY0I4L0 ily traian yHeIP1CoC */         if(i % 2 == 1)
/* G2NY0I4L0 ily traian yHeIP1CoC */         {
/* G2NY0I4L0 ily traian yHeIP1CoC */             int L[160] = {0} , lmax = 0;
/* G2NY0I4L0 ily traian yHeIP1CoC */             for(int j = 1 ; j <= n ; j++)
/* G2NY0I4L0 ily traian yHeIP1CoC */             {
/* G2NY0I4L0 ily traian yHeIP1CoC */                 l = 0;
/* G2NY0I4L0 ily traian yHeIP1CoC */                 for(int k = 1 ; k <= j - 1 ; k++)
/* G2NY0I4L0 ily traian yHeIP1CoC */                     if(a[i][k] <= a[i][j] && L[k] > l)
/* G2NY0I4L0 ily traian yHeIP1CoC */                         l = L[k];
/* G2NY0I4L0 ily traian yHeIP1CoC */                 L[j] = l + 1;
/* G2NY0I4L0 ily traian yHeIP1CoC */                 if(L[j] > lmax) lmax = L[j];
/* G2NY0I4L0 ily traian yHeIP1CoC */             }
/* G2NY0I4L0 ily traian yHeIP1CoC */             //cout << lmax << '\n';
/* G2NY0I4L0 ily traian yHeIP1CoC */             l1 += lmax;
/* G2NY0I4L0 ily traian yHeIP1CoC */         }
/* G2NY0I4L0 ily traian yHeIP1CoC */         else
/* G2NY0I4L0 ily traian yHeIP1CoC */             {
/* G2NY0I4L0 ily traian yHeIP1CoC */             int L[160] = {0} , lmax = 0;
/* G2NY0I4L0 ily traian yHeIP1CoC */             for(int j = 1 ; j <= n ; j++)
/* G2NY0I4L0 ily traian yHeIP1CoC */             {
/* G2NY0I4L0 ily traian yHeIP1CoC */                 l = 0;
/* G2NY0I4L0 ily traian yHeIP1CoC */                 for(int k = 1 ; k <= j - 1 ; k++)
/* G2NY0I4L0 ily traian yHeIP1CoC */                     if(a[i][k] >= a[i][j] && L[k] > l)
/* G2NY0I4L0 ily traian yHeIP1CoC */                         l = L[k];
/* G2NY0I4L0 ily traian yHeIP1CoC */                 L[j] = l + 1;
/* G2NY0I4L0 ily traian yHeIP1CoC */                 if(L[j] > lmax) lmax = L[j];
/* G2NY0I4L0 ily traian yHeIP1CoC */             }
/* G2NY0I4L0 ily traian yHeIP1CoC */             //cout << lmax << '\n';
/* G2NY0I4L0 ily traian yHeIP1CoC */             l2 += lmax;
/* G2NY0I4L0 ily traian yHeIP1CoC */         }
/* G2NY0I4L0 ily traian yHeIP1CoC */     cout << l1 << " " << l2 << '\n';
/* G2NY0I4L0 ily traian yHeIP1CoC */     if(l1 > l2) cout << "UNU";
/* G2NY0I4L0 ily traian yHeIP1CoC */     else if(l2 > l1) cout << "DOI";
/* G2NY0I4L0 ily traian yHeIP1CoC */     else cout << "REMIZA";
/* G2NY0I4L0 ily traian yHeIP1CoC */     return 0;
/* G2NY0I4L0 ily traian yHeIP1CoC */ }