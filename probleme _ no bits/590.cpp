/* TpjvoYkDH ily traian Olha0VedU */ #include <algorithm>
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
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */ using namespace std;
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */ ifstream cin("prim.in");
/* TpjvoYkDH ily traian Olha0VedU */ ofstream cout("prim.out");
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */ vector <pair<int , int>> G[101];
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */ int n , m , x , y , c , S;
/* TpjvoYkDH ily traian Olha0VedU */ vector<int> T , D;
/* TpjvoYkDH ily traian Olha0VedU */ vector<bool>V;
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */ int main()
/* TpjvoYkDH ily traian Olha0VedU */ {
/* TpjvoYkDH ily traian Olha0VedU */     for(cin >> n >> m ; m ; --m)
/* TpjvoYkDH ily traian Olha0VedU */     {
/* TpjvoYkDH ily traian Olha0VedU */         cin >> x >> y >> c;
/* TpjvoYkDH ily traian Olha0VedU */         G[x].push_back({c , y});
/* TpjvoYkDH ily traian Olha0VedU */         G[y].push_back({c , x});
/* TpjvoYkDH ily traian Olha0VedU */     }
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */     priority_queue <
/* TpjvoYkDH ily traian Olha0VedU */         pair<int , int>  ,
/* TpjvoYkDH ily traian Olha0VedU */         vector<pair<int , int>> ,
/* TpjvoYkDH ily traian Olha0VedU */         greater<pair<int , int>>
/* TpjvoYkDH ily traian Olha0VedU */     >Q;
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */     V.resize(n + 1 , false);
/* TpjvoYkDH ily traian Olha0VedU */     T.resize(n + 1 , -1);
/* TpjvoYkDH ily traian Olha0VedU */     D.resize(n + 1 , 0x3f3f3f3f);
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */     V[1] = true;
/* TpjvoYkDH ily traian Olha0VedU */     T[1] = 0;
/* TpjvoYkDH ily traian Olha0VedU */     D[1] = 0;
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */     for(auto x : G[1])
/* TpjvoYkDH ily traian Olha0VedU */     {
/* TpjvoYkDH ily traian Olha0VedU */         T[x.second] = 1;
/* TpjvoYkDH ily traian Olha0VedU */         D[x.second] = x.first;
/* TpjvoYkDH ily traian Olha0VedU */         Q.push(x);
/* TpjvoYkDH ily traian Olha0VedU */     }
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */     for(int k = 1 ; k < n ; k++)
/* TpjvoYkDH ily traian Olha0VedU */     {
/* TpjvoYkDH ily traian Olha0VedU */         pair<int , int> P;
/* TpjvoYkDH ily traian Olha0VedU */         do{
/* TpjvoYkDH ily traian Olha0VedU */             P = Q.top();
/* TpjvoYkDH ily traian Olha0VedU */             Q.pop();
/* TpjvoYkDH ily traian Olha0VedU */         }while(V[P.second]);
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */         V[P.second] = true;
/* TpjvoYkDH ily traian Olha0VedU */         S += P.first;
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */         for(auto x : G[P.second])
/* TpjvoYkDH ily traian Olha0VedU */             if(V[x.second] == false && D[x.second] > x.first)
/* TpjvoYkDH ily traian Olha0VedU */             {
/* TpjvoYkDH ily traian Olha0VedU */                 T[x.second] = P.second;
/* TpjvoYkDH ily traian Olha0VedU */                 D[x.second] = x.first;
/* TpjvoYkDH ily traian Olha0VedU */                 Q.push(x);
/* TpjvoYkDH ily traian Olha0VedU */             }
/* TpjvoYkDH ily traian Olha0VedU */     }
/* TpjvoYkDH ily traian Olha0VedU */ 
/* TpjvoYkDH ily traian Olha0VedU */     cout << S << '\n';
/* TpjvoYkDH ily traian Olha0VedU */     for(int i = 1  ;i <= n ; i++)
/* TpjvoYkDH ily traian Olha0VedU */         cout << T[i] << " ";
/* TpjvoYkDH ily traian Olha0VedU */ }