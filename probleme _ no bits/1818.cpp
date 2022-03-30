/* mb0H0eSIB ily traian 3NUhBd1v7 */ #include <algorithm>
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
/* mb0H0eSIB ily traian 3NUhBd1v7 */ using namespace std;
/* mb0H0eSIB ily traian 3NUhBd1v7 */ ifstream cin("brain.in");
/* mb0H0eSIB ily traian 3NUhBd1v7 */ ofstream cout("brain.out");
/* mb0H0eSIB ily traian 3NUhBd1v7 */ int n , x , a[1000001];
/* mb0H0eSIB ily traian 3NUhBd1v7 */ long long maxi , mini , j;
/* mb0H0eSIB ily traian 3NUhBd1v7 */ 
/* mb0H0eSIB ily traian 3NUhBd1v7 */ int main()
/* mb0H0eSIB ily traian 3NUhBd1v7 */ {
/* mb0H0eSIB ily traian 3NUhBd1v7 */     cin >> n;
/* mb0H0eSIB ily traian 3NUhBd1v7 */     for(int i = 1 ; i <= n ; ++i)
/* mb0H0eSIB ily traian 3NUhBd1v7 */     {
/* mb0H0eSIB ily traian 3NUhBd1v7 */         cin >> x;
/* mb0H0eSIB ily traian 3NUhBd1v7 */         if(x == i) a[j] = x , j++;
/* mb0H0eSIB ily traian 3NUhBd1v7 */ 
/* mb0H0eSIB ily traian 3NUhBd1v7 */     }
/* mb0H0eSIB ily traian 3NUhBd1v7 */     for(int i = 0 ; i < j ; ++i)
/* mb0H0eSIB ily traian 3NUhBd1v7 */     {
/* mb0H0eSIB ily traian 3NUhBd1v7 */         cout << a[i] <<" ";
/* mb0H0eSIB ily traian 3NUhBd1v7 */         maxi += a[i];
/* mb0H0eSIB ily traian 3NUhBd1v7 */     }
/* mb0H0eSIB ily traian 3NUhBd1v7 */     cout<<'\n' << maxi << '\n';
/* mb0H0eSIB ily traian 3NUhBd1v7 */     mini = 1;
/* mb0H0eSIB ily traian 3NUhBd1v7 */     int i = 0;
/* mb0H0eSIB ily traian 3NUhBd1v7 */     while(a[i] <= mini && i <= j) mini += a[i++];
/* mb0H0eSIB ily traian 3NUhBd1v7 */     cout << mini <<'\n';
/* mb0H0eSIB ily traian 3NUhBd1v7 */ 
/* mb0H0eSIB ily traian 3NUhBd1v7 */ }