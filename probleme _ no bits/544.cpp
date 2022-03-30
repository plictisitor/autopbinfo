/* vHNivg5MQ ily traian CZ2LPIFzf */ #include <algorithm>
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
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */ using namespace std;
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */ ifstream cin ("partial.in");
/* vHNivg5MQ ily traian CZ2LPIFzf */ ofstream cout("partial.out");
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */ int n , m , x , y , a[202][202], v[202], T[202];
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */ void dfs(int nod , int t)
/* vHNivg5MQ ily traian CZ2LPIFzf */ {
/* vHNivg5MQ ily traian CZ2LPIFzf */     T[nod] = t;
/* vHNivg5MQ ily traian CZ2LPIFzf */     v[nod] = 1;
/* vHNivg5MQ ily traian CZ2LPIFzf */     for(int i = 1 ; i <= n ; ++i)
/* vHNivg5MQ ily traian CZ2LPIFzf */         if(a[nod][i] == 1 && !v[i])
/* vHNivg5MQ ily traian CZ2LPIFzf */                 dfs(i , nod);
/* vHNivg5MQ ily traian CZ2LPIFzf */ }
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */ int main()
/* vHNivg5MQ ily traian CZ2LPIFzf */ {
/* vHNivg5MQ ily traian CZ2LPIFzf */     cin >> n;
/* vHNivg5MQ ily traian CZ2LPIFzf */     while(cin >> x >> y) a[x][y] = a[y][x] = 1 , m++;
/* vHNivg5MQ ily traian CZ2LPIFzf */     
/* vHNivg5MQ ily traian CZ2LPIFzf */     dfs(1 , 0);
/* vHNivg5MQ ily traian CZ2LPIFzf */     for(int i = 1 ; i <= n ; ++i)
/* vHNivg5MQ ily traian CZ2LPIFzf */         if(T[i] != 0) a[i][T[i]] = a[T[i]][i] = -1;///pun muchiile necesare ca sa ramana conex
/* vHNivg5MQ ily traian CZ2LPIFzf */         
/* vHNivg5MQ ily traian CZ2LPIFzf */     int diferenta = m;
/* vHNivg5MQ ily traian CZ2LPIFzf */     for(int i = 1 ; i < n ; ++i)
/* vHNivg5MQ ily traian CZ2LPIFzf */         for(int j = i + 1 ; j <= n ; ++j)
/* vHNivg5MQ ily traian CZ2LPIFzf */             if(a[i][j] == 1)
/* vHNivg5MQ ily traian CZ2LPIFzf */                 if(diferenta > m / 2) a[i][j] = a[j][i] = 0 , diferenta--;///scot muchiile in plus
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */     for(int i = 1 ; i <= n ; ++i)
/* vHNivg5MQ ily traian CZ2LPIFzf */         for(int j = 1 ; j <= n ; ++j)
/* vHNivg5MQ ily traian CZ2LPIFzf */             if(a[i][j] == -1) a[i][j] = 1;
/* vHNivg5MQ ily traian CZ2LPIFzf */ 
/* vHNivg5MQ ily traian CZ2LPIFzf */     for(int i = 1 ; i <= n ; ++i)
/* vHNivg5MQ ily traian CZ2LPIFzf */     {
/* vHNivg5MQ ily traian CZ2LPIFzf */         for(int j = 1 ; j <= n ; ++j)
/* vHNivg5MQ ily traian CZ2LPIFzf */             cout << a[i][j] << " ";
/* vHNivg5MQ ily traian CZ2LPIFzf */         cout << '\n';
/* vHNivg5MQ ily traian CZ2LPIFzf */     }
/* vHNivg5MQ ily traian CZ2LPIFzf */     return 0;
/* vHNivg5MQ ily traian CZ2LPIFzf */ }