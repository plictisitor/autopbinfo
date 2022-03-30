/* xMr1DBbDX ily traian WRQ53k9Vu */ #include <algorithm>
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
/* xMr1DBbDX ily traian WRQ53k9Vu */ using namespace std;
/* xMr1DBbDX ily traian WRQ53k9Vu */ 
/* xMr1DBbDX ily traian WRQ53k9Vu */ void dinti(int n)
/* xMr1DBbDX ily traian WRQ53k9Vu */ {
/* xMr1DBbDX ily traian WRQ53k9Vu */     if(n == 1)
/* xMr1DBbDX ily traian WRQ53k9Vu */         cout << 1 << ' ';
/* xMr1DBbDX ily traian WRQ53k9Vu */     else
/* xMr1DBbDX ily traian WRQ53k9Vu */     {
/* xMr1DBbDX ily traian WRQ53k9Vu */         dinti(n-1);
/* xMr1DBbDX ily traian WRQ53k9Vu */         cout << n << ' ';
/* xMr1DBbDX ily traian WRQ53k9Vu */         dinti(n-1);
/* xMr1DBbDX ily traian WRQ53k9Vu */     }
/* xMr1DBbDX ily traian WRQ53k9Vu */ }
/* xMr1DBbDX ily traian WRQ53k9Vu */ 
/* xMr1DBbDX ily traian WRQ53k9Vu */ int main()
/* xMr1DBbDX ily traian WRQ53k9Vu */ {
/* xMr1DBbDX ily traian WRQ53k9Vu */     int n;
/* xMr1DBbDX ily traian WRQ53k9Vu */     cin >> n;
/* xMr1DBbDX ily traian WRQ53k9Vu */     dinti(n);
/* xMr1DBbDX ily traian WRQ53k9Vu */     return 0;
/* xMr1DBbDX ily traian WRQ53k9Vu */ }