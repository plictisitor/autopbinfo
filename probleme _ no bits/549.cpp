/* 1EXVvX9uy ily traian d1uK240Pm */ #include <algorithm>
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
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ using namespace std;
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ ifstream cin("epidemie.in");
/* 1EXVvX9uy ily traian d1uK240Pm */ ofstream cout("epidemie.out");
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ int n , x , y , m , p , d[1001] , v[1001] , a , maxi;
/* 1EXVvX9uy ily traian d1uK240Pm */ vector <int> G[1001];
/* 1EXVvX9uy ily traian d1uK240Pm */ queue <int> Q;
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ void bfs()
/* 1EXVvX9uy ily traian d1uK240Pm */ {
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */     while(!Q.empty())
/* 1EXVvX9uy ily traian d1uK240Pm */     {
/* 1EXVvX9uy ily traian d1uK240Pm */         int x = Q.front();
/* 1EXVvX9uy ily traian d1uK240Pm */         for(int i : G[x])
/* 1EXVvX9uy ily traian d1uK240Pm */             if(!v[i])
/* 1EXVvX9uy ily traian d1uK240Pm */             {
/* 1EXVvX9uy ily traian d1uK240Pm */                 Q.push(i);
/* 1EXVvX9uy ily traian d1uK240Pm */                 v[i] = 1;
/* 1EXVvX9uy ily traian d1uK240Pm */                 d[i] = d[x] + 1;
/* 1EXVvX9uy ily traian d1uK240Pm */             }
/* 1EXVvX9uy ily traian d1uK240Pm */         Q.pop();
/* 1EXVvX9uy ily traian d1uK240Pm */     }
/* 1EXVvX9uy ily traian d1uK240Pm */ }
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */ int main()
/* 1EXVvX9uy ily traian d1uK240Pm */ {
/* 1EXVvX9uy ily traian d1uK240Pm */     cin >> n >> m;
/* 1EXVvX9uy ily traian d1uK240Pm */     for(int i = 1 ; i <= m ; i++)
/* 1EXVvX9uy ily traian d1uK240Pm */     {
/* 1EXVvX9uy ily traian d1uK240Pm */         cin >> x >> y ;
/* 1EXVvX9uy ily traian d1uK240Pm */         G[x].push_back(y);
/* 1EXVvX9uy ily traian d1uK240Pm */         G[y].push_back(x);
/* 1EXVvX9uy ily traian d1uK240Pm */     }
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */     cin >> p;
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */     for(int i = 1 ; i <= p ; i++)
/* 1EXVvX9uy ily traian d1uK240Pm */     {
/* 1EXVvX9uy ily traian d1uK240Pm */         cin >> a;
/* 1EXVvX9uy ily traian d1uK240Pm */         v[a] = 1;
/* 1EXVvX9uy ily traian d1uK240Pm */         d[a] = 1;
/* 1EXVvX9uy ily traian d1uK240Pm */         Q.push(a);
/* 1EXVvX9uy ily traian d1uK240Pm */     }
/* 1EXVvX9uy ily traian d1uK240Pm */     bfs();
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */     for(int i = 1 ; i <= n ; i++)
/* 1EXVvX9uy ily traian d1uK240Pm */         if(d[i] > maxi) maxi = d[i];
/* 1EXVvX9uy ily traian d1uK240Pm */ 
/* 1EXVvX9uy ily traian d1uK240Pm */     cout << maxi;
/* 1EXVvX9uy ily traian d1uK240Pm */ }