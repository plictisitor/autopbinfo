/* YsE320KKc ily traian e9Vb0Wgga */ #include <algorithm>
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
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ using namespace std;
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ ifstream cin("gears.in");
/* YsE320KKc ily traian e9Vb0Wgga */ ofstream cout("gears.out");
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ int n , x , y , m , p , d[1001] , v[1001];
/* YsE320KKc ily traian e9Vb0Wgga */ vector <int> G[1001];
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ void bfs(int s)
/* YsE320KKc ily traian e9Vb0Wgga */ {
/* YsE320KKc ily traian e9Vb0Wgga */     queue <int> Q;
/* YsE320KKc ily traian e9Vb0Wgga */     v[s] = 1;
/* YsE320KKc ily traian e9Vb0Wgga */     d[s] = 1;
/* YsE320KKc ily traian e9Vb0Wgga */     Q.push(s);
/* YsE320KKc ily traian e9Vb0Wgga */     while(!Q.empty())
/* YsE320KKc ily traian e9Vb0Wgga */     {
/* YsE320KKc ily traian e9Vb0Wgga */         int x = Q.front();
/* YsE320KKc ily traian e9Vb0Wgga */         for(int i : G[x])
/* YsE320KKc ily traian e9Vb0Wgga */             if(!v[i])
/* YsE320KKc ily traian e9Vb0Wgga */             {
/* YsE320KKc ily traian e9Vb0Wgga */                 Q.push(i);
/* YsE320KKc ily traian e9Vb0Wgga */                 v[i] = 1;
/* YsE320KKc ily traian e9Vb0Wgga */                 d[i] = d[x] + 1;
/* YsE320KKc ily traian e9Vb0Wgga */             }
/* YsE320KKc ily traian e9Vb0Wgga */         Q.pop();
/* YsE320KKc ily traian e9Vb0Wgga */     }
/* YsE320KKc ily traian e9Vb0Wgga */ }
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */ int main()
/* YsE320KKc ily traian e9Vb0Wgga */ {
/* YsE320KKc ily traian e9Vb0Wgga */     cin >> n >> p;
/* YsE320KKc ily traian e9Vb0Wgga */     while(cin >> x >> y)
/* YsE320KKc ily traian e9Vb0Wgga */     {
/* YsE320KKc ily traian e9Vb0Wgga */         G[x].push_back(y);
/* YsE320KKc ily traian e9Vb0Wgga */         G[y].push_back(x);
/* YsE320KKc ily traian e9Vb0Wgga */     }
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */     bfs(p);
/* YsE320KKc ily traian e9Vb0Wgga */ 
/* YsE320KKc ily traian e9Vb0Wgga */     for(int i = 1 ; i <= n ; i++)
/* YsE320KKc ily traian e9Vb0Wgga */         if(d[i] % 2 == 1) cout << "D";
/* YsE320KKc ily traian e9Vb0Wgga */         else cout << "S";
/* YsE320KKc ily traian e9Vb0Wgga */ }