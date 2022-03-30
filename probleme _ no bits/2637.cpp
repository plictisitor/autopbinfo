/* suLWGplzW ily traian 4G1X0gAXk */ #include <algorithm>
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
/* suLWGplzW ily traian 4G1X0gAXk */ using namespace std;
/* suLWGplzW ily traian 4G1X0gAXk */ 
/* suLWGplzW ily traian 4G1X0gAXk */ ifstream cin("zoo.in");
/* suLWGplzW ily traian 4G1X0gAXk */ ofstream cout("zoo.out");
/* suLWGplzW ily traian 4G1X0gAXk */ 
/* suLWGplzW ily traian 4G1X0gAXk */ long long n , m , a[105][105] , s[105][105] , p , i1 , i2 , j1 , j2;
/* suLWGplzW ily traian 4G1X0gAXk */ 
/* suLWGplzW ily traian 4G1X0gAXk */ int main()
/* suLWGplzW ily traian 4G1X0gAXk */ {
/* suLWGplzW ily traian 4G1X0gAXk */     cin >> n >> m;
/* suLWGplzW ily traian 4G1X0gAXk */     for(int i = 1 ; i <= n ; i++)
/* suLWGplzW ily traian 4G1X0gAXk */         for(int j = 1 ; j <= m ; j++)
/* suLWGplzW ily traian 4G1X0gAXk */             cin >> a[i][j];
/* suLWGplzW ily traian 4G1X0gAXk */     for(int i = 1 ; i <= n ; i++)
/* suLWGplzW ily traian 4G1X0gAXk */         for(int j = 1 ; j <= m ; j++)
/* suLWGplzW ily traian 4G1X0gAXk */             s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
/* suLWGplzW ily traian 4G1X0gAXk */ 
/* suLWGplzW ily traian 4G1X0gAXk */     cin >> p;
/* suLWGplzW ily traian 4G1X0gAXk */     for(int i = 1 ; i <= p ; i++)
/* suLWGplzW ily traian 4G1X0gAXk */     {
/* suLWGplzW ily traian 4G1X0gAXk */         cin >> i1 >> j1 >> i2 >> j2;
/* suLWGplzW ily traian 4G1X0gAXk */         cout << s[i2][j2] - s[i1-1][j2] - s[i2][j1-1] + s[i1 - 1][j1 - 1]<< '\n';
/* suLWGplzW ily traian 4G1X0gAXk */     }
/* suLWGplzW ily traian 4G1X0gAXk */ }