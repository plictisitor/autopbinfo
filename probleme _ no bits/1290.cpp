/* qwW4MsqEq ily traian U7lln7g6v */ #include <algorithm>
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
/* qwW4MsqEq ily traian U7lln7g6v */ using namespace std;
/* qwW4MsqEq ily traian U7lln7g6v */ int n , m ,  x[10] , a[10] , rez;
/* qwW4MsqEq ily traian U7lln7g6v */ 
/* qwW4MsqEq ily traian U7lln7g6v */ int valid(int k)
/* qwW4MsqEq ily traian U7lln7g6v */ {
/* qwW4MsqEq ily traian U7lln7g6v */     if(k == 1 && x[k] == 0) return 0;
/* qwW4MsqEq ily traian U7lln7g6v */     else if(k == n && x[k] != x[1]) return 0;
/* qwW4MsqEq ily traian U7lln7g6v */     return 1;
/* qwW4MsqEq ily traian U7lln7g6v */ }
/* qwW4MsqEq ily traian U7lln7g6v */ 
/* qwW4MsqEq ily traian U7lln7g6v */ void afisare()
/* qwW4MsqEq ily traian U7lln7g6v */ {
/* qwW4MsqEq ily traian U7lln7g6v */     for(int i = 1 ; i <= n ; ++i)
/* qwW4MsqEq ily traian U7lln7g6v */         cout << x[i];
/* qwW4MsqEq ily traian U7lln7g6v */     cout << '\n';
/* qwW4MsqEq ily traian U7lln7g6v */ }
/* qwW4MsqEq ily traian U7lln7g6v */ 
/* qwW4MsqEq ily traian U7lln7g6v */ void back(int k)
/* qwW4MsqEq ily traian U7lln7g6v */ {
/* qwW4MsqEq ily traian U7lln7g6v */     for(int i = 0 ; i < m ; ++i)
/* qwW4MsqEq ily traian U7lln7g6v */     {
/* qwW4MsqEq ily traian U7lln7g6v */         x[k] = i;
/* qwW4MsqEq ily traian U7lln7g6v */         if(valid(k))
/* qwW4MsqEq ily traian U7lln7g6v */         {
/* qwW4MsqEq ily traian U7lln7g6v */             if(k == n)afisare();
/* qwW4MsqEq ily traian U7lln7g6v */             else back(k + 1);
/* qwW4MsqEq ily traian U7lln7g6v */         }
/* qwW4MsqEq ily traian U7lln7g6v */     }
/* qwW4MsqEq ily traian U7lln7g6v */ }
/* qwW4MsqEq ily traian U7lln7g6v */ 
/* qwW4MsqEq ily traian U7lln7g6v */ int main()
/* qwW4MsqEq ily traian U7lln7g6v */ {
/* qwW4MsqEq ily traian U7lln7g6v */     cin >> n >> m;
/* qwW4MsqEq ily traian U7lln7g6v */     back(1);
/* qwW4MsqEq ily traian U7lln7g6v */     return 0;
/* qwW4MsqEq ily traian U7lln7g6v */ }