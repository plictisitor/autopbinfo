/* Jk2H0Bk9e ily traian 1UVcKmAcp */ #include <algorithm>
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
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ using namespace std;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ ifstream cin("ciclu.in");
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ ofstream cout("ciclu.out");
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ vector <int>G[101];
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ int n , m , x , y , P[30] , X[30] , p , ok;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ void afisare(int k)
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ {
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     for(int i = 1 ; i <= k ; i++)
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         cout << X[i] << " ";
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     cout << '\n';
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     ok = 1;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ }
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ int oke(int k)
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ {
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     int ok = 0;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     for(auto x:G[X[k]])
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         if(x == X[k - 1]) ok++;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     if(ok != 0)return 1;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     else return 0;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ }
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ void back(int k)
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ {
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     for(int i = 1 ; i <= n && !ok; i++)
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         if(!P[i])
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         {
/* Jk2H0Bk9e ily traian 1UVcKmAcp */             P[i] = 1;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */             X[k] = i;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */             if(oke(k))
/* Jk2H0Bk9e ily traian 1UVcKmAcp */                 if(X[k] == p && k > 3)afisare(k);
/* Jk2H0Bk9e ily traian 1UVcKmAcp */                 else back(k + 1);
/* Jk2H0Bk9e ily traian 1UVcKmAcp */             P[i] = 0;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         }
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ }
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ 
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ int main()
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ {
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     cin >> n >> m;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     for(int i = 1 ; i <= m ; i++)
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     {
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         cin >> x >> y;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         G[x].push_back(y);
/* Jk2H0Bk9e ily traian 1UVcKmAcp */         G[y].push_back(x);
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     }
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     cin >> p;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     X[1] = p;
/* Jk2H0Bk9e ily traian 1UVcKmAcp */     back(2);
/* Jk2H0Bk9e ily traian 1UVcKmAcp */ }