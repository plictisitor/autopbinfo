/* QKo0mUhpo ily traian wetHspi7u */ #include <algorithm>
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
/* QKo0mUhpo ily traian wetHspi7u */ #include<queue>
/* QKo0mUhpo ily traian wetHspi7u */ using namespace std;
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */ ifstream cin("bipartit2.in");
/* QKo0mUhpo ily traian wetHspi7u */ ofstream cout("bipartit2.out");
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */ int a[101][101], p[100] , v[101] , n , m , q , w;
/* QKo0mUhpo ily traian wetHspi7u */ queue<int> Q;
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */ void Bfs(int x)
/* QKo0mUhpo ily traian wetHspi7u */ {
/* QKo0mUhpo ily traian wetHspi7u */     v[x] = 1;
/* QKo0mUhpo ily traian wetHspi7u */     Q.push(x);
/* QKo0mUhpo ily traian wetHspi7u */     while(!Q.empty())
/* QKo0mUhpo ily traian wetHspi7u */     {
/* QKo0mUhpo ily traian wetHspi7u */         int k = Q.front();
/* QKo0mUhpo ily traian wetHspi7u */         Q.pop();
/* QKo0mUhpo ily traian wetHspi7u */         p[k] = true;
/* QKo0mUhpo ily traian wetHspi7u */         for(int i = 1 ; i <= n ; i++)
/* QKo0mUhpo ily traian wetHspi7u */             if(!p[i] && a[k][i])
/* QKo0mUhpo ily traian wetHspi7u */             {
/* QKo0mUhpo ily traian wetHspi7u */                 v[i] = - v[k];
/* QKo0mUhpo ily traian wetHspi7u */                 Q.push(i);
/* QKo0mUhpo ily traian wetHspi7u */             }
/* QKo0mUhpo ily traian wetHspi7u */     }
/* QKo0mUhpo ily traian wetHspi7u */ }
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */ int ver()
/* QKo0mUhpo ily traian wetHspi7u */ {
/* QKo0mUhpo ily traian wetHspi7u */     int ok = 1;
/* QKo0mUhpo ily traian wetHspi7u */     for(int i = 1 ; i <= n && ok; i++)
/* QKo0mUhpo ily traian wetHspi7u */         for(int j = i + 1 ; j <= n ; j++)
/* QKo0mUhpo ily traian wetHspi7u */             if(v[i] == v[j] && a[i][j]) ok = 0;
/* QKo0mUhpo ily traian wetHspi7u */     if(ok) return 1;
/* QKo0mUhpo ily traian wetHspi7u */     return 0;
/* QKo0mUhpo ily traian wetHspi7u */ }
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */ int main()
/* QKo0mUhpo ily traian wetHspi7u */ {
/* QKo0mUhpo ily traian wetHspi7u */     cin >> n >> m;
/* QKo0mUhpo ily traian wetHspi7u */     for(int i = 1 ; i <= m ; i++)
/* QKo0mUhpo ily traian wetHspi7u */     {
/* QKo0mUhpo ily traian wetHspi7u */         cin >> w >> q;
/* QKo0mUhpo ily traian wetHspi7u */         a[w][q] = a[q][w] = 1;
/* QKo0mUhpo ily traian wetHspi7u */     }
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */     for(int i = 1 ; i <= n ; i++)
/* QKo0mUhpo ily traian wetHspi7u */         if(!p[i]) Bfs(i);
/* QKo0mUhpo ily traian wetHspi7u */ 
/* QKo0mUhpo ily traian wetHspi7u */     if(ver())
/* QKo0mUhpo ily traian wetHspi7u */     {
/* QKo0mUhpo ily traian wetHspi7u */         cout << "DA" << '\n';
/* QKo0mUhpo ily traian wetHspi7u */         for(int i = 1 ; i <= n ; i++)
/* QKo0mUhpo ily traian wetHspi7u */             if(v[i] == 1) cout << i << " ";
/* QKo0mUhpo ily traian wetHspi7u */         cout << '\n';
/* QKo0mUhpo ily traian wetHspi7u */         for(int i = 1 ; i <= n ; i++)
/* QKo0mUhpo ily traian wetHspi7u */             if(v[i] == -1) cout << i << " ";
/* QKo0mUhpo ily traian wetHspi7u */         cout << '\n';
/* QKo0mUhpo ily traian wetHspi7u */     }
/* QKo0mUhpo ily traian wetHspi7u */     else cout << "NU";
/* QKo0mUhpo ily traian wetHspi7u */     return 0;
/* QKo0mUhpo ily traian wetHspi7u */ }