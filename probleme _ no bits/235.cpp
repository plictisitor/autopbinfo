/* 3zV8r9fgm ily traian vvOR7uLx5 */ #include <algorithm>
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
/* 3zV8r9fgm ily traian vvOR7uLx5 */ using namespace std;
/* 3zV8r9fgm ily traian vvOR7uLx5 */ int main()
/* 3zV8r9fgm ily traian vvOR7uLx5 */ {
/* 3zV8r9fgm ily traian vvOR7uLx5 */     int n , v[100][100] , f1 = 1 , f2 = 1 , f3;
/* 3zV8r9fgm ily traian vvOR7uLx5 */     cin >> n;
/* 3zV8r9fgm ily traian vvOR7uLx5 */     v[1][1] = v[1][2] = 1;
/* 3zV8r9fgm ily traian vvOR7uLx5 */     for(int j = 3 ; j <= n ; ++j)
/* 3zV8r9fgm ily traian vvOR7uLx5 */     {
/* 3zV8r9fgm ily traian vvOR7uLx5 */         v[1][j] = f3 = f1 + f2;
/* 3zV8r9fgm ily traian vvOR7uLx5 */         f1 = f2;
/* 3zV8r9fgm ily traian vvOR7uLx5 */         f2 = f3;
/* 3zV8r9fgm ily traian vvOR7uLx5 */     }
/* 3zV8r9fgm ily traian vvOR7uLx5 */     for(int i = 2 ; i <= n ; ++i)
/* 3zV8r9fgm ily traian vvOR7uLx5 */         for(int j = 1 ; j <= n ; ++j)
/* 3zV8r9fgm ily traian vvOR7uLx5 */         {
/* 3zV8r9fgm ily traian vvOR7uLx5 */             if(i % 2 == 1) v[i][j] = f3 = f1 + f2;
/* 3zV8r9fgm ily traian vvOR7uLx5 */             else v[i][n-j+1] = f3 = f1 + f2;
/* 3zV8r9fgm ily traian vvOR7uLx5 */             f1 = f2;
/* 3zV8r9fgm ily traian vvOR7uLx5 */             f2 = f3;
/* 3zV8r9fgm ily traian vvOR7uLx5 */         }
/* 3zV8r9fgm ily traian vvOR7uLx5 */     for(int i = 1 ; i <= n ; ++i)
/* 3zV8r9fgm ily traian vvOR7uLx5 */     {
/* 3zV8r9fgm ily traian vvOR7uLx5 */         for(int j = 1 ; j <= n ; ++j)
/* 3zV8r9fgm ily traian vvOR7uLx5 */             cout << v[i][j] << " ";
/* 3zV8r9fgm ily traian vvOR7uLx5 */         cout << endl;
/* 3zV8r9fgm ily traian vvOR7uLx5 */     }
/* 3zV8r9fgm ily traian vvOR7uLx5 */     return 0;
/* 3zV8r9fgm ily traian vvOR7uLx5 */ }