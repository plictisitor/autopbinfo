/* ukZ5ASxL7 ily traian a2RiqEUJo */ #include <algorithm>
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
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */ using namespace std;
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */ ifstream cin("arbore.in");
/* ukZ5ASxL7 ily traian a2RiqEUJo */ ofstream cout("arbore.out");
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */ vector <int> G[101];
/* ukZ5ASxL7 ily traian a2RiqEUJo */ int n  , p , x , y , T[102] , P[101];
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */ void dfs(int x)
/* ukZ5ASxL7 ily traian a2RiqEUJo */ {
/* ukZ5ASxL7 ily traian a2RiqEUJo */     P[x] = 1;
/* ukZ5ASxL7 ily traian a2RiqEUJo */     for(auto i:G[x])
/* ukZ5ASxL7 ily traian a2RiqEUJo */         if(!P[i])
/* ukZ5ASxL7 ily traian a2RiqEUJo */         {
/* ukZ5ASxL7 ily traian a2RiqEUJo */             T[i] = x;
/* ukZ5ASxL7 ily traian a2RiqEUJo */             dfs(i);
/* ukZ5ASxL7 ily traian a2RiqEUJo */         }
/* ukZ5ASxL7 ily traian a2RiqEUJo */ }
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */ int main()
/* ukZ5ASxL7 ily traian a2RiqEUJo */ {
/* ukZ5ASxL7 ily traian a2RiqEUJo */     cin >> n >> p;
/* ukZ5ASxL7 ily traian a2RiqEUJo */     for(int i = 1 ; i < n ; i++)
/* ukZ5ASxL7 ily traian a2RiqEUJo */     {
/* ukZ5ASxL7 ily traian a2RiqEUJo */         cin >> x >> y;
/* ukZ5ASxL7 ily traian a2RiqEUJo */         G[x].push_back(y);
/* ukZ5ASxL7 ily traian a2RiqEUJo */         G[y].push_back(x);
/* ukZ5ASxL7 ily traian a2RiqEUJo */     }
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */     dfs(p);
/* ukZ5ASxL7 ily traian a2RiqEUJo */ 
/* ukZ5ASxL7 ily traian a2RiqEUJo */     for(int i = 1 ; i <= n ; i++)
/* ukZ5ASxL7 ily traian a2RiqEUJo */         cout << T[i] << " ";
/* ukZ5ASxL7 ily traian a2RiqEUJo */ }