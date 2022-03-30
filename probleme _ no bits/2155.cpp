/* RItehixoN ily traian Cb4GKebVx */ #include <algorithm>
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
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */ using namespace std;
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */ ifstream cin("fb_fmi.in");
/* RItehixoN ily traian Cb4GKebVx */ ofstream cout("fb_fmi.out");
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */ int n , m , k , x , y , a[1001][1001] , ok , cnt;
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */ int main()
/* RItehixoN ily traian Cb4GKebVx */ {
/* RItehixoN ily traian Cb4GKebVx */     cin >> n >> m >> k;
/* RItehixoN ily traian Cb4GKebVx */     for(int i = 1 ; i <= m ; i++)
/* RItehixoN ily traian Cb4GKebVx */     {
/* RItehixoN ily traian Cb4GKebVx */         cin >> x >> y;
/* RItehixoN ily traian Cb4GKebVx */         a[x][y] = a[y][x] = 1;
/* RItehixoN ily traian Cb4GKebVx */         a[x][0]++;
/* RItehixoN ily traian Cb4GKebVx */         a[y][0]++;
/* RItehixoN ily traian Cb4GKebVx */     }
/* RItehixoN ily traian Cb4GKebVx */     while(1)
/* RItehixoN ily traian Cb4GKebVx */     {
/* RItehixoN ily traian Cb4GKebVx */         int ok = 0;
/* RItehixoN ily traian Cb4GKebVx */         for(int i = 1 ; i <= n ; i++)
/* RItehixoN ily traian Cb4GKebVx */         {
/* RItehixoN ily traian Cb4GKebVx */             if(a[i][0] < k && a[i][0] != 0)
/* RItehixoN ily traian Cb4GKebVx */             {
/* RItehixoN ily traian Cb4GKebVx */                 a[i][0] = 0;
/* RItehixoN ily traian Cb4GKebVx */                 for(int j = 1 ; j <= n ; j++)
/* RItehixoN ily traian Cb4GKebVx */                     if(a[i][j] == 1) a[j][i] = a[i][j] = 0 , a[j][0]--;
/* RItehixoN ily traian Cb4GKebVx */                 ok++;
/* RItehixoN ily traian Cb4GKebVx */             }
/* RItehixoN ily traian Cb4GKebVx */         }
/* RItehixoN ily traian Cb4GKebVx */         if(ok == 0)break;
/* RItehixoN ily traian Cb4GKebVx */     }
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */     for(int i = 1 ; i <= n ; i++)
/* RItehixoN ily traian Cb4GKebVx */         if(a[i][0] > 0) cnt++;
/* RItehixoN ily traian Cb4GKebVx */     cout << cnt << '\n';
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */     for(int i = 1 ; i <= n ; i++)
/* RItehixoN ily traian Cb4GKebVx */         if(a[i][0] > 0) cout << i << " ";
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */ 
/* RItehixoN ily traian Cb4GKebVx */ }