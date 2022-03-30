/* njAvYlwQ8 ily traian 6Z8aJSXmy */ #include <algorithm>
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
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ using namespace std;
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ ifstream cin("topsort.in");
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ ofstream cout("topsort.out");
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ vector <int> G[100001];
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ vector <int> L;
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ int n , m , x , y , v[100001];
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ void dfs(int nod)
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ {
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     v[nod] = 1;
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     for(auto i : G[nod])
/* njAvYlwQ8 ily traian 6Z8aJSXmy */         if(!v[i]) v[i] = 1 , dfs(i);
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     L.push_back(nod);
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ }
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ int main()
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ {
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     cin >> n >> m;
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     for(int i = 1 ; i <= m ; i++)
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     {
/* njAvYlwQ8 ily traian 6Z8aJSXmy */         cin >> x >> y;
/* njAvYlwQ8 ily traian 6Z8aJSXmy */         G[x].push_back(y);
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     }
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     for(int i = 1 ; i <= n ; i++)
/* njAvYlwQ8 ily traian 6Z8aJSXmy */         if(!v[i]) dfs(i);
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ 
/* njAvYlwQ8 ily traian 6Z8aJSXmy */     for(int i = L.size() - 1 ; i >= 0 ; i--)
/* njAvYlwQ8 ily traian 6Z8aJSXmy */         cout << L[i] << " ";
/* njAvYlwQ8 ily traian 6Z8aJSXmy */ }