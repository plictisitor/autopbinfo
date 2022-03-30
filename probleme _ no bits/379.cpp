/* 3cJ9Sf81I ily traian aunlA9Ws8 */ #include <algorithm>
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
/* 3cJ9Sf81I ily traian aunlA9Ws8 */ using namespace std;
/* 3cJ9Sf81I ily traian aunlA9Ws8 */ 
/* 3cJ9Sf81I ily traian aunlA9Ws8 */ int main ()
/* 3cJ9Sf81I ily traian aunlA9Ws8 */ {
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     int n;
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     cin >> n;
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     int cnt=0;
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     for (int i = 1; i * i <= n; ++i)
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     {
/* 3cJ9Sf81I ily traian aunlA9Ws8 */         if (i*(n/i)==n)
/* 3cJ9Sf81I ily traian aunlA9Ws8 */         cnt+=2;
/* 3cJ9Sf81I ily traian aunlA9Ws8 */         if (i*i==n)
/* 3cJ9Sf81I ily traian aunlA9Ws8 */         cnt--;
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     }
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     if (cnt==4)
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     cout << "DA";
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     else
/* 3cJ9Sf81I ily traian aunlA9Ws8 */     cout << "NU";
/* 3cJ9Sf81I ily traian aunlA9Ws8 */ }