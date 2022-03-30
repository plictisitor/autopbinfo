/* Njlxc9cju ily traian ODbwnir05 */ #include <algorithm>
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
/* Njlxc9cju ily traian ODbwnir05 */ using namespace std;
/* Njlxc9cju ily traian ODbwnir05 */ int main()
/* Njlxc9cju ily traian ODbwnir05 */ {
/* Njlxc9cju ily traian ODbwnir05 */     int n,s=0,s1=0,s2=0;
/* Njlxc9cju ily traian ODbwnir05 */     cin >> n;
/* Njlxc9cju ily traian ODbwnir05 */     while(n!=0)
/* Njlxc9cju ily traian ODbwnir05 */     {
/* Njlxc9cju ily traian ODbwnir05 */         s=s+n%10;
/* Njlxc9cju ily traian ODbwnir05 */         n=n/10;
/* Njlxc9cju ily traian ODbwnir05 */     }
/* Njlxc9cju ily traian ODbwnir05 */     while(s!=0)
/* Njlxc9cju ily traian ODbwnir05 */     {
/* Njlxc9cju ily traian ODbwnir05 */         s1=s1+s%10;
/* Njlxc9cju ily traian ODbwnir05 */         s=s/10;
/* Njlxc9cju ily traian ODbwnir05 */     }
/* Njlxc9cju ily traian ODbwnir05 */     while(s1!=0)
/* Njlxc9cju ily traian ODbwnir05 */     {
/* Njlxc9cju ily traian ODbwnir05 */         s2=s2+s1%10;
/* Njlxc9cju ily traian ODbwnir05 */         s1=s1/10;
/* Njlxc9cju ily traian ODbwnir05 */     }
/* Njlxc9cju ily traian ODbwnir05 */     cout <<s2;
/* Njlxc9cju ily traian ODbwnir05 */     return 0;
/* Njlxc9cju ily traian ODbwnir05 */ }