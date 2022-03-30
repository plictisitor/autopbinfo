/* SVDgDHeDz ily traian 7hd6uFuKA */ #include <algorithm>
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
/* SVDgDHeDz ily traian 7hd6uFuKA */ 
/* SVDgDHeDz ily traian 7hd6uFuKA */ using namespace std;
/* SVDgDHeDz ily traian 7hd6uFuKA */ 
/* SVDgDHeDz ily traian 7hd6uFuKA */ int n , m , x , y , p[101] , v;
/* SVDgDHeDz ily traian 7hd6uFuKA */ vector <int> G[101];
/* SVDgDHeDz ily traian 7hd6uFuKA */ 
/* SVDgDHeDz ily traian 7hd6uFuKA */ void dfs(int d)
/* SVDgDHeDz ily traian 7hd6uFuKA */ {
/* SVDgDHeDz ily traian 7hd6uFuKA */     p[d] = 1;
/* SVDgDHeDz ily traian 7hd6uFuKA */     for(int i :G[d])
/* SVDgDHeDz ily traian 7hd6uFuKA */         if(!p[i]) dfs(i);
/* SVDgDHeDz ily traian 7hd6uFuKA */ }
/* SVDgDHeDz ily traian 7hd6uFuKA */ 
/* SVDgDHeDz ily traian 7hd6uFuKA */ int main()
/* SVDgDHeDz ily traian 7hd6uFuKA */ {
/* SVDgDHeDz ily traian 7hd6uFuKA */     cin >> n >> m;
/* SVDgDHeDz ily traian 7hd6uFuKA */     for(int i = 1 ; i <= m ; i++)
/* SVDgDHeDz ily traian 7hd6uFuKA */     {
/* SVDgDHeDz ily traian 7hd6uFuKA */         cin >> x >> y;
/* SVDgDHeDz ily traian 7hd6uFuKA */         G[y].push_back(x);
/* SVDgDHeDz ily traian 7hd6uFuKA */     }
/* SVDgDHeDz ily traian 7hd6uFuKA */     for(int i = 1 ; i <= n ; i++)
/* SVDgDHeDz ily traian 7hd6uFuKA */     {
/* SVDgDHeDz ily traian 7hd6uFuKA */         for(int j = 1 ; j <= n ; j++) p[j] = 0;
/* SVDgDHeDz ily traian 7hd6uFuKA */ 
/* SVDgDHeDz ily traian 7hd6uFuKA */         dfs(i);
/* SVDgDHeDz ily traian 7hd6uFuKA */         int ok = 1;
/* SVDgDHeDz ily traian 7hd6uFuKA */         for(int j = 1 ; j <= n ; j++)
/* SVDgDHeDz ily traian 7hd6uFuKA */             if(p[j] == 0) ok = 0;
/* SVDgDHeDz ily traian 7hd6uFuKA */         if(ok == 1 && v == 0) v = i;
/* SVDgDHeDz ily traian 7hd6uFuKA */     }
/* SVDgDHeDz ily traian 7hd6uFuKA */     if(v == 0) cout << "NU EXISTA";
/* SVDgDHeDz ily traian 7hd6uFuKA */     else cout << v;
/* SVDgDHeDz ily traian 7hd6uFuKA */ }