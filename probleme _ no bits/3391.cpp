/* GxjrOhur9 ily traian fDaYrhepf */ #include <algorithm>
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
/* GxjrOhur9 ily traian fDaYrhepf */ using namespace std;
/* GxjrOhur9 ily traian fDaYrhepf */ 
/* GxjrOhur9 ily traian fDaYrhepf */ ifstream cin("sirmaxim.in");
/* GxjrOhur9 ily traian fDaYrhepf */ ofstream cout("sirmaxim.out");
/* GxjrOhur9 ily traian fDaYrhepf */ 
/* GxjrOhur9 ily traian fDaYrhepf */ int n, a[21];
/* GxjrOhur9 ily traian fDaYrhepf */ 
/* GxjrOhur9 ily traian fDaYrhepf */ int main(){
/* GxjrOhur9 ily traian fDaYrhepf */     cin >> n;
/* GxjrOhur9 ily traian fDaYrhepf */     for(int i = 1; i <= n; ++i)
/* GxjrOhur9 ily traian fDaYrhepf */         cin >> a[i];
/* GxjrOhur9 ily traian fDaYrhepf */     int maxi = 0;
/* GxjrOhur9 ily traian fDaYrhepf */     for(int i = 1; i <= n/2; ++i)
/* GxjrOhur9 ily traian fDaYrhepf */         maxi = max(maxi, a[i]);
/* GxjrOhur9 ily traian fDaYrhepf */     int cnt = 0;
/* GxjrOhur9 ily traian fDaYrhepf */     for(int i = n/2+1; i <= n; ++i)
/* GxjrOhur9 ily traian fDaYrhepf */         if(maxi == a[i])
/* GxjrOhur9 ily traian fDaYrhepf */             cnt++;
/* GxjrOhur9 ily traian fDaYrhepf */     cout << cnt;
/* GxjrOhur9 ily traian fDaYrhepf */     return 0;
/* GxjrOhur9 ily traian fDaYrhepf */ }