/* fvz5feKQ4 ily traian XAg1Q4b76 */ #include <algorithm>
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
/* fvz5feKQ4 ily traian XAg1Q4b76 */ using namespace std;
/* fvz5feKQ4 ily traian XAg1Q4b76 */ ifstream fin("pozitie.in");
/* fvz5feKQ4 ily traian XAg1Q4b76 */ ofstream fout("pozitie.out");
/* fvz5feKQ4 ily traian XAg1Q4b76 */ int a[10];
/* fvz5feKQ4 ily traian XAg1Q4b76 */ int main()
/* fvz5feKQ4 ily traian XAg1Q4b76 */ {
/* fvz5feKQ4 ily traian XAg1Q4b76 */     int n , x , a , p = 1;
/* fvz5feKQ4 ily traian XAg1Q4b76 */     fin >> n >> x;
/* fvz5feKQ4 ily traian XAg1Q4b76 */     for(int i = 2 ; i <= n ; ++i)
/* fvz5feKQ4 ily traian XAg1Q4b76 */     {
/* fvz5feKQ4 ily traian XAg1Q4b76 */         fin >> a;
/* fvz5feKQ4 ily traian XAg1Q4b76 */         if(a < x) p++;
/* fvz5feKQ4 ily traian XAg1Q4b76 */     }
/* fvz5feKQ4 ily traian XAg1Q4b76 */     fout << p;
/* fvz5feKQ4 ily traian XAg1Q4b76 */     return 0;
/* fvz5feKQ4 ily traian XAg1Q4b76 */ }