/* p4PdN34Ps ily traian iohqRnNC7 */ #include <algorithm>
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
/* p4PdN34Ps ily traian iohqRnNC7 */ using namespace std;
/* p4PdN34Ps ily traian iohqRnNC7 */ int cm(int a,int b)
/* p4PdN34Ps ily traian iohqRnNC7 */ {
/* p4PdN34Ps ily traian iohqRnNC7 */     int d,r;
/* p4PdN34Ps ily traian iohqRnNC7 */     while(b!=0) {r=a%b;a=b;b=r;}
/* p4PdN34Ps ily traian iohqRnNC7 */     d=a;if(d==1) return 1;
/* p4PdN34Ps ily traian iohqRnNC7 */     else return 0;
/* p4PdN34Ps ily traian iohqRnNC7 */ }
/* p4PdN34Ps ily traian iohqRnNC7 */ int main()
/* p4PdN34Ps ily traian iohqRnNC7 */ {
/* p4PdN34Ps ily traian iohqRnNC7 */     int n,a[202],cnt=0;
/* p4PdN34Ps ily traian iohqRnNC7 */     cin>>n;
/* p4PdN34Ps ily traian iohqRnNC7 */     for(int i=1;i<=n;i++) cin>>a[i];
/* p4PdN34Ps ily traian iohqRnNC7 */     int i=1,j=n;
/* p4PdN34Ps ily traian iohqRnNC7 */     while(i<=j)
/* p4PdN34Ps ily traian iohqRnNC7 */     {
/* p4PdN34Ps ily traian iohqRnNC7 */         if(cm(a[i],a[j])) cnt++;
/* p4PdN34Ps ily traian iohqRnNC7 */         i++;j--;
/* p4PdN34Ps ily traian iohqRnNC7 */     }
/* p4PdN34Ps ily traian iohqRnNC7 */     cout<<cnt;
/* p4PdN34Ps ily traian iohqRnNC7 */     return 0;
/* p4PdN34Ps ily traian iohqRnNC7 */ }