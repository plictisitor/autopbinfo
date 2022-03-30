/* FfQlEyvL7 ily traian Zp9fzkjkL */ #include <algorithm>
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
/* FfQlEyvL7 ily traian Zp9fzkjkL */ 
/* FfQlEyvL7 ily traian Zp9fzkjkL */ using namespace std;
/* FfQlEyvL7 ily traian Zp9fzkjkL */ 
/* FfQlEyvL7 ily traian Zp9fzkjkL */ long long int n, rez1, rez2;
/* FfQlEyvL7 ily traian Zp9fzkjkL */ bool ok = false;
/* FfQlEyvL7 ily traian Zp9fzkjkL */ 
/* FfQlEyvL7 ily traian Zp9fzkjkL */ int main(){
/* FfQlEyvL7 ily traian Zp9fzkjkL */     cin >> n;
/* FfQlEyvL7 ily traian Zp9fzkjkL */     for(long long int i = 1; 1LL * i * (i + 1) / 2 < n; ++i){
/* FfQlEyvL7 ily traian Zp9fzkjkL */         long long x = 1LL * i * (i + 1) / 2;
/* FfQlEyvL7 ily traian Zp9fzkjkL */         long long y = n - x;
/* FfQlEyvL7 ily traian Zp9fzkjkL */         y *= 2;
/* FfQlEyvL7 ily traian Zp9fzkjkL */         long long s = sqrt(y);
/* FfQlEyvL7 ily traian Zp9fzkjkL */         if(1LL * s * (s + 1) == y)
/* FfQlEyvL7 ily traian Zp9fzkjkL */             ok = true, rez1 = x, rez2 = y/2;
/* FfQlEyvL7 ily traian Zp9fzkjkL */     }
/* FfQlEyvL7 ily traian Zp9fzkjkL */     if(ok)
/* FfQlEyvL7 ily traian Zp9fzkjkL */         cout << rez1 << ' ' << rez2;
/* FfQlEyvL7 ily traian Zp9fzkjkL */     else
/* FfQlEyvL7 ily traian Zp9fzkjkL */         cout << "NU";
/* FfQlEyvL7 ily traian Zp9fzkjkL */     return 0;
/* FfQlEyvL7 ily traian Zp9fzkjkL */ }