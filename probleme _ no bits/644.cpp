/* lTPfLKZ0B ily traian 7nMte4Eig */ #include <algorithm>
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
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */ using namespace std;
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */ ifstream cin("detdrum2.in");
/* lTPfLKZ0B ily traian 7nMte4Eig */ ofstream cout("detdrum2.out");
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */ vector <int> G[101];
/* lTPfLKZ0B ily traian 7nMte4Eig */ int n  , p , x , y , k , T[102] , P[101] , q , t[101];
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */ void dfs(int x)
/* lTPfLKZ0B ily traian 7nMte4Eig */ {
/* lTPfLKZ0B ily traian 7nMte4Eig */     P[x] = 1;
/* lTPfLKZ0B ily traian 7nMte4Eig */     for(auto i:G[x])
/* lTPfLKZ0B ily traian 7nMte4Eig */         if(!P[i])
/* lTPfLKZ0B ily traian 7nMte4Eig */         {
/* lTPfLKZ0B ily traian 7nMte4Eig */             dfs(i);
/* lTPfLKZ0B ily traian 7nMte4Eig */             t[i] = x;
/* lTPfLKZ0B ily traian 7nMte4Eig */         }
/* lTPfLKZ0B ily traian 7nMte4Eig */ }
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */ int main()
/* lTPfLKZ0B ily traian 7nMte4Eig */ {
/* lTPfLKZ0B ily traian 7nMte4Eig */     cin >> n >> p >> q;
/* lTPfLKZ0B ily traian 7nMte4Eig */     for(int i = 1 ; i <= n ; i++)
/* lTPfLKZ0B ily traian 7nMte4Eig */     {
/* lTPfLKZ0B ily traian 7nMte4Eig */         cin >> T[i];
/* lTPfLKZ0B ily traian 7nMte4Eig */         if(T[i] != 0)
/* lTPfLKZ0B ily traian 7nMte4Eig */         {
/* lTPfLKZ0B ily traian 7nMte4Eig */             G[T[i]].push_back(i);
/* lTPfLKZ0B ily traian 7nMte4Eig */             G[i].push_back(T[i]);
/* lTPfLKZ0B ily traian 7nMte4Eig */         }
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */     }
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */     dfs(q);
/* lTPfLKZ0B ily traian 7nMte4Eig */ 
/* lTPfLKZ0B ily traian 7nMte4Eig */     while(t[p] != 0)
/* lTPfLKZ0B ily traian 7nMte4Eig */     {
/* lTPfLKZ0B ily traian 7nMte4Eig */         cout << p << " ";
/* lTPfLKZ0B ily traian 7nMte4Eig */         p = t[p];
/* lTPfLKZ0B ily traian 7nMte4Eig */     }
/* lTPfLKZ0B ily traian 7nMte4Eig */     cout << p;
/* lTPfLKZ0B ily traian 7nMte4Eig */ }