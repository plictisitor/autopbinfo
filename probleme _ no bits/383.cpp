/* YGFcxE2w7 ily traian YfWaKV2Wt */ #include <algorithm>
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
/* YGFcxE2w7 ily traian YfWaKV2Wt */ using namespace std;
/* YGFcxE2w7 ily traian YfWaKV2Wt */ int multiplu(int n, int k)
/* YGFcxE2w7 ily traian YfWaKV2Wt */ {
/* YGFcxE2w7 ily traian YfWaKV2Wt */     int r = n % k;
/* YGFcxE2w7 ily traian YfWaKV2Wt */     if(r <= k / 2) return n - r;
/* YGFcxE2w7 ily traian YfWaKV2Wt */     else return n + k - r;
/* YGFcxE2w7 ily traian YfWaKV2Wt */ }
/* YGFcxE2w7 ily traian YfWaKV2Wt */ 
/* YGFcxE2w7 ily traian YfWaKV2Wt */ int main()
/* YGFcxE2w7 ily traian YfWaKV2Wt */ {
/* YGFcxE2w7 ily traian YfWaKV2Wt */     int k , n , a[201] , v[201];
/* YGFcxE2w7 ily traian YfWaKV2Wt */     cin >> k >> n;
/* YGFcxE2w7 ily traian YfWaKV2Wt */     for(int i = 0 ; i < n; ++i)
/* YGFcxE2w7 ily traian YfWaKV2Wt */     {
/* YGFcxE2w7 ily traian YfWaKV2Wt */         cin >> a[i];
/* YGFcxE2w7 ily traian YfWaKV2Wt */         v[i] = multiplu(a[i],k);
/* YGFcxE2w7 ily traian YfWaKV2Wt */     }
/* YGFcxE2w7 ily traian YfWaKV2Wt */     for(int i = n-1 ; i >= 0 ; --i)
/* YGFcxE2w7 ily traian YfWaKV2Wt */     {
/* YGFcxE2w7 ily traian YfWaKV2Wt */         cout << v[i] << ' ';
/* YGFcxE2w7 ily traian YfWaKV2Wt */     }
/* YGFcxE2w7 ily traian YfWaKV2Wt */ }