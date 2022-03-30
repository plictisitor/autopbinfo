/* SAIutKsYJ ily traian 37kWIn1eQ */ #include <algorithm>
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
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ using namespace std;
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ ifstream cin("arbrush.in");
/* SAIutKsYJ ily traian 37kWIn1eQ */ ofstream cout("arbrush.out");
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ vector <int> G[30001];
/* SAIutKsYJ ily traian 37kWIn1eQ */ int n ,m  , p , x , y , k , P[30001] , d[30001] , r;
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ int dfs(int x)
/* SAIutKsYJ ily traian 37kWIn1eQ */ {
/* SAIutKsYJ ily traian 37kWIn1eQ */     P[x] = 1;
/* SAIutKsYJ ily traian 37kWIn1eQ */     d[x] = 1;
/* SAIutKsYJ ily traian 37kWIn1eQ */     for(auto i:G[x])
/* SAIutKsYJ ily traian 37kWIn1eQ */         if(!P[i]) d[x] += dfs(i);
/* SAIutKsYJ ily traian 37kWIn1eQ */     return d[x];
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ }
/* SAIutKsYJ ily traian 37kWIn1eQ */ 
/* SAIutKsYJ ily traian 37kWIn1eQ */ int main()
/* SAIutKsYJ ily traian 37kWIn1eQ */ {
/* SAIutKsYJ ily traian 37kWIn1eQ */     cin >> n >> m >> r;
/* SAIutKsYJ ily traian 37kWIn1eQ */     for(int i = 1 ; i < n ; i++)
/* SAIutKsYJ ily traian 37kWIn1eQ */     {
/* SAIutKsYJ ily traian 37kWIn1eQ */         cin >> x >> y;
/* SAIutKsYJ ily traian 37kWIn1eQ */         G[x].push_back(y);
/* SAIutKsYJ ily traian 37kWIn1eQ */         G[y].push_back(x);
/* SAIutKsYJ ily traian 37kWIn1eQ */     }
/* SAIutKsYJ ily traian 37kWIn1eQ */     d[r] = dfs(r);
/* SAIutKsYJ ily traian 37kWIn1eQ */     for(int i = 1 ; i <= m ; i++)
/* SAIutKsYJ ily traian 37kWIn1eQ */     {
/* SAIutKsYJ ily traian 37kWIn1eQ */         cin >> x;
/* SAIutKsYJ ily traian 37kWIn1eQ */         cout << d[x] * (d[x] - 1) / 2 << '\n';
/* SAIutKsYJ ily traian 37kWIn1eQ */     }
/* SAIutKsYJ ily traian 37kWIn1eQ */ }