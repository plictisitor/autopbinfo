/* eNllWfMfB ily traian UbmDn0H7j */ #include <algorithm>
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
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ using namespace std;
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ #define MAX 1000001
/* eNllWfMfB ily traian UbmDn0H7j */ #define inf 10000000
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ bool a[101][101];
/* eNllWfMfB ily traian UbmDn0H7j */ int d[101][101][8];
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ int di[] = {1, 0, -1, 0};
/* eNllWfMfB ily traian UbmDn0H7j */ int dj[] = {0, 1, 0, -1};
/* eNllWfMfB ily traian UbmDn0H7j */ int n;
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ pair<int, int> puncte[3];
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */ void lee(pair<int, int> source)
/* eNllWfMfB ily traian UbmDn0H7j */ {
/* eNllWfMfB ily traian UbmDn0H7j */     queue< pair<int, int> > Q;
/* eNllWfMfB ily traian UbmDn0H7j */     Q.push(source);
/* eNllWfMfB ily traian UbmDn0H7j */     d[1][1][0] = 0;
/* eNllWfMfB ily traian UbmDn0H7j */     pair<int, int> node;
/* eNllWfMfB ily traian UbmDn0H7j */     int ok = 0;
/* eNllWfMfB ily traian UbmDn0H7j */     while (!Q.empty())
/* eNllWfMfB ily traian UbmDn0H7j */     {
/* eNllWfMfB ily traian UbmDn0H7j */         node = Q.front();
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */         Q.pop();
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */         ok = 0;
/* eNllWfMfB ily traian UbmDn0H7j */         for (int i = 0; i < 3; ++ i)
/* eNllWfMfB ily traian UbmDn0H7j */             if (node == puncte[i])
/* eNllWfMfB ily traian UbmDn0H7j */                 ok = (1 << i);
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */         for (int dir = 0, inou, jnou; dir < 4; ++ dir)
/* eNllWfMfB ily traian UbmDn0H7j */         {
/* eNllWfMfB ily traian UbmDn0H7j */             inou = node.first + di[dir];
/* eNllWfMfB ily traian UbmDn0H7j */             jnou = node.second + dj[dir];
/* eNllWfMfB ily traian UbmDn0H7j */             if (a[inou][jnou] == 1 || inou < 1 || jnou < 1 || inou > n || jnou > n)continue;
/* eNllWfMfB ily traian UbmDn0H7j */ 
/* eNllWfMfB ily traian UbmDn0H7j */             for (int i = 0; i < 8; ++ i)
/* eNllWfMfB ily traian UbmDn0H7j */                 if (d[inou][jnou][i | ok] > d[node.first][node.second][i] + 1)
/* eNllWfMfB ily traian UbmDn0H7j */                 {
/* eNllWfMfB ily traian UbmDn0H7j */                     d[inou][jnou][i | ok] = d[node.first][node.second][i] + 1;
/* eNllWfMfB ily traian UbmDn0H7j */                     Q.push({inou, jnou});
/* eNllWfMfB ily traian UbmDn0H7j */                 }
/* eNllWfMfB ily traian UbmDn0H7j */         }
/* eNllWfMfB ily traian UbmDn0H7j */     }
/* eNllWfMfB ily traian UbmDn0H7j */ }
/* eNllWfMfB ily traian UbmDn0H7j */ int main()
/* eNllWfMfB ily traian UbmDn0H7j */ {
/* eNllWfMfB ily traian UbmDn0H7j */     cin >> n;
/* eNllWfMfB ily traian UbmDn0H7j */     for (int i = 1; i <= n; ++ i)
/* eNllWfMfB ily traian UbmDn0H7j */         for (int j = 1; j <= n; ++ j)
/* eNllWfMfB ily traian UbmDn0H7j */         {
/* eNllWfMfB ily traian UbmDn0H7j */             cin >> a[i][j];
/* eNllWfMfB ily traian UbmDn0H7j */             for (int k = 0; k < 8; ++ k)
/* eNllWfMfB ily traian UbmDn0H7j */                 d[i][j][k] = inf;
/* eNllWfMfB ily traian UbmDn0H7j */         }
/* eNllWfMfB ily traian UbmDn0H7j */     for (int i = 0; i < 3; ++ i)
/* eNllWfMfB ily traian UbmDn0H7j */         cin >> puncte[i].first >> puncte[i].second;
/* eNllWfMfB ily traian UbmDn0H7j */     lee({1, 1});
/* eNllWfMfB ily traian UbmDn0H7j */     cout << d[n][n][7];
/* eNllWfMfB ily traian UbmDn0H7j */     return 0;
/* eNllWfMfB ily traian UbmDn0H7j */ }