/* McPdiKFHm ily traian H0OIDuZN4 */ #include <algorithm>
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
/* McPdiKFHm ily traian H0OIDuZN4 */ using namespace std;
/* McPdiKFHm ily traian H0OIDuZN4 */ 
/* McPdiKFHm ily traian H0OIDuZN4 */ int main(){
/* McPdiKFHm ily traian H0OIDuZN4 */     int z, pb, b, pt, t, poz = -1;
/* McPdiKFHm ily traian H0OIDuZN4 */     cin >> z >> pb >> b >> pt >> t;
/* McPdiKFHm ily traian H0OIDuZN4 */     while(z){
/* McPdiKFHm ily traian H0OIDuZN4 */         if(pb == pt && poz == -1)
/* McPdiKFHm ily traian H0OIDuZN4 */             poz = pb;
/* McPdiKFHm ily traian H0OIDuZN4 */         pb += b;
/* McPdiKFHm ily traian H0OIDuZN4 */         pt += t;
/* McPdiKFHm ily traian H0OIDuZN4 */         z--;
/* McPdiKFHm ily traian H0OIDuZN4 */     }
/* McPdiKFHm ily traian H0OIDuZN4 */     if(pb == pt && poz == -1)
/* McPdiKFHm ily traian H0OIDuZN4 */         poz = pb;
/* McPdiKFHm ily traian H0OIDuZN4 */     cout << poz;
/* McPdiKFHm ily traian H0OIDuZN4 */     return 0;
/* McPdiKFHm ily traian H0OIDuZN4 */ }