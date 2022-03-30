/* x4yttFIsT ily traian DtnV3gPYz */ #include <algorithm>
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
/* x4yttFIsT ily traian DtnV3gPYz */ using namespace std;
/* x4yttFIsT ily traian DtnV3gPYz */ 
/* x4yttFIsT ily traian DtnV3gPYz */ ifstream cin("bomba.in");
/* x4yttFIsT ily traian DtnV3gPYz */ ofstream cout("bomba.out");
/* x4yttFIsT ily traian DtnV3gPYz */ 
/* x4yttFIsT ily traian DtnV3gPYz */ int a[1001][1001] , c[1001] , l[1001];
/* x4yttFIsT ily traian DtnV3gPYz */ 
/* x4yttFIsT ily traian DtnV3gPYz */ int main()
/* x4yttFIsT ily traian DtnV3gPYz */ {
/* x4yttFIsT ily traian DtnV3gPYz */     int n , m , cnt = 0;
/* x4yttFIsT ily traian DtnV3gPYz */     char ch;
/* x4yttFIsT ily traian DtnV3gPYz */     cin >> n >> m;
/* x4yttFIsT ily traian DtnV3gPYz */     for(int i = 1 ; i <= n ; ++i)
/* x4yttFIsT ily traian DtnV3gPYz */         for(int j = 1 ; j <= m ; ++j)
/* x4yttFIsT ily traian DtnV3gPYz */         {
/* x4yttFIsT ily traian DtnV3gPYz */             cin >> ch;
/* x4yttFIsT ily traian DtnV3gPYz */             if(ch == '0')
/* x4yttFIsT ily traian DtnV3gPYz */                 a[i][j]=0;
/* x4yttFIsT ily traian DtnV3gPYz */             else
/* x4yttFIsT ily traian DtnV3gPYz */                 a[i][j]=1 , cnt++;
/* x4yttFIsT ily traian DtnV3gPYz */         }
/* x4yttFIsT ily traian DtnV3gPYz */     for(int i = 1 ; i <= n ; ++i)
/* x4yttFIsT ily traian DtnV3gPYz */         for(int j = 1 ; j <= m ; ++j)
/* x4yttFIsT ily traian DtnV3gPYz */             l[i]+=a[i][j] , c[j]+=a[i][j];
/* x4yttFIsT ily traian DtnV3gPYz */     int x = -1 , y;
/* x4yttFIsT ily traian DtnV3gPYz */     for(int i = 1 ; i <= n && x == -1; ++i)
/* x4yttFIsT ily traian DtnV3gPYz */     {
/* x4yttFIsT ily traian DtnV3gPYz */         for(int j = 1 ; j <= m && x == -1 ; ++j)
/* x4yttFIsT ily traian DtnV3gPYz */         {
/* x4yttFIsT ily traian DtnV3gPYz */             if(c[j] + l[i] - a[i][j] == cnt)
/* x4yttFIsT ily traian DtnV3gPYz */                 x = i , y = j;
/* x4yttFIsT ily traian DtnV3gPYz */         }
/* x4yttFIsT ily traian DtnV3gPYz */     }
/* x4yttFIsT ily traian DtnV3gPYz */     cout << x << ' ' << y;
/* x4yttFIsT ily traian DtnV3gPYz */ }