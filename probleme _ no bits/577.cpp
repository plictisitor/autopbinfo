/* lHaLmzfaP ily traian fTA2b70Ol */ #include <algorithm>
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
/* lHaLmzfaP ily traian fTA2b70Ol */ using namespace std;
/* lHaLmzfaP ily traian fTA2b70Ol */ int a[101][101];
/* lHaLmzfaP ily traian fTA2b70Ol */ int main()
/* lHaLmzfaP ily traian fTA2b70Ol */ {
/* lHaLmzfaP ily traian fTA2b70Ol */     int n , m , x , y;
/* lHaLmzfaP ily traian fTA2b70Ol */     cin >> n >> m;
/* lHaLmzfaP ily traian fTA2b70Ol */     for(int i = 1 ; i <= m ; ++i)
/* lHaLmzfaP ily traian fTA2b70Ol */     {
/* lHaLmzfaP ily traian fTA2b70Ol */         cin >> x >> y;
/* lHaLmzfaP ily traian fTA2b70Ol */         a[x][y] = 1;
/* lHaLmzfaP ily traian fTA2b70Ol */     }
/* lHaLmzfaP ily traian fTA2b70Ol */     for(int i = 1 ; i <= n ; ++i)
/* lHaLmzfaP ily traian fTA2b70Ol */     {
/* lHaLmzfaP ily traian fTA2b70Ol */         for(int j = 1 ; j <= n ; ++j)
/* lHaLmzfaP ily traian fTA2b70Ol */         {
/* lHaLmzfaP ily traian fTA2b70Ol */             for(int r = 1 ; r <= n ; ++r)
/* lHaLmzfaP ily traian fTA2b70Ol */                 if(a[i][j] == 1 && a[r][i] == 1 && a[j][r] == 1)
/* lHaLmzfaP ily traian fTA2b70Ol */                     cout << i << " " << j << " " << r << endl;
/* lHaLmzfaP ily traian fTA2b70Ol */         }
/* lHaLmzfaP ily traian fTA2b70Ol */     }
/* lHaLmzfaP ily traian fTA2b70Ol */     return 0;
/* lHaLmzfaP ily traian fTA2b70Ol */ }