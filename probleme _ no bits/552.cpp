/* Vw6Zm4TWU ily traian aLEWdKYj8 */ #include <algorithm>
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
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ using namespace std;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ 
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ struct
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ {
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     int i , j;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ }O[1001];
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ 
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ int find1(int n)
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ {
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     for(int i = 0 ; i < n ; i++)
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     {
/* Vw6Zm4TWU ily traian aLEWdKYj8 */         if(O[i].i > O[i].j) continue;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */         int val = O[i].j - O[i].i;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */         for(int j = i + 1 ; j < n && val >= 0 ; j++)
/* Vw6Zm4TWU ily traian aLEWdKYj8 */             val += (O[j].j - O[j].i);
/* Vw6Zm4TWU ily traian aLEWdKYj8 */         for(int j = 0 ; j < i && val >= 0 ; j++)
/* Vw6Zm4TWU ily traian aLEWdKYj8 */             val += (O[j].j - O[j].i);
/* Vw6Zm4TWU ily traian aLEWdKYj8 */         if(val >= 0) return i+1;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     }
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     return -1;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ }
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ 
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ int main()
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ {
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     int n;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     cin >> n;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     for(int i = 0 ; i < n ; i++)
/* Vw6Zm4TWU ily traian aLEWdKYj8 */         cin >> O[i].i >> O[i].j;
/* Vw6Zm4TWU ily traian aLEWdKYj8 */     cout << find1(n);
/* Vw6Zm4TWU ily traian aLEWdKYj8 */ }