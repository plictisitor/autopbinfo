/* fRJIPkS3Q ily traian paXo3qYo1 */ #include <algorithm>
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
/* fRJIPkS3Q ily traian paXo3qYo1 */ using namespace std;
/* fRJIPkS3Q ily traian paXo3qYo1 */ ifstream cin("secventapara.in");
/* fRJIPkS3Q ily traian paXo3qYo1 */ ofstream cout("secventapara.out");
/* fRJIPkS3Q ily traian paXo3qYo1 */ int x , l , lmax , cnt;
/* fRJIPkS3Q ily traian paXo3qYo1 */ int main()
/* fRJIPkS3Q ily traian paXo3qYo1 */ {
/* fRJIPkS3Q ily traian paXo3qYo1 */     while(cin >> x)
/* fRJIPkS3Q ily traian paXo3qYo1 */         if(x % 2 == 0) l++;
/* fRJIPkS3Q ily traian paXo3qYo1 */         else
/* fRJIPkS3Q ily traian paXo3qYo1 */         {
/* fRJIPkS3Q ily traian paXo3qYo1 */             if(l > lmax) lmax = l , cnt = 1;
/* fRJIPkS3Q ily traian paXo3qYo1 */             else if(l == lmax) cnt++;
/* fRJIPkS3Q ily traian paXo3qYo1 */             l = 0;
/* fRJIPkS3Q ily traian paXo3qYo1 */         }
/* fRJIPkS3Q ily traian paXo3qYo1 */     if(l == lmax) cnt++;
/* fRJIPkS3Q ily traian paXo3qYo1 */     if(l > lmax) cout << 1;
/* fRJIPkS3Q ily traian paXo3qYo1 */     else cout << cnt;
/* fRJIPkS3Q ily traian paXo3qYo1 */     return 0;
/* fRJIPkS3Q ily traian paXo3qYo1 */ }