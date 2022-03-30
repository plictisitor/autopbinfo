/* pcxOINBuS ily traian CcOOfCegK */ #include <algorithm>
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
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */ using namespace std;
/* pcxOINBuS ily traian CcOOfCegK */ #define Inf 0x3f3f3f3f
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */ ifstream cin("dijkstra.in");
/* pcxOINBuS ily traian CcOOfCegK */ ofstream cout("dijkstra.out");
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */ using PI = pair<int , int>;
/* pcxOINBuS ily traian CcOOfCegK */ int n , m , x , y , p , D[100001] , w;
/* pcxOINBuS ily traian CcOOfCegK */ vector <PI> G[100001];
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */ void dijkstra(int nod)
/* pcxOINBuS ily traian CcOOfCegK */ {
/* pcxOINBuS ily traian CcOOfCegK */     priority_queue < PI , vector<PI> , greater<PI> > Q;
/* pcxOINBuS ily traian CcOOfCegK */     D[nod] = 0;
/* pcxOINBuS ily traian CcOOfCegK */     Q.push({0 , nod});
/* pcxOINBuS ily traian CcOOfCegK */     while(!Q.empty())
/* pcxOINBuS ily traian CcOOfCegK */     {
/* pcxOINBuS ily traian CcOOfCegK */        x = Q.top().first;
/* pcxOINBuS ily traian CcOOfCegK */        y = Q.top().second;
/* pcxOINBuS ily traian CcOOfCegK */        Q.pop();
/* pcxOINBuS ily traian CcOOfCegK */        if(x > D[y]) continue;
/* pcxOINBuS ily traian CcOOfCegK */        for(auto& q:G[y])
/* pcxOINBuS ily traian CcOOfCegK */        {
/* pcxOINBuS ily traian CcOOfCegK */            int nodnou = q.first;
/* pcxOINBuS ily traian CcOOfCegK */            int costnou = q.second;
/* pcxOINBuS ily traian CcOOfCegK */            if(D[nodnou] > D[y] + costnou)
/* pcxOINBuS ily traian CcOOfCegK */            {
/* pcxOINBuS ily traian CcOOfCegK */                D[nodnou] = D[y] + costnou;
/* pcxOINBuS ily traian CcOOfCegK */                Q.push({D[nodnou] , nodnou});
/* pcxOINBuS ily traian CcOOfCegK */            }
/* pcxOINBuS ily traian CcOOfCegK */        }
/* pcxOINBuS ily traian CcOOfCegK */     }
/* pcxOINBuS ily traian CcOOfCegK */ }
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */ int main()
/* pcxOINBuS ily traian CcOOfCegK */ {
/* pcxOINBuS ily traian CcOOfCegK */     cin >> n >> p;
/* pcxOINBuS ily traian CcOOfCegK */     while(cin >> x >> y >> w)
/* pcxOINBuS ily traian CcOOfCegK */         G[x].push_back({y , w});
/* pcxOINBuS ily traian CcOOfCegK */ 
/* pcxOINBuS ily traian CcOOfCegK */     for(int i = 1 ; i <= n ; i++)
/* pcxOINBuS ily traian CcOOfCegK */         D[i] = Inf;
/* pcxOINBuS ily traian CcOOfCegK */     dijkstra(p);
/* pcxOINBuS ily traian CcOOfCegK */     for(int i = 1 ; i <= n ; i++)
/* pcxOINBuS ily traian CcOOfCegK */         if(D[i] == Inf) cout << "-1 ";
/* pcxOINBuS ily traian CcOOfCegK */         else cout << D[i] << " ";
/* pcxOINBuS ily traian CcOOfCegK */ }