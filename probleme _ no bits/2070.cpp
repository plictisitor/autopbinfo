/* PYNcLHwjC ily traian 746iAdJer */ #include <algorithm>
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
/* PYNcLHwjC ily traian 746iAdJer */ 
/* PYNcLHwjC ily traian 746iAdJer */ 
/* PYNcLHwjC ily traian 746iAdJer */ using namespace std;
/* PYNcLHwjC ily traian 746iAdJer */ ifstream cin("tablou.in");
/* PYNcLHwjC ily traian 746iAdJer */ ofstream cout("tablou.out");
/* PYNcLHwjC ily traian 746iAdJer */ bitset <20005> L,C;
/* PYNcLHwjC ily traian 746iAdJer */ char x;
/* PYNcLHwjC ily traian 746iAdJer */ int i , y , n , v , k , l , c , s , p;
/* PYNcLHwjC ily traian 746iAdJer */ void solve1()
/* PYNcLHwjC ily traian 746iAdJer */ {
/* PYNcLHwjC ily traian 746iAdJer */     for(i = 1 ; i <= k ; ++i)
/* PYNcLHwjC ily traian 746iAdJer */     {
/* PYNcLHwjC ily traian 746iAdJer */         cin >> x >> y;
/* PYNcLHwjC ily traian 746iAdJer */         if(x=='L') L[y]=L[y]^1;
/* PYNcLHwjC ily traian 746iAdJer */         else  C[y]=C[y]^1;
/* PYNcLHwjC ily traian 746iAdJer */     }
/* PYNcLHwjC ily traian 746iAdJer */     l = L.count();
/* PYNcLHwjC ily traian 746iAdJer */     c = C.count();
/* PYNcLHwjC ily traian 746iAdJer */     cout << n * n - l * (n - c) - c * (n - l);
/* PYNcLHwjC ily traian 746iAdJer */ }
/* PYNcLHwjC ily traian 746iAdJer */ void solve2()
/* PYNcLHwjC ily traian 746iAdJer */ {
/* PYNcLHwjC ily traian 746iAdJer */     if(n * n < k) {cout << 0; return;}
/* PYNcLHwjC ily traian 746iAdJer */     for(s = k / n ; s <= n ; ++s)
/* PYNcLHwjC ily traian 746iAdJer */     if((n * s - k) % 2 == 0)
/* PYNcLHwjC ily traian 746iAdJer */     {
/* PYNcLHwjC ily traian 746iAdJer */         p = (n * s - k) / 2;
/* PYNcLHwjC ily traian 746iAdJer */         y = sqrt(s * s - 4 * p);
/* PYNcLHwjC ily traian 746iAdJer */         if(y * y == s * s - 4 * p){cout << s;return;}
/* PYNcLHwjC ily traian 746iAdJer */     }
/* PYNcLHwjC ily traian 746iAdJer */     cout << 0;
/* PYNcLHwjC ily traian 746iAdJer */ }
/* PYNcLHwjC ily traian 746iAdJer */ int main()
/* PYNcLHwjC ily traian 746iAdJer */ {
/* PYNcLHwjC ily traian 746iAdJer */     cin >> v >> n >> k;
/* PYNcLHwjC ily traian 746iAdJer */     if(v==1) solve1();
/* PYNcLHwjC ily traian 746iAdJer */     else solve2();
/* PYNcLHwjC ily traian 746iAdJer */     return 0;
/* PYNcLHwjC ily traian 746iAdJer */ }