/* hkBJLK9Ru ily traian 88PkjLJT0 */ #include <algorithm>
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
/* hkBJLK9Ru ily traian 88PkjLJT0 */ using namespace std;
/* hkBJLK9Ru ily traian 88PkjLJT0 */ 
/* hkBJLK9Ru ily traian 88PkjLJT0 */ ifstream cin("sume1.in");
/* hkBJLK9Ru ily traian 88PkjLJT0 */ ofstream cout("sume1.out");
/* hkBJLK9Ru ily traian 88PkjLJT0 */ 
/* hkBJLK9Ru ily traian 88PkjLJT0 */ long long int putere(int x , long long int n , int mod)
/* hkBJLK9Ru ily traian 88PkjLJT0 */ {
/* hkBJLK9Ru ily traian 88PkjLJT0 */     long long int val;
/* hkBJLK9Ru ily traian 88PkjLJT0 */     if(n == 1)
/* hkBJLK9Ru ily traian 88PkjLJT0 */         return x;
/* hkBJLK9Ru ily traian 88PkjLJT0 */     else
/* hkBJLK9Ru ily traian 88PkjLJT0 */     {
/* hkBJLK9Ru ily traian 88PkjLJT0 */         val = putere(x , n/2 , mod);
/* hkBJLK9Ru ily traian 88PkjLJT0 */         if(n % 2 == 0)
/* hkBJLK9Ru ily traian 88PkjLJT0 */             return val * val % mod;
/* hkBJLK9Ru ily traian 88PkjLJT0 */         else
/* hkBJLK9Ru ily traian 88PkjLJT0 */             return val * val % mod * 2 % mod;
/* hkBJLK9Ru ily traian 88PkjLJT0 */     }
/* hkBJLK9Ru ily traian 88PkjLJT0 */ }
/* hkBJLK9Ru ily traian 88PkjLJT0 */ 
/* hkBJLK9Ru ily traian 88PkjLJT0 */ int main()
/* hkBJLK9Ru ily traian 88PkjLJT0 */ {
/* hkBJLK9Ru ily traian 88PkjLJT0 */     long long int n;
/* hkBJLK9Ru ily traian 88PkjLJT0 */     cin >> n;
/* hkBJLK9Ru ily traian 88PkjLJT0 */     cout << putere(2 , n + 1 , 1000000007) - 1;
/* hkBJLK9Ru ily traian 88PkjLJT0 */     return 0;
/* hkBJLK9Ru ily traian 88PkjLJT0 */ }