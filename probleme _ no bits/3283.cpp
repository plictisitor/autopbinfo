/* c95nuSnHG ily traian gHmq4eUZh */ #include <algorithm>
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
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ using namespace std;
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ ifstream fin("lee1.in");
/* c95nuSnHG ily traian gHmq4eUZh */ ofstream fout("lee1.out");
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ #define INF 1000000001
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ struct punct{
/* c95nuSnHG ily traian gHmq4eUZh */     int i, j;
/* c95nuSnHG ily traian gHmq4eUZh */ }p[7], rez[10];
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ int n, m, k, a[101][101], b[101][101], P[10], x[10];
/* c95nuSnHG ily traian gHmq4eUZh */ int is, js, ifi, jfi;
/* c95nuSnHG ily traian gHmq4eUZh */ int dmin = INF;
/* c95nuSnHG ily traian gHmq4eUZh */ int l;
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ int di[]={0,0,1,-1};
/* c95nuSnHG ily traian gHmq4eUZh */ int dj[]={-1,1,0,0};
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ void sterg(int g[101][101]){
/* c95nuSnHG ily traian gHmq4eUZh */     for(int i = 1; i <= n; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */         for(int j = 1; j <= m; ++j)
/* c95nuSnHG ily traian gHmq4eUZh */             g[i][j] = 0;
/* c95nuSnHG ily traian gHmq4eUZh */ }
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ bool inmat(int i, int j){
/* c95nuSnHG ily traian gHmq4eUZh */     return i <= n && j <= m && i >= 1 && j >= 1;
/* c95nuSnHG ily traian gHmq4eUZh */ }
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ int lee(int si, int sj, int fi, int fj){
/* c95nuSnHG ily traian gHmq4eUZh */     sterg(b);
/* c95nuSnHG ily traian gHmq4eUZh */     queue<punct> Q;
/* c95nuSnHG ily traian gHmq4eUZh */     Q.push({si, sj});
/* c95nuSnHG ily traian gHmq4eUZh */     b[si][sj] = 1;
/* c95nuSnHG ily traian gHmq4eUZh */     while(!Q.empty()){
/* c95nuSnHG ily traian gHmq4eUZh */         punct x = Q.front();
/* c95nuSnHG ily traian gHmq4eUZh */         for(int d = 0; d <= 3; ++d){
/* c95nuSnHG ily traian gHmq4eUZh */             int i = di[d] + x.i;
/* c95nuSnHG ily traian gHmq4eUZh */             int j = dj[d] + x.j;
/* c95nuSnHG ily traian gHmq4eUZh */             if(inmat(i, j) && a[i][j] == 0 && b[i][j] == 0)
/* c95nuSnHG ily traian gHmq4eUZh */             b[i][j] = b[x.i][x.j] + 1, Q.push({i, j});
/* c95nuSnHG ily traian gHmq4eUZh */         }
/* c95nuSnHG ily traian gHmq4eUZh */         Q.pop();
/* c95nuSnHG ily traian gHmq4eUZh */     }
/* c95nuSnHG ily traian gHmq4eUZh */     return b[fi][fj] - 1;
/* c95nuSnHG ily traian gHmq4eUZh */ }
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ void verif(){
/* c95nuSnHG ily traian gHmq4eUZh */     int dist = 0;
/* c95nuSnHG ily traian gHmq4eUZh */     for(int i = 1; i <= k + 1; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */         dist += lee(p[x[i-1]].i, p[x[i-1]].j, p[x[i]].i, p[x[i]].j);
/* c95nuSnHG ily traian gHmq4eUZh */     if(dist < dmin){
/* c95nuSnHG ily traian gHmq4eUZh */         dmin = dist;
/* c95nuSnHG ily traian gHmq4eUZh */         for(int i = 1; i <= k; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */             rez[i] = {p[x[i]].i, p[x[i]].j};
/* c95nuSnHG ily traian gHmq4eUZh */     }
/* c95nuSnHG ily traian gHmq4eUZh */ }
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ void back(int t){
/* c95nuSnHG ily traian gHmq4eUZh */     for(int i = 1; i <= k; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */         if(!P[i]){
/* c95nuSnHG ily traian gHmq4eUZh */             P[i] = 1;
/* c95nuSnHG ily traian gHmq4eUZh */             x[t] = i;
/* c95nuSnHG ily traian gHmq4eUZh */             if(t == k)
/* c95nuSnHG ily traian gHmq4eUZh */                 verif();
/* c95nuSnHG ily traian gHmq4eUZh */             else
/* c95nuSnHG ily traian gHmq4eUZh */                 back(t + 1);
/* c95nuSnHG ily traian gHmq4eUZh */             P[i] = 0;
/* c95nuSnHG ily traian gHmq4eUZh */         }
/* c95nuSnHG ily traian gHmq4eUZh */ }
/* c95nuSnHG ily traian gHmq4eUZh */ 
/* c95nuSnHG ily traian gHmq4eUZh */ int main(){
/* c95nuSnHG ily traian gHmq4eUZh */     fin >> n >> m;
/* c95nuSnHG ily traian gHmq4eUZh */     for(int i = 1; i <= n; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */         for(int j = 1; j <= m; ++j)
/* c95nuSnHG ily traian gHmq4eUZh */             fin >> a[i][j];
/* c95nuSnHG ily traian gHmq4eUZh */     fin >> is >> js >> ifi >> jfi;
/* c95nuSnHG ily traian gHmq4eUZh */     fin >> k;
/* c95nuSnHG ily traian gHmq4eUZh */     for(int i = 1; i <= k; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */         fin >> p[i].i >> p[i].j;
/* c95nuSnHG ily traian gHmq4eUZh */     p[0] = {is, js};
/* c95nuSnHG ily traian gHmq4eUZh */     p[k + 1] = {ifi, jfi};
/* c95nuSnHG ily traian gHmq4eUZh */     x[k + 1] = k + 1;
/* c95nuSnHG ily traian gHmq4eUZh */     back(1);
/* c95nuSnHG ily traian gHmq4eUZh */     fout << dmin << '\n';
/* c95nuSnHG ily traian gHmq4eUZh */     fout << is << ',' << js << '\n';
/* c95nuSnHG ily traian gHmq4eUZh */     for(int i = 1; i <= k; ++i)
/* c95nuSnHG ily traian gHmq4eUZh */         fout << rez[i].i << ',' << rez[i].j << '\n';
/* c95nuSnHG ily traian gHmq4eUZh */     fout << ifi << ',' << jfi << '\n';
/* c95nuSnHG ily traian gHmq4eUZh */     return 0;
/* c95nuSnHG ily traian gHmq4eUZh */ }