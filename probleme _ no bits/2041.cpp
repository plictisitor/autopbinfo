/* nWDJVnt7W ily traian 9iOFus5hc */ #include <algorithm>
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
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ using namespace std;
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ ifstream cin("camelot.in");
/* nWDJVnt7W ily traian 9iOFus5hc */ ofstream cout("camelot.out");
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ const int dic[] = {-2 , -2 , -1 , -1 ,  1 , 1 ,  2 , 2};
/* nWDJVnt7W ily traian 9iOFus5hc */ const int djc[] = {-1 ,  1 , -2 ,  2 , -2 , 2 , -1 , 1};
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ int cer , n , m , k , a[1001][1001] , c , pmin = 99999999 , pmax , x , y;
/* nWDJVnt7W ily traian 9iOFus5hc */ struct poz
/* nWDJVnt7W ily traian 9iOFus5hc */ {
/* nWDJVnt7W ily traian 9iOFus5hc */     int i , j;
/* nWDJVnt7W ily traian 9iOFus5hc */ }C[1001];
/* nWDJVnt7W ily traian 9iOFus5hc */ queue <poz> Q;
/* nWDJVnt7W ily traian 9iOFus5hc */ bool inside(int i , int j)
/* nWDJVnt7W ily traian 9iOFus5hc */ {
/* nWDJVnt7W ily traian 9iOFus5hc */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* nWDJVnt7W ily traian 9iOFus5hc */ }
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ int main()
/* nWDJVnt7W ily traian 9iOFus5hc */ {
/* nWDJVnt7W ily traian 9iOFus5hc */     cin >> cer;
/* nWDJVnt7W ily traian 9iOFus5hc */     cin >> n >> m >> k;
/* nWDJVnt7W ily traian 9iOFus5hc */     int ir , jr;
/* nWDJVnt7W ily traian 9iOFus5hc */     cin >> ir >> jr;
/* nWDJVnt7W ily traian 9iOFus5hc */     for(int i = 1 ; i <= k ; i++)
/* nWDJVnt7W ily traian 9iOFus5hc */     {
/* nWDJVnt7W ily traian 9iOFus5hc */         cin >> x >> y;
/* nWDJVnt7W ily traian 9iOFus5hc */         C[i] = {x , y};
/* nWDJVnt7W ily traian 9iOFus5hc */         a[x][y] = -1;
/* nWDJVnt7W ily traian 9iOFus5hc */     }
/* nWDJVnt7W ily traian 9iOFus5hc */     Q.push({ir , jr});
/* nWDJVnt7W ily traian 9iOFus5hc */     a[ir][jr] = 1;
/* nWDJVnt7W ily traian 9iOFus5hc */     while(!Q.empty() && c < k)
/* nWDJVnt7W ily traian 9iOFus5hc */     {
/* nWDJVnt7W ily traian 9iOFus5hc */         poz r = Q.front();
/* nWDJVnt7W ily traian 9iOFus5hc */         for(int i = 0 ; i < 8 ; i++)
/* nWDJVnt7W ily traian 9iOFus5hc */         {
/* nWDJVnt7W ily traian 9iOFus5hc */             int inou = r.i + dic[i];
/* nWDJVnt7W ily traian 9iOFus5hc */             int jnou = r.j + djc[i];
/* nWDJVnt7W ily traian 9iOFus5hc */             if(inside(inou , jnou) && a[inou][jnou] <= 0)
/* nWDJVnt7W ily traian 9iOFus5hc */             {
/* nWDJVnt7W ily traian 9iOFus5hc */                 if(a[inou][jnou] == -1) c++;
/* nWDJVnt7W ily traian 9iOFus5hc */                 a[inou][jnou] = a[r.i][r.j] + 1;
/* nWDJVnt7W ily traian 9iOFus5hc */                 Q.push({inou , jnou});
/* nWDJVnt7W ily traian 9iOFus5hc */             }
/* nWDJVnt7W ily traian 9iOFus5hc */         }
/* nWDJVnt7W ily traian 9iOFus5hc */         Q.pop();
/* nWDJVnt7W ily traian 9iOFus5hc */     }
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */     for(int i = 1 ; i <= k ; i++)
/* nWDJVnt7W ily traian 9iOFus5hc */     {
/* nWDJVnt7W ily traian 9iOFus5hc */         if(a[C[i].i][C[i].j] < pmin) pmin = a[C[i].i][C[i].j];
/* nWDJVnt7W ily traian 9iOFus5hc */         if(a[C[i].i][C[i].j] > pmax) pmax = a[C[i].i][C[i].j];
/* nWDJVnt7W ily traian 9iOFus5hc */     }
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */     if(cer == 1) cout << pmin - 1;
/* nWDJVnt7W ily traian 9iOFus5hc */     else cout << pmax - 1;
/* nWDJVnt7W ily traian 9iOFus5hc */ 
/* nWDJVnt7W ily traian 9iOFus5hc */ }