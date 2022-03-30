/* B9BgZxMlu ily traian fNBudGGWI */ #include <algorithm>
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
/* B9BgZxMlu ily traian fNBudGGWI */ 
/* B9BgZxMlu ily traian fNBudGGWI */ using namespace std;
/* B9BgZxMlu ily traian fNBudGGWI */ 
/* B9BgZxMlu ily traian fNBudGGWI */ ifstream cin("cifreord.in");
/* B9BgZxMlu ily traian fNBudGGWI */ ofstream cout("cifreord.out");
/* B9BgZxMlu ily traian fNBudGGWI */ 
/* B9BgZxMlu ily traian fNBudGGWI */ int f[11];
/* B9BgZxMlu ily traian fNBudGGWI */ 
/* B9BgZxMlu ily traian fNBudGGWI */ int main()
/* B9BgZxMlu ily traian fNBudGGWI */ {
/* B9BgZxMlu ily traian fNBudGGWI */     int n;
/* B9BgZxMlu ily traian fNBudGGWI */     cin >> n;
/* B9BgZxMlu ily traian fNBudGGWI */     int x;
/* B9BgZxMlu ily traian fNBudGGWI */     for(int i = 1; i <= n; ++i)
/* B9BgZxMlu ily traian fNBudGGWI */         cin >> x, f[x]++;
/* B9BgZxMlu ily traian fNBudGGWI */     int cnt = 1;
/* B9BgZxMlu ily traian fNBudGGWI */     for(int i = 0; i <= 9; ++i){
/* B9BgZxMlu ily traian fNBudGGWI */         for(int j = 1; j <= f[i]; ++j){
/* B9BgZxMlu ily traian fNBudGGWI */             cout << i << ' ';
/* B9BgZxMlu ily traian fNBudGGWI */             if(cnt % 20 == 0)
/* B9BgZxMlu ily traian fNBudGGWI */                 cout << endl;
/* B9BgZxMlu ily traian fNBudGGWI */             cnt++;
/* B9BgZxMlu ily traian fNBudGGWI */         }
/* B9BgZxMlu ily traian fNBudGGWI */     }
/* B9BgZxMlu ily traian fNBudGGWI */ }