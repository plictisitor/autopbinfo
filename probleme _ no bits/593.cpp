/* Pqbt7kjCs ily traian BJwEMHNCQ */ #include <algorithm>
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
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ using namespace std;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ ifstream cin("parc.in");
/* Pqbt7kjCs ily traian BJwEMHNCQ */ ofstream cout("parc.out");
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ const int Inf = 0x3f3f3f3f;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ using PI  = pair<int, int>;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ using VP  = vector<PI>;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ using VVP = vector<VP>;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ using VI  = vector<int>;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ int n , p , m , mini = 999999999;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ VI d;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ VVP G;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ void Dijkstra(int x, VI& d)
/* Pqbt7kjCs ily traian BJwEMHNCQ */ {
/* Pqbt7kjCs ily traian BJwEMHNCQ */     d = VI(n + 1, Inf);
/* Pqbt7kjCs ily traian BJwEMHNCQ */     priority_queue<PI, vector<PI>, greater<PI>> Q;
/* Pqbt7kjCs ily traian BJwEMHNCQ */     d[x] = 0;
/* Pqbt7kjCs ily traian BJwEMHNCQ */     Q.push({0, x});
/* Pqbt7kjCs ily traian BJwEMHNCQ */     int y, w, dist;
/* Pqbt7kjCs ily traian BJwEMHNCQ */     while (!Q.empty())
/* Pqbt7kjCs ily traian BJwEMHNCQ */     {
/* Pqbt7kjCs ily traian BJwEMHNCQ */         x = Q.top().second;
/* Pqbt7kjCs ily traian BJwEMHNCQ */         dist = Q.top().first;
/* Pqbt7kjCs ily traian BJwEMHNCQ */         Q.pop();
/* Pqbt7kjCs ily traian BJwEMHNCQ */         if (dist > d[x])
/* Pqbt7kjCs ily traian BJwEMHNCQ */             continue;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */         for (auto& p : G[x])
/* Pqbt7kjCs ily traian BJwEMHNCQ */         {
/* Pqbt7kjCs ily traian BJwEMHNCQ */             y = p.first;
/* Pqbt7kjCs ily traian BJwEMHNCQ */             w = p.second;
/* Pqbt7kjCs ily traian BJwEMHNCQ */             if (d[y] > d[x] + w)
/* Pqbt7kjCs ily traian BJwEMHNCQ */             {
/* Pqbt7kjCs ily traian BJwEMHNCQ */                 d[y] = d[x] + w;
/* Pqbt7kjCs ily traian BJwEMHNCQ */                 Q.push({d[y], y});
/* Pqbt7kjCs ily traian BJwEMHNCQ */             }
/* Pqbt7kjCs ily traian BJwEMHNCQ */         }
/* Pqbt7kjCs ily traian BJwEMHNCQ */     }
/* Pqbt7kjCs ily traian BJwEMHNCQ */ }
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */ int main()
/* Pqbt7kjCs ily traian BJwEMHNCQ */ {
/* Pqbt7kjCs ily traian BJwEMHNCQ */     int x , y , w , a , q , rez;
/* Pqbt7kjCs ily traian BJwEMHNCQ */     cin >> n >> m >> p;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ 
/* Pqbt7kjCs ily traian BJwEMHNCQ */     G = VVP(n + 1);
/* Pqbt7kjCs ily traian BJwEMHNCQ */     for(int i = 1 ; i <= m ; i++)
/* Pqbt7kjCs ily traian BJwEMHNCQ */     {
/* Pqbt7kjCs ily traian BJwEMHNCQ */         cin >> x >> y >> w;
/* Pqbt7kjCs ily traian BJwEMHNCQ */         G[x].emplace_back(y , w);
/* Pqbt7kjCs ily traian BJwEMHNCQ */         G[y].emplace_back(x , w);
/* Pqbt7kjCs ily traian BJwEMHNCQ */     }
/* Pqbt7kjCs ily traian BJwEMHNCQ */     cin >> q;
/* Pqbt7kjCs ily traian BJwEMHNCQ */     for(int i = 1 ; i <= q ; i++)
/* Pqbt7kjCs ily traian BJwEMHNCQ */     {
/* Pqbt7kjCs ily traian BJwEMHNCQ */         cin >> a;
/* Pqbt7kjCs ily traian BJwEMHNCQ */         Dijkstra(a, d);
/* Pqbt7kjCs ily traian BJwEMHNCQ */         if(d[p] < mini) mini = d[p] , rez = a;
/* Pqbt7kjCs ily traian BJwEMHNCQ */     }
/* Pqbt7kjCs ily traian BJwEMHNCQ */     cout << rez;
/* Pqbt7kjCs ily traian BJwEMHNCQ */ }