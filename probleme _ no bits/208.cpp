/* zgNkO0N0f ily traian 1UoSyza36 */ #include <algorithm>
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
/* zgNkO0N0f ily traian 1UoSyza36 */ 
/* zgNkO0N0f ily traian 1UoSyza36 */ using namespace std;
/* zgNkO0N0f ily traian 1UoSyza36 */ int main()
/* zgNkO0N0f ily traian 1UoSyza36 */ {
/* zgNkO0N0f ily traian 1UoSyza36 */     int n,m;
/* zgNkO0N0f ily traian 1UoSyza36 */     cin >> n >>m;
/* zgNkO0N0f ily traian 1UoSyza36 */     for(int i = 1; i <= n * m; ++i)
/* zgNkO0N0f ily traian 1UoSyza36 */     {
/* zgNkO0N0f ily traian 1UoSyza36 */         cout<<(2*(i-1)+1)*(2*(i-1)+1)<<" ";
/* zgNkO0N0f ily traian 1UoSyza36 */         if(i%m==0) cout<<endl;
/* zgNkO0N0f ily traian 1UoSyza36 */     }
/* zgNkO0N0f ily traian 1UoSyza36 */     return 0;
/* zgNkO0N0f ily traian 1UoSyza36 */ }