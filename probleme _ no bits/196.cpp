/* vGvzYz7Vc ily traian FRMUkr2DW */ #include <algorithm>
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
/* vGvzYz7Vc ily traian FRMUkr2DW */ using namespace std;
/* vGvzYz7Vc ily traian FRMUkr2DW */ 
/* vGvzYz7Vc ily traian FRMUkr2DW */ ifstream cin("aranjamente.in");
/* vGvzYz7Vc ily traian FRMUkr2DW */ ofstream cout("aranjamente.out");
/* vGvzYz7Vc ily traian FRMUkr2DW */ 
/* vGvzYz7Vc ily traian FRMUkr2DW */ int n , m , x[10], p[10];
/* vGvzYz7Vc ily traian FRMUkr2DW */ 
/* vGvzYz7Vc ily traian FRMUkr2DW */ void afis()
/* vGvzYz7Vc ily traian FRMUkr2DW */ {
/* vGvzYz7Vc ily traian FRMUkr2DW */     for(int i = 1 ; i <= m ; ++i)
/* vGvzYz7Vc ily traian FRMUkr2DW */         cout << x[i] << " ";
/* vGvzYz7Vc ily traian FRMUkr2DW */     cout << endl;
/* vGvzYz7Vc ily traian FRMUkr2DW */ }
/* vGvzYz7Vc ily traian FRMUkr2DW */ 
/* vGvzYz7Vc ily traian FRMUkr2DW */ void back(int k)
/* vGvzYz7Vc ily traian FRMUkr2DW */ {
/* vGvzYz7Vc ily traian FRMUkr2DW */     for(int i = 1 ; i <= n ; ++i)
/* vGvzYz7Vc ily traian FRMUkr2DW */         if(!p[i])
/* vGvzYz7Vc ily traian FRMUkr2DW */         {
/* vGvzYz7Vc ily traian FRMUkr2DW */             p[i] = 1;
/* vGvzYz7Vc ily traian FRMUkr2DW */             x[k] = i;
/* vGvzYz7Vc ily traian FRMUkr2DW */             if(k == m) afis();
/* vGvzYz7Vc ily traian FRMUkr2DW */             else back(k+1);
/* vGvzYz7Vc ily traian FRMUkr2DW */             p[i] = 0;
/* vGvzYz7Vc ily traian FRMUkr2DW */         }
/* vGvzYz7Vc ily traian FRMUkr2DW */ }
/* vGvzYz7Vc ily traian FRMUkr2DW */ 
/* vGvzYz7Vc ily traian FRMUkr2DW */ int main()
/* vGvzYz7Vc ily traian FRMUkr2DW */ {
/* vGvzYz7Vc ily traian FRMUkr2DW */     cin >> n >> m;
/* vGvzYz7Vc ily traian FRMUkr2DW */     back(1);
/* vGvzYz7Vc ily traian FRMUkr2DW */     return 0;
/* vGvzYz7Vc ily traian FRMUkr2DW */ }