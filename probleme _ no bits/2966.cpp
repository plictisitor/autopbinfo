/* Nt6pJtwMK ily traian xNyghml3H */ #include <algorithm>
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
/* Nt6pJtwMK ily traian xNyghml3H */ using namespace std;
/* Nt6pJtwMK ily traian xNyghml3H */ 
/* Nt6pJtwMK ily traian xNyghml3H */ ifstream cin("yinyang.in");
/* Nt6pJtwMK ily traian xNyghml3H */ ofstream cout("yinyang.out");
/* Nt6pJtwMK ily traian xNyghml3H */ 
/* Nt6pJtwMK ily traian xNyghml3H */ int n , m , a[101][101] , cnt , ok;
/* Nt6pJtwMK ily traian xNyghml3H */ 
/* Nt6pJtwMK ily traian xNyghml3H */ int swaplinii(int x , int y)
/* Nt6pJtwMK ily traian xNyghml3H */ {
/* Nt6pJtwMK ily traian xNyghml3H */     for(int i = 1 ; i <= m ; i++)
/* Nt6pJtwMK ily traian xNyghml3H */         swap(a[x][i] , a[y][i]);
/* Nt6pJtwMK ily traian xNyghml3H */ }
/* Nt6pJtwMK ily traian xNyghml3H */ 
/* Nt6pJtwMK ily traian xNyghml3H */ int swapcol(int x , int y)
/* Nt6pJtwMK ily traian xNyghml3H */ {
/* Nt6pJtwMK ily traian xNyghml3H */     for(int i = 1 ; i <= n ; i++)
/* Nt6pJtwMK ily traian xNyghml3H */         swap(a[i][x] , a[i][y]);
/* Nt6pJtwMK ily traian xNyghml3H */ }
/* Nt6pJtwMK ily traian xNyghml3H */ int main()
/* Nt6pJtwMK ily traian xNyghml3H */ {
/* Nt6pJtwMK ily traian xNyghml3H */     cin >> n >> m;
/* Nt6pJtwMK ily traian xNyghml3H */     for(int i = 1 ; i <= n ; i++)
/* Nt6pJtwMK ily traian xNyghml3H */         for(int j = 1 ; j <= m ; j++)
/* Nt6pJtwMK ily traian xNyghml3H */             cin >> a[i][j];
/* Nt6pJtwMK ily traian xNyghml3H */     for(int k = 1 ; k <= m ; k++)
/* Nt6pJtwMK ily traian xNyghml3H */     {
/* Nt6pJtwMK ily traian xNyghml3H */         for(int i = 1 ; i <= n ; i++)
/* Nt6pJtwMK ily traian xNyghml3H */             for(int j = 2 ; j <= m  ; j++)
/* Nt6pJtwMK ily traian xNyghml3H */                 if(a[i][j] < a[i][j - 1])
/* Nt6pJtwMK ily traian xNyghml3H */                     swapcol(j , j - 1) , cnt++;
/* Nt6pJtwMK ily traian xNyghml3H */     }
/* Nt6pJtwMK ily traian xNyghml3H */     for(int k = 1 ; k <= n ; k++)
/* Nt6pJtwMK ily traian xNyghml3H */     {
/* Nt6pJtwMK ily traian xNyghml3H */         for(int i = 2 ; i <= n ; i++)
/* Nt6pJtwMK ily traian xNyghml3H */             for(int j = 1 ; j <= m  ; j++)
/* Nt6pJtwMK ily traian xNyghml3H */                 if(a[i][j] < a[i-1][j])
/* Nt6pJtwMK ily traian xNyghml3H */                     swaplinii(i , i - 1) , cnt++;
/* Nt6pJtwMK ily traian xNyghml3H */     }
/* Nt6pJtwMK ily traian xNyghml3H */     for(int i = 1 ; i <= n ; i++)
/* Nt6pJtwMK ily traian xNyghml3H */     {
/* Nt6pJtwMK ily traian xNyghml3H */         for(int j = 1 ; j <= m ; j++)
/* Nt6pJtwMK ily traian xNyghml3H */             if(a[i][j] < a[i][j - 1] || a[i][j] < a[i - 1][j]) ok = 1;
/* Nt6pJtwMK ily traian xNyghml3H */     }
/* Nt6pJtwMK ily traian xNyghml3H */     if(ok == 0) cout << cnt;
/* Nt6pJtwMK ily traian xNyghml3H */     else cout << -1;
/* Nt6pJtwMK ily traian xNyghml3H */ }