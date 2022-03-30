/* RjHiuiL22 ily traian uij8EpdB8 */ #include <algorithm>
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
/* RjHiuiL22 ily traian uij8EpdB8 */ using namespace std;
/* RjHiuiL22 ily traian uij8EpdB8 */ int prim(int n)
/* RjHiuiL22 ily traian uij8EpdB8 */ {
/* RjHiuiL22 ily traian uij8EpdB8 */     if(n==0 || n==1) return 0;
/* RjHiuiL22 ily traian uij8EpdB8 */     if(n==2) return 1;
/* RjHiuiL22 ily traian uij8EpdB8 */     if(n%2==0) return 0;
/* RjHiuiL22 ily traian uij8EpdB8 */     for(int i=3;i*i<=n;i += 2)
/* RjHiuiL22 ily traian uij8EpdB8 */     {
/* RjHiuiL22 ily traian uij8EpdB8 */         if(n%i==0) return 0;
/* RjHiuiL22 ily traian uij8EpdB8 */     }
/* RjHiuiL22 ily traian uij8EpdB8 */     return 1;
/* RjHiuiL22 ily traian uij8EpdB8 */ }
/* RjHiuiL22 ily traian uij8EpdB8 */ int main()
/* RjHiuiL22 ily traian uij8EpdB8 */ {
/* RjHiuiL22 ily traian uij8EpdB8 */     ifstream fin("2prim.in");
/* RjHiuiL22 ily traian uij8EpdB8 */     ofstream fout("2prim.out");
/* RjHiuiL22 ily traian uij8EpdB8 */     int n,cate=0,x;
/* RjHiuiL22 ily traian uij8EpdB8 */     fin >> n;
/* RjHiuiL22 ily traian uij8EpdB8 */     for(int i=1;i<=n;++i)
/* RjHiuiL22 ily traian uij8EpdB8 */     {
/* RjHiuiL22 ily traian uij8EpdB8 */         fin >> x;
/* RjHiuiL22 ily traian uij8EpdB8 */         if(prim(x%100)) cate++;
/* RjHiuiL22 ily traian uij8EpdB8 */     }
/* RjHiuiL22 ily traian uij8EpdB8 */     fout << cate;
/* RjHiuiL22 ily traian uij8EpdB8 */     fin.close();
/* RjHiuiL22 ily traian uij8EpdB8 */     fout.close();
/* RjHiuiL22 ily traian uij8EpdB8 */     return 0;
/* RjHiuiL22 ily traian uij8EpdB8 */ }