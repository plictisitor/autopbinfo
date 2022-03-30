/* BdNWoqrnW ily traian Qp96ygl5v */ #include <algorithm>
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
/* BdNWoqrnW ily traian Qp96ygl5v */ using namespace std;
/* BdNWoqrnW ily traian Qp96ygl5v */ ifstream cin("izolate.in");
/* BdNWoqrnW ily traian Qp96ygl5v */ ofstream cout("izolate.out");
/* BdNWoqrnW ily traian Qp96ygl5v */ int n , m , a[101][101] , p , r , e[2500];
/* BdNWoqrnW ily traian Qp96ygl5v */ int main()
/* BdNWoqrnW ily traian Qp96ygl5v */ {
/* BdNWoqrnW ily traian Qp96ygl5v */     int cnt = 0;
/* BdNWoqrnW ily traian Qp96ygl5v */     cin >> n;
/* BdNWoqrnW ily traian Qp96ygl5v */     while(cin >> p >> r)
/* BdNWoqrnW ily traian Qp96ygl5v */     {
/* BdNWoqrnW ily traian Qp96ygl5v */         a[p][r] = 1;
/* BdNWoqrnW ily traian Qp96ygl5v */         a[r][p] = 1;
/* BdNWoqrnW ily traian Qp96ygl5v */     }
/* BdNWoqrnW ily traian Qp96ygl5v */ 
/* BdNWoqrnW ily traian Qp96ygl5v */     for(int i = 1 ; i <= n ; ++i)
/* BdNWoqrnW ily traian Qp96ygl5v */         {
/* BdNWoqrnW ily traian Qp96ygl5v */             int ok = 0;
/* BdNWoqrnW ily traian Qp96ygl5v */             for(int j = 1 ; j <= n ; ++j)
/* BdNWoqrnW ily traian Qp96ygl5v */                 if (a[i][j]) ok = 1;
/* BdNWoqrnW ily traian Qp96ygl5v */             if(ok == 0) cnt++;
/* BdNWoqrnW ily traian Qp96ygl5v */         }
/* BdNWoqrnW ily traian Qp96ygl5v */     cout << cnt << " ";
/* BdNWoqrnW ily traian Qp96ygl5v */     for(int i = 1 ; i <= n ; ++i)
/* BdNWoqrnW ily traian Qp96ygl5v */         {
/* BdNWoqrnW ily traian Qp96ygl5v */             int ok = 0;
/* BdNWoqrnW ily traian Qp96ygl5v */             for(int j = 1 ; j <= n ; ++j)
/* BdNWoqrnW ily traian Qp96ygl5v */                 if (a[i][j]) ok = 1;
/* BdNWoqrnW ily traian Qp96ygl5v */             if(ok == 0) cout << i << " ";
/* BdNWoqrnW ily traian Qp96ygl5v */         }
/* BdNWoqrnW ily traian Qp96ygl5v */     return 0;
/* BdNWoqrnW ily traian Qp96ygl5v */ }