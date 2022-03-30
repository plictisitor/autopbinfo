/* W0FrFagh7 ily traian CfE6WTyz5 */ #include <algorithm>
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
/* W0FrFagh7 ily traian CfE6WTyz5 */ 
/* W0FrFagh7 ily traian CfE6WTyz5 */ using namespace std;
/* W0FrFagh7 ily traian CfE6WTyz5 */ int main()
/* W0FrFagh7 ily traian CfE6WTyz5 */ {
/* W0FrFagh7 ily traian CfE6WTyz5 */    int a[10000],n,minim=999999999,maxim=-999999999;
/* W0FrFagh7 ily traian CfE6WTyz5 */    cin >>n;
/* W0FrFagh7 ily traian CfE6WTyz5 */    for(int i=1;i<=n;++i)
/* W0FrFagh7 ily traian CfE6WTyz5 */    {
/* W0FrFagh7 ily traian CfE6WTyz5 */        cin >>a[i];
/* W0FrFagh7 ily traian CfE6WTyz5 */        if(a[i]>maxim) maxim=a[i];
/* W0FrFagh7 ily traian CfE6WTyz5 */        if(a[i]<minim) minim=a[i];
/* W0FrFagh7 ily traian CfE6WTyz5 */    }
/* W0FrFagh7 ily traian CfE6WTyz5 */    cout <<minim<<" "<<maxim;
/* W0FrFagh7 ily traian CfE6WTyz5 */     return 0;
/* W0FrFagh7 ily traian CfE6WTyz5 */ }