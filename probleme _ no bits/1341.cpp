/* 9B7oKjpiu ily traian nJvwswpC2 */ #include <algorithm>
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
/* 9B7oKjpiu ily traian nJvwswpC2 */ 
/* 9B7oKjpiu ily traian nJvwswpC2 */ using namespace std;
/* 9B7oKjpiu ily traian nJvwswpC2 */ 
/* 9B7oKjpiu ily traian nJvwswpC2 */ ifstream cin("protest.in");
/* 9B7oKjpiu ily traian nJvwswpC2 */ ofstream cout("protest.out");
/* 9B7oKjpiu ily traian nJvwswpC2 */ 
/* 9B7oKjpiu ily traian nJvwswpC2 */ int n , m , x , y , p[50001] , v , cnt , s;
/* 9B7oKjpiu ily traian nJvwswpC2 */ vector <int> G[50001];
/* 9B7oKjpiu ily traian nJvwswpC2 */ 
/* 9B7oKjpiu ily traian nJvwswpC2 */ void dfs(int d)
/* 9B7oKjpiu ily traian nJvwswpC2 */ {
/* 9B7oKjpiu ily traian nJvwswpC2 */     p[d] = 1;
/* 9B7oKjpiu ily traian nJvwswpC2 */     for(int i :G[d])
/* 9B7oKjpiu ily traian nJvwswpC2 */         if(!p[i]) dfs(i);
/* 9B7oKjpiu ily traian nJvwswpC2 */ }
/* 9B7oKjpiu ily traian nJvwswpC2 */ 
/* 9B7oKjpiu ily traian nJvwswpC2 */ int main()
/* 9B7oKjpiu ily traian nJvwswpC2 */ {
/* 9B7oKjpiu ily traian nJvwswpC2 */     cin >> n >> m;
/* 9B7oKjpiu ily traian nJvwswpC2 */     for(int i = 1 ; i <= m ; i++)
/* 9B7oKjpiu ily traian nJvwswpC2 */     {
/* 9B7oKjpiu ily traian nJvwswpC2 */         cin >> s;
/* 9B7oKjpiu ily traian nJvwswpC2 */         p[s] = -1;
/* 9B7oKjpiu ily traian nJvwswpC2 */     }
/* 9B7oKjpiu ily traian nJvwswpC2 */     for(int i = 1 ; i < n ; i++)
/* 9B7oKjpiu ily traian nJvwswpC2 */     {
/* 9B7oKjpiu ily traian nJvwswpC2 */         cin >> x >> y;
/* 9B7oKjpiu ily traian nJvwswpC2 */         if(p[x] != -1 && p[y] != -1)
/* 9B7oKjpiu ily traian nJvwswpC2 */         G[x].push_back(y);
/* 9B7oKjpiu ily traian nJvwswpC2 */     }
/* 9B7oKjpiu ily traian nJvwswpC2 */     dfs(1);
/* 9B7oKjpiu ily traian nJvwswpC2 */     for(int i = 1 ; i <= n ; i++)
/* 9B7oKjpiu ily traian nJvwswpC2 */         if(p[i] == 1) cnt++;
/* 9B7oKjpiu ily traian nJvwswpC2 */     cout << cnt - 1;
/* 9B7oKjpiu ily traian nJvwswpC2 */ }