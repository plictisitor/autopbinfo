/* jUXENxqvL ily traian sKPciff82 */ #include <algorithm>
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
/* jUXENxqvL ily traian sKPciff82 */ using namespace std;
/* jUXENxqvL ily traian sKPciff82 */ int sumcif(int n)
/* jUXENxqvL ily traian sKPciff82 */ {
/* jUXENxqvL ily traian sKPciff82 */     int s=0;
/* jUXENxqvL ily traian sKPciff82 */     while(n != 0)
/* jUXENxqvL ily traian sKPciff82 */     {
/* jUXENxqvL ily traian sKPciff82 */         s=s+n%10;
/* jUXENxqvL ily traian sKPciff82 */         n=n/10;
/* jUXENxqvL ily traian sKPciff82 */     }
/* jUXENxqvL ily traian sKPciff82 */     return s;
/* jUXENxqvL ily traian sKPciff82 */ }
/* jUXENxqvL ily traian sKPciff82 */ int main()
/* jUXENxqvL ily traian sKPciff82 */ {
/* jUXENxqvL ily traian sKPciff82 */     int n,a[201],x;
/* jUXENxqvL ily traian sKPciff82 */     cin>>n;
/* jUXENxqvL ily traian sKPciff82 */     for(int i=1;i<=n;i++) cin>>a[i];
/* jUXENxqvL ily traian sKPciff82 */     for(int i=1;i<=n;i++)
/* jUXENxqvL ily traian sKPciff82 */     {
/* jUXENxqvL ily traian sKPciff82 */         x=sumcif(a[i]);
/* jUXENxqvL ily traian sKPciff82 */         cout<<a[i]%x<<" ";
/* jUXENxqvL ily traian sKPciff82 */     }
/* jUXENxqvL ily traian sKPciff82 */      return 0;
/* jUXENxqvL ily traian sKPciff82 */ }