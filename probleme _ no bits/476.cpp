/* tWikVQDK3 ily traian YKahobCUh */ #include <algorithm>
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
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ using namespace std;
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ ifstream cin("lanturi.in");
/* tWikVQDK3 ily traian YKahobCUh */ ofstream cout("lanturi.out");
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ vector <int>G[101];
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ int n , m , x , y , P[30] , X[30] , p , q , rez[30] , maxi , r;
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ void afisare(int k)
/* tWikVQDK3 ily traian YKahobCUh */ {
/* tWikVQDK3 ily traian YKahobCUh */     maxi = k;
/* tWikVQDK3 ily traian YKahobCUh */     int ok = 0;
/* tWikVQDK3 ily traian YKahobCUh */     for(int i = 1 ; i <= k ; i++)
/* tWikVQDK3 ily traian YKahobCUh */         if(X[i] == r) ok = 1;
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */     if(ok == 1)
/* tWikVQDK3 ily traian YKahobCUh */     {
/* tWikVQDK3 ily traian YKahobCUh */         for(int i = 1 ; i <= k ; i++)
/* tWikVQDK3 ily traian YKahobCUh */             cout << X[i] << " ";
/* tWikVQDK3 ily traian YKahobCUh */         cout << '\n';
/* tWikVQDK3 ily traian YKahobCUh */     }
/* tWikVQDK3 ily traian YKahobCUh */ }
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ int ok(int k)
/* tWikVQDK3 ily traian YKahobCUh */ {
/* tWikVQDK3 ily traian YKahobCUh */     int ok = 0;
/* tWikVQDK3 ily traian YKahobCUh */     for(auto x:G[X[k]])
/* tWikVQDK3 ily traian YKahobCUh */         if(x == X[k - 1]) ok++;
/* tWikVQDK3 ily traian YKahobCUh */     if(ok != 0)return 1;
/* tWikVQDK3 ily traian YKahobCUh */     else return 0;
/* tWikVQDK3 ily traian YKahobCUh */ }
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ void back(int k)
/* tWikVQDK3 ily traian YKahobCUh */ {
/* tWikVQDK3 ily traian YKahobCUh */     for(int i = 1 ; i <= n ; i++)
/* tWikVQDK3 ily traian YKahobCUh */         if(!P[i])
/* tWikVQDK3 ily traian YKahobCUh */         {
/* tWikVQDK3 ily traian YKahobCUh */             P[i] = 1;
/* tWikVQDK3 ily traian YKahobCUh */             X[k] = i;
/* tWikVQDK3 ily traian YKahobCUh */             if(ok(k))
/* tWikVQDK3 ily traian YKahobCUh */                 if(X[k] == q)afisare(k);
/* tWikVQDK3 ily traian YKahobCUh */                 else back(k + 1);
/* tWikVQDK3 ily traian YKahobCUh */             P[i] = 0;
/* tWikVQDK3 ily traian YKahobCUh */         }
/* tWikVQDK3 ily traian YKahobCUh */ }
/* tWikVQDK3 ily traian YKahobCUh */ 
/* tWikVQDK3 ily traian YKahobCUh */ int main()
/* tWikVQDK3 ily traian YKahobCUh */ {
/* tWikVQDK3 ily traian YKahobCUh */     cin >> n >> m;
/* tWikVQDK3 ily traian YKahobCUh */     for(int i = 1 ; i <= m ; i++)
/* tWikVQDK3 ily traian YKahobCUh */     {
/* tWikVQDK3 ily traian YKahobCUh */         cin >> x >> y;
/* tWikVQDK3 ily traian YKahobCUh */         G[x].push_back(y);
/* tWikVQDK3 ily traian YKahobCUh */         G[y].push_back(x);
/* tWikVQDK3 ily traian YKahobCUh */     }
/* tWikVQDK3 ily traian YKahobCUh */     cin >> p >> q >> r;
/* tWikVQDK3 ily traian YKahobCUh */     X[1] = p;
/* tWikVQDK3 ily traian YKahobCUh */     P[p] = 1;
/* tWikVQDK3 ily traian YKahobCUh */     back(2);
/* tWikVQDK3 ily traian YKahobCUh */ }