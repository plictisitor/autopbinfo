/* WdP9nxizp ily traian EQ0zVr38Z */ #include <algorithm>
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
/* WdP9nxizp ily traian EQ0zVr38Z */ 
/* WdP9nxizp ily traian EQ0zVr38Z */ using namespace std;
/* WdP9nxizp ily traian EQ0zVr38Z */ 
/* WdP9nxizp ily traian EQ0zVr38Z */ ifstream cin("pluricex1.in");
/* WdP9nxizp ily traian EQ0zVr38Z */ ofstream cout("pluricex1.out");
/* WdP9nxizp ily traian EQ0zVr38Z */ 
/* WdP9nxizp ily traian EQ0zVr38Z */ int n , p[10] , cnt , x[10] , m , d , M[25][25];
/* WdP9nxizp ily traian EQ0zVr38Z */ 
/* WdP9nxizp ily traian EQ0zVr38Z */ void sol()
/* WdP9nxizp ily traian EQ0zVr38Z */ {
/* WdP9nxizp ily traian EQ0zVr38Z */     int s[11] = {0};
/* WdP9nxizp ily traian EQ0zVr38Z */     for(int i = 1 ; i <= n ; i++)
/* WdP9nxizp ily traian EQ0zVr38Z */         for(int j = 1 ; M[x[i]][j] != 0 ; j++)
/* WdP9nxizp ily traian EQ0zVr38Z */             s[M[x[i]][j]] = 1;
/* WdP9nxizp ily traian EQ0zVr38Z */     int ok = 1;
/* WdP9nxizp ily traian EQ0zVr38Z */     for(int i = 1 ; i <= d ; i++)
/* WdP9nxizp ily traian EQ0zVr38Z */         if(s[i] == 0) ok = 0;
/* WdP9nxizp ily traian EQ0zVr38Z */     if(ok == 1)
/* WdP9nxizp ily traian EQ0zVr38Z */     {
/* WdP9nxizp ily traian EQ0zVr38Z */         for(int i = 1 ; i <= m ; i++)
/* WdP9nxizp ily traian EQ0zVr38Z */             cout << x[i] << " ";
/* WdP9nxizp ily traian EQ0zVr38Z */         cout << '\n';
/* WdP9nxizp ily traian EQ0zVr38Z */     }
/* WdP9nxizp ily traian EQ0zVr38Z */ }
/* WdP9nxizp ily traian EQ0zVr38Z */ 
/* WdP9nxizp ily traian EQ0zVr38Z */ void back(int k)
/* WdP9nxizp ily traian EQ0zVr38Z */ {
/* WdP9nxizp ily traian EQ0zVr38Z */     for(int i = x[k - 1] + 1; i <= n; ++i)
/* WdP9nxizp ily traian EQ0zVr38Z */     {
/* WdP9nxizp ily traian EQ0zVr38Z */         x[k] = i;
/* WdP9nxizp ily traian EQ0zVr38Z */         if(k == m) sol();
/* WdP9nxizp ily traian EQ0zVr38Z */         else back(k + 1);
/* WdP9nxizp ily traian EQ0zVr38Z */     }
/* WdP9nxizp ily traian EQ0zVr38Z */ }
/* WdP9nxizp ily traian EQ0zVr38Z */ 
/* WdP9nxizp ily traian EQ0zVr38Z */ int main()
/* WdP9nxizp ily traian EQ0zVr38Z */ {
/* WdP9nxizp ily traian EQ0zVr38Z */     cin >> n >> m >> d;
/* WdP9nxizp ily traian EQ0zVr38Z */     for(int i = 1 ; i <= n ; i++)
/* WdP9nxizp ily traian EQ0zVr38Z */     {
/* WdP9nxizp ily traian EQ0zVr38Z */         int a;
/* WdP9nxizp ily traian EQ0zVr38Z */         cin >> a;
/* WdP9nxizp ily traian EQ0zVr38Z */         for(int j = 1 ; j <= a ; j++)
/* WdP9nxizp ily traian EQ0zVr38Z */             cin >> M[i][j];
/* WdP9nxizp ily traian EQ0zVr38Z */     }
/* WdP9nxizp ily traian EQ0zVr38Z */     back(1);
/* WdP9nxizp ily traian EQ0zVr38Z */     return 0;
/* WdP9nxizp ily traian EQ0zVr38Z */ }