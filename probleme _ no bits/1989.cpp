/* PB6zaKPl0 ily traian KRJhhEwos */ #include <algorithm>
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
/* PB6zaKPl0 ily traian KRJhhEwos */ using namespace std;
/* PB6zaKPl0 ily traian KRJhhEwos */ 
/* PB6zaKPl0 ily traian KRJhhEwos */ ifstream cin("teatru.in");
/* PB6zaKPl0 ily traian KRJhhEwos */ ofstream cout("teatru.out");
/* PB6zaKPl0 ily traian KRJhhEwos */ 
/* PB6zaKPl0 ily traian KRJhhEwos */ int n, k, lmax = 0, f[30], is = 1;
/* PB6zaKPl0 ily traian KRJhhEwos */ char s[100001];
/* PB6zaKPl0 ily traian KRJhhEwos */ 
/* PB6zaKPl0 ily traian KRJhhEwos */ bool ok()
/* PB6zaKPl0 ily traian KRJhhEwos */ {
/* PB6zaKPl0 ily traian KRJhhEwos */     int cnt = 0;
/* PB6zaKPl0 ily traian KRJhhEwos */     for(int i = 1 ; i <= 26 ; ++i)
/* PB6zaKPl0 ily traian KRJhhEwos */         if(f[i])
/* PB6zaKPl0 ily traian KRJhhEwos */             cnt++;
/* PB6zaKPl0 ily traian KRJhhEwos */     if(cnt <= k)
/* PB6zaKPl0 ily traian KRJhhEwos */         return 1;
/* PB6zaKPl0 ily traian KRJhhEwos */     return 0;
/* PB6zaKPl0 ily traian KRJhhEwos */ }
/* PB6zaKPl0 ily traian KRJhhEwos */ 
/* PB6zaKPl0 ily traian KRJhhEwos */ int main()
/* PB6zaKPl0 ily traian KRJhhEwos */ {
/* PB6zaKPl0 ily traian KRJhhEwos */     cin >> n >> k;
/* PB6zaKPl0 ily traian KRJhhEwos */     for(int i = 1 ; i <= n; ++i)
/* PB6zaKPl0 ily traian KRJhhEwos */         cin >> s[i];
/* PB6zaKPl0 ily traian KRJhhEwos */     int cnt = 0;
/* PB6zaKPl0 ily traian KRJhhEwos */     for(int i = 1 ; i <= n; ++i)
/* PB6zaKPl0 ily traian KRJhhEwos */     {
/* PB6zaKPl0 ily traian KRJhhEwos */         f[s[i] - 'A' + 1]++;
/* PB6zaKPl0 ily traian KRJhhEwos */         if(ok())
/* PB6zaKPl0 ily traian KRJhhEwos */             cnt++ , is = i - cnt + 1;
/* PB6zaKPl0 ily traian KRJhhEwos */         else
/* PB6zaKPl0 ily traian KRJhhEwos */             f[s[i-cnt] - 'A' + 1]--;
/* PB6zaKPl0 ily traian KRJhhEwos */     }
/* PB6zaKPl0 ily traian KRJhhEwos */     cout << cnt << endl;
/* PB6zaKPl0 ily traian KRJhhEwos */     for(int i = is; i < is + cnt; ++i)
/* PB6zaKPl0 ily traian KRJhhEwos */         cout << s[i];
/* PB6zaKPl0 ily traian KRJhhEwos */     return 0;
/* PB6zaKPl0 ily traian KRJhhEwos */ }