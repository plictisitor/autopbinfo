/* G0I5HqZEa ily traian 75JopeZu3 */ #include <algorithm>
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
/* G0I5HqZEa ily traian 75JopeZu3 */ using namespace std;
/* G0I5HqZEa ily traian 75JopeZu3 */ 
/* G0I5HqZEa ily traian 75JopeZu3 */ ifstream istr ("numere18.in");
/* G0I5HqZEa ily traian 75JopeZu3 */ ofstream ostr ("numere18.out");
/* G0I5HqZEa ily traian 75JopeZu3 */ 
/* G0I5HqZEa ily traian 75JopeZu3 */ int main ()
/* G0I5HqZEa ily traian 75JopeZu3 */ {
/* G0I5HqZEa ily traian 75JopeZu3 */     int n,m,c;
/* G0I5HqZEa ily traian 75JopeZu3 */     istr >> c;
/* G0I5HqZEa ily traian 75JopeZu3 */     int x=1;
/* G0I5HqZEa ily traian 75JopeZu3 */     if (c == 1)
/* G0I5HqZEa ily traian 75JopeZu3 */     {
/* G0I5HqZEa ily traian 75JopeZu3 */         istr >> n;
/* G0I5HqZEa ily traian 75JopeZu3 */         int s=0, a = n * (n - 1)/2 , b = n * (n + 1)/2;
/* G0I5HqZEa ily traian 75JopeZu3 */         for (int i = a + 1; i <= b ; ++i)
/* G0I5HqZEa ily traian 75JopeZu3 */             s=s+i;
/* G0I5HqZEa ily traian 75JopeZu3 */         ostr << s;
/* G0I5HqZEa ily traian 75JopeZu3 */         
/* G0I5HqZEa ily traian 75JopeZu3 */     }
/* G0I5HqZEa ily traian 75JopeZu3 */         
/* G0I5HqZEa ily traian 75JopeZu3 */     if (c == 2)
/* G0I5HqZEa ily traian 75JopeZu3 */     {
/* G0I5HqZEa ily traian 75JopeZu3 */         istr >> m;
/* G0I5HqZEa ily traian 75JopeZu3 */         int k=1;
/* G0I5HqZEa ily traian 75JopeZu3 */         while (k * (k + 1)/2 < m) k++;
/* G0I5HqZEa ily traian 75JopeZu3 */         k--;
/* G0I5HqZEa ily traian 75JopeZu3 */         ostr << k+1<< ' ' << m - k* (k+1)/2;
/* G0I5HqZEa ily traian 75JopeZu3 */     }
/* G0I5HqZEa ily traian 75JopeZu3 */     istr.close ();
/* G0I5HqZEa ily traian 75JopeZu3 */     ostr.close ();
/* G0I5HqZEa ily traian 75JopeZu3 */     return 0;
/* G0I5HqZEa ily traian 75JopeZu3 */ }