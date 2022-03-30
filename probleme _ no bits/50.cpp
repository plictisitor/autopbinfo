/* yNnkc8yAj ily traian XMC4hv4r3 */ #include <algorithm>
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
/* yNnkc8yAj ily traian XMC4hv4r3 */ using namespace std;
/* yNnkc8yAj ily traian XMC4hv4r3 */ 
/* yNnkc8yAj ily traian XMC4hv4r3 */ int main()
/* yNnkc8yAj ily traian XMC4hv4r3 */ {
/* yNnkc8yAj ily traian XMC4hv4r3 */     /*
/* yNnkc8yAj ily traian XMC4hv4r3 */         1
/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2
/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2 3
/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2 3 4
/* yNnkc8yAj ily traian XMC4hv4r3 */         .....
/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2 3 ... n
/* yNnkc8yAj ily traian XMC4hv4r3 */ 
/* yNnkc8yAj ily traian XMC4hv4r3 */     */
/* yNnkc8yAj ily traian XMC4hv4r3 */ 
/* yNnkc8yAj ily traian XMC4hv4r3 */     int n;
/* yNnkc8yAj ily traian XMC4hv4r3 */     cin >> n;
/* yNnkc8yAj ily traian XMC4hv4r3 */     long long suma = 0;
/* yNnkc8yAj ily traian XMC4hv4r3 */     for(int i = 1; i <= n; ++i){
/* yNnkc8yAj ily traian XMC4hv4r3 */         long long prod = 1;
/* yNnkc8yAj ily traian XMC4hv4r3 */         for(long long j = 1; j <= i; ++j)
/* yNnkc8yAj ily traian XMC4hv4r3 */             prod *= j;
/* yNnkc8yAj ily traian XMC4hv4r3 */         suma += prod;
/* yNnkc8yAj ily traian XMC4hv4r3 */     }
/* yNnkc8yAj ily traian XMC4hv4r3 */     cout << "Rezultatul este " << suma;
/* yNnkc8yAj ily traian XMC4hv4r3 */     return 0;
/* yNnkc8yAj ily traian XMC4hv4r3 */ }