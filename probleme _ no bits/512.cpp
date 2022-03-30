/* bMW3YBCoO ily traian CD29h8xH3 */ #include <algorithm>
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
/* bMW3YBCoO ily traian CD29h8xH3 */ 
/* bMW3YBCoO ily traian CD29h8xH3 */ using namespace std;
/* bMW3YBCoO ily traian CD29h8xH3 */ 
/* bMW3YBCoO ily traian CD29h8xH3 */ int main()
/* bMW3YBCoO ily traian CD29h8xH3 */ {
/* bMW3YBCoO ily traian CD29h8xH3 */     int n;
/* bMW3YBCoO ily traian CD29h8xH3 */     cin >> n;
/* bMW3YBCoO ily traian CD29h8xH3 */     int a[1001];
/* bMW3YBCoO ily traian CD29h8xH3 */     int max=0;
/* bMW3YBCoO ily traian CD29h8xH3 */     int inf=0;
/* bMW3YBCoO ily traian CD29h8xH3 */     for(int i = 0 ; i < n ; ++i)
/* bMW3YBCoO ily traian CD29h8xH3 */     {
/* bMW3YBCoO ily traian CD29h8xH3 */         cin >> a[i];
/* bMW3YBCoO ily traian CD29h8xH3 */         if(a[i]>max)
/* bMW3YBCoO ily traian CD29h8xH3 */         max=a[i] , inf=i;
/* bMW3YBCoO ily traian CD29h8xH3 */     }
/* bMW3YBCoO ily traian CD29h8xH3 */     sort(a , a+inf);
/* bMW3YBCoO ily traian CD29h8xH3 */     for(int i = 0 ; i < inf ; ++i)
/* bMW3YBCoO ily traian CD29h8xH3 */     cout << a[i] << ' ';
/* bMW3YBCoO ily traian CD29h8xH3 */     sort(a+inf , a+n);
/* bMW3YBCoO ily traian CD29h8xH3 */     for(int i = n-1 ; i >= inf ; --i)
/* bMW3YBCoO ily traian CD29h8xH3 */     cout << a[i] << ' ';
/* bMW3YBCoO ily traian CD29h8xH3 */ }