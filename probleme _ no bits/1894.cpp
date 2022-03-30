/* vY9sCxcct ily traian 0j6nxV7bm */ #include <algorithm>
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
/* vY9sCxcct ily traian 0j6nxV7bm */ #define MAX 20
/* vY9sCxcct ily traian 0j6nxV7bm */ using namespace std;
/* vY9sCxcct ily traian 0j6nxV7bm */ int a[MAX][MAX];
/* vY9sCxcct ily traian 0j6nxV7bm */ int main()
/* vY9sCxcct ily traian 0j6nxV7bm */ {
/* vY9sCxcct ily traian 0j6nxV7bm */     int n , k = 0 , q = 0 , z = 1;
/* vY9sCxcct ily traian 0j6nxV7bm */     cin >> n;
/* vY9sCxcct ily traian 0j6nxV7bm */     k = n * 2 + 1;
/* vY9sCxcct ily traian 0j6nxV7bm */     q = n;
/* vY9sCxcct ily traian 0j6nxV7bm */     for(int i = 1; i <= k / 2; i++)
/* vY9sCxcct ily traian 0j6nxV7bm */     {
/* vY9sCxcct ily traian 0j6nxV7bm */         for(int j = 1; j <= i; j++)
/* vY9sCxcct ily traian 0j6nxV7bm */             {
/* vY9sCxcct ily traian 0j6nxV7bm */                 a[i][j] = n - j + 1;
/* vY9sCxcct ily traian 0j6nxV7bm */                 a[i][k - j + 1] = n - j + 1;
/* vY9sCxcct ily traian 0j6nxV7bm */             }
/* vY9sCxcct ily traian 0j6nxV7bm */         for(int j = i + 1; j <= k - i + 1; j++)
/* vY9sCxcct ily traian 0j6nxV7bm */             a[i][j] = n - i + 1;
/* vY9sCxcct ily traian 0j6nxV7bm */         q--;
/* vY9sCxcct ily traian 0j6nxV7bm */     }
/* vY9sCxcct ily traian 0j6nxV7bm */ 
/* vY9sCxcct ily traian 0j6nxV7bm */     for(int i = k/2 + 1; i <= k; i++)
/* vY9sCxcct ily traian 0j6nxV7bm */     {
/* vY9sCxcct ily traian 0j6nxV7bm */         for(int j = 1; j <= k - i + 1; j++)
/* vY9sCxcct ily traian 0j6nxV7bm */             {
/* vY9sCxcct ily traian 0j6nxV7bm */                 a[i][j] = n - j + 1;
/* vY9sCxcct ily traian 0j6nxV7bm */                 a[i][k - j + 1] = n - j + 1;
/* vY9sCxcct ily traian 0j6nxV7bm */             }
/* vY9sCxcct ily traian 0j6nxV7bm */         for(int j = k - i + 2; j <= k - (k - i) - 1; j++)
/* vY9sCxcct ily traian 0j6nxV7bm */             a[i][j] = i - n - 1;
/* vY9sCxcct ily traian 0j6nxV7bm */         q--;
/* vY9sCxcct ily traian 0j6nxV7bm */     }
/* vY9sCxcct ily traian 0j6nxV7bm */ 
/* vY9sCxcct ily traian 0j6nxV7bm */ 
/* vY9sCxcct ily traian 0j6nxV7bm */     for(int i = 1; i <= k; i++)
/* vY9sCxcct ily traian 0j6nxV7bm */     {
/* vY9sCxcct ily traian 0j6nxV7bm */         for(int j = 1; j <= k; j++)
/* vY9sCxcct ily traian 0j6nxV7bm */             cout << a[i][j] << " ";
/* vY9sCxcct ily traian 0j6nxV7bm */         cout << endl;
/* vY9sCxcct ily traian 0j6nxV7bm */     }
/* vY9sCxcct ily traian 0j6nxV7bm */ 
/* vY9sCxcct ily traian 0j6nxV7bm */     return 0;
/* vY9sCxcct ily traian 0j6nxV7bm */ }