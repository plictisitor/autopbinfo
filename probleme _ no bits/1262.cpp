/* lE5LnViix ily traian mTB8JkgP2 */ #include <algorithm>
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
/* lE5LnViix ily traian mTB8JkgP2 */ using namespace std;
/* lE5LnViix ily traian mTB8JkgP2 */ ifstream cin("subsecv.in");
/* lE5LnViix ily traian mTB8JkgP2 */ ofstream cout("subsecv.out");
/* lE5LnViix ily traian mTB8JkgP2 */ int n , x , a[10005] , st , dr , ok;
/* lE5LnViix ily traian mTB8JkgP2 */ int main()
/* lE5LnViix ily traian mTB8JkgP2 */ {
/* lE5LnViix ily traian mTB8JkgP2 */     cin >> n;
/* lE5LnViix ily traian mTB8JkgP2 */     for(int i = 1; i <= n; i++)
/* lE5LnViix ily traian mTB8JkgP2 */     {
/* lE5LnViix ily traian mTB8JkgP2 */         cin >> x;
/* lE5LnViix ily traian mTB8JkgP2 */         a[i] = (a[i - 1] + x % n) % n;
/* lE5LnViix ily traian mTB8JkgP2 */     }
/* lE5LnViix ily traian mTB8JkgP2 */     for(int i = 1; i <= n && !ok; i++)
/* lE5LnViix ily traian mTB8JkgP2 */         for(int j = i; j <= n && !ok; j++)
/* lE5LnViix ily traian mTB8JkgP2 */             if((a[j] - a[i - 1]) == 0) st = i , dr = j , ok = 1;
/* lE5LnViix ily traian mTB8JkgP2 */     if(ok) cout << st << ' ' << dr;
/* lE5LnViix ily traian mTB8JkgP2 */     else cout << "Nu exista";
/* lE5LnViix ily traian mTB8JkgP2 */     return 0;
/* lE5LnViix ily traian mTB8JkgP2 */ }