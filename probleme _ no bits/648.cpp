/* WmWoYmZeW ily traian LOM2Kwnbx */ #include <algorithm>
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
/* WmWoYmZeW ily traian LOM2Kwnbx */ 
/* WmWoYmZeW ily traian LOM2Kwnbx */ using namespace std;
/* WmWoYmZeW ily traian LOM2Kwnbx */ 
/* WmWoYmZeW ily traian LOM2Kwnbx */ ifstream cin("subarborenumarare.in");
/* WmWoYmZeW ily traian LOM2Kwnbx */ ofstream cout("subarborenumarare.out");
/* WmWoYmZeW ily traian LOM2Kwnbx */ 
/* WmWoYmZeW ily traian LOM2Kwnbx */ vector <int> G[101];
/* WmWoYmZeW ily traian LOM2Kwnbx */ int n  , p , k , x , P[101] , cnt;
/* WmWoYmZeW ily traian LOM2Kwnbx */ 
/* WmWoYmZeW ily traian LOM2Kwnbx */ void dfs(int x)
/* WmWoYmZeW ily traian LOM2Kwnbx */ {
/* WmWoYmZeW ily traian LOM2Kwnbx */     P[x] = 1;
/* WmWoYmZeW ily traian LOM2Kwnbx */     cnt++;
/* WmWoYmZeW ily traian LOM2Kwnbx */     for(auto i:G[x])
/* WmWoYmZeW ily traian LOM2Kwnbx */         if(!P[i]) dfs(i);
/* WmWoYmZeW ily traian LOM2Kwnbx */ }
/* WmWoYmZeW ily traian LOM2Kwnbx */ 
/* WmWoYmZeW ily traian LOM2Kwnbx */ int main()
/* WmWoYmZeW ily traian LOM2Kwnbx */ {
/* WmWoYmZeW ily traian LOM2Kwnbx */     cin >> n >> p;
/* WmWoYmZeW ily traian LOM2Kwnbx */     for(int i = 1 ; i <= n ; i++)
/* WmWoYmZeW ily traian LOM2Kwnbx */     {
/* WmWoYmZeW ily traian LOM2Kwnbx */         cin >> x;
/* WmWoYmZeW ily traian LOM2Kwnbx */         if(x != 0) G[x].push_back(i);
/* WmWoYmZeW ily traian LOM2Kwnbx */     }
/* WmWoYmZeW ily traian LOM2Kwnbx */     dfs(p);
/* WmWoYmZeW ily traian LOM2Kwnbx */     cout << cnt;
/* WmWoYmZeW ily traian LOM2Kwnbx */ 
/* WmWoYmZeW ily traian LOM2Kwnbx */ }