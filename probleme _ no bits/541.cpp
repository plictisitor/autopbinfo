/* F0aREQRM6 ily traian XGT0TNoYN */ #include <algorithm>
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
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ using namespace std;
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ ifstream cin("lant1.in");
/* F0aREQRM6 ily traian XGT0TNoYN */ ofstream cout("lant1.out");
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ int n , m , l , x , y , v[101] , d[101] , p , T[101] , cnt , q , r , rez[101];
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ vector <int> G[101];
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ void bfs(int s)
/* F0aREQRM6 ily traian XGT0TNoYN */ {
/* F0aREQRM6 ily traian XGT0TNoYN */     queue <int>Q;
/* F0aREQRM6 ily traian XGT0TNoYN */     Q.push(s);
/* F0aREQRM6 ily traian XGT0TNoYN */     v[s] = 1;
/* F0aREQRM6 ily traian XGT0TNoYN */     d[s] = 1;
/* F0aREQRM6 ily traian XGT0TNoYN */     T[s] = 0;
/* F0aREQRM6 ily traian XGT0TNoYN */     while(!Q.empty())
/* F0aREQRM6 ily traian XGT0TNoYN */     {
/* F0aREQRM6 ily traian XGT0TNoYN */         int x = Q.front();
/* F0aREQRM6 ily traian XGT0TNoYN */         Q.pop();
/* F0aREQRM6 ily traian XGT0TNoYN */         for(int i : G[x])
/* F0aREQRM6 ily traian XGT0TNoYN */             if(!v[i])
/* F0aREQRM6 ily traian XGT0TNoYN */             {
/* F0aREQRM6 ily traian XGT0TNoYN */                 d[i] = d[x] + 1;
/* F0aREQRM6 ily traian XGT0TNoYN */                 Q.push(i);
/* F0aREQRM6 ily traian XGT0TNoYN */                 v[i] = 1;
/* F0aREQRM6 ily traian XGT0TNoYN */                 T[i] = x;
/* F0aREQRM6 ily traian XGT0TNoYN */             }
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */     }
/* F0aREQRM6 ily traian XGT0TNoYN */ }
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */ int main()
/* F0aREQRM6 ily traian XGT0TNoYN */ {
/* F0aREQRM6 ily traian XGT0TNoYN */     cin >> n >> p >> q >> r;
/* F0aREQRM6 ily traian XGT0TNoYN */     while(cin >> x >> y)
/* F0aREQRM6 ily traian XGT0TNoYN */     {
/* F0aREQRM6 ily traian XGT0TNoYN */         G[x].push_back(y);
/* F0aREQRM6 ily traian XGT0TNoYN */         G[y].push_back(x);
/* F0aREQRM6 ily traian XGT0TNoYN */     }
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */     bfs(r);
/* F0aREQRM6 ily traian XGT0TNoYN */     int paux = p;
/* F0aREQRM6 ily traian XGT0TNoYN */     while (paux != r)
/* F0aREQRM6 ily traian XGT0TNoYN */     {
/* F0aREQRM6 ily traian XGT0TNoYN */         rez[++cnt] = paux;
/* F0aREQRM6 ily traian XGT0TNoYN */         paux = T[paux];
/* F0aREQRM6 ily traian XGT0TNoYN */     }
/* F0aREQRM6 ily traian XGT0TNoYN */     for (int i = 0; i <= n; ++ i)
/* F0aREQRM6 ily traian XGT0TNoYN */         v[i] = 0;
/* F0aREQRM6 ily traian XGT0TNoYN */     bfs(q);
/* F0aREQRM6 ily traian XGT0TNoYN */     paux = r;
/* F0aREQRM6 ily traian XGT0TNoYN */     while (paux != q && paux != 0)
/* F0aREQRM6 ily traian XGT0TNoYN */     {
/* F0aREQRM6 ily traian XGT0TNoYN */         rez[++cnt] = paux;
/* F0aREQRM6 ily traian XGT0TNoYN */         paux = T[paux];
/* F0aREQRM6 ily traian XGT0TNoYN */     }
/* F0aREQRM6 ily traian XGT0TNoYN */     rez[++cnt] = q;
/* F0aREQRM6 ily traian XGT0TNoYN */ 
/* F0aREQRM6 ily traian XGT0TNoYN */     cout << cnt << '\n';
/* F0aREQRM6 ily traian XGT0TNoYN */     for(int i = 1 ; i <= cnt ; i++)
/* F0aREQRM6 ily traian XGT0TNoYN */         cout << rez[i] << " ";
/* F0aREQRM6 ily traian XGT0TNoYN */ }