/* Wj5KV1HXK ily traian tdjcWHVKE */ #include <algorithm>
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
/* Wj5KV1HXK ily traian tdjcWHVKE */ using namespace std;
/* Wj5KV1HXK ily traian tdjcWHVKE */ ifstream cin("pseudobil.in");
/* Wj5KV1HXK ily traian tdjcWHVKE */ ofstream cout("pseudobil.out");
/* Wj5KV1HXK ily traian tdjcWHVKE */ int nr[3001][3001] , p, n, k, d, m;
/* Wj5KV1HXK ily traian tdjcWHVKE */ short a[3001][3001];
/* Wj5KV1HXK ily traian tdjcWHVKE */ int main()
/* Wj5KV1HXK ily traian tdjcWHVKE */ {
/* Wj5KV1HXK ily traian tdjcWHVKE */     cin >> p >> n >> k >> d;
/* Wj5KV1HXK ily traian tdjcWHVKE */     if (p == 1) cout << d*d/2-1-2*(d/2-1);
/* Wj5KV1HXK ily traian tdjcWHVKE */     else
/* Wj5KV1HXK ily traian tdjcWHVKE */     {
/* Wj5KV1HXK ily traian tdjcWHVKE */         int x, y;
/* Wj5KV1HXK ily traian tdjcWHVKE */         for (int i =1; i<=k; i++)
/* Wj5KV1HXK ily traian tdjcWHVKE */         {
/* Wj5KV1HXK ily traian tdjcWHVKE */             cin >> x >> y;
/* Wj5KV1HXK ily traian tdjcWHVKE */             a[x+y-1][n-x+y] = 1;
/* Wj5KV1HXK ily traian tdjcWHVKE */         }
/* Wj5KV1HXK ily traian tdjcWHVKE */         for(int i = 1; i <= n*2-1; ++i)
/* Wj5KV1HXK ily traian tdjcWHVKE */             for(int j = 1; j <= n*2-1; ++j)
/* Wj5KV1HXK ily traian tdjcWHVKE */                 nr[i][j] = nr[i-1][j] + nr[i][j-1] - nr[i-1][j-1] + a[i][j];
/* Wj5KV1HXK ily traian tdjcWHVKE */         cin >> m;
/* Wj5KV1HXK ily traian tdjcWHVKE */         long long sol;
/* Wj5KV1HXK ily traian tdjcWHVKE */         for (int i= 1; i <= m; ++i)
/* Wj5KV1HXK ily traian tdjcWHVKE */         {
/* Wj5KV1HXK ily traian tdjcWHVKE */             cin >> x >> y;
/* Wj5KV1HXK ily traian tdjcWHVKE */             sol = nr[x+y+d-1][n-x+y] - nr[x+y-2][n-x+y] - nr[x+y+d-1][n-x+y-d-1] + nr[x+y-2][n-x+y-d-1];
/* Wj5KV1HXK ily traian tdjcWHVKE */             cout << sol << '\n';
/* Wj5KV1HXK ily traian tdjcWHVKE */         }
/* Wj5KV1HXK ily traian tdjcWHVKE */     }
/* Wj5KV1HXK ily traian tdjcWHVKE */     return 0;
/* Wj5KV1HXK ily traian tdjcWHVKE */ }