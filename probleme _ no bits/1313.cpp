/* p9Bvj2eJl ily traian 8Kq0vskHt */ #include <algorithm>
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
/* p9Bvj2eJl ily traian 8Kq0vskHt */ using namespace std ;
/* p9Bvj2eJl ily traian 8Kq0vskHt */ ifstream cin("produs_matrice.in");
/* p9Bvj2eJl ily traian 8Kq0vskHt */ ofstream cout("produs_matrice.out");
/* p9Bvj2eJl ily traian 8Kq0vskHt */ long long n , m , p , a[105][105] , b[105][105] , c[105][105];
/* p9Bvj2eJl ily traian 8Kq0vskHt */ 
/* p9Bvj2eJl ily traian 8Kq0vskHt */ int main ()
/* p9Bvj2eJl ily traian 8Kq0vskHt */ {
/* p9Bvj2eJl ily traian 8Kq0vskHt */     cin >> m >> n;
/* p9Bvj2eJl ily traian 8Kq0vskHt */     for(int i = 1 ; i <= m ; ++i )
/* p9Bvj2eJl ily traian 8Kq0vskHt */         for(int j = 1 ; j <= n ; ++j )
/* p9Bvj2eJl ily traian 8Kq0vskHt */             cin >> a[i][j] ;
/* p9Bvj2eJl ily traian 8Kq0vskHt */     cin >> p;
/* p9Bvj2eJl ily traian 8Kq0vskHt */     for(int i = 1 ; i <= n ; ++i )
/* p9Bvj2eJl ily traian 8Kq0vskHt */         for(int j = 1 ; j <= p ; ++j )
/* p9Bvj2eJl ily traian 8Kq0vskHt */             cin >> b[i][j] ;
/* p9Bvj2eJl ily traian 8Kq0vskHt */     for(int i = 1 ; i <= m ; ++i )
/* p9Bvj2eJl ily traian 8Kq0vskHt */         for(int j = 1 ; j <= p ; ++j )
/* p9Bvj2eJl ily traian 8Kq0vskHt */             for(int l = 1 ; l <= n ; ++l )
/* p9Bvj2eJl ily traian 8Kq0vskHt */                 c[i][j] = c[i][j] + a[i][l] * b[l][j] ;
/* p9Bvj2eJl ily traian 8Kq0vskHt */     for(int i = 1 ; i <= m ; ++i )
/* p9Bvj2eJl ily traian 8Kq0vskHt */     {
/* p9Bvj2eJl ily traian 8Kq0vskHt */          for(int j = 1 ; j <= p ; ++j )
/* p9Bvj2eJl ily traian 8Kq0vskHt */             cout << c[i][j] << " " ;
/* p9Bvj2eJl ily traian 8Kq0vskHt */          cout << '\n';
/* p9Bvj2eJl ily traian 8Kq0vskHt */     }
/* p9Bvj2eJl ily traian 8Kq0vskHt */ 
/* p9Bvj2eJl ily traian 8Kq0vskHt */ }