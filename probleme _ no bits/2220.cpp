/* FrxsltN10 ily traian 4cg3SGLIB */ #include <algorithm>
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
/* FrxsltN10 ily traian 4cg3SGLIB */ 
/* FrxsltN10 ily traian 4cg3SGLIB */ 
/* FrxsltN10 ily traian 4cg3SGLIB */ using namespace std;
/* FrxsltN10 ily traian 4cg3SGLIB */ 
/* FrxsltN10 ily traian 4cg3SGLIB */ ifstream fin("secvente.in");
/* FrxsltN10 ily traian 4cg3SGLIB */ ofstream fout("secvente.out");
/* FrxsltN10 ily traian 4cg3SGLIB */ 
/* FrxsltN10 ily traian 4cg3SGLIB */ int main()
/* FrxsltN10 ily traian 4cg3SGLIB */ {
/* FrxsltN10 ily traian 4cg3SGLIB */     const int Inf = 0x3f3f3f3f;
/* FrxsltN10 ily traian 4cg3SGLIB */     int a[100002];  
/* FrxsltN10 ily traian 4cg3SGLIB */     int minim[100002];  
/* FrxsltN10 ily traian 4cg3SGLIB */     int maxim[100002];  
/* FrxsltN10 ily traian 4cg3SGLIB */     int n; 
/* FrxsltN10 ily traian 4cg3SGLIB */     cin >> n;
/* FrxsltN10 ily traian 4cg3SGLIB */     maxim[0] = -Inf;
/* FrxsltN10 ily traian 4cg3SGLIB */     for (int i = 1; i <= n; ++i)
/* FrxsltN10 ily traian 4cg3SGLIB */     {
/* FrxsltN10 ily traian 4cg3SGLIB */         cin >> a[i];
/* FrxsltN10 ily traian 4cg3SGLIB */         if (a[i] > maxim[i - 1])
/* FrxsltN10 ily traian 4cg3SGLIB */             maxim[i] = a[i];
/* FrxsltN10 ily traian 4cg3SGLIB */         else
/* FrxsltN10 ily traian 4cg3SGLIB */             maxim[i] = maxim[i - 1];
/* FrxsltN10 ily traian 4cg3SGLIB */     }
/* FrxsltN10 ily traian 4cg3SGLIB */     
/* FrxsltN10 ily traian 4cg3SGLIB */     minim[n + 1] = Inf;
/* FrxsltN10 ily traian 4cg3SGLIB */     for (int i = n; i >= 1; --i)
/* FrxsltN10 ily traian 4cg3SGLIB */         if (a[i] < minim[i + 1])
/* FrxsltN10 ily traian 4cg3SGLIB */             minim[i] = a[i];
/* FrxsltN10 ily traian 4cg3SGLIB */         else
/* FrxsltN10 ily traian 4cg3SGLIB */             minim[i] = minim[i + 1];        
/* FrxsltN10 ily traian 4cg3SGLIB */     int dif, dif_max = -Inf;
/* FrxsltN10 ily traian 4cg3SGLIB */     for (int i = 1; i < n; ++i)
/* FrxsltN10 ily traian 4cg3SGLIB */     {
/* FrxsltN10 ily traian 4cg3SGLIB */         dif = maxim[i] - minim[i + 1];
/* FrxsltN10 ily traian 4cg3SGLIB */         if (dif > dif_max)
/* FrxsltN10 ily traian 4cg3SGLIB */             dif_max = dif;
/* FrxsltN10 ily traian 4cg3SGLIB */     }
/* FrxsltN10 ily traian 4cg3SGLIB */     cout << dif_max;
/* FrxsltN10 ily traian 4cg3SGLIB */     
/* FrxsltN10 ily traian 4cg3SGLIB */     fin.close();
/* FrxsltN10 ily traian 4cg3SGLIB */     fout.close();
/* FrxsltN10 ily traian 4cg3SGLIB */     
/* FrxsltN10 ily traian 4cg3SGLIB */     return 0;
/* FrxsltN10 ily traian 4cg3SGLIB */ }