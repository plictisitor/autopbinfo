/* NYu4hyHrK ily traian LvaBKPRxg */ #include <algorithm>
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
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ using namespace std;
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ ifstream cin("mere.in");
/* NYu4hyHrK ily traian LvaBKPRxg */ ofstream cout("mere.out");
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ int n , x , y , m[1001] , p , d[1001] , v[1001] , sum , maxi , imax;
/* NYu4hyHrK ily traian LvaBKPRxg */ vector <int> G[1001];
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ void bfs(int s)
/* NYu4hyHrK ily traian LvaBKPRxg */ {
/* NYu4hyHrK ily traian LvaBKPRxg */     queue <int> Q;
/* NYu4hyHrK ily traian LvaBKPRxg */     v[s] = 1;
/* NYu4hyHrK ily traian LvaBKPRxg */     d[s] = 1;
/* NYu4hyHrK ily traian LvaBKPRxg */     sum += m[s];
/* NYu4hyHrK ily traian LvaBKPRxg */     Q.push(s);
/* NYu4hyHrK ily traian LvaBKPRxg */     while(!Q.empty())
/* NYu4hyHrK ily traian LvaBKPRxg */     {
/* NYu4hyHrK ily traian LvaBKPRxg */         int x = Q.front();
/* NYu4hyHrK ily traian LvaBKPRxg */         maxi = 0 , imax = 0;
/* NYu4hyHrK ily traian LvaBKPRxg */         for(int i : G[x])
/* NYu4hyHrK ily traian LvaBKPRxg */             if(!v[i] && m[i] > maxi)
/* NYu4hyHrK ily traian LvaBKPRxg */             {
/* NYu4hyHrK ily traian LvaBKPRxg */                 maxi = m[i];
/* NYu4hyHrK ily traian LvaBKPRxg */                 imax = i;
/* NYu4hyHrK ily traian LvaBKPRxg */             }
/* NYu4hyHrK ily traian LvaBKPRxg */         if(maxi != 0)
/* NYu4hyHrK ily traian LvaBKPRxg */         {
/* NYu4hyHrK ily traian LvaBKPRxg */             Q.push(imax);
/* NYu4hyHrK ily traian LvaBKPRxg */             sum += maxi;
/* NYu4hyHrK ily traian LvaBKPRxg */             v[imax] = 1;
/* NYu4hyHrK ily traian LvaBKPRxg */         }
/* NYu4hyHrK ily traian LvaBKPRxg */         Q.pop();
/* NYu4hyHrK ily traian LvaBKPRxg */     }
/* NYu4hyHrK ily traian LvaBKPRxg */ }
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ 
/* NYu4hyHrK ily traian LvaBKPRxg */ int main()
/* NYu4hyHrK ily traian LvaBKPRxg */ {
/* NYu4hyHrK ily traian LvaBKPRxg */     cin >> n;
/* NYu4hyHrK ily traian LvaBKPRxg */     for(int i = 1 ; i <= n ; i++)
/* NYu4hyHrK ily traian LvaBKPRxg */         cin >> m[i];
/* NYu4hyHrK ily traian LvaBKPRxg */     for(int i = 1 ; i < n ; i++)
/* NYu4hyHrK ily traian LvaBKPRxg */     {
/* NYu4hyHrK ily traian LvaBKPRxg */         cin >> x >> y;
/* NYu4hyHrK ily traian LvaBKPRxg */         G[x].push_back(y);
/* NYu4hyHrK ily traian LvaBKPRxg */         G[y].push_back(x);
/* NYu4hyHrK ily traian LvaBKPRxg */     }
/* NYu4hyHrK ily traian LvaBKPRxg */     for(int i = 1 ; i <= n ; i++)
/* NYu4hyHrK ily traian LvaBKPRxg */         sort(G[i].begin() , G[i].end());
/* NYu4hyHrK ily traian LvaBKPRxg */     bfs(1);
/* NYu4hyHrK ily traian LvaBKPRxg */     cout << sum;
/* NYu4hyHrK ily traian LvaBKPRxg */ }