/* k9Jgb8JaF ily traian MjMoOQ1BQ */ #include <algorithm>
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
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ using namespace std;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ char a[101][101];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ char s[101];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ int cnt = 0, l[101], c, n, b[101][101];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ bool inmat(int i, int j){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     return i >= 1 && i <= n && j < l[i] && j >= 0;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ }
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ int di[]={-1,1,-1,1,-1,1};
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ int dj[]={0,0,1,1,-1,-1};
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ void fill(int i, int j){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     b[i][j] = 1;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     queue<pair<int, int>> Q;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     Q.push(make_pair(i, j));
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     while(!Q.empty()){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         pair<int, int> x = Q.front();
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         c++;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         for(int d = 0; d <= 5; ++d){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             int inou = x.first + di[d];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             int jnou = x.second + dj[d];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             if(inmat(inou, jnou) && a[inou][jnou] == ' ' && !b[inou][jnou])
/* k9Jgb8JaF ily traian MjMoOQ1BQ */                 b[inou][jnou] = b[x.first][x.second] + 1, Q.push(make_pair(inou, jnou));
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         }
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         Q.pop();
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     }
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ }
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ 
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ int main(){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     int k;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     cin >> k >> n;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     cin.get();
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     for(int i = 1; i <= n; ++i){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         cin.getline(s, 101);
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         int j = 0;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         while(s[j]){
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             a[i][j] = s[j];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             j++;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         }
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         l[i] = strlen(s);
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     }
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     int maxi = 0, x , y;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     for(int i = 1; i <= n; ++i)
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         for(int j = 0; j < l[i]; ++j)
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             if(a[i][j] == ' ' && !b[i][j])
/* k9Jgb8JaF ily traian MjMoOQ1BQ */                 fill(i, j);
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     for(int i = 1; i <= n; ++i)
/* k9Jgb8JaF ily traian MjMoOQ1BQ */         for(int j = 1; j < l[i]; ++j)
/* k9Jgb8JaF ily traian MjMoOQ1BQ */             if(b[i][j] > maxi)
/* k9Jgb8JaF ily traian MjMoOQ1BQ */                 maxi = b[i][j];
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     cout << maxi;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */     return 0;
/* k9Jgb8JaF ily traian MjMoOQ1BQ */ }