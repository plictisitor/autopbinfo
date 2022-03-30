/* eCBHdvbE7 ily traian q476iwe5K */ #include <algorithm>
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
/* eCBHdvbE7 ily traian q476iwe5K */ 
/* eCBHdvbE7 ily traian q476iwe5K */ using namespace std;
/* eCBHdvbE7 ily traian q476iwe5K */ ifstream cin("placare.in");
/* eCBHdvbE7 ily traian q476iwe5K */ ofstream cout("placare.out");
/* eCBHdvbE7 ily traian q476iwe5K */ int n , m, v[301][301];
/* eCBHdvbE7 ily traian q476iwe5K */ int main()
/* eCBHdvbE7 ily traian q476iwe5K */ {
/* eCBHdvbE7 ily traian q476iwe5K */     int x;
/* eCBHdvbE7 ily traian q476iwe5K */     cin >> n >> m;
/* eCBHdvbE7 ily traian q476iwe5K */     for(int i = 1; i <= n; i++)
/* eCBHdvbE7 ily traian q476iwe5K */     {
/* eCBHdvbE7 ily traian q476iwe5K */         for(int j = 1; j <= m; j++)
/* eCBHdvbE7 ily traian q476iwe5K */         {
/* eCBHdvbE7 ily traian q476iwe5K */             if(v[i][j] == 0)
/* eCBHdvbE7 ily traian q476iwe5K */             {
/* eCBHdvbE7 ily traian q476iwe5K */                 do
/* eCBHdvbE7 ily traian q476iwe5K */                 {
/* eCBHdvbE7 ily traian q476iwe5K */                     cin >> x;
/* eCBHdvbE7 ily traian q476iwe5K */                 }while(x == 0);
/* eCBHdvbE7 ily traian q476iwe5K */                 if(x > 0)
/* eCBHdvbE7 ily traian q476iwe5K */                     for(int k = 0; k < x; k++)
/* eCBHdvbE7 ily traian q476iwe5K */                         v[i][k + j] = x;
/* eCBHdvbE7 ily traian q476iwe5K */                 else
/* eCBHdvbE7 ily traian q476iwe5K */                     for(int k = 0; k < -x; k++)
/* eCBHdvbE7 ily traian q476iwe5K */                         v[i+k][j] = -x;
/* eCBHdvbE7 ily traian q476iwe5K */             }
/* eCBHdvbE7 ily traian q476iwe5K */         }
/* eCBHdvbE7 ily traian q476iwe5K */     }
/* eCBHdvbE7 ily traian q476iwe5K */     for(int i = 1; i <= n; i++)
/* eCBHdvbE7 ily traian q476iwe5K */     {
/* eCBHdvbE7 ily traian q476iwe5K */         for(int j = 1; j <= m; j++)
/* eCBHdvbE7 ily traian q476iwe5K */             cout << v[i][j]<<" ";
/* eCBHdvbE7 ily traian q476iwe5K */         cout << endl;
/* eCBHdvbE7 ily traian q476iwe5K */     }
/* eCBHdvbE7 ily traian q476iwe5K */     return 0;
/* eCBHdvbE7 ily traian q476iwe5K */ }