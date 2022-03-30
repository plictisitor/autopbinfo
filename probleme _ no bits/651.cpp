/* OdpcI3Jzn ily traian C99zrutXb */ #include <algorithm>
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
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */ using namespace std;
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */ ifstream cin("sumsubmax.in");
/* OdpcI3Jzn ily traian C99zrutXb */ ofstream cout("sumsubmax.out");
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */ vector <int> G[101];
/* OdpcI3Jzn ily traian C99zrutXb */ int n  , p , x , y , k , T[102] , P[101] , C[101] , d[101];
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */ int dfs(int x)
/* OdpcI3Jzn ily traian C99zrutXb */ {
/* OdpcI3Jzn ily traian C99zrutXb */     P[x] = 1;
/* OdpcI3Jzn ily traian C99zrutXb */     d[x] = C[x];
/* OdpcI3Jzn ily traian C99zrutXb */     for(auto i:G[x])
/* OdpcI3Jzn ily traian C99zrutXb */         if(!P[i])
/* OdpcI3Jzn ily traian C99zrutXb */         {
/* OdpcI3Jzn ily traian C99zrutXb */             d[x] += dfs(i);
/* OdpcI3Jzn ily traian C99zrutXb */         }
/* OdpcI3Jzn ily traian C99zrutXb */     return d[x];
/* OdpcI3Jzn ily traian C99zrutXb */ }
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */ int main()
/* OdpcI3Jzn ily traian C99zrutXb */ {
/* OdpcI3Jzn ily traian C99zrutXb */     cin >> n;
/* OdpcI3Jzn ily traian C99zrutXb */     for(int i = 1 ; i <= n ; i++)
/* OdpcI3Jzn ily traian C99zrutXb */     {
/* OdpcI3Jzn ily traian C99zrutXb */         cin >> T[i];
/* OdpcI3Jzn ily traian C99zrutXb */         if(T[i] != 0)
/* OdpcI3Jzn ily traian C99zrutXb */             G[T[i]].push_back(i);
/* OdpcI3Jzn ily traian C99zrutXb */         if(T[i] == 0) p = i;
/* OdpcI3Jzn ily traian C99zrutXb */     }
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */     for(int i = 1 ; i <= n ; i++)
/* OdpcI3Jzn ily traian C99zrutXb */         cin >> C[i];
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */     d[p] = dfs(p);
/* OdpcI3Jzn ily traian C99zrutXb */     int maxi = -9999;
/* OdpcI3Jzn ily traian C99zrutXb */     for(int i = 1 ; i <= n ; i++)
/* OdpcI3Jzn ily traian C99zrutXb */         if(d[i] > maxi) maxi = d[i];
/* OdpcI3Jzn ily traian C99zrutXb */ 
/* OdpcI3Jzn ily traian C99zrutXb */     for(int i = 1 ; i <= n ; i++)
/* OdpcI3Jzn ily traian C99zrutXb */         if(d[i] == maxi) cout << i << " ";
/* OdpcI3Jzn ily traian C99zrutXb */ }