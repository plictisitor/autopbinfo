/* jfNhI9D87 ily traian ALx8I4Rue */ #include <algorithm>
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
/* jfNhI9D87 ily traian ALx8I4Rue */ using namespace std;
/* jfNhI9D87 ily traian ALx8I4Rue */ ifstream cin("adiacenta1.in");
/* jfNhI9D87 ily traian ALx8I4Rue */ ofstream cout("adiacenta1.out");
/* jfNhI9D87 ily traian ALx8I4Rue */ int n , m , a[101][101] , p , r;
/* jfNhI9D87 ily traian ALx8I4Rue */ int main()
/* jfNhI9D87 ily traian ALx8I4Rue */ {
/* jfNhI9D87 ily traian ALx8I4Rue */ 
/* jfNhI9D87 ily traian ALx8I4Rue */     while(cin >> p >> r)
/* jfNhI9D87 ily traian ALx8I4Rue */     {
/* jfNhI9D87 ily traian ALx8I4Rue */         a[p][r] = 1;
/* jfNhI9D87 ily traian ALx8I4Rue */         a[r][p] = 1;
/* jfNhI9D87 ily traian ALx8I4Rue */         n = max(n, max(p, r));
/* jfNhI9D87 ily traian ALx8I4Rue */     }
/* jfNhI9D87 ily traian ALx8I4Rue */ 
/* jfNhI9D87 ily traian ALx8I4Rue */     for(int i = 1 ; i <= n ; ++i)
/* jfNhI9D87 ily traian ALx8I4Rue */         {
/* jfNhI9D87 ily traian ALx8I4Rue */             for(int j = 1 ; j <= n ; ++j)
/* jfNhI9D87 ily traian ALx8I4Rue */                 cout << a[i][j] << " ";
/* jfNhI9D87 ily traian ALx8I4Rue */             cout << endl;
/* jfNhI9D87 ily traian ALx8I4Rue */         }
/* jfNhI9D87 ily traian ALx8I4Rue */     return 0;
/* jfNhI9D87 ily traian ALx8I4Rue */ }