/* gvOjfRzKv ily traian 1iuHc3MQq */ #include <algorithm>
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
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */ using namespace std;
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */ ifstream cin("lantminim.in");
/* gvOjfRzKv ily traian 1iuHc3MQq */ ofstream cout("lantminim.out");
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */ int n , m , x , y , a[101][101] , v[101] , T[101] , p , q , cnt , rez[101];
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */ void bfs(int x)
/* gvOjfRzKv ily traian 1iuHc3MQq */ {
/* gvOjfRzKv ily traian 1iuHc3MQq */     v[x] = 1;
/* gvOjfRzKv ily traian 1iuHc3MQq */     T[x] = 0;
/* gvOjfRzKv ily traian 1iuHc3MQq */     queue <int> Q;
/* gvOjfRzKv ily traian 1iuHc3MQq */     Q.push(x);
/* gvOjfRzKv ily traian 1iuHc3MQq */     while(!Q.empty())
/* gvOjfRzKv ily traian 1iuHc3MQq */     {
/* gvOjfRzKv ily traian 1iuHc3MQq */         int aux = Q.front();
/* gvOjfRzKv ily traian 1iuHc3MQq */         Q.pop();
/* gvOjfRzKv ily traian 1iuHc3MQq */         for(int i = 1 ; i <= n ; i++)
/* gvOjfRzKv ily traian 1iuHc3MQq */             if(!v[i] && a[aux][i] == 1)
/* gvOjfRzKv ily traian 1iuHc3MQq */             {
/* gvOjfRzKv ily traian 1iuHc3MQq */                 v[i] = 1;
/* gvOjfRzKv ily traian 1iuHc3MQq */                 Q.push(i);
/* gvOjfRzKv ily traian 1iuHc3MQq */                 T[i] = aux;
/* gvOjfRzKv ily traian 1iuHc3MQq */             }
/* gvOjfRzKv ily traian 1iuHc3MQq */     }
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */ }
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */ int main()
/* gvOjfRzKv ily traian 1iuHc3MQq */ {
/* gvOjfRzKv ily traian 1iuHc3MQq */     cin >> n >> p >> q;
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */     while(cin >> x >> y)
/* gvOjfRzKv ily traian 1iuHc3MQq */     {
/* gvOjfRzKv ily traian 1iuHc3MQq */         a[x][y] = a[y][x] = 1;
/* gvOjfRzKv ily traian 1iuHc3MQq */     }
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */     bfs(q);
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */     int aux = p;
/* gvOjfRzKv ily traian 1iuHc3MQq */     while(aux != q)
/* gvOjfRzKv ily traian 1iuHc3MQq */     {
/* gvOjfRzKv ily traian 1iuHc3MQq */         rez[++cnt] = aux;
/* gvOjfRzKv ily traian 1iuHc3MQq */         aux = T[aux];
/* gvOjfRzKv ily traian 1iuHc3MQq */     }
/* gvOjfRzKv ily traian 1iuHc3MQq */     rez[++cnt] = aux;
/* gvOjfRzKv ily traian 1iuHc3MQq */ 
/* gvOjfRzKv ily traian 1iuHc3MQq */     cout << cnt << '\n';
/* gvOjfRzKv ily traian 1iuHc3MQq */     for(int i = 1 ; i <= cnt; i++)
/* gvOjfRzKv ily traian 1iuHc3MQq */         cout << rez[i] << " ";
/* gvOjfRzKv ily traian 1iuHc3MQq */ }