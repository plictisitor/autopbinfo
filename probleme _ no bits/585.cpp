/* 6iJTD7IOj ily traian wHM4qGzrY */ #include <algorithm>
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
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */ using namespace std;
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */ int n , m , s , x , y , v[101] , d[101] , p , cnt , sg[101] , k , vi , q , rez[1001];
/* 6iJTD7IOj ily traian wHM4qGzrY */ vector <int> G[101];
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */ void bfs(int s , int q)
/* 6iJTD7IOj ily traian wHM4qGzrY */ {
/* 6iJTD7IOj ily traian wHM4qGzrY */     queue <int>Q;
/* 6iJTD7IOj ily traian wHM4qGzrY */     Q.push(s);
/* 6iJTD7IOj ily traian wHM4qGzrY */     v[s] = 1;
/* 6iJTD7IOj ily traian wHM4qGzrY */     d[s] = 1;
/* 6iJTD7IOj ily traian wHM4qGzrY */     while(!Q.empty())
/* 6iJTD7IOj ily traian wHM4qGzrY */     {
/* 6iJTD7IOj ily traian wHM4qGzrY */         int x = Q.front();
/* 6iJTD7IOj ily traian wHM4qGzrY */         Q.pop();
/* 6iJTD7IOj ily traian wHM4qGzrY */         for(int i : G[x])
/* 6iJTD7IOj ily traian wHM4qGzrY */             if(!v[i] && (sg[i] || i == q))
/* 6iJTD7IOj ily traian wHM4qGzrY */             {
/* 6iJTD7IOj ily traian wHM4qGzrY */                 d[i] = d[x] + 1;
/* 6iJTD7IOj ily traian wHM4qGzrY */                 Q.push(i);
/* 6iJTD7IOj ily traian wHM4qGzrY */                 v[i] = 1;
/* 6iJTD7IOj ily traian wHM4qGzrY */             }
/* 6iJTD7IOj ily traian wHM4qGzrY */     }
/* 6iJTD7IOj ily traian wHM4qGzrY */ }
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */ int main()
/* 6iJTD7IOj ily traian wHM4qGzrY */ {
/* 6iJTD7IOj ily traian wHM4qGzrY */     cin >> n >> m >> k >> vi;
/* 6iJTD7IOj ily traian wHM4qGzrY */     for(int i = 1 ; i <= m ; i++)
/* 6iJTD7IOj ily traian wHM4qGzrY */     {
/* 6iJTD7IOj ily traian wHM4qGzrY */         cin >> x >> y;
/* 6iJTD7IOj ily traian wHM4qGzrY */         G[x].push_back(y);
/* 6iJTD7IOj ily traian wHM4qGzrY */     }
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */     for(int i = 1 ; i <= k ; i++)
/* 6iJTD7IOj ily traian wHM4qGzrY */     {
/* 6iJTD7IOj ily traian wHM4qGzrY */         cin >> x;
/* 6iJTD7IOj ily traian wHM4qGzrY */         sg[x] = 1;
/* 6iJTD7IOj ily traian wHM4qGzrY */     }
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */     for(int i = 1 ; i <= vi ; i++)
/* 6iJTD7IOj ily traian wHM4qGzrY */     {
/* 6iJTD7IOj ily traian wHM4qGzrY */         for(int j = 1 ; j <= n ; j++)
/* 6iJTD7IOj ily traian wHM4qGzrY */                 d[j] = v[j] = 0;
/* 6iJTD7IOj ily traian wHM4qGzrY */         cin >> p >> q;
/* 6iJTD7IOj ily traian wHM4qGzrY */         bfs(p , q);
/* 6iJTD7IOj ily traian wHM4qGzrY */         if(v[q] > 0) rez[++cnt] = 1;
/* 6iJTD7IOj ily traian wHM4qGzrY */         else rez[++cnt] = 0;
/* 6iJTD7IOj ily traian wHM4qGzrY */     }
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */     for(int i = 1 ; i <= cnt; i++)
/* 6iJTD7IOj ily traian wHM4qGzrY */         if(rez[i] == 1) cout << "DA" << '\n';
/* 6iJTD7IOj ily traian wHM4qGzrY */     else cout << "NU" << '\n';
/* 6iJTD7IOj ily traian wHM4qGzrY */ 
/* 6iJTD7IOj ily traian wHM4qGzrY */ }