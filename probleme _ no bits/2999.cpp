/* UUjCZ738Q ily traian wNlFqwnNW */ #include <algorithm>
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
/* UUjCZ738Q ily traian wNlFqwnNW */ using namespace std;
/* UUjCZ738Q ily traian wNlFqwnNW */ 
/* UUjCZ738Q ily traian wNlFqwnNW */ int n, r, k;
/* UUjCZ738Q ily traian wNlFqwnNW */ int a[100];
/* UUjCZ738Q ily traian wNlFqwnNW */ int main()
/* UUjCZ738Q ily traian wNlFqwnNW */ {
/* UUjCZ738Q ily traian wNlFqwnNW */     cin >> n >> k >> r;
/* UUjCZ738Q ily traian wNlFqwnNW */     cout << n / 2 << endl;
/* UUjCZ738Q ily traian wNlFqwnNW */     int sum = 0;
/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = k * (k - 1) / 2; i < k * (k - 1) / 2 + k; ++i)
/* UUjCZ738Q ily traian wNlFqwnNW */         sum += i;
/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = r * (r - 1) / 2; i < r * (r - 1) / 2 + r; ++i)
/* UUjCZ738Q ily traian wNlFqwnNW */         sum += i;
/* UUjCZ738Q ily traian wNlFqwnNW */     cout << sum / (k + r) << endl;
/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = r * (r - 1) / 2; i < r * (r - 1) / 2 + r; ++i)
/* UUjCZ738Q ily traian wNlFqwnNW */         a[i - r * (r - 1) / 2 + 1] = i;
/* UUjCZ738Q ily traian wNlFqwnNW */     for(int i = 1, j = 2, z = r, fr = 1 ; fr <= r; fr++, i+=2, j+=2, z--){
/* UUjCZ738Q ily traian wNlFqwnNW */         if(fr <= r)
/* UUjCZ738Q ily traian wNlFqwnNW */             cout << a[i] << ' ', fr++;
/* UUjCZ738Q ily traian wNlFqwnNW */         if(fr <= r)
/* UUjCZ738Q ily traian wNlFqwnNW */             cout << a[j] << ' ', fr++;
/* UUjCZ738Q ily traian wNlFqwnNW */         if(fr <= r)
/* UUjCZ738Q ily traian wNlFqwnNW */             cout << a[z] << ' ';
/* UUjCZ738Q ily traian wNlFqwnNW */     }
/* UUjCZ738Q ily traian wNlFqwnNW */     return 0;
/* UUjCZ738Q ily traian wNlFqwnNW */ }