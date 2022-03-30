/* NV7EBu3po ily traian I6IGEf5g9 */ #include <algorithm>
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
/* NV7EBu3po ily traian I6IGEf5g9 */ using namespace std;
/* NV7EBu3po ily traian I6IGEf5g9 */ ifstream cin("parimpar1.in");
/* NV7EBu3po ily traian I6IGEf5g9 */ ofstream cout("parimpar1.out");
/* NV7EBu3po ily traian I6IGEf5g9 */ int n , x , s1 , s2 , s3 , s4;
/* NV7EBu3po ily traian I6IGEf5g9 */ 
/* NV7EBu3po ily traian I6IGEf5g9 */ int main()
/* NV7EBu3po ily traian I6IGEf5g9 */ {
/* NV7EBu3po ily traian I6IGEf5g9 */     cin >> n;
/* NV7EBu3po ily traian I6IGEf5g9 */     for(int i = 1 ; i <= n ; i ++)
/* NV7EBu3po ily traian I6IGEf5g9 */     {
/* NV7EBu3po ily traian I6IGEf5g9 */         cin >> x;
/* NV7EBu3po ily traian I6IGEf5g9 */         if(x % 2 == 0) s1 += x;
/* NV7EBu3po ily traian I6IGEf5g9 */         else s2 += x;
/* NV7EBu3po ily traian I6IGEf5g9 */     }
/* NV7EBu3po ily traian I6IGEf5g9 */     for(int i = 1 ; i <= n ; i ++)
/* NV7EBu3po ily traian I6IGEf5g9 */     {
/* NV7EBu3po ily traian I6IGEf5g9 */         cin >> x;
/* NV7EBu3po ily traian I6IGEf5g9 */         if(x % 2 == 0) s3 += x;
/* NV7EBu3po ily traian I6IGEf5g9 */         else s4 += x;
/* NV7EBu3po ily traian I6IGEf5g9 */     }
/* NV7EBu3po ily traian I6IGEf5g9 */     cout << s1 * s4 + s2 * s3 << endl;
/* NV7EBu3po ily traian I6IGEf5g9 */ }