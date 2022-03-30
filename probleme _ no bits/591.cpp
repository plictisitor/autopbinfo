/* Fjg0ewNhP ily traian qBJ2bPRzd */ #include <algorithm>
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
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ using namespace std;
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ ifstream cin("firma.in");
/* Fjg0ewNhP ily traian qBJ2bPRzd */ ofstream cout("firma.out");
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ #define Inf 0x3f3f3f3f
/* Fjg0ewNhP ily traian qBJ2bPRzd */ using PI = pair<int , int>;
/* Fjg0ewNhP ily traian qBJ2bPRzd */ vector <PI> G[101];
/* Fjg0ewNhP ily traian qBJ2bPRzd */ int n , m , x , y , w , D[101] , mini , ind;
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ void init()
/* Fjg0ewNhP ily traian qBJ2bPRzd */ {
/* Fjg0ewNhP ily traian qBJ2bPRzd */     for(int i = 1 ; i <= n ; i++)
/* Fjg0ewNhP ily traian qBJ2bPRzd */         D[i] = Inf;
/* Fjg0ewNhP ily traian qBJ2bPRzd */ }
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ void dijkstra(int nod)
/* Fjg0ewNhP ily traian qBJ2bPRzd */ {
/* Fjg0ewNhP ily traian qBJ2bPRzd */     priority_queue < PI , vector <PI> , greater<PI> > Q;
/* Fjg0ewNhP ily traian qBJ2bPRzd */     D[nod] = 0;
/* Fjg0ewNhP ily traian qBJ2bPRzd */     Q.push({0 , nod});
/* Fjg0ewNhP ily traian qBJ2bPRzd */     while(!Q.empty())
/* Fjg0ewNhP ily traian qBJ2bPRzd */     {
/* Fjg0ewNhP ily traian qBJ2bPRzd */         int x = Q.top().first;
/* Fjg0ewNhP ily traian qBJ2bPRzd */         int y = Q.top().second;
/* Fjg0ewNhP ily traian qBJ2bPRzd */         Q.pop();
/* Fjg0ewNhP ily traian qBJ2bPRzd */         if(x > D[y]) continue;
/* Fjg0ewNhP ily traian qBJ2bPRzd */         for(auto& p:G[y])
/* Fjg0ewNhP ily traian qBJ2bPRzd */         {
/* Fjg0ewNhP ily traian qBJ2bPRzd */             int nodnou = p.first;
/* Fjg0ewNhP ily traian qBJ2bPRzd */             int costnou = p.second;
/* Fjg0ewNhP ily traian qBJ2bPRzd */             if(D[nodnou] > D[y] + costnou)
/* Fjg0ewNhP ily traian qBJ2bPRzd */             {
/* Fjg0ewNhP ily traian qBJ2bPRzd */                 D[nodnou] = D[y] + costnou;
/* Fjg0ewNhP ily traian qBJ2bPRzd */                 Q.push({D[nodnou] , nodnou});
/* Fjg0ewNhP ily traian qBJ2bPRzd */             }
/* Fjg0ewNhP ily traian qBJ2bPRzd */         }
/* Fjg0ewNhP ily traian qBJ2bPRzd */     }
/* Fjg0ewNhP ily traian qBJ2bPRzd */ }
/* Fjg0ewNhP ily traian qBJ2bPRzd */ 
/* Fjg0ewNhP ily traian qBJ2bPRzd */ int main()
/* Fjg0ewNhP ily traian qBJ2bPRzd */ {
/* Fjg0ewNhP ily traian qBJ2bPRzd */     cin >> n >> m;
/* Fjg0ewNhP ily traian qBJ2bPRzd */     for(int i = 1 ; i <= m ; ++i)
/* Fjg0ewNhP ily traian qBJ2bPRzd */     {
/* Fjg0ewNhP ily traian qBJ2bPRzd */         cin >> x >> y >> w;
/* Fjg0ewNhP ily traian qBJ2bPRzd */         G[x].push_back({y , w});
/* Fjg0ewNhP ily traian qBJ2bPRzd */         G[y].push_back({x , w});
/* Fjg0ewNhP ily traian qBJ2bPRzd */     }
/* Fjg0ewNhP ily traian qBJ2bPRzd */     mini = Inf;
/* Fjg0ewNhP ily traian qBJ2bPRzd */     for(int i = 1 ; i <= n ; i++)
/* Fjg0ewNhP ily traian qBJ2bPRzd */     {
/* Fjg0ewNhP ily traian qBJ2bPRzd */         init();
/* Fjg0ewNhP ily traian qBJ2bPRzd */         dijkstra(i);
/* Fjg0ewNhP ily traian qBJ2bPRzd */         int sum = 0;
/* Fjg0ewNhP ily traian qBJ2bPRzd */         for(int j = 1 ; j <= n ; j++)
/* Fjg0ewNhP ily traian qBJ2bPRzd */             sum += D[j];
/* Fjg0ewNhP ily traian qBJ2bPRzd */         if(sum < mini) mini = sum , ind = i;
/* Fjg0ewNhP ily traian qBJ2bPRzd */     }
/* Fjg0ewNhP ily traian qBJ2bPRzd */     cout << ind;
/* Fjg0ewNhP ily traian qBJ2bPRzd */ }