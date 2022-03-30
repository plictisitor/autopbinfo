/* U9g87ud9S ily traian 3O4DifkH5 */ #include <algorithm>
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
/* U9g87ud9S ily traian 3O4DifkH5 */ using namespace std;
/* U9g87ud9S ily traian 3O4DifkH5 */ 
/* U9g87ud9S ily traian 3O4DifkH5 */ int n , x[50];
/* U9g87ud9S ily traian 3O4DifkH5 */ 
/* U9g87ud9S ily traian 3O4DifkH5 */ void afisare(int k)
/* U9g87ud9S ily traian 3O4DifkH5 */ {
/* U9g87ud9S ily traian 3O4DifkH5 */     for(int i = 1 ; i <= k ; i++)
/* U9g87ud9S ily traian 3O4DifkH5 */         cout << x[i] << " ";
/* U9g87ud9S ily traian 3O4DifkH5 */     cout << '\n';
/* U9g87ud9S ily traian 3O4DifkH5 */ }
/* U9g87ud9S ily traian 3O4DifkH5 */ 
/* U9g87ud9S ily traian 3O4DifkH5 */ void back(int k)
/* U9g87ud9S ily traian 3O4DifkH5 */ {
/* U9g87ud9S ily traian 3O4DifkH5 */     for(int i = x[k - 1] + 1 ; i <= n ; i++)
/* U9g87ud9S ily traian 3O4DifkH5 */     {
/* U9g87ud9S ily traian 3O4DifkH5 */         x[k] = i;
/* U9g87ud9S ily traian 3O4DifkH5 */         if(k % 2 == 1) afisare(k);
/* U9g87ud9S ily traian 3O4DifkH5 */         back(k + 1);
/* U9g87ud9S ily traian 3O4DifkH5 */     }
/* U9g87ud9S ily traian 3O4DifkH5 */ }
/* U9g87ud9S ily traian 3O4DifkH5 */ 
/* U9g87ud9S ily traian 3O4DifkH5 */ int main()
/* U9g87ud9S ily traian 3O4DifkH5 */ {
/* U9g87ud9S ily traian 3O4DifkH5 */     cin >> n;
/* U9g87ud9S ily traian 3O4DifkH5 */     back(1);
/* U9g87ud9S ily traian 3O4DifkH5 */ }