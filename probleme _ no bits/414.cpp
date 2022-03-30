/* oj4vQBo9z ily traian cS9Wn7G63 */ #include <algorithm>
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
/* oj4vQBo9z ily traian cS9Wn7G63 */ using namespace std;
/* oj4vQBo9z ily traian cS9Wn7G63 */ ifstream cin("listavecini.in");
/* oj4vQBo9z ily traian cS9Wn7G63 */ ofstream cout("listavecini.out");
/* oj4vQBo9z ily traian cS9Wn7G63 */ int n , m , a[101][101] , p , r , e[2500];
/* oj4vQBo9z ily traian cS9Wn7G63 */ int main()
/* oj4vQBo9z ily traian cS9Wn7G63 */ {
/* oj4vQBo9z ily traian cS9Wn7G63 */     cin >> n;
/* oj4vQBo9z ily traian cS9Wn7G63 */     while(cin >> p >> r)
/* oj4vQBo9z ily traian cS9Wn7G63 */     {
/* oj4vQBo9z ily traian cS9Wn7G63 */         a[p][r] = 1;
/* oj4vQBo9z ily traian cS9Wn7G63 */         a[r][p] = 1;
/* oj4vQBo9z ily traian cS9Wn7G63 */         a[0][p]++;
/* oj4vQBo9z ily traian cS9Wn7G63 */         a[0][r]++;
/* oj4vQBo9z ily traian cS9Wn7G63 */     }
/* oj4vQBo9z ily traian cS9Wn7G63 */ 
/* oj4vQBo9z ily traian cS9Wn7G63 */     for(int i = 1 ; i <= n ; ++i)
/* oj4vQBo9z ily traian cS9Wn7G63 */         {
/* oj4vQBo9z ily traian cS9Wn7G63 */             for(int j = 1 ; j <= n ; ++j)
/* oj4vQBo9z ily traian cS9Wn7G63 */                 if (a[i][j]) e[i]++;
/* oj4vQBo9z ily traian cS9Wn7G63 */         }
/* oj4vQBo9z ily traian cS9Wn7G63 */     for(int i = 1 ; i <= n ; ++i)
/* oj4vQBo9z ily traian cS9Wn7G63 */         {
/* oj4vQBo9z ily traian cS9Wn7G63 */             cout << e[i] << " ";
/* oj4vQBo9z ily traian cS9Wn7G63 */             for(int j = 1 ; j <= n ; ++j)
/* oj4vQBo9z ily traian cS9Wn7G63 */             if(a[i][j])cout << j << " ";
/* oj4vQBo9z ily traian cS9Wn7G63 */             cout << endl;
/* oj4vQBo9z ily traian cS9Wn7G63 */         }
/* oj4vQBo9z ily traian cS9Wn7G63 */     return 0;
/* oj4vQBo9z ily traian cS9Wn7G63 */ }