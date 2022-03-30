/* DWNRle2YA ily traian V0jOUPRt7 */ #include <algorithm>
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
/* DWNRle2YA ily traian V0jOUPRt7 */ using namespace std;
/* DWNRle2YA ily traian V0jOUPRt7 */ int main()
/* DWNRle2YA ily traian V0jOUPRt7 */ {
/* DWNRle2YA ily traian V0jOUPRt7 */     int n,a[1001];
/* DWNRle2YA ily traian V0jOUPRt7 */     cin>>n;
/* DWNRle2YA ily traian V0jOUPRt7 */     for(int i=1;i<=n;i++) cin>>a[i];
/* DWNRle2YA ily traian V0jOUPRt7 */     for(int i=1;i<=n;i++)
/* DWNRle2YA ily traian V0jOUPRt7 */     {
/* DWNRle2YA ily traian V0jOUPRt7 */         if(a[i]%a[n]==0) cout<<a[i]<<" ";
/* DWNRle2YA ily traian V0jOUPRt7 */     }
/* DWNRle2YA ily traian V0jOUPRt7 */     return 0;
/* DWNRle2YA ily traian V0jOUPRt7 */ }