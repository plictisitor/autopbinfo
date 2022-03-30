/* ALOqWw2UA ily traian 8bPpWSK31 */ #include <algorithm>
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
/* ALOqWw2UA ily traian 8bPpWSK31 */ using namespace std;
/* ALOqWw2UA ily traian 8bPpWSK31 */ 
/* ALOqWw2UA ily traian 8bPpWSK31 */ ifstream fin ("multiple.in");
/* ALOqWw2UA ily traian 8bPpWSK31 */ ofstream fout ("multiple.out");
/* ALOqWw2UA ily traian 8bPpWSK31 */ 
/* ALOqWw2UA ily traian 8bPpWSK31 */ int main ()
/* ALOqWw2UA ily traian 8bPpWSK31 */ {
/* ALOqWw2UA ily traian 8bPpWSK31 */     long long n , a , b;
/* ALOqWw2UA ily traian 8bPpWSK31 */     fin >> n;
/* ALOqWw2UA ily traian 8bPpWSK31 */     for (int i = 1; i <= n; ++i)
/* ALOqWw2UA ily traian 8bPpWSK31 */     {
/* ALOqWw2UA ily traian 8bPpWSK31 */         fin >> a >> b;
/* ALOqWw2UA ily traian 8bPpWSK31 */         if (a==b) fout << 2*b << "\n";
/* ALOqWw2UA ily traian 8bPpWSK31 */         else
/* ALOqWw2UA ily traian 8bPpWSK31 */         if (a<b) fout << b << "\n";
/* ALOqWw2UA ily traian 8bPpWSK31 */         else if (b<a) fout << b-(a%b)+a << "\n";
/* ALOqWw2UA ily traian 8bPpWSK31 */     }
/* ALOqWw2UA ily traian 8bPpWSK31 */     return 0;
/* ALOqWw2UA ily traian 8bPpWSK31 */ }