/* SYzv2EkaX ily traian lNFushkYH */ #include <algorithm>
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
/* SYzv2EkaX ily traian lNFushkYH */ 
/* SYzv2EkaX ily traian lNFushkYH */ using namespace std;
/* SYzv2EkaX ily traian lNFushkYH */ #define mod 1234567
/* SYzv2EkaX ily traian lNFushkYH */ ifstream cin("cub_dinamic.in");
/* SYzv2EkaX ily traian lNFushkYH */ ofstream cout("cub_dinamic.out");
/* SYzv2EkaX ily traian lNFushkYH */ 
/* SYzv2EkaX ily traian lNFushkYH */ int n , m , x[201][201][201] , a , b , c;
/* SYzv2EkaX ily traian lNFushkYH */ 
/* SYzv2EkaX ily traian lNFushkYH */ int main()
/* SYzv2EkaX ily traian lNFushkYH */ {
/* SYzv2EkaX ily traian lNFushkYH */     cin >> n >> m;
/* SYzv2EkaX ily traian lNFushkYH */     for(int i = 1 ; i <= m ; i++)
/* SYzv2EkaX ily traian lNFushkYH */     {
/* SYzv2EkaX ily traian lNFushkYH */         cin >> a >> b >> c;
/* SYzv2EkaX ily traian lNFushkYH */         x[a][b][c] = -1;
/* SYzv2EkaX ily traian lNFushkYH */     }
/* SYzv2EkaX ily traian lNFushkYH */     x[1][1][1] = 1;
/* SYzv2EkaX ily traian lNFushkYH */     for(int i = 1 ; i <= n ; i++)
/* SYzv2EkaX ily traian lNFushkYH */     {
/* SYzv2EkaX ily traian lNFushkYH */         for(int j = 1 ; j <= n ; j++)
/* SYzv2EkaX ily traian lNFushkYH */         {
/* SYzv2EkaX ily traian lNFushkYH */             for(int k = 1 ; k <= n ; k++)
/* SYzv2EkaX ily traian lNFushkYH */                 if(x[i][j][k] != -1)
/* SYzv2EkaX ily traian lNFushkYH */                 {
/* SYzv2EkaX ily traian lNFushkYH */                     if(x[i - 1][j][k] != -1)
/* SYzv2EkaX ily traian lNFushkYH */                         x[i][j][k] += (x[i - 1][j][k])%mod;
/* SYzv2EkaX ily traian lNFushkYH */                     if(x[i][j - 1][k] != -1)
/* SYzv2EkaX ily traian lNFushkYH */                         x[i][j][k] += (x[i][j - 1][k])%mod;
/* SYzv2EkaX ily traian lNFushkYH */                     if(x[i][j][k- 1] != -1)
/* SYzv2EkaX ily traian lNFushkYH */                         x[i][j][k] += (x[i][j][k - 1])%mod;
/* SYzv2EkaX ily traian lNFushkYH */                     x[i][j][k] %= mod;
/* SYzv2EkaX ily traian lNFushkYH */                 }
/* SYzv2EkaX ily traian lNFushkYH */         }
/* SYzv2EkaX ily traian lNFushkYH */     }
/* SYzv2EkaX ily traian lNFushkYH */     cout << x[n][n][n];
/* SYzv2EkaX ily traian lNFushkYH */ }