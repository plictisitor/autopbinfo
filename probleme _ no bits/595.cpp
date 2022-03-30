/* ovRu7vd0c ily traian GEogIBJGB */ #include <algorithm>
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
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ using namespace std;
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ ifstream cin("anarhie.in");
/* ovRu7vd0c ily traian GEogIBJGB */ ofstream cout("anarhie.out");
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ int n , m , p , q , x , y , r , k , X[12] , P[101] , S[101] , A[101][101] , mini = 999999999 , s;
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ int dfs(int c)
/* ovRu7vd0c ily traian GEogIBJGB */ {
/* ovRu7vd0c ily traian GEogIBJGB */     P[c] = 1;
/* ovRu7vd0c ily traian GEogIBJGB */     for(int i = 1 ; i <= n ; i++)
/* ovRu7vd0c ily traian GEogIBJGB */         if(!P[i] && S[A[c][i]] && A[c][i])
/* ovRu7vd0c ily traian GEogIBJGB */             dfs(i);
/* ovRu7vd0c ily traian GEogIBJGB */ }
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ int verif(int k)
/* ovRu7vd0c ily traian GEogIBJGB */ {
/* ovRu7vd0c ily traian GEogIBJGB */     for(int i = 1 ; i <= n ; i++)
/* ovRu7vd0c ily traian GEogIBJGB */         S[i] = P[i] = 0;
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */     for(int i = 1 ; i <= k ; i++)
/* ovRu7vd0c ily traian GEogIBJGB */         S[X[i]] = 1;
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */     dfs(p);
/* ovRu7vd0c ily traian GEogIBJGB */     return P[q];
/* ovRu7vd0c ily traian GEogIBJGB */ }
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ void back(int k)
/* ovRu7vd0c ily traian GEogIBJGB */ {
/* ovRu7vd0c ily traian GEogIBJGB */     for(int i = X[k - 1] + 1 ; i <= s ; i++)
/* ovRu7vd0c ily traian GEogIBJGB */     {
/* ovRu7vd0c ily traian GEogIBJGB */         X[k] = i;
/* ovRu7vd0c ily traian GEogIBJGB */         if(verif(k))
/* ovRu7vd0c ily traian GEogIBJGB */             if(k < mini) mini = k;
/* ovRu7vd0c ily traian GEogIBJGB */         back(k + 1);
/* ovRu7vd0c ily traian GEogIBJGB */     }
/* ovRu7vd0c ily traian GEogIBJGB */ }
/* ovRu7vd0c ily traian GEogIBJGB */ 
/* ovRu7vd0c ily traian GEogIBJGB */ int main()
/* ovRu7vd0c ily traian GEogIBJGB */ {
/* ovRu7vd0c ily traian GEogIBJGB */     cin >> n >> m >> s;
/* ovRu7vd0c ily traian GEogIBJGB */     cin >> p >> q;
/* ovRu7vd0c ily traian GEogIBJGB */     for(int i = 1 ; i <= m ; i++)
/* ovRu7vd0c ily traian GEogIBJGB */     {
/* ovRu7vd0c ily traian GEogIBJGB */         cin >> x >> y >> r;
/* ovRu7vd0c ily traian GEogIBJGB */         A[x][y] = r;
/* ovRu7vd0c ily traian GEogIBJGB */     }
/* ovRu7vd0c ily traian GEogIBJGB */     back(1);
/* ovRu7vd0c ily traian GEogIBJGB */     cout << mini;
/* ovRu7vd0c ily traian GEogIBJGB */ }