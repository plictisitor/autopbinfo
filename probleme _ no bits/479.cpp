/* GcS2Pe3bF ily traian iBvuZxeHV */ #include <algorithm>
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
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ using namespace std;
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ ifstream cin("lantmaxim.in");
/* GcS2Pe3bF ily traian iBvuZxeHV */ ofstream cout("lantmaxim.out");
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ vector <int>G[101];
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ int n , m , x , y , P[30] , X[30] , p , q , rez[30] , maxi;
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ void afisare(int k)
/* GcS2Pe3bF ily traian iBvuZxeHV */ {
/* GcS2Pe3bF ily traian iBvuZxeHV */     maxi = k;
/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= k ; i++)
/* GcS2Pe3bF ily traian iBvuZxeHV */         rez[i] = X[i];
/* GcS2Pe3bF ily traian iBvuZxeHV */ }
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ int ok(int k)
/* GcS2Pe3bF ily traian iBvuZxeHV */ {
/* GcS2Pe3bF ily traian iBvuZxeHV */     int ok = 0;
/* GcS2Pe3bF ily traian iBvuZxeHV */     for(auto x:G[X[k]])
/* GcS2Pe3bF ily traian iBvuZxeHV */         if(x == X[k - 1]) ok++;
/* GcS2Pe3bF ily traian iBvuZxeHV */     if(ok != 0)return 1;
/* GcS2Pe3bF ily traian iBvuZxeHV */     else return 0;
/* GcS2Pe3bF ily traian iBvuZxeHV */ }
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ void back(int k)
/* GcS2Pe3bF ily traian iBvuZxeHV */ {
/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= n ; i++)
/* GcS2Pe3bF ily traian iBvuZxeHV */         if(!P[i])
/* GcS2Pe3bF ily traian iBvuZxeHV */         {
/* GcS2Pe3bF ily traian iBvuZxeHV */             P[i] = 1;
/* GcS2Pe3bF ily traian iBvuZxeHV */             X[k] = i;
/* GcS2Pe3bF ily traian iBvuZxeHV */             if(ok(k))
/* GcS2Pe3bF ily traian iBvuZxeHV */                 if(X[k] == q && k > maxi)afisare(k);
/* GcS2Pe3bF ily traian iBvuZxeHV */                 else back(k + 1);
/* GcS2Pe3bF ily traian iBvuZxeHV */             P[i] = 0;
/* GcS2Pe3bF ily traian iBvuZxeHV */         }
/* GcS2Pe3bF ily traian iBvuZxeHV */ }
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */ int main()
/* GcS2Pe3bF ily traian iBvuZxeHV */ {
/* GcS2Pe3bF ily traian iBvuZxeHV */     cin >> n >> m;
/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= m ; i++)
/* GcS2Pe3bF ily traian iBvuZxeHV */     {
/* GcS2Pe3bF ily traian iBvuZxeHV */         cin >> x >> y;
/* GcS2Pe3bF ily traian iBvuZxeHV */         G[x].push_back(y);
/* GcS2Pe3bF ily traian iBvuZxeHV */         G[y].push_back(x);
/* GcS2Pe3bF ily traian iBvuZxeHV */     }
/* GcS2Pe3bF ily traian iBvuZxeHV */     cin >> p >> q;
/* GcS2Pe3bF ily traian iBvuZxeHV */     X[1] = p;
/* GcS2Pe3bF ily traian iBvuZxeHV */     P[p] = 1;
/* GcS2Pe3bF ily traian iBvuZxeHV */     back(2);
/* GcS2Pe3bF ily traian iBvuZxeHV */ 
/* GcS2Pe3bF ily traian iBvuZxeHV */     for(int i = 1 ; i <= maxi ; i++)
/* GcS2Pe3bF ily traian iBvuZxeHV */         cout << rez[i] << " ";
/* GcS2Pe3bF ily traian iBvuZxeHV */ }