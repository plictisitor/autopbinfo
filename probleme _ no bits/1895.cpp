/* pi85nXmbt ily traian O4c7w8Cer */ #include <algorithm>
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
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */ using namespace std;
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */ ifstream cin("festivaluri.in");
/* pi85nXmbt ily traian O4c7w8Cer */ ofstream cout("festivaluri.out");
/* pi85nXmbt ily traian O4c7w8Cer */ using VVP = vector <vector <pair<int , int> > >;
/* pi85nXmbt ily traian O4c7w8Cer */ using VI = vector <int>;
/* pi85nXmbt ily traian O4c7w8Cer */ using PI = pair<int , int>;
/* pi85nXmbt ily traian O4c7w8Cer */ VI d;
/* pi85nXmbt ily traian O4c7w8Cer */ VVP G;
/* pi85nXmbt ily traian O4c7w8Cer */ const int Inf = 0x3f3f3f3f;
/* pi85nXmbt ily traian O4c7w8Cer */ int n , m , p , z , r , rez[101] , sum , cnt;
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */ void Dijkstra(int x)
/* pi85nXmbt ily traian O4c7w8Cer */ {
/* pi85nXmbt ily traian O4c7w8Cer */     d = VI(n + 1, Inf);
/* pi85nXmbt ily traian O4c7w8Cer */     priority_queue<PI, vector<PI>, greater<PI>> Q;
/* pi85nXmbt ily traian O4c7w8Cer */     int y , cost , dist;
/* pi85nXmbt ily traian O4c7w8Cer */     d[x] = 0;
/* pi85nXmbt ily traian O4c7w8Cer */     Q.push({0 , x});
/* pi85nXmbt ily traian O4c7w8Cer */     while(!Q.empty())
/* pi85nXmbt ily traian O4c7w8Cer */     {
/* pi85nXmbt ily traian O4c7w8Cer */         x = Q.top().second;
/* pi85nXmbt ily traian O4c7w8Cer */         dist = Q.top().first;
/* pi85nXmbt ily traian O4c7w8Cer */         Q.pop();
/* pi85nXmbt ily traian O4c7w8Cer */         if(dist > d[x]) continue;
/* pi85nXmbt ily traian O4c7w8Cer */         for(auto& p : G[x])
/* pi85nXmbt ily traian O4c7w8Cer */         {
/* pi85nXmbt ily traian O4c7w8Cer */             y = p.first;
/* pi85nXmbt ily traian O4c7w8Cer */             cost = p.second;
/* pi85nXmbt ily traian O4c7w8Cer */             if(d[y] > d[x] + cost)
/* pi85nXmbt ily traian O4c7w8Cer */             {
/* pi85nXmbt ily traian O4c7w8Cer */                 d[y] = d[x] + cost;
/* pi85nXmbt ily traian O4c7w8Cer */                 Q.push({d[y] , y});
/* pi85nXmbt ily traian O4c7w8Cer */             }
/* pi85nXmbt ily traian O4c7w8Cer */         }
/* pi85nXmbt ily traian O4c7w8Cer */     }
/* pi85nXmbt ily traian O4c7w8Cer */ }
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */ int main()
/* pi85nXmbt ily traian O4c7w8Cer */ {
/* pi85nXmbt ily traian O4c7w8Cer */     cin >> n >> m >> p >> z >> r;
/* pi85nXmbt ily traian O4c7w8Cer */     G = VVP(n + 1);
/* pi85nXmbt ily traian O4c7w8Cer */     int x , y , w;
/* pi85nXmbt ily traian O4c7w8Cer */     for(int i = 1 ; i <= m ; i++)
/* pi85nXmbt ily traian O4c7w8Cer */     {
/* pi85nXmbt ily traian O4c7w8Cer */         cin >> x >> y >> w;
/* pi85nXmbt ily traian O4c7w8Cer */         G[x].push_back({y , w});
/* pi85nXmbt ily traian O4c7w8Cer */     }
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */     Dijkstra(z);
/* pi85nXmbt ily traian O4c7w8Cer */     for(int i = 1 ; i <= r ; i++)
/* pi85nXmbt ily traian O4c7w8Cer */     {
/* pi85nXmbt ily traian O4c7w8Cer */         cin >> x;
/* pi85nXmbt ily traian O4c7w8Cer */         rez[x] = d[x];
/* pi85nXmbt ily traian O4c7w8Cer */     }
/* pi85nXmbt ily traian O4c7w8Cer */ 
/* pi85nXmbt ily traian O4c7w8Cer */     sort(rez + 1 , rez + n + 1);
/* pi85nXmbt ily traian O4c7w8Cer */     for(int i = 1 ; i <= n ; i++)
/* pi85nXmbt ily traian O4c7w8Cer */         if(rez[i] > 0)
/* pi85nXmbt ily traian O4c7w8Cer */         {
/* pi85nXmbt ily traian O4c7w8Cer */             if(sum + rez[i] < p) sum += rez[i] , cnt++;
/* pi85nXmbt ily traian O4c7w8Cer */             else break;
/* pi85nXmbt ily traian O4c7w8Cer */         }
/* pi85nXmbt ily traian O4c7w8Cer */     cout << cnt;
/* pi85nXmbt ily traian O4c7w8Cer */ }