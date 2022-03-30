/* KZXdm5R1J ily traian xFj9AUoxv */ #include <algorithm>
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
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */ using namespace std;
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */ vector <int> G[100002];
/* KZXdm5R1J ily traian xFj9AUoxv */ vector <int> H[100002];
/* KZXdm5R1J ily traian xFj9AUoxv */ int n , m , x , y , S[100001] , D[100001] , c;
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */ void dfs_succ(int v , int c)
/* KZXdm5R1J ily traian xFj9AUoxv */ {
/* KZXdm5R1J ily traian xFj9AUoxv */     S[v] = c;
/* KZXdm5R1J ily traian xFj9AUoxv */     for(int i : G[v])
/* KZXdm5R1J ily traian xFj9AUoxv */         if(!S[i]) dfs_succ(i , c);
/* KZXdm5R1J ily traian xFj9AUoxv */ }
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */ void dfs_pred(int v , int c)
/* KZXdm5R1J ily traian xFj9AUoxv */ {
/* KZXdm5R1J ily traian xFj9AUoxv */     D[v] = c;
/* KZXdm5R1J ily traian xFj9AUoxv */     for(int i : H[v])
/* KZXdm5R1J ily traian xFj9AUoxv */         if(!D[i]) dfs_pred(i , c);
/* KZXdm5R1J ily traian xFj9AUoxv */ }
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */ int main()
/* KZXdm5R1J ily traian xFj9AUoxv */ {
/* KZXdm5R1J ily traian xFj9AUoxv */     cin >> n >> m;
/* KZXdm5R1J ily traian xFj9AUoxv */     for(int i = 1 ; i <= m ; i++)
/* KZXdm5R1J ily traian xFj9AUoxv */     {
/* KZXdm5R1J ily traian xFj9AUoxv */         cin >> x >> y;
/* KZXdm5R1J ily traian xFj9AUoxv */         G[x].push_back(y);
/* KZXdm5R1J ily traian xFj9AUoxv */         H[y].push_back(x);
/* KZXdm5R1J ily traian xFj9AUoxv */     }
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */     for(int i = 1 ; i <= n ; i++)
/* KZXdm5R1J ily traian xFj9AUoxv */         if(!S[i])
/* KZXdm5R1J ily traian xFj9AUoxv */         {
/* KZXdm5R1J ily traian xFj9AUoxv */             c++;
/* KZXdm5R1J ily traian xFj9AUoxv */             dfs_succ(i , c);
/* KZXdm5R1J ily traian xFj9AUoxv */             dfs_pred(i , c);
/* KZXdm5R1J ily traian xFj9AUoxv */             for(int i = 1 ; i <= n ; i++)
/* KZXdm5R1J ily traian xFj9AUoxv */                 if(S[i] != D[i]) S[i] = D[i] = 0;
/* KZXdm5R1J ily traian xFj9AUoxv */         }
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */     cout << c;
/* KZXdm5R1J ily traian xFj9AUoxv */ 
/* KZXdm5R1J ily traian xFj9AUoxv */ }