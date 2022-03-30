/* pTQ6CeLdX ily traian tkLglxBSa */ #include <algorithm>
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
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */ using namespace std;
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */ ifstream cin("lungimeminima.in");
/* pTQ6CeLdX ily traian tkLglxBSa */ ofstream cout("lungimeminima.out");
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */ int n , m , x , y , a[101][101] , v[101] , d[101] , p , L , cnt;
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */ void bfs(int x)
/* pTQ6CeLdX ily traian tkLglxBSa */ {
/* pTQ6CeLdX ily traian tkLglxBSa */     v[x] = 1;
/* pTQ6CeLdX ily traian tkLglxBSa */     d[x] = 1;
/* pTQ6CeLdX ily traian tkLglxBSa */     queue <int> Q;
/* pTQ6CeLdX ily traian tkLglxBSa */     Q.push(x);
/* pTQ6CeLdX ily traian tkLglxBSa */     while(!Q.empty())
/* pTQ6CeLdX ily traian tkLglxBSa */     {
/* pTQ6CeLdX ily traian tkLglxBSa */         int aux = Q.front();
/* pTQ6CeLdX ily traian tkLglxBSa */         Q.pop();
/* pTQ6CeLdX ily traian tkLglxBSa */         for(int i = 1 ; i <= n ; i++)
/* pTQ6CeLdX ily traian tkLglxBSa */             if(!v[i] && a[aux][i] == 1)
/* pTQ6CeLdX ily traian tkLglxBSa */             {
/* pTQ6CeLdX ily traian tkLglxBSa */                 v[i] = 1;
/* pTQ6CeLdX ily traian tkLglxBSa */                 Q.push(i);
/* pTQ6CeLdX ily traian tkLglxBSa */                 d[i] = d[aux] + 1;
/* pTQ6CeLdX ily traian tkLglxBSa */             }
/* pTQ6CeLdX ily traian tkLglxBSa */     }
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */ }
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */ int main()
/* pTQ6CeLdX ily traian tkLglxBSa */ {
/* pTQ6CeLdX ily traian tkLglxBSa */     cin >> n >> p >> L;
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */     while(cin >> x >> y)
/* pTQ6CeLdX ily traian tkLglxBSa */     {
/* pTQ6CeLdX ily traian tkLglxBSa */         a[x][y] = a[y][x] = 1;
/* pTQ6CeLdX ily traian tkLglxBSa */     }
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */     bfs(p);
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */     for(int i = 1 ; i <= n ; i++)
/* pTQ6CeLdX ily traian tkLglxBSa */         if(d[i] == L + 1) cnt++;
/* pTQ6CeLdX ily traian tkLglxBSa */ 
/* pTQ6CeLdX ily traian tkLglxBSa */     cout << cnt << '\n';
/* pTQ6CeLdX ily traian tkLglxBSa */     for(int i = 1 ; i <= n ; i++)
/* pTQ6CeLdX ily traian tkLglxBSa */         if(d[i] == L + 1) cout << i << " ";
/* pTQ6CeLdX ily traian tkLglxBSa */ }