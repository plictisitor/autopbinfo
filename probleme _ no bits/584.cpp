/* owiOwgETd ily traian Xxq4zt8CC */ #include <algorithm>
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
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ using namespace std;
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ int n , m , s , x , y , v[101] , d[101] , p , T[101] , L[101] , cnt;
/* owiOwgETd ily traian Xxq4zt8CC */ vector <int> G[101];
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ void bfs(int s)
/* owiOwgETd ily traian Xxq4zt8CC */ {
/* owiOwgETd ily traian Xxq4zt8CC */     queue <int>Q;
/* owiOwgETd ily traian Xxq4zt8CC */     Q.push(s);
/* owiOwgETd ily traian Xxq4zt8CC */     v[s] = 1;
/* owiOwgETd ily traian Xxq4zt8CC */     d[s] = 1;
/* owiOwgETd ily traian Xxq4zt8CC */     while(!Q.empty())
/* owiOwgETd ily traian Xxq4zt8CC */     {
/* owiOwgETd ily traian Xxq4zt8CC */         int x = Q.front();
/* owiOwgETd ily traian Xxq4zt8CC */         Q.pop();
/* owiOwgETd ily traian Xxq4zt8CC */         for(int i : G[x])
/* owiOwgETd ily traian Xxq4zt8CC */             if(!v[i])
/* owiOwgETd ily traian Xxq4zt8CC */             {
/* owiOwgETd ily traian Xxq4zt8CC */                 d[i] = d[x] + 1;
/* owiOwgETd ily traian Xxq4zt8CC */                 Q.push(i);
/* owiOwgETd ily traian Xxq4zt8CC */                 v[i] = 1;
/* owiOwgETd ily traian Xxq4zt8CC */             }
/* owiOwgETd ily traian Xxq4zt8CC */     }
/* owiOwgETd ily traian Xxq4zt8CC */ }
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ int main()
/* owiOwgETd ily traian Xxq4zt8CC */ {
/* owiOwgETd ily traian Xxq4zt8CC */     cin >> n >> m;
/* owiOwgETd ily traian Xxq4zt8CC */     for(int i = 1 ; i <= m ; i++)
/* owiOwgETd ily traian Xxq4zt8CC */     {
/* owiOwgETd ily traian Xxq4zt8CC */         cin >> x >> y;
/* owiOwgETd ily traian Xxq4zt8CC */         G[x].push_back(y);
/* owiOwgETd ily traian Xxq4zt8CC */     }
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */ 
/* owiOwgETd ily traian Xxq4zt8CC */     for(int i = 1 ; i <= n ; i++)
/* owiOwgETd ily traian Xxq4zt8CC */     {
/* owiOwgETd ily traian Xxq4zt8CC */         for(int j = 1 ; j <= n ; j++)
/* owiOwgETd ily traian Xxq4zt8CC */             d[j] = v[j] = 0;
/* owiOwgETd ily traian Xxq4zt8CC */         bfs(i);
/* owiOwgETd ily traian Xxq4zt8CC */         int ok = 0;
/* owiOwgETd ily traian Xxq4zt8CC */         for(int j = 1 ; j <= n ; j++)
/* owiOwgETd ily traian Xxq4zt8CC */             if(d[j] == 0 && j != i) ok++;
/* owiOwgETd ily traian Xxq4zt8CC */         if(ok == 0) cout << i << " ";
/* owiOwgETd ily traian Xxq4zt8CC */     }
/* owiOwgETd ily traian Xxq4zt8CC */ }