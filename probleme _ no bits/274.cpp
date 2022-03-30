/* FFMIn1y89 ily traian hZ56Krdw3 */ #include <algorithm>
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
/* FFMIn1y89 ily traian hZ56Krdw3 */ using namespace std;
/* FFMIn1y89 ily traian hZ56Krdw3 */ 
/* FFMIn1y89 ily traian hZ56Krdw3 */ int main()
/* FFMIn1y89 ily traian hZ56Krdw3 */ {
/* FFMIn1y89 ily traian hZ56Krdw3 */     int n;
/* FFMIn1y89 ily traian hZ56Krdw3 */     cin >> n;
/* FFMIn1y89 ily traian hZ56Krdw3 */     int minim1 = 100000, minim2 = 100000, minim3 = 100000;
/* FFMIn1y89 ily traian hZ56Krdw3 */     for(int i = 1; i <= n; ++i){
/* FFMIn1y89 ily traian hZ56Krdw3 */         int x;
/* FFMIn1y89 ily traian hZ56Krdw3 */         cin >> x;
/* FFMIn1y89 ily traian hZ56Krdw3 */         if(x < minim1){
/* FFMIn1y89 ily traian hZ56Krdw3 */             minim3 = minim2;
/* FFMIn1y89 ily traian hZ56Krdw3 */             minim2 = minim1;
/* FFMIn1y89 ily traian hZ56Krdw3 */             minim1 = x;
/* FFMIn1y89 ily traian hZ56Krdw3 */         }
/* FFMIn1y89 ily traian hZ56Krdw3 */         else if(x < minim2){
/* FFMIn1y89 ily traian hZ56Krdw3 */             minim3 = minim2;
/* FFMIn1y89 ily traian hZ56Krdw3 */             minim2 = x;
/* FFMIn1y89 ily traian hZ56Krdw3 */         }
/* FFMIn1y89 ily traian hZ56Krdw3 */         else if(x < minim3){
/* FFMIn1y89 ily traian hZ56Krdw3 */             minim3 = x;
/* FFMIn1y89 ily traian hZ56Krdw3 */         }
/* FFMIn1y89 ily traian hZ56Krdw3 */     }
/* FFMIn1y89 ily traian hZ56Krdw3 */     cout << minim3 << ' ' << minim2 << ' ' << minim1;
/* FFMIn1y89 ily traian hZ56Krdw3 */     return 0;
/* FFMIn1y89 ily traian hZ56Krdw3 */ }
/* FFMIn1y89 ily traian hZ56Krdw3 */ 