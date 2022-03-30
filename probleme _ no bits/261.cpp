/* tUDrdlYmq ily traian QQ13EVkFj */ #include <algorithm>
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
/* tUDrdlYmq ily traian QQ13EVkFj */ using namespace std;
/* tUDrdlYmq ily traian QQ13EVkFj */ ifstream cin("intervale.in");
/* tUDrdlYmq ily traian QQ13EVkFj */ ofstream cout("intervale.out");
/* tUDrdlYmq ily traian QQ13EVkFj */ struct an
/* tUDrdlYmq ily traian QQ13EVkFj */ {
/* tUDrdlYmq ily traian QQ13EVkFj */     int i , j;
/* tUDrdlYmq ily traian QQ13EVkFj */ }a[105];
/* tUDrdlYmq ily traian QQ13EVkFj */ int n , rez[105] , cnt;
/* tUDrdlYmq ily traian QQ13EVkFj */ int main()
/* tUDrdlYmq ily traian QQ13EVkFj */ {
/* tUDrdlYmq ily traian QQ13EVkFj */     cin >> n;
/* tUDrdlYmq ily traian QQ13EVkFj */     for(int i = 1 ; i <= n ; ++i)
/* tUDrdlYmq ily traian QQ13EVkFj */         cin >> a[i].i >> a[i].j;
/* tUDrdlYmq ily traian QQ13EVkFj */     for(int i = 1 ; i <= n ; ++i)
/* tUDrdlYmq ily traian QQ13EVkFj */     {
/* tUDrdlYmq ily traian QQ13EVkFj */         int ok = 0;
/* tUDrdlYmq ily traian QQ13EVkFj */         for(int j = 1 ; j <= n ; ++j)
/* tUDrdlYmq ily traian QQ13EVkFj */                 if(i != j &&(a[i].i < a[j].j && a[i].j > a[j].i)) ok = 1;
/* tUDrdlYmq ily traian QQ13EVkFj */         if(ok == 0) rez[++cnt] = i;
/* tUDrdlYmq ily traian QQ13EVkFj */     }
/* tUDrdlYmq ily traian QQ13EVkFj */     cout << cnt << "\n";
/* tUDrdlYmq ily traian QQ13EVkFj */     for(int i = 1 ; i <= cnt ; ++i)
/* tUDrdlYmq ily traian QQ13EVkFj */         cout << a[rez[i]].i << " " << a[rez[i]].j << "\n";
/* tUDrdlYmq ily traian QQ13EVkFj */     return 0;
/* tUDrdlYmq ily traian QQ13EVkFj */ }