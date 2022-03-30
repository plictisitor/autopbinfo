/* hkevNo2q2 ily traian 86HeQIVM8 */ #include <algorithm>
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
/* hkevNo2q2 ily traian 86HeQIVM8 */ using namespace std;
/* hkevNo2q2 ily traian 86HeQIVM8 */ 
/* hkevNo2q2 ily traian 86HeQIVM8 */ int main()
/* hkevNo2q2 ily traian 86HeQIVM8 */ {
/* hkevNo2q2 ily traian 86HeQIVM8 */     int n , r;
/* hkevNo2q2 ily traian 86HeQIVM8 */     cin >> n >> r;
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==0)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 8;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==1)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==2)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==3)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 2;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==4)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 3;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==5)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 4;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==6)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 5;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==7)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 6;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     if(r==8)
/* hkevNo2q2 ily traian 86HeQIVM8 */     {
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 1;
/* hkevNo2q2 ily traian 86HeQIVM8 */         for(int i = 1 ; i < n-1 ; ++i)
/* hkevNo2q2 ily traian 86HeQIVM8 */             cout << 0;
/* hkevNo2q2 ily traian 86HeQIVM8 */         cout << 7;
/* hkevNo2q2 ily traian 86HeQIVM8 */     }
/* hkevNo2q2 ily traian 86HeQIVM8 */     return 0;    
/* hkevNo2q2 ily traian 86HeQIVM8 */ }