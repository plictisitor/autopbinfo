/* LCiepFvny ily traian 8Piy7Xikk */ #include <algorithm>
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
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ using namespace std;
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ ifstream cin("lanturi1.in");
/* LCiepFvny ily traian 8Piy7Xikk */ ofstream cout("lanturi1.out");
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ vector <int>G[101];
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ int n , m , x , y , P[30] , X[30] , p , q , rez[30] , maxi , r;
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ void afisare(int k)
/* LCiepFvny ily traian 8Piy7Xikk */ {
/* LCiepFvny ily traian 8Piy7Xikk */     maxi = k;
/* LCiepFvny ily traian 8Piy7Xikk */     int ok = 0;
/* LCiepFvny ily traian 8Piy7Xikk */     for(int i = 1 ; i <= k ; i++)
/* LCiepFvny ily traian 8Piy7Xikk */         if(X[i] == r) ok = 1;
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */     if(ok == 0)
/* LCiepFvny ily traian 8Piy7Xikk */     {
/* LCiepFvny ily traian 8Piy7Xikk */         for(int i = 1 ; i <= k ; i++)
/* LCiepFvny ily traian 8Piy7Xikk */             cout << X[i] << " ";
/* LCiepFvny ily traian 8Piy7Xikk */         cout << '\n';
/* LCiepFvny ily traian 8Piy7Xikk */     }
/* LCiepFvny ily traian 8Piy7Xikk */ }
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ int ok(int k)
/* LCiepFvny ily traian 8Piy7Xikk */ {
/* LCiepFvny ily traian 8Piy7Xikk */     int ok = 0;
/* LCiepFvny ily traian 8Piy7Xikk */     for(auto x:G[X[k]])
/* LCiepFvny ily traian 8Piy7Xikk */         if(x == X[k - 1]) ok++;
/* LCiepFvny ily traian 8Piy7Xikk */     if(ok != 0)return 1;
/* LCiepFvny ily traian 8Piy7Xikk */     else return 0;
/* LCiepFvny ily traian 8Piy7Xikk */ }
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ void back(int k)
/* LCiepFvny ily traian 8Piy7Xikk */ {
/* LCiepFvny ily traian 8Piy7Xikk */     for(int i = 1 ; i <= n ; i++)
/* LCiepFvny ily traian 8Piy7Xikk */         if(!P[i])
/* LCiepFvny ily traian 8Piy7Xikk */         {
/* LCiepFvny ily traian 8Piy7Xikk */             P[i] = 1;
/* LCiepFvny ily traian 8Piy7Xikk */             X[k] = i;
/* LCiepFvny ily traian 8Piy7Xikk */             if(ok(k))
/* LCiepFvny ily traian 8Piy7Xikk */                 if(X[k] == q)afisare(k);
/* LCiepFvny ily traian 8Piy7Xikk */                 else back(k + 1);
/* LCiepFvny ily traian 8Piy7Xikk */             P[i] = 0;
/* LCiepFvny ily traian 8Piy7Xikk */         }
/* LCiepFvny ily traian 8Piy7Xikk */ }
/* LCiepFvny ily traian 8Piy7Xikk */ 
/* LCiepFvny ily traian 8Piy7Xikk */ int main()
/* LCiepFvny ily traian 8Piy7Xikk */ {
/* LCiepFvny ily traian 8Piy7Xikk */     cin >> n >> m;
/* LCiepFvny ily traian 8Piy7Xikk */     for(int i = 1 ; i <= m ; i++)
/* LCiepFvny ily traian 8Piy7Xikk */     {
/* LCiepFvny ily traian 8Piy7Xikk */         cin >> x >> y;
/* LCiepFvny ily traian 8Piy7Xikk */         G[x].push_back(y);
/* LCiepFvny ily traian 8Piy7Xikk */         G[y].push_back(x);
/* LCiepFvny ily traian 8Piy7Xikk */     }
/* LCiepFvny ily traian 8Piy7Xikk */     cin >> p >> q >> r;
/* LCiepFvny ily traian 8Piy7Xikk */     X[1] = p;
/* LCiepFvny ily traian 8Piy7Xikk */     P[p] = 1;
/* LCiepFvny ily traian 8Piy7Xikk */     back(2);
/* LCiepFvny ily traian 8Piy7Xikk */ }