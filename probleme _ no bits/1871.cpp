/* Y32C4sNO0 ily traian H4ADf0Z0V */ #include <algorithm>
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
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ using namespace std;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ ifstream cin("ubuph.in");
/* Y32C4sNO0 ily traian H4ADf0Z0V */ ofstream cout("ubuph.out");
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ int n , m , is , ip , js , jp;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ int a[1001][1001];
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ int inside(int i , int j)
/* Y32C4sNO0 ily traian H4ADf0Z0V */ {
/* Y32C4sNO0 ily traian H4ADf0Z0V */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ }
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ struct poz
/* Y32C4sNO0 ily traian H4ADf0Z0V */ {
/* Y32C4sNO0 ily traian H4ADf0Z0V */     int i , j;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ };
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ queue <poz> Q;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ const int di[] = { 0 , 0 , -1 , 1};
/* Y32C4sNO0 ily traian H4ADf0Z0V */ const int dj[] = {-1 , 1 ,  0 , 0};
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ long long b[1001][1001];
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */ void lee()
/* Y32C4sNO0 ily traian H4ADf0Z0V */ {
/* Y32C4sNO0 ily traian H4ADf0Z0V */     poz r;
/* Y32C4sNO0 ily traian H4ADf0Z0V */     r.i = ip;
/* Y32C4sNO0 ily traian H4ADf0Z0V */     r.j = jp;
/* Y32C4sNO0 ily traian H4ADf0Z0V */     Q.push(r);
/* Y32C4sNO0 ily traian H4ADf0Z0V */     while(!Q.empty())
/* Y32C4sNO0 ily traian H4ADf0Z0V */     {
/* Y32C4sNO0 ily traian H4ADf0Z0V */         poz r;
/* Y32C4sNO0 ily traian H4ADf0Z0V */         r = Q.front();
/* Y32C4sNO0 ily traian H4ADf0Z0V */         for(int i = 0 ; i < 4 ; i++)
/* Y32C4sNO0 ily traian H4ADf0Z0V */         {
/* Y32C4sNO0 ily traian H4ADf0Z0V */             int inou = r.i + di[i];
/* Y32C4sNO0 ily traian H4ADf0Z0V */             int jnou = r.j + dj[i];
/* Y32C4sNO0 ily traian H4ADf0Z0V */             if(inside(inou , jnou) && b[inou][jnou] > a[inou][jnou] + b[r.i][r.j])
/* Y32C4sNO0 ily traian H4ADf0Z0V */             {
/* Y32C4sNO0 ily traian H4ADf0Z0V */                 Q.push({inou , jnou});
/* Y32C4sNO0 ily traian H4ADf0Z0V */                 b[inou][jnou] = a[inou][jnou] + b[r.i][r.j];
/* Y32C4sNO0 ily traian H4ADf0Z0V */             }
/* Y32C4sNO0 ily traian H4ADf0Z0V */         }
/* Y32C4sNO0 ily traian H4ADf0Z0V */         Q.pop();
/* Y32C4sNO0 ily traian H4ADf0Z0V */     }
/* Y32C4sNO0 ily traian H4ADf0Z0V */ }
/* Y32C4sNO0 ily traian H4ADf0Z0V */ int main()
/* Y32C4sNO0 ily traian H4ADf0Z0V */ {
/* Y32C4sNO0 ily traian H4ADf0Z0V */     cin >> n >> m;
/* Y32C4sNO0 ily traian H4ADf0Z0V */     for(int i = 1 ; i <= n ; i++)
/* Y32C4sNO0 ily traian H4ADf0Z0V */         for(int j = 1 ; j <= m ; j++)
/* Y32C4sNO0 ily traian H4ADf0Z0V */         cin >> a[i][j];
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */     for(int i = 1 ; i <= n ; i++)
/* Y32C4sNO0 ily traian H4ADf0Z0V */         for(int j = 1 ; j <= m ; j++)
/* Y32C4sNO0 ily traian H4ADf0Z0V */             b[i][j] = 20000001;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */     cin >> ip >> jp >> is >> js;
/* Y32C4sNO0 ily traian H4ADf0Z0V */ 
/* Y32C4sNO0 ily traian H4ADf0Z0V */     b[ip][jp] = a[ip][jp];
/* Y32C4sNO0 ily traian H4ADf0Z0V */     lee();
/* Y32C4sNO0 ily traian H4ADf0Z0V */     cout << b[is][js];
/* Y32C4sNO0 ily traian H4ADf0Z0V */ }