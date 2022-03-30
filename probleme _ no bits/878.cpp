/* xT5zIRsXC ily traian Tew764wER */ #include <algorithm>
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
/* xT5zIRsXC ily traian Tew764wER */ using namespace std;
/* xT5zIRsXC ily traian Tew764wER */ 
/* xT5zIRsXC ily traian Tew764wER */ ifstream cin("intervale4.in");
/* xT5zIRsXC ily traian Tew764wER */ ofstream cout("intervale4.out");
/* xT5zIRsXC ily traian Tew764wER */ 
/* xT5zIRsXC ily traian Tew764wER */ struct perechi{
/* xT5zIRsXC ily traian Tew764wER */     int x , y;
/* xT5zIRsXC ily traian Tew764wER */ };
/* xT5zIRsXC ily traian Tew764wER */ 
/* xT5zIRsXC ily traian Tew764wER */ perechi a[100001];
/* xT5zIRsXC ily traian Tew764wER */ 
/* xT5zIRsXC ily traian Tew764wER */ bool intersectie(int i)
/* xT5zIRsXC ily traian Tew764wER */ {
/* xT5zIRsXC ily traian Tew764wER */     return !(a[i].x > a[i-1].y || a[i].y < a[i-1].x);
/* xT5zIRsXC ily traian Tew764wER */ }
/* xT5zIRsXC ily traian Tew764wER */ 
/* xT5zIRsXC ily traian Tew764wER */ int main()
/* xT5zIRsXC ily traian Tew764wER */ {
/* xT5zIRsXC ily traian Tew764wER */     int n;
/* xT5zIRsXC ily traian Tew764wER */     cin >> n;
/* xT5zIRsXC ily traian Tew764wER */     for(int i = 1 ; i <= n ; ++i)
/* xT5zIRsXC ily traian Tew764wER */     {
/* xT5zIRsXC ily traian Tew764wER */         cin >> a[i].x >> a[i].y;
/* xT5zIRsXC ily traian Tew764wER */         while(i > 1 && intersectie(i))
/* xT5zIRsXC ily traian Tew764wER */         {
/* xT5zIRsXC ily traian Tew764wER */             a[i-1].x = min(a[i].x , a[i-1].x);
/* xT5zIRsXC ily traian Tew764wER */             a[i-1].y = max(a[i].y , a[i-1].y);
/* xT5zIRsXC ily traian Tew764wER */             i--;
/* xT5zIRsXC ily traian Tew764wER */             n--;
/* xT5zIRsXC ily traian Tew764wER */         }
/* xT5zIRsXC ily traian Tew764wER */     }
/* xT5zIRsXC ily traian Tew764wER */     cout << n;
/* xT5zIRsXC ily traian Tew764wER */     return 0;
/* xT5zIRsXC ily traian Tew764wER */ }