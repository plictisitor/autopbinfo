/* lG4h1fBS6 ily traian dYKT5Ea0R */ #include <algorithm>
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
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ using namespace std;
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ stack <int> S;
/* lG4h1fBS6 ily traian dYKT5Ea0R */ int n , m , x , y , v[100001] , L[100001] , cnt , inS[100001] , rez , e , s[100001] , viz[100001] , T[100001];
/* lG4h1fBS6 ily traian dYKT5Ea0R */ vector <int> G[100001];
/* lG4h1fBS6 ily traian dYKT5Ea0R */ vector <int> P[100001];
/* lG4h1fBS6 ily traian dYKT5Ea0R */ vector <int>c;
/* lG4h1fBS6 ily traian dYKT5Ea0R */ vector <vector<int>> cc;
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ void tarjan(int nod)
/* lG4h1fBS6 ily traian dYKT5Ea0R */ {
/* lG4h1fBS6 ily traian dYKT5Ea0R */     cnt++;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     v[nod] = L[nod] = cnt;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     S.push(nod);
/* lG4h1fBS6 ily traian dYKT5Ea0R */     inS[nod] = 1;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(auto i:G[nod])
/* lG4h1fBS6 ily traian dYKT5Ea0R */     {
/* lG4h1fBS6 ily traian dYKT5Ea0R */         if(!v[i]) tarjan(i) , L[nod] = min(L[nod] , L[i]);
/* lG4h1fBS6 ily traian dYKT5Ea0R */         else if(inS[i] == 1) L[nod] = min(L[nod] , v[i]);
/* lG4h1fBS6 ily traian dYKT5Ea0R */     }
/* lG4h1fBS6 ily traian dYKT5Ea0R */     if(v[nod] == L[nod])
/* lG4h1fBS6 ily traian dYKT5Ea0R */     {
/* lG4h1fBS6 ily traian dYKT5Ea0R */         c.clear();
/* lG4h1fBS6 ily traian dYKT5Ea0R */         while(1)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         {
/* lG4h1fBS6 ily traian dYKT5Ea0R */             int val = S.top();
/* lG4h1fBS6 ily traian dYKT5Ea0R */             S.pop();
/* lG4h1fBS6 ily traian dYKT5Ea0R */             c.push_back(val);
/* lG4h1fBS6 ily traian dYKT5Ea0R */             inS[val] = 0;
/* lG4h1fBS6 ily traian dYKT5Ea0R */             if(nod == val) break;
/* lG4h1fBS6 ily traian dYKT5Ea0R */         }
/* lG4h1fBS6 ily traian dYKT5Ea0R */         rez++;
/* lG4h1fBS6 ily traian dYKT5Ea0R */         for(auto i:c)
/* lG4h1fBS6 ily traian dYKT5Ea0R */             s[i] = rez;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     }
/* lG4h1fBS6 ily traian dYKT5Ea0R */ }
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ int main()
/* lG4h1fBS6 ily traian dYKT5Ea0R */ {
/* lG4h1fBS6 ily traian dYKT5Ea0R */     cin >> n >> m;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= m ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */     {
/* lG4h1fBS6 ily traian dYKT5Ea0R */         cin >> x >> y;
/* lG4h1fBS6 ily traian dYKT5Ea0R */         G[x].push_back(y);
/* lG4h1fBS6 ily traian dYKT5Ea0R */     }
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= n ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         if(!v[i]) cnt = 0 , tarjan(i);
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */     int c = 1;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= n ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         if(!T[s[i]]) T[s[i]] = c++;
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= n ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         s[i] = T[s[i]];
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */     /*for(int i = 1 ; i <= n ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         cout << s[i] << " ";
/* lG4h1fBS6 ily traian dYKT5Ea0R */     cout << '\n';*/
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= n ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         for(auto j : G[i])
/* lG4h1fBS6 ily traian dYKT5Ea0R */             if(s[i] != s[j]) P[s[i]].push_back(s[j]) , viz[s[i]] = viz[s[j]] = 1;
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= rez; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */     {
/* lG4h1fBS6 ily traian dYKT5Ea0R */         sort(P[i].begin() , P[i].end());
/* lG4h1fBS6 ily traian dYKT5Ea0R */     }
/* lG4h1fBS6 ily traian dYKT5Ea0R */     for(int i = 1 ; i <= rez ; i++)
/* lG4h1fBS6 ily traian dYKT5Ea0R */     {
/* lG4h1fBS6 ily traian dYKT5Ea0R */         int ok = 0;
/* lG4h1fBS6 ily traian dYKT5Ea0R */         for(auto j:P[i]) ok++;
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */         if(viz[i] != 0 && ok == 0) cout << 0 << '\n';
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */         if(ok != 0)
/* lG4h1fBS6 ily traian dYKT5Ea0R */         {
/* lG4h1fBS6 ily traian dYKT5Ea0R */             for(auto j : P[i])
/* lG4h1fBS6 ily traian dYKT5Ea0R */                 cout << j << " ";
/* lG4h1fBS6 ily traian dYKT5Ea0R */             cout << '\n';
/* lG4h1fBS6 ily traian dYKT5Ea0R */         }
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */     }
/* lG4h1fBS6 ily traian dYKT5Ea0R */ 
/* lG4h1fBS6 ily traian dYKT5Ea0R */ }