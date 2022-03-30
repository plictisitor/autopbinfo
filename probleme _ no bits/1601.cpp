/* WFQA9sI6q ily traian kBm4XeDFy */ #include <algorithm>
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
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */ using namespace std;
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */ ifstream cin("ascensiune.in");
/* WFQA9sI6q ily traian kBm4XeDFy */ ofstream cout("ascensiune.out");
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */ int n , m , P[100002] , d[100002] , x , y , maxi , maxi1 , ind;
/* WFQA9sI6q ily traian kBm4XeDFy */ vector <int> G[100002];
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */ void bfs(int v)
/* WFQA9sI6q ily traian kBm4XeDFy */ {
/* WFQA9sI6q ily traian kBm4XeDFy */     queue <int> Q;
/* WFQA9sI6q ily traian kBm4XeDFy */     Q.push(v);
/* WFQA9sI6q ily traian kBm4XeDFy */     P[v] = 1;
/* WFQA9sI6q ily traian kBm4XeDFy */     d[v] = 1;
/* WFQA9sI6q ily traian kBm4XeDFy */     while(!Q.empty())
/* WFQA9sI6q ily traian kBm4XeDFy */     {
/* WFQA9sI6q ily traian kBm4XeDFy */         int x = Q.front();
/* WFQA9sI6q ily traian kBm4XeDFy */         Q.pop();
/* WFQA9sI6q ily traian kBm4XeDFy */         for(auto p:G[x])
/* WFQA9sI6q ily traian kBm4XeDFy */             if(!P[p]) Q.push(p) , P[p] = 1 , d[p] = d[x] + 1;
/* WFQA9sI6q ily traian kBm4XeDFy */     }
/* WFQA9sI6q ily traian kBm4XeDFy */ }
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */ int main()
/* WFQA9sI6q ily traian kBm4XeDFy */ {
/* WFQA9sI6q ily traian kBm4XeDFy */     cin >> n;
/* WFQA9sI6q ily traian kBm4XeDFy */     while(cin >> x >> y)
/* WFQA9sI6q ily traian kBm4XeDFy */     {
/* WFQA9sI6q ily traian kBm4XeDFy */         G[x].push_back(y);
/* WFQA9sI6q ily traian kBm4XeDFy */         G[y].push_back(x);
/* WFQA9sI6q ily traian kBm4XeDFy */         m++;
/* WFQA9sI6q ily traian kBm4XeDFy */     }
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */     bfs(1);
/* WFQA9sI6q ily traian kBm4XeDFy */     for(int i = 1 ; i <= n ; i++)
/* WFQA9sI6q ily traian kBm4XeDFy */         if(d[i] > maxi) maxi = d[i] , ind = i;
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */     for(int i = 1 ; i <= n ; i++)
/* WFQA9sI6q ily traian kBm4XeDFy */         d[i] = 0 , P[i] = 0;
/* WFQA9sI6q ily traian kBm4XeDFy */     bfs(ind);
/* WFQA9sI6q ily traian kBm4XeDFy */     for(int i = 1 ; i <= n ; i++)
/* WFQA9sI6q ily traian kBm4XeDFy */         if(d[i] > maxi1) maxi1 = d[i];
/* WFQA9sI6q ily traian kBm4XeDFy */ 
/* WFQA9sI6q ily traian kBm4XeDFy */     cout << maxi1;
/* WFQA9sI6q ily traian kBm4XeDFy */ }