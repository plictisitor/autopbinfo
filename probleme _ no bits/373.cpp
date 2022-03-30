/* VNs6djS1h ily traian 9dPNzXzmg */ #include <algorithm>
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
/* VNs6djS1h ily traian 9dPNzXzmg */ using namespace std;
/* VNs6djS1h ily traian 9dPNzXzmg */ 
/* VNs6djS1h ily traian 9dPNzXzmg */ int main()
/* VNs6djS1h ily traian 9dPNzXzmg */ {
/* VNs6djS1h ily traian 9dPNzXzmg */     int cnt = 0;
/* VNs6djS1h ily traian 9dPNzXzmg */     int n;
/* VNs6djS1h ily traian 9dPNzXzmg */     cin >> n;
/* VNs6djS1h ily traian 9dPNzXzmg */     int val = 2;
/* VNs6djS1h ily traian 9dPNzXzmg */     while(cnt < n){
/* VNs6djS1h ily traian 9dPNzXzmg */         int cval = val;
/* VNs6djS1h ily traian 9dPNzXzmg */         int d = 2;
/* VNs6djS1h ily traian 9dPNzXzmg */         int cn = 1;
/* VNs6djS1h ily traian 9dPNzXzmg */         while(val > 1){
/* VNs6djS1h ily traian 9dPNzXzmg */             int p = 0;
/* VNs6djS1h ily traian 9dPNzXzmg */             while(val % d == 0)
/* VNs6djS1h ily traian 9dPNzXzmg */                 p++, val /= d;
/* VNs6djS1h ily traian 9dPNzXzmg */             cn = cn * (p + 1);
/* VNs6djS1h ily traian 9dPNzXzmg */             d++;
/* VNs6djS1h ily traian 9dPNzXzmg */             if(d * d > val)
/* VNs6djS1h ily traian 9dPNzXzmg */                 d = val;
/* VNs6djS1h ily traian 9dPNzXzmg */         }
/* VNs6djS1h ily traian 9dPNzXzmg */         val = cval;
/* VNs6djS1h ily traian 9dPNzXzmg */         if(cn == 2)
/* VNs6djS1h ily traian 9dPNzXzmg */             cout << val << ' ', cnt++;
/* VNs6djS1h ily traian 9dPNzXzmg */         val++;
/* VNs6djS1h ily traian 9dPNzXzmg */     }
/* VNs6djS1h ily traian 9dPNzXzmg */     return 0;
/* VNs6djS1h ily traian 9dPNzXzmg */ }