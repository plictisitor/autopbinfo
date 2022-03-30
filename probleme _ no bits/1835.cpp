/* ao7A4QTcY ily traian LvTA1tyd6 */ #include <algorithm>
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
/* ao7A4QTcY ily traian LvTA1tyd6 */ using namespace std;
/* ao7A4QTcY ily traian LvTA1tyd6 */ ifstream cin("twoop.in");
/* ao7A4QTcY ily traian LvTA1tyd6 */ ofstream cout("twoop.out");
/* ao7A4QTcY ily traian LvTA1tyd6 */ long long int a[100011] , v[100011];
/* ao7A4QTcY ily traian LvTA1tyd6 */ int main()
/* ao7A4QTcY ily traian LvTA1tyd6 */ {
/* ao7A4QTcY ily traian LvTA1tyd6 */     int n , nr1 , nr2 , st , dr , val , poz;
/* ao7A4QTcY ily traian LvTA1tyd6 */     cin >> n >> nr1 >> nr2;
/* ao7A4QTcY ily traian LvTA1tyd6 */     for(int i = 1 ; i <= n ; ++i)
/* ao7A4QTcY ily traian LvTA1tyd6 */         cin >> a[i];
/* ao7A4QTcY ily traian LvTA1tyd6 */     for(int i = 0 ; i < nr1 ; ++i)
/* ao7A4QTcY ily traian LvTA1tyd6 */     {
/* ao7A4QTcY ily traian LvTA1tyd6 */         cin >> st >> dr >> val;
/* ao7A4QTcY ily traian LvTA1tyd6 */         v[st] += val;
/* ao7A4QTcY ily traian LvTA1tyd6 */         v[dr + 1] -= val;
/* ao7A4QTcY ily traian LvTA1tyd6 */     }
/* ao7A4QTcY ily traian LvTA1tyd6 */     for(int i = 2 ; i <= n ; ++i)
/* ao7A4QTcY ily traian LvTA1tyd6 */         v[i] += v[i-1];
/* ao7A4QTcY ily traian LvTA1tyd6 */     for(int i = 1 ; i <= n ; ++i)
/* ao7A4QTcY ily traian LvTA1tyd6 */         a[i] += v[i];
/* ao7A4QTcY ily traian LvTA1tyd6 */     for(int i = 1 ; i <= nr2 ; ++i)
/* ao7A4QTcY ily traian LvTA1tyd6 */     {
/* ao7A4QTcY ily traian LvTA1tyd6 */         cin >> poz;
/* ao7A4QTcY ily traian LvTA1tyd6 */         cout << a[poz] << '\n';
/* ao7A4QTcY ily traian LvTA1tyd6 */     }
/* ao7A4QTcY ily traian LvTA1tyd6 */     return 0;
/* ao7A4QTcY ily traian LvTA1tyd6 */ }