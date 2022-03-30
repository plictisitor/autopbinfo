/* CenzjWK8u ily traian rWHCeCBvi */ #include <algorithm>
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
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ using namespace std;
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ #define inf 1000000000000000001;
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ ifstream cin("modernizare.in");
/* CenzjWK8u ily traian rWHCeCBvi */ ofstream cout("modernizare.out");
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ long long d[100001];
/* CenzjWK8u ily traian rWHCeCBvi */ long long n, mu, f;
/* CenzjWK8u ily traian rWHCeCBvi */ vector<vector<pair<long long, long long>>> G(100001);
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ struct muchie{
/* CenzjWK8u ily traian rWHCeCBvi */     long long i, j, c;
/* CenzjWK8u ily traian rWHCeCBvi */ }m[100001];
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ bool comp(muchie a, muchie b){
/* CenzjWK8u ily traian rWHCeCBvi */     if(min(d[a.i], d[a.j]) != min(d[b.i], d[b.j]))
/* CenzjWK8u ily traian rWHCeCBvi */         return min(d[a.i], d[a.j]) < min(d[b.i], d[b.j]);
/* CenzjWK8u ily traian rWHCeCBvi */     if(max(d[a.i], d[a.j]) != max(d[b.i], d[b.j]))
/* CenzjWK8u ily traian rWHCeCBvi */         return max(d[a.i], d[a.j]) < max(d[b.i], d[b.j]);
/* CenzjWK8u ily traian rWHCeCBvi */     return a.c < b.c;
/* CenzjWK8u ily traian rWHCeCBvi */ }
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ void BFS(){
/* CenzjWK8u ily traian rWHCeCBvi */     d[1] = 0;
/* CenzjWK8u ily traian rWHCeCBvi */     for(int i = 2; i <= n; ++i)
/* CenzjWK8u ily traian rWHCeCBvi */         d[i] = inf;
/* CenzjWK8u ily traian rWHCeCBvi */     queue<int> Q;
/* CenzjWK8u ily traian rWHCeCBvi */     Q.push(1);
/* CenzjWK8u ily traian rWHCeCBvi */     while(!Q.empty()){
/* CenzjWK8u ily traian rWHCeCBvi */         int nod = Q.front();
/* CenzjWK8u ily traian rWHCeCBvi */         for(auto x:G[nod])
/* CenzjWK8u ily traian rWHCeCBvi */             if(d[x.first] > d[nod] + 1)
/* CenzjWK8u ily traian rWHCeCBvi */                 d[x.first] = d[nod] + 1, Q.push(x.first);
/* CenzjWK8u ily traian rWHCeCBvi */         Q.pop();
/* CenzjWK8u ily traian rWHCeCBvi */     }
/* CenzjWK8u ily traian rWHCeCBvi */ }
/* CenzjWK8u ily traian rWHCeCBvi */ 
/* CenzjWK8u ily traian rWHCeCBvi */ int main(){
/* CenzjWK8u ily traian rWHCeCBvi */     cin >> n >> mu >> f;
/* CenzjWK8u ily traian rWHCeCBvi */     for(int i = 1; i <= mu; ++i){
/* CenzjWK8u ily traian rWHCeCBvi */         cin >> m[i].i >> m[i].j >> m[i].c;
/* CenzjWK8u ily traian rWHCeCBvi */         G[m[i].i].push_back(make_pair(m[i].j, m[i].c));
/* CenzjWK8u ily traian rWHCeCBvi */         G[m[i].j].push_back(make_pair(m[i].i, m[i].c));
/* CenzjWK8u ily traian rWHCeCBvi */     }
/* CenzjWK8u ily traian rWHCeCBvi */     BFS();
/* CenzjWK8u ily traian rWHCeCBvi */     sort(m + 1, m + mu + 1, comp);
/* CenzjWK8u ily traian rWHCeCBvi */     int cnt = 0;
/* CenzjWK8u ily traian rWHCeCBvi */     for(int i = 1; i <= mu && f; ++i){
/* CenzjWK8u ily traian rWHCeCBvi */         if(d[m[i].i] != 1000000000000000001){
/* CenzjWK8u ily traian rWHCeCBvi */             f -= m[i].c;
/* CenzjWK8u ily traian rWHCeCBvi */             if(f >= 0)
/* CenzjWK8u ily traian rWHCeCBvi */                 cnt++;
/* CenzjWK8u ily traian rWHCeCBvi */         }
/* CenzjWK8u ily traian rWHCeCBvi */     }
/* CenzjWK8u ily traian rWHCeCBvi */     cout << cnt;
/* CenzjWK8u ily traian rWHCeCBvi */ }