/* MCUviwcfc ily traian j046bNtYI */ #include <algorithm>
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
/* MCUviwcfc ily traian j046bNtYI */ 
/* MCUviwcfc ily traian j046bNtYI */ using namespace std;
/* MCUviwcfc ily traian j046bNtYI */ 
/* MCUviwcfc ily traian j046bNtYI */ int main()
/* MCUviwcfc ily traian j046bNtYI */ {
/* MCUviwcfc ily traian j046bNtYI */     int n;
/* MCUviwcfc ily traian j046bNtYI */     cin >> n;
/* MCUviwcfc ily traian j046bNtYI */     int c;
/* MCUviwcfc ily traian j046bNtYI */     cin >> c;
/* MCUviwcfc ily traian j046bNtYI */     int tmp;
/* MCUviwcfc ily traian j046bNtYI */     int s=0;
/* MCUviwcfc ily traian j046bNtYI */     int cnt=1;
/* MCUviwcfc ily traian j046bNtYI */     while (n)
/* MCUviwcfc ily traian j046bNtYI */     {
/* MCUviwcfc ily traian j046bNtYI */ 
/* MCUviwcfc ily traian j046bNtYI */             cin >> tmp;
/* MCUviwcfc ily traian j046bNtYI */             s+=tmp;
/* MCUviwcfc ily traian j046bNtYI */             if ( s > c)
/* MCUviwcfc ily traian j046bNtYI */             {
/* MCUviwcfc ily traian j046bNtYI */                 cnt++;
/* MCUviwcfc ily traian j046bNtYI */                 s=tmp;
/* MCUviwcfc ily traian j046bNtYI */             }
/* MCUviwcfc ily traian j046bNtYI */             n--;
/* MCUviwcfc ily traian j046bNtYI */     }
/* MCUviwcfc ily traian j046bNtYI */     cout << cnt;
/* MCUviwcfc ily traian j046bNtYI */     return 0;
/* MCUviwcfc ily traian j046bNtYI */ }