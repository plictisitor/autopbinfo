/* n0v6fwXFI ily traian IcuYMNGWS */ #include <algorithm>
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
/* n0v6fwXFI ily traian IcuYMNGWS */ using namespace std;
/* n0v6fwXFI ily traian IcuYMNGWS */ 
/* n0v6fwXFI ily traian IcuYMNGWS */ ifstream cin("cub.in");
/* n0v6fwXFI ily traian IcuYMNGWS */ ofstream cout("cub.out");
/* n0v6fwXFI ily traian IcuYMNGWS */ 
/* n0v6fwXFI ily traian IcuYMNGWS */ int exp(int n , int x)
/* n0v6fwXFI ily traian IcuYMNGWS */ {
/* n0v6fwXFI ily traian IcuYMNGWS */     int c = 0;
/* n0v6fwXFI ily traian IcuYMNGWS */     while(n % x == 0)
/* n0v6fwXFI ily traian IcuYMNGWS */     {
/* n0v6fwXFI ily traian IcuYMNGWS */         n /= x;
/* n0v6fwXFI ily traian IcuYMNGWS */         c++;
/* n0v6fwXFI ily traian IcuYMNGWS */     }
/* n0v6fwXFI ily traian IcuYMNGWS */     return c;
/* n0v6fwXFI ily traian IcuYMNGWS */ 
/* n0v6fwXFI ily traian IcuYMNGWS */ }
/* n0v6fwXFI ily traian IcuYMNGWS */ 
/* n0v6fwXFI ily traian IcuYMNGWS */ int main()
/* n0v6fwXFI ily traian IcuYMNGWS */ {
/* n0v6fwXFI ily traian IcuYMNGWS */     int n , c2 = 0 , c3 = 0 , c5 = 0 , f[1001] = {0} , x , c7 = 0;
/* n0v6fwXFI ily traian IcuYMNGWS */     unsigned long long c = 0;
/* n0v6fwXFI ily traian IcuYMNGWS */     cin >> n;
/* n0v6fwXFI ily traian IcuYMNGWS */     for(int i = 1 ; i <= n ; i++)
/* n0v6fwXFI ily traian IcuYMNGWS */     {
/* n0v6fwXFI ily traian IcuYMNGWS */         cin >> x;
/* n0v6fwXFI ily traian IcuYMNGWS */         c2 = (c2 + exp(x , 2)) % 3;
/* n0v6fwXFI ily traian IcuYMNGWS */         c3 = (c3 + exp(x , 3)) % 3;
/* n0v6fwXFI ily traian IcuYMNGWS */         c5 = (c5 + exp(x , 5)) % 3;
/* n0v6fwXFI ily traian IcuYMNGWS */         c7 = (c7 + exp(x , 7)) % 3;
/* n0v6fwXFI ily traian IcuYMNGWS */         f[27*c2 + 9*c3 + 3*c5 + c7]++;
/* n0v6fwXFI ily traian IcuYMNGWS */         //cout << 4*c2 + 2*c3 + c5 << endl;
/* n0v6fwXFI ily traian IcuYMNGWS */     }
/* n0v6fwXFI ily traian IcuYMNGWS */     c = f[0];
/* n0v6fwXFI ily traian IcuYMNGWS */     for(int i = 0 ; i <= 80 ; i++)
/* n0v6fwXFI ily traian IcuYMNGWS */         c = c + 1ll * f[i] * (f[i] - 1) / 2;
/* n0v6fwXFI ily traian IcuYMNGWS */     cout << c;
/* n0v6fwXFI ily traian IcuYMNGWS */ }