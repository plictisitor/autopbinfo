/* dl2iYgxIB ily traian xxxvrmEPE */ #include <algorithm>
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
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */ using namespace std;
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */ ifstream cin("roy-floyd.in");
/* dl2iYgxIB ily traian xxxvrmEPE */ ofstream cout("roy-floyd.out");
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */ const int Inf = 0x3f3f3f3f;
/* dl2iYgxIB ily traian xxxvrmEPE */ int n , m , x , y , w , c[101][101];
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */ void Floyd_Warshall()
/* dl2iYgxIB ily traian xxxvrmEPE */ {
/* dl2iYgxIB ily traian xxxvrmEPE */     for (int k = 1; k <= n; ++k)
/* dl2iYgxIB ily traian xxxvrmEPE */         for (int i = 1; i <= n; ++i)
/* dl2iYgxIB ily traian xxxvrmEPE */             for (int j = 1; j <= n; ++j)
/* dl2iYgxIB ily traian xxxvrmEPE */                 if (i != j && c[i][j] > c[i][k] + c[k][j])
/* dl2iYgxIB ily traian xxxvrmEPE */                     c[i][j] = c[i][k] + c[k][j];
/* dl2iYgxIB ily traian xxxvrmEPE */ }
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */ int main()
/* dl2iYgxIB ily traian xxxvrmEPE */ {
/* dl2iYgxIB ily traian xxxvrmEPE */     cin >> n >> m;
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */     for (int i = 1 ; i <= n ; ++i)
/* dl2iYgxIB ily traian xxxvrmEPE */         for (int j = 1 ; j <= n ; ++j)
/* dl2iYgxIB ily traian xxxvrmEPE */             if (i != j) c[i][j] = Inf;
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */     for(int i = 1 ; i <= m ; i++)
/* dl2iYgxIB ily traian xxxvrmEPE */     {
/* dl2iYgxIB ily traian xxxvrmEPE */         cin >> x >> y >> w;
/* dl2iYgxIB ily traian xxxvrmEPE */         c[x][y] = w;
/* dl2iYgxIB ily traian xxxvrmEPE */     }
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */     Floyd_Warshall();
/* dl2iYgxIB ily traian xxxvrmEPE */ 
/* dl2iYgxIB ily traian xxxvrmEPE */     for (int i = 1 ; i <= n ; ++i)
/* dl2iYgxIB ily traian xxxvrmEPE */     {
/* dl2iYgxIB ily traian xxxvrmEPE */        for (int j = 1 ; j <= n ; ++j)
/* dl2iYgxIB ily traian xxxvrmEPE */             if(c[i][j] != Inf)cout << c[i][j] << ' ';
/* dl2iYgxIB ily traian xxxvrmEPE */             else cout << "-1 ";
/* dl2iYgxIB ily traian xxxvrmEPE */         cout << '\n';
/* dl2iYgxIB ily traian xxxvrmEPE */     }
/* dl2iYgxIB ily traian xxxvrmEPE */ }