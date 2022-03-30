/* EEMOCFNDu ily traian F4NZZl9jv */ #include <algorithm>
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
/* EEMOCFNDu ily traian F4NZZl9jv */ 
/* EEMOCFNDu ily traian F4NZZl9jv */ using namespace std;
/* EEMOCFNDu ily traian F4NZZl9jv */ 
/* EEMOCFNDu ily traian F4NZZl9jv */ ifstream cin("cowboysandaliens.in");
/* EEMOCFNDu ily traian F4NZZl9jv */ ofstream cout("cowboysandaliens.out");
/* EEMOCFNDu ily traian F4NZZl9jv */ 
/* EEMOCFNDu ily traian F4NZZl9jv */ #define Mod 555557
/* EEMOCFNDu ily traian F4NZZl9jv */ 
/* EEMOCFNDu ily traian F4NZZl9jv */ long long fact(long long x)
/* EEMOCFNDu ily traian F4NZZl9jv */ {
/* EEMOCFNDu ily traian F4NZZl9jv */     long long p = 1;
/* EEMOCFNDu ily traian F4NZZl9jv */     for (int i = 1; i <= x; ++ i)
/* EEMOCFNDu ily traian F4NZZl9jv */     {
/* EEMOCFNDu ily traian F4NZZl9jv */         p *= i;
/* EEMOCFNDu ily traian F4NZZl9jv */         p %= Mod;
/* EEMOCFNDu ily traian F4NZZl9jv */     }
/* EEMOCFNDu ily traian F4NZZl9jv */     return p;
/* EEMOCFNDu ily traian F4NZZl9jv */ }
/* EEMOCFNDu ily traian F4NZZl9jv */ 
/* EEMOCFNDu ily traian F4NZZl9jv */ long long aranj(long long n, long long k)
/* EEMOCFNDu ily traian F4NZZl9jv */ {
/* EEMOCFNDu ily traian F4NZZl9jv */     long long p = 1;
/* EEMOCFNDu ily traian F4NZZl9jv */     for (int i = n - k + 1; i <= n; ++ i)
/* EEMOCFNDu ily traian F4NZZl9jv */     {
/* EEMOCFNDu ily traian F4NZZl9jv */         p *= i;
/* EEMOCFNDu ily traian F4NZZl9jv */         p %= Mod;
/* EEMOCFNDu ily traian F4NZZl9jv */     }
/* EEMOCFNDu ily traian F4NZZl9jv */     return p;
/* EEMOCFNDu ily traian F4NZZl9jv */ }
/* EEMOCFNDu ily traian F4NZZl9jv */ 
/* EEMOCFNDu ily traian F4NZZl9jv */ int main()
/* EEMOCFNDu ily traian F4NZZl9jv */ {
/* EEMOCFNDu ily traian F4NZZl9jv */     long long nrc, nra;
/* EEMOCFNDu ily traian F4NZZl9jv */     cin >> nrc >> nra;
/* EEMOCFNDu ily traian F4NZZl9jv */     cout << (fact(nrc) * aranj(nrc - 1, nra)) % Mod;
/* EEMOCFNDu ily traian F4NZZl9jv */     return 0;
/* EEMOCFNDu ily traian F4NZZl9jv */ }