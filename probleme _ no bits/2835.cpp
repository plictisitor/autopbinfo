/* y3AJiIObV ily traian 56Mxmox77 */ #include <algorithm>
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
/* y3AJiIObV ily traian 56Mxmox77 */ using namespace std;
/* y3AJiIObV ily traian 56Mxmox77 */ int n , a[50];
/* y3AJiIObV ily traian 56Mxmox77 */ 
/* y3AJiIObV ily traian 56Mxmox77 */ int main()
/* y3AJiIObV ily traian 56Mxmox77 */ {
/* y3AJiIObV ily traian 56Mxmox77 */     cin >> n;
/* y3AJiIObV ily traian 56Mxmox77 */     for(int i = 1 ; i <= n ; ++i)
/* y3AJiIObV ily traian 56Mxmox77 */     {
/* y3AJiIObV ily traian 56Mxmox77 */         cin >> a[i];
/* y3AJiIObV ily traian 56Mxmox77 */         a[i + n] = a[i];
/* y3AJiIObV ily traian 56Mxmox77 */     }
/* y3AJiIObV ily traian 56Mxmox77 */     for(int i = n+1 ; i > 1 ; --i)
/* y3AJiIObV ily traian 56Mxmox77 */     {
/* y3AJiIObV ily traian 56Mxmox77 */         for(int j = i ; j < i + n ; ++j)
/* y3AJiIObV ily traian 56Mxmox77 */             cout << a[j] << ' ';
/* y3AJiIObV ily traian 56Mxmox77 */         cout << endl;
/* y3AJiIObV ily traian 56Mxmox77 */     }
/* y3AJiIObV ily traian 56Mxmox77 */ }