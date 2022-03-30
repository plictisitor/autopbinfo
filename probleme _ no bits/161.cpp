/* IIe3itQzr ily traian BtdzzsZe0 */ #include <algorithm>
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
/* IIe3itQzr ily traian BtdzzsZe0 */ using namespace std;
/* IIe3itQzr ily traian BtdzzsZe0 */ 
/* IIe3itQzr ily traian BtdzzsZe0 */ int main()
/* IIe3itQzr ily traian BtdzzsZe0 */ {
/* IIe3itQzr ily traian BtdzzsZe0 */     int n,a[201],x,sum=0,cate=0;
/* IIe3itQzr ily traian BtdzzsZe0 */     cin>>n;
/* IIe3itQzr ily traian BtdzzsZe0 */     for(int i=1;i<=n;i++) cin >> a[i];
/* IIe3itQzr ily traian BtdzzsZe0 */     for(int i=1;i<=n;i++)
/* IIe3itQzr ily traian BtdzzsZe0 */         {
/* IIe3itQzr ily traian BtdzzsZe0 */             if(a[i]!=0)
/* IIe3itQzr ily traian BtdzzsZe0 */             {
/* IIe3itQzr ily traian BtdzzsZe0 */                 sum=sum+a[i];
/* IIe3itQzr ily traian BtdzzsZe0 */                 cate++;
/* IIe3itQzr ily traian BtdzzsZe0 */             }
/* IIe3itQzr ily traian BtdzzsZe0 */         }
/* IIe3itQzr ily traian BtdzzsZe0 */     int med = sum/cate;
/* IIe3itQzr ily traian BtdzzsZe0 */      for(int i=1;i<=n;i++)
/* IIe3itQzr ily traian BtdzzsZe0 */     {
/* IIe3itQzr ily traian BtdzzsZe0 */        if(a[i]==0) cout<<med<<" ";
/* IIe3itQzr ily traian BtdzzsZe0 */        else cout<<a[i]<<" ";
/* IIe3itQzr ily traian BtdzzsZe0 */     }
/* IIe3itQzr ily traian BtdzzsZe0 */      return 0;
/* IIe3itQzr ily traian BtdzzsZe0 */ }