/* QPGhRmm7H ily traian TXIRz0iT4 */ #include <algorithm>
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
/* QPGhRmm7H ily traian TXIRz0iT4 */ using namespace std;
/* QPGhRmm7H ily traian TXIRz0iT4 */ ifstream fin("numere17.in");
/* QPGhRmm7H ily traian TXIRz0iT4 */ ofstream fout("numere17.out");
/* QPGhRmm7H ily traian TXIRz0iT4 */ int main()
/* QPGhRmm7H ily traian TXIRz0iT4 */ {
/* QPGhRmm7H ily traian TXIRz0iT4 */     int n , c , k , x , cnt = 0 , m = 1;
/* QPGhRmm7H ily traian TXIRz0iT4 */     fin >> c;
/* QPGhRmm7H ily traian TXIRz0iT4 */     if (c == 1)
/* QPGhRmm7H ily traian TXIRz0iT4 */     {
/* QPGhRmm7H ily traian TXIRz0iT4 */         fin >> n;
/* QPGhRmm7H ily traian TXIRz0iT4 */         for (int i = 1; i <= n ; ++i)
/* QPGhRmm7H ily traian TXIRz0iT4 */         {
/* QPGhRmm7H ily traian TXIRz0iT4 */             fin >> x;
/* QPGhRmm7H ily traian TXIRz0iT4 */             cnt++;
/* QPGhRmm7H ily traian TXIRz0iT4 */             if (x == 1) m += cnt;
/* QPGhRmm7H ily traian TXIRz0iT4 */             if (x == 2) m += cnt+1;
/* QPGhRmm7H ily traian TXIRz0iT4 */         }
/* QPGhRmm7H ily traian TXIRz0iT4 */         fout << m;
/* QPGhRmm7H ily traian TXIRz0iT4 */     }
/* QPGhRmm7H ily traian TXIRz0iT4 */     else
/* QPGhRmm7H ily traian TXIRz0iT4 */     {
/* QPGhRmm7H ily traian TXIRz0iT4 */         fin >> k;
/* QPGhRmm7H ily traian TXIRz0iT4 */         int x = 1 , s = 0 , maxi = 0;
/* QPGhRmm7H ily traian TXIRz0iT4 */         while (maxi < k)
/* QPGhRmm7H ily traian TXIRz0iT4 */         {
/* QPGhRmm7H ily traian TXIRz0iT4 */             maxi = maxi + x;
/* QPGhRmm7H ily traian TXIRz0iT4 */             s += maxi;
/* QPGhRmm7H ily traian TXIRz0iT4 */             x++;
/* QPGhRmm7H ily traian TXIRz0iT4 */         }
/* QPGhRmm7H ily traian TXIRz0iT4 */         s = s -(maxi - k) * (maxi - k + 1) / 2;
/* QPGhRmm7H ily traian TXIRz0iT4 */         fout << s;
/* QPGhRmm7H ily traian TXIRz0iT4 */     }
/* QPGhRmm7H ily traian TXIRz0iT4 */     return 0;
/* QPGhRmm7H ily traian TXIRz0iT4 */ }