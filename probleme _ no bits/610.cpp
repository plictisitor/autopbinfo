/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ #include <algorithm>
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
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ 
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ using namespace std;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ 
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ ifstream cin("spion.in");
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ ofstream cout("spion.out");
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ 
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ bitset <50000001>F;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ int n , val , st , dr , c;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ 
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ int main()
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ {
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */     cin >> n;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */     for(int i = 1 ; i <= n ; i++)
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */     {
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */         cin >> val >> st >> dr;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */         if(F[st] == 1 && F[dr] == 1) c--;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */         else if(F[st] == 0 && F[dr] == 0) c++;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */         F[val] = 1;
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */         cout << c << '\n';
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */     }
/* Cq3LG6Ob3 ily traian Ad6TgLhe6 */ }