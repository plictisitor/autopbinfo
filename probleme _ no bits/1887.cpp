/* nnbBvwVR2 ily traian ljkjA2EjV */ #include <algorithm>
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
/* nnbBvwVR2 ily traian ljkjA2EjV */ 
/* nnbBvwVR2 ily traian ljkjA2EjV */ 
/* nnbBvwVR2 ily traian ljkjA2EjV */ using namespace std;
/* nnbBvwVR2 ily traian ljkjA2EjV */ #define Inf 0x3f3f3f3f
/* nnbBvwVR2 ily traian ljkjA2EjV */ 
/* nnbBvwVR2 ily traian ljkjA2EjV */ ifstream cin("dijkstra2.in");
/* nnbBvwVR2 ily traian ljkjA2EjV */ ofstream cout("dijkstra2.out");
/* nnbBvwVR2 ily traian ljkjA2EjV */ 
/* nnbBvwVR2 ily traian ljkjA2EjV */ using PI = pair<int , int>;
/* nnbBvwVR2 ily traian ljkjA2EjV */ int n , m , x , y , p , D[100001] , w;
/* nnbBvwVR2 ily traian ljkjA2EjV */ vector <PI> G[100001];
/* nnbBvwVR2 ily traian ljkjA2EjV */ 
/* nnbBvwVR2 ily traian ljkjA2EjV */ void dijkstra(int nod)
/* nnbBvwVR2 ily traian ljkjA2EjV */ {
/* nnbBvwVR2 ily traian ljkjA2EjV */     priority_queue < PI , vector<PI> , greater<PI> > Q;
/* nnbBvwVR2 ily traian ljkjA2EjV */     D[nod] = 0;
/* nnbBvwVR2 ily traian ljkjA2EjV */     Q.push({0 , nod});
/* nnbBvwVR2 ily traian ljkjA2EjV */     while(!Q.empty())
/* nnbBvwVR2 ily traian ljkjA2EjV */     {
/* nnbBvwVR2 ily traian ljkjA2EjV */        x = Q.top().first;
/* nnbBvwVR2 ily traian ljkjA2EjV */        y = Q.top().second;
/* nnbBvwVR2 ily traian ljkjA2EjV */        Q.pop();
/* nnbBvwVR2 ily traian ljkjA2EjV */        if(x > D[y]) continue;
/* nnbBvwVR2 ily traian ljkjA2EjV */        for(auto& q:G[y])
/* nnbBvwVR2 ily traian ljkjA2EjV */        {
/* nnbBvwVR2 ily traian ljkjA2EjV */            int nodnou = q.first;
/* nnbBvwVR2 ily traian ljkjA2EjV */            int costnou = q.second;
/* nnbBvwVR2 ily traian ljkjA2EjV */            if(D[nodnou] > D[y] + costnou)
/* nnbBvwVR2 ily traian ljkjA2EjV */            {
/* nnbBvwVR2 ily traian ljkjA2EjV */                D[nodnou] = D[y] + costnou;
/* nnbBvwVR2 ily traian ljkjA2EjV */                Q.push({D[nodnou] , nodnou});
/* nnbBvwVR2 ily traian ljkjA2EjV */            }
/* nnbBvwVR2 ily traian ljkjA2EjV */        }
/* nnbBvwVR2 ily traian ljkjA2EjV */     }
/* nnbBvwVR2 ily traian ljkjA2EjV */ }
/* nnbBvwVR2 ily traian ljkjA2EjV */ 
/* nnbBvwVR2 ily traian ljkjA2EjV */ int main()
/* nnbBvwVR2 ily traian ljkjA2EjV */ {
/* nnbBvwVR2 ily traian ljkjA2EjV */     cin >> n >> m >> p;
/* nnbBvwVR2 ily traian ljkjA2EjV */     for(int i = 1 ; i <= m ; ++i)
/* nnbBvwVR2 ily traian ljkjA2EjV */     {
/* nnbBvwVR2 ily traian ljkjA2EjV */         cin >> x >> y >> w;
/* nnbBvwVR2 ily traian ljkjA2EjV */         G[x].push_back({y , w});
/* nnbBvwVR2 ily traian ljkjA2EjV */         G[y].push_back({x , w});
/* nnbBvwVR2 ily traian ljkjA2EjV */     }
/* nnbBvwVR2 ily traian ljkjA2EjV */     for(int i = 1 ; i <= n ; i++)
/* nnbBvwVR2 ily traian ljkjA2EjV */         D[i] = Inf;
/* nnbBvwVR2 ily traian ljkjA2EjV */     dijkstra(p);
/* nnbBvwVR2 ily traian ljkjA2EjV */     for(int i = 1 ; i <= n ; i++)
/* nnbBvwVR2 ily traian ljkjA2EjV */         if(D[i] == Inf) cout << "-1 ";
/* nnbBvwVR2 ily traian ljkjA2EjV */         else cout << D[i] << " ";
/* nnbBvwVR2 ily traian ljkjA2EjV */ }