/* Fi0RH7BIV ily traian 8ACiP1KGF */ #include <algorithm>
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
/* Fi0RH7BIV ily traian 8ACiP1KGF */ using namespace std;
/* Fi0RH7BIV ily traian 8ACiP1KGF */ 
/* Fi0RH7BIV ily traian 8ACiP1KGF */ ifstream cin("plata.in");
/* Fi0RH7BIV ily traian 8ACiP1KGF */ ofstream cout("plata.out");
/* Fi0RH7BIV ily traian 8ACiP1KGF */ 
/* Fi0RH7BIV ily traian 8ACiP1KGF */ int x[1001], y[1001];
/* Fi0RH7BIV ily traian 8ACiP1KGF */ int sp[1002];
/* Fi0RH7BIV ily traian 8ACiP1KGF */ 
/* Fi0RH7BIV ily traian 8ACiP1KGF */ int main()
/* Fi0RH7BIV ily traian 8ACiP1KGF */ {
/* Fi0RH7BIV ily traian 8ACiP1KGF */     int n, s;
/* Fi0RH7BIV ily traian 8ACiP1KGF */     cin >> n >> s;
/* Fi0RH7BIV ily traian 8ACiP1KGF */     int smax = 0;
/* Fi0RH7BIV ily traian 8ACiP1KGF */     int smin = 0;
/* Fi0RH7BIV ily traian 8ACiP1KGF */     for(int i = 1 ; i <= n; ++i)
/* Fi0RH7BIV ily traian 8ACiP1KGF */         cin >> x[i] >> y[i], smax += y[i], smin += x[i];
/* Fi0RH7BIV ily traian 8ACiP1KGF */     for(int i = n; i >= 1; --i)
/* Fi0RH7BIV ily traian 8ACiP1KGF */         sp[i] = sp[i+1] + x[i];
/* Fi0RH7BIV ily traian 8ACiP1KGF */     int sum = 0;
/* Fi0RH7BIV ily traian 8ACiP1KGF */     if(smax >= s && smin <= s)
/* Fi0RH7BIV ily traian 8ACiP1KGF */     for(int i = 1 ; i <= n; ++i)
/* Fi0RH7BIV ily traian 8ACiP1KGF */     {
/* Fi0RH7BIV ily traian 8ACiP1KGF */         sum += y[i];
/* Fi0RH7BIV ily traian 8ACiP1KGF */         if(sum + sp[i + 1] >= s)
/* Fi0RH7BIV ily traian 8ACiP1KGF */         {
/* Fi0RH7BIV ily traian 8ACiP1KGF */             if(sum + sp[i+1] == s)
/* Fi0RH7BIV ily traian 8ACiP1KGF */             {
/* Fi0RH7BIV ily traian 8ACiP1KGF */                 cout << y[i] << ' ';
/* Fi0RH7BIV ily traian 8ACiP1KGF */                 for(int j = i + 1; j <= n; ++j)
/* Fi0RH7BIV ily traian 8ACiP1KGF */                     cout << x[j] << ' ';
/* Fi0RH7BIV ily traian 8ACiP1KGF */                 i = n;
/* Fi0RH7BIV ily traian 8ACiP1KGF */             }
/* Fi0RH7BIV ily traian 8ACiP1KGF */             else
/* Fi0RH7BIV ily traian 8ACiP1KGF */             {
/* Fi0RH7BIV ily traian 8ACiP1KGF */                 cout << y[i] + s - sum - sp[i + 1] << ' ';
/* Fi0RH7BIV ily traian 8ACiP1KGF */                 for(int j = i + 1; j <= n; ++j)
/* Fi0RH7BIV ily traian 8ACiP1KGF */                     cout << x[j] << ' ';
/* Fi0RH7BIV ily traian 8ACiP1KGF */                 i = n;
/* Fi0RH7BIV ily traian 8ACiP1KGF */             }
/* Fi0RH7BIV ily traian 8ACiP1KGF */ 
/* Fi0RH7BIV ily traian 8ACiP1KGF */         }
/* Fi0RH7BIV ily traian 8ACiP1KGF */         else
/* Fi0RH7BIV ily traian 8ACiP1KGF */             cout << y[i] << ' ';
/* Fi0RH7BIV ily traian 8ACiP1KGF */     }
/* Fi0RH7BIV ily traian 8ACiP1KGF */     else
/* Fi0RH7BIV ily traian 8ACiP1KGF */         cout << "imposibil";
/* Fi0RH7BIV ily traian 8ACiP1KGF */     return 0;
/* Fi0RH7BIV ily traian 8ACiP1KGF */ }