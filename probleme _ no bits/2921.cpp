/* WwaDrunwE ily traian Ap2IMv2hk */ #include <algorithm>
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
/* WwaDrunwE ily traian Ap2IMv2hk */ 
/* WwaDrunwE ily traian Ap2IMv2hk */ using namespace std;
/* WwaDrunwE ily traian Ap2IMv2hk */ 
/* WwaDrunwE ily traian Ap2IMv2hk */ int main()
/* WwaDrunwE ily traian Ap2IMv2hk */ {
/* WwaDrunwE ily traian Ap2IMv2hk */     int n, m;
/* WwaDrunwE ily traian Ap2IMv2hk */     cin >> n;
/* WwaDrunwE ily traian Ap2IMv2hk */     int a[100001];
/* WwaDrunwE ily traian Ap2IMv2hk */     long long sp[100001];
/* WwaDrunwE ily traian Ap2IMv2hk */     sp[0] = 0;
/* WwaDrunwE ily traian Ap2IMv2hk */     for(int i = 1; i <= n; ++i){
/* WwaDrunwE ily traian Ap2IMv2hk */         cin >> a[i];
/* WwaDrunwE ily traian Ap2IMv2hk */         sp[i] = sp[i - 1] + a[i];
/* WwaDrunwE ily traian Ap2IMv2hk */     }
/* WwaDrunwE ily traian Ap2IMv2hk */ 
/* WwaDrunwE ily traian Ap2IMv2hk */     int x, y;
/* WwaDrunwE ily traian Ap2IMv2hk */     cin >> m;
/* WwaDrunwE ily traian Ap2IMv2hk */     long long smax = -1000000000000000000;
/* WwaDrunwE ily traian Ap2IMv2hk */     for(int i = 1; i <= m; ++i){
/* WwaDrunwE ily traian Ap2IMv2hk */         cin >> x >> y;
/* WwaDrunwE ily traian Ap2IMv2hk */         if(x > y)
/* WwaDrunwE ily traian Ap2IMv2hk */             swap(x, y);
/* WwaDrunwE ily traian Ap2IMv2hk */         long long sum = sp[y] - sp[x-1];
/* WwaDrunwE ily traian Ap2IMv2hk */         if(sum > smax)
/* WwaDrunwE ily traian Ap2IMv2hk */             smax = sum;
/* WwaDrunwE ily traian Ap2IMv2hk */     }
/* WwaDrunwE ily traian Ap2IMv2hk */     cout << smax;
/* WwaDrunwE ily traian Ap2IMv2hk */     return 0;
/* WwaDrunwE ily traian Ap2IMv2hk */ }