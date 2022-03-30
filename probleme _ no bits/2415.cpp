/* PLot31RxQ ily traian LufU5oS9q */ #include <algorithm>
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
/* PLot31RxQ ily traian LufU5oS9q */ using namespace std;
/* PLot31RxQ ily traian LufU5oS9q */ ifstream cin("nr_pal.in");
/* PLot31RxQ ily traian LufU5oS9q */ ofstream cout("nr_pal.out");
/* PLot31RxQ ily traian LufU5oS9q */ 
/* PLot31RxQ ily traian LufU5oS9q */ int nrcif(int n)
/* PLot31RxQ ily traian LufU5oS9q */ {
/* PLot31RxQ ily traian LufU5oS9q */     int cnt = 0;
/* PLot31RxQ ily traian LufU5oS9q */     if(n <= 9)
/* PLot31RxQ ily traian LufU5oS9q */         return 1;
/* PLot31RxQ ily traian LufU5oS9q */     while(n)
/* PLot31RxQ ily traian LufU5oS9q */     {
/* PLot31RxQ ily traian LufU5oS9q */         cnt++;
/* PLot31RxQ ily traian LufU5oS9q */         n /= 10;
/* PLot31RxQ ily traian LufU5oS9q */     }
/* PLot31RxQ ily traian LufU5oS9q */     return cnt;
/* PLot31RxQ ily traian LufU5oS9q */ }
/* PLot31RxQ ily traian LufU5oS9q */ 
/* PLot31RxQ ily traian LufU5oS9q */ int put(int n)
/* PLot31RxQ ily traian LufU5oS9q */ {
/* PLot31RxQ ily traian LufU5oS9q */     int p = 1;
/* PLot31RxQ ily traian LufU5oS9q */     for(int i = 1 ; i <= n ; i++) p *= 10;
/* PLot31RxQ ily traian LufU5oS9q */     return p;
/* PLot31RxQ ily traian LufU5oS9q */ }
/* PLot31RxQ ily traian LufU5oS9q */ 
/* PLot31RxQ ily traian LufU5oS9q */ int f(int n)
/* PLot31RxQ ily traian LufU5oS9q */ {
/* PLot31RxQ ily traian LufU5oS9q */     int ogl = n;
/* PLot31RxQ ily traian LufU5oS9q */     while(n)
/* PLot31RxQ ily traian LufU5oS9q */     {
/* PLot31RxQ ily traian LufU5oS9q */         ogl = ogl * 10 + n % 10;
/* PLot31RxQ ily traian LufU5oS9q */         n /= 10;
/* PLot31RxQ ily traian LufU5oS9q */     }
/* PLot31RxQ ily traian LufU5oS9q */     return ogl;
/* PLot31RxQ ily traian LufU5oS9q */ }
/* PLot31RxQ ily traian LufU5oS9q */ 
/* PLot31RxQ ily traian LufU5oS9q */ int ff(int n)
/* PLot31RxQ ily traian LufU5oS9q */ {
/* PLot31RxQ ily traian LufU5oS9q */     int ogl = n;
/* PLot31RxQ ily traian LufU5oS9q */     n /= 10;
/* PLot31RxQ ily traian LufU5oS9q */     while(n)
/* PLot31RxQ ily traian LufU5oS9q */     {
/* PLot31RxQ ily traian LufU5oS9q */         ogl = ogl * 10 + n % 10;
/* PLot31RxQ ily traian LufU5oS9q */         n /= 10;
/* PLot31RxQ ily traian LufU5oS9q */     }
/* PLot31RxQ ily traian LufU5oS9q */     return ogl;
/* PLot31RxQ ily traian LufU5oS9q */ }
/* PLot31RxQ ily traian LufU5oS9q */ 
/* PLot31RxQ ily traian LufU5oS9q */ int pal(int n)
/* PLot31RxQ ily traian LufU5oS9q */ {
/* PLot31RxQ ily traian LufU5oS9q */     int cnt = 0;
/* PLot31RxQ ily traian LufU5oS9q */     int nr = nrcif(n);
/* PLot31RxQ ily traian LufU5oS9q */     for(int i = 1 ; i < nr ; ++i)
/* PLot31RxQ ily traian LufU5oS9q */         cnt = cnt+ put((i - 1) / 2) * 9;
/* PLot31RxQ ily traian LufU5oS9q */     int p = put((nr - 1)/2);
/* PLot31RxQ ily traian LufU5oS9q */     int y = n/put((nr / 2));
/* PLot31RxQ ily traian LufU5oS9q */     cnt = cnt + (y - p + 1);
/* PLot31RxQ ily traian LufU5oS9q */     if(nr % 2 == 0)
/* PLot31RxQ ily traian LufU5oS9q */     {
/* PLot31RxQ ily traian LufU5oS9q */         if(f(y) > n) cnt--;
/* PLot31RxQ ily traian LufU5oS9q */     }
/* PLot31RxQ ily traian LufU5oS9q */     else if(ff(y) > n) cnt--;
/* PLot31RxQ ily traian LufU5oS9q */     return cnt;
/* PLot31RxQ ily traian LufU5oS9q */ }
/* PLot31RxQ ily traian LufU5oS9q */ 
/* PLot31RxQ ily traian LufU5oS9q */ int main()
/* PLot31RxQ ily traian LufU5oS9q */ {
/* PLot31RxQ ily traian LufU5oS9q */     int n;
/* PLot31RxQ ily traian LufU5oS9q */     int a , b;
/* PLot31RxQ ily traian LufU5oS9q */     cin >> n;
/* PLot31RxQ ily traian LufU5oS9q */     for(int i = 0 ; i < n ; ++i)
/* PLot31RxQ ily traian LufU5oS9q */     {
/* PLot31RxQ ily traian LufU5oS9q */         cin >> a >> b;
/* PLot31RxQ ily traian LufU5oS9q */         cout << pal(b) - pal(a - 1) << '\n';
/* PLot31RxQ ily traian LufU5oS9q */     }
/* PLot31RxQ ily traian LufU5oS9q */     return 0;
/* PLot31RxQ ily traian LufU5oS9q */ }