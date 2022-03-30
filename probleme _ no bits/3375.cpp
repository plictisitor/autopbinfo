/* cAGFj4ReJ ily traian oqq7gMLZo */ #include <algorithm>
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
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ using namespace std;
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ # define inf 1000000001
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ ifstream cin("labirint.in");
/* cAGFj4ReJ ily traian oqq7gMLZo */ ofstream cout("labirint.out");
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ char mat[1001][1001], ch;
/* cAGFj4ReJ ily traian oqq7gMLZo */ int n, m, a[1001][1001];
/* cAGFj4ReJ ily traian oqq7gMLZo */ queue<pair<int, int>> Q;
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ bool inmat(int i, int j){
/* cAGFj4ReJ ily traian oqq7gMLZo */     return i >= 1 && j >= 1 && i <= n && j <= m;
/* cAGFj4ReJ ily traian oqq7gMLZo */ }
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ int di[]={0,0,-1,1};
/* cAGFj4ReJ ily traian oqq7gMLZo */ int dj[]={-1,1,0,0};
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ void lee(){
/* cAGFj4ReJ ily traian oqq7gMLZo */     while(!Q.empty()){
/* cAGFj4ReJ ily traian oqq7gMLZo */         pair<int, int> p;
/* cAGFj4ReJ ily traian oqq7gMLZo */         p = Q.front();
/* cAGFj4ReJ ily traian oqq7gMLZo */         for(int d = 0; d <= 3; ++d){
/* cAGFj4ReJ ily traian oqq7gMLZo */             int inou = p.first + di[d];
/* cAGFj4ReJ ily traian oqq7gMLZo */             int jnou = p.second + dj[d];
/* cAGFj4ReJ ily traian oqq7gMLZo */             if(inmat(inou, jnou) && a[inou][jnou] != -1 && a[inou][jnou] > a[p.first][p.second] + 1)
/* cAGFj4ReJ ily traian oqq7gMLZo */                 a[inou][jnou] = a[p.first][p.second] + 1, Q.push(make_pair(inou, jnou));
/* cAGFj4ReJ ily traian oqq7gMLZo */         }
/* cAGFj4ReJ ily traian oqq7gMLZo */         Q.pop();
/* cAGFj4ReJ ily traian oqq7gMLZo */     }
/* cAGFj4ReJ ily traian oqq7gMLZo */ }
/* cAGFj4ReJ ily traian oqq7gMLZo */ 
/* cAGFj4ReJ ily traian oqq7gMLZo */ int main(){
/* cAGFj4ReJ ily traian oqq7gMLZo */     cin >> n >> m;
/* cAGFj4ReJ ily traian oqq7gMLZo */     for(int i = 1; i <= n; ++i)
/* cAGFj4ReJ ily traian oqq7gMLZo */         for(int j = 1; j <= m; ++j)
/* cAGFj4ReJ ily traian oqq7gMLZo */             cin >> ch, mat[i][j] = ch;
/* cAGFj4ReJ ily traian oqq7gMLZo */     for(int i = 1; i <= n; ++i)
/* cAGFj4ReJ ily traian oqq7gMLZo */         for(int j = 1; j <= m; ++j){
/* cAGFj4ReJ ily traian oqq7gMLZo */             if(mat[i][j] == 'Z')
/* cAGFj4ReJ ily traian oqq7gMLZo */                 a[i][j] = -1;
/* cAGFj4ReJ ily traian oqq7gMLZo */             else if(mat[i][j] == 'A')
/* cAGFj4ReJ ily traian oqq7gMLZo */                 Q.push(make_pair(i, j));
/* cAGFj4ReJ ily traian oqq7gMLZo */             else
/* cAGFj4ReJ ily traian oqq7gMLZo */                 a[i][j] = inf;
/* cAGFj4ReJ ily traian oqq7gMLZo */         }
/* cAGFj4ReJ ily traian oqq7gMLZo */     lee();
/* cAGFj4ReJ ily traian oqq7gMLZo */     for(int i = 1; i <= n; ++i)
/* cAGFj4ReJ ily traian oqq7gMLZo */         for(int j = 1; j <= m; ++j){
/* cAGFj4ReJ ily traian oqq7gMLZo */             if(mat[i][j] == 'Z')
/* cAGFj4ReJ ily traian oqq7gMLZo */                 a[i][j] = -1;
/* cAGFj4ReJ ily traian oqq7gMLZo */             else if(mat[i][j] == 'B')
/* cAGFj4ReJ ily traian oqq7gMLZo */                 Q.push(make_pair(i, j));
/* cAGFj4ReJ ily traian oqq7gMLZo */             else
/* cAGFj4ReJ ily traian oqq7gMLZo */                 a[i][j] = inf;
/* cAGFj4ReJ ily traian oqq7gMLZo */         }
/* cAGFj4ReJ ily traian oqq7gMLZo */     lee();
/* cAGFj4ReJ ily traian oqq7gMLZo */     int mini = 1000000000;
/* cAGFj4ReJ ily traian oqq7gMLZo */     for(int i = 1; i <= n; ++i)
/* cAGFj4ReJ ily traian oqq7gMLZo */     for(int j = 1; j <= m; ++j){
/* cAGFj4ReJ ily traian oqq7gMLZo */         if(mat[i][j] == 'C' && a[i][j] < mini)
/* cAGFj4ReJ ily traian oqq7gMLZo */             mini = a[i][j];
/* cAGFj4ReJ ily traian oqq7gMLZo */     }
/* cAGFj4ReJ ily traian oqq7gMLZo */     cout << mini + 1;
/* cAGFj4ReJ ily traian oqq7gMLZo */     return 0;
/* cAGFj4ReJ ily traian oqq7gMLZo */ }