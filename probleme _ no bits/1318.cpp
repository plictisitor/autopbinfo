/* LrSUJ1i3K ily traian tEyShEQUD */ #include <algorithm>
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
/* LrSUJ1i3K ily traian tEyShEQUD */ #include<queue>
/* LrSUJ1i3K ily traian tEyShEQUD */ using namespace std;
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */ ifstream cin("bipartit1mare.in");
/* LrSUJ1i3K ily traian tEyShEQUD */ ofstream cout("bipartit1mare.out");
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */ int a[101][101], p[101];
/* LrSUJ1i3K ily traian tEyShEQUD */ int v[101], n, m , q , w;
/* LrSUJ1i3K ily traian tEyShEQUD */ queue<int> Q;
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */ void Bfs(int x)
/* LrSUJ1i3K ily traian tEyShEQUD */ {
/* LrSUJ1i3K ily traian tEyShEQUD */     v[x] = 1;
/* LrSUJ1i3K ily traian tEyShEQUD */     Q.push(x);
/* LrSUJ1i3K ily traian tEyShEQUD */     while(!Q.empty())
/* LrSUJ1i3K ily traian tEyShEQUD */     {
/* LrSUJ1i3K ily traian tEyShEQUD */         int k = Q.front();
/* LrSUJ1i3K ily traian tEyShEQUD */         Q.pop();
/* LrSUJ1i3K ily traian tEyShEQUD */         p[k] = true;
/* LrSUJ1i3K ily traian tEyShEQUD */         for(int i = 1 ; i <= n ; i++)
/* LrSUJ1i3K ily traian tEyShEQUD */             if(!p[i] && a[k][i])
/* LrSUJ1i3K ily traian tEyShEQUD */             {
/* LrSUJ1i3K ily traian tEyShEQUD */                 v[i] = - v[k];
/* LrSUJ1i3K ily traian tEyShEQUD */                 Q.push(i);
/* LrSUJ1i3K ily traian tEyShEQUD */             }
/* LrSUJ1i3K ily traian tEyShEQUD */     }
/* LrSUJ1i3K ily traian tEyShEQUD */ }
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */ int ver()
/* LrSUJ1i3K ily traian tEyShEQUD */ {
/* LrSUJ1i3K ily traian tEyShEQUD */     int ok = 1;
/* LrSUJ1i3K ily traian tEyShEQUD */     for(int i = 1 ; i <= n && ok; i++)
/* LrSUJ1i3K ily traian tEyShEQUD */         for(int j = i + 1 ; j <= n ; j++)
/* LrSUJ1i3K ily traian tEyShEQUD */             if(v[i] == v[j] && a[i][j]) ok = 0;
/* LrSUJ1i3K ily traian tEyShEQUD */     if(ok) return 1;
/* LrSUJ1i3K ily traian tEyShEQUD */     return 0;
/* LrSUJ1i3K ily traian tEyShEQUD */ }
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */ int main()
/* LrSUJ1i3K ily traian tEyShEQUD */ {
/* LrSUJ1i3K ily traian tEyShEQUD */     cin >> n >> m;
/* LrSUJ1i3K ily traian tEyShEQUD */     for(int i = 1 ; i <= m ; i++)
/* LrSUJ1i3K ily traian tEyShEQUD */     {
/* LrSUJ1i3K ily traian tEyShEQUD */         cin >> w >> q;
/* LrSUJ1i3K ily traian tEyShEQUD */         a[w][q] = a[q][w] = 1;
/* LrSUJ1i3K ily traian tEyShEQUD */     }
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */     for(int i = 1 ; i <= n ; i++)
/* LrSUJ1i3K ily traian tEyShEQUD */         if(!p[i]) Bfs(i);
/* LrSUJ1i3K ily traian tEyShEQUD */ 
/* LrSUJ1i3K ily traian tEyShEQUD */     if(ver())
/* LrSUJ1i3K ily traian tEyShEQUD */     {
/* LrSUJ1i3K ily traian tEyShEQUD */         cout << "DA" << '\n';
/* LrSUJ1i3K ily traian tEyShEQUD */         for(int i = 1 ; i <= n ; i++)
/* LrSUJ1i3K ily traian tEyShEQUD */             if(v[i] == 1) cout << i << " ";
/* LrSUJ1i3K ily traian tEyShEQUD */         cout << '\n';
/* LrSUJ1i3K ily traian tEyShEQUD */         for(int i = 1 ; i <= n ; i++)
/* LrSUJ1i3K ily traian tEyShEQUD */             if(v[i] == -1) cout << i << " ";
/* LrSUJ1i3K ily traian tEyShEQUD */         cout << '\n';
/* LrSUJ1i3K ily traian tEyShEQUD */     }
/* LrSUJ1i3K ily traian tEyShEQUD */     else cout << "NU";
/* LrSUJ1i3K ily traian tEyShEQUD */     return 0;
/* LrSUJ1i3K ily traian tEyShEQUD */ }