/* yUFn8ikt4 ily traian Iy5rhWVQZ */ #include <algorithm>
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
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ using namespace std;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ int n, di[]={0,0,-2,2,1,-1}, dj[]={-2,2,0,0,1,-1}, a[101][101];
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ bool inmat(int i, int j){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     return i <= n && j <= n && i >= 1 && j >= 1;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ queue<pair<int, pair<int, int>>> Q;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ void lee(){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     while(!Q.empty()){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         int cost = Q.front().first;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         int i = Q.front().second.first;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         int j = Q.front().second.second;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         for(int d = 0; d <= 5; ++d){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             int inou = i + di[d];
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             int jnou = j + dj[d];
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             if(inmat(inou, jnou) && a[inou][jnou] == 0){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */                 a[inou][jnou] = cost + 1;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */                 Q.push({cost + 1, {inou,jnou}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         Q.pop();
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ void lee1(){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     while(!Q.empty()){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         int cost = Q.front().first;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         int i = Q.front().second.first;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         int j = Q.front().second.second;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         for(int d = 0; d <= 5; ++d){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             int inou = i + di[d];
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             int jnou = j + dj[d];
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             if(inmat(inou, jnou) && a[inou][jnou] == 0){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */                 a[inou][jnou] = cost - 1;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */                 Q.push({cost - 1, {inou,jnou}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         Q.pop();
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ }
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ 
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ int main(){
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     cin >> n;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     Q.push({1, {1,1}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     Q.push({1, {n,n}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     a[1][1] = 1, a[n][n] = 1;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     a[2][1] = n, a[n][n-1] = n;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     a[1][2] = n, a[n-1][n] = n;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     lee();
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     Q.push({n, {2, 1}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     Q.push({n, {1, 2}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     Q.push({n, {n, n-1}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     Q.push({n, {n-1, n}});
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     lee1();
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     for(int i = 1; i <= n; ++i, cout << '\n')
/* yUFn8ikt4 ily traian Iy5rhWVQZ */         for(int j = 1; j <= n; ++j)
/* yUFn8ikt4 ily traian Iy5rhWVQZ */             cout << a[i][j] << ' ';
/* yUFn8ikt4 ily traian Iy5rhWVQZ */     return 0;
/* yUFn8ikt4 ily traian Iy5rhWVQZ */ }