/* IV98Ett0e ily traian UMRtXzixu */ #include <algorithm>
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
/* IV98Ett0e ily traian UMRtXzixu */ using namespace std;
/* IV98Ett0e ily traian UMRtXzixu */ 
/* IV98Ett0e ily traian UMRtXzixu */ int main()
/* IV98Ett0e ily traian UMRtXzixu */ {
/* IV98Ett0e ily traian UMRtXzixu */     int a, b, c, d;
/* IV98Ett0e ily traian UMRtXzixu */     cin >> a >> b >> c >> d;
/* IV98Ett0e ily traian UMRtXzixu */     int cb = b, cd = d;
/* IV98Ett0e ily traian UMRtXzixu */     while(b){
/* IV98Ett0e ily traian UMRtXzixu */         int r = d % b;
/* IV98Ett0e ily traian UMRtXzixu */         d = b;
/* IV98Ett0e ily traian UMRtXzixu */         b = r;
/* IV98Ett0e ily traian UMRtXzixu */     }
/* IV98Ett0e ily traian UMRtXzixu */     int cmmdc1 = d;
/* IV98Ett0e ily traian UMRtXzixu */     b = cb, d = cd;
/* IV98Ett0e ily traian UMRtXzixu */     int cmmmc1 = b / cmmdc1 * d;
/* IV98Ett0e ily traian UMRtXzixu */     int ca = a, cc = c;
/* IV98Ett0e ily traian UMRtXzixu */     a = a * (cmmmc1/b);
/* IV98Ett0e ily traian UMRtXzixu */     c = c * (cmmmc1/d);
/* IV98Ett0e ily traian UMRtXzixu */     int x1 = a + c;
/* IV98Ett0e ily traian UMRtXzixu */     int x2 = cmmmc1;
/* IV98Ett0e ily traian UMRtXzixu */     int cx1 = x1;
/* IV98Ett0e ily traian UMRtXzixu */     int cx2 = x2;
/* IV98Ett0e ily traian UMRtXzixu */     while(x2){
/* IV98Ett0e ily traian UMRtXzixu */         int r = x1 % x2;
/* IV98Ett0e ily traian UMRtXzixu */         x1 = x2;
/* IV98Ett0e ily traian UMRtXzixu */         x2 = r;
/* IV98Ett0e ily traian UMRtXzixu */     }
/* IV98Ett0e ily traian UMRtXzixu */     cout << cx1 / x1 << ' ' << cx2 / x1 << endl;
/* IV98Ett0e ily traian UMRtXzixu */     a = ca;
/* IV98Ett0e ily traian UMRtXzixu */     c = cc;
/* IV98Ett0e ily traian UMRtXzixu */     x1 = a * c;
/* IV98Ett0e ily traian UMRtXzixu */     x2 = b * d;
/* IV98Ett0e ily traian UMRtXzixu */     cx1 = x1;
/* IV98Ett0e ily traian UMRtXzixu */     cx2 = x2;
/* IV98Ett0e ily traian UMRtXzixu */     while(x2){
/* IV98Ett0e ily traian UMRtXzixu */         int r = x1 % x2;
/* IV98Ett0e ily traian UMRtXzixu */         x1 = x2;
/* IV98Ett0e ily traian UMRtXzixu */         x2 = r;
/* IV98Ett0e ily traian UMRtXzixu */     }
/* IV98Ett0e ily traian UMRtXzixu */     cout << cx1 / x1 << ' ' << cx2 / x1 << endl;
/* IV98Ett0e ily traian UMRtXzixu */     return 0;
/* IV98Ett0e ily traian UMRtXzixu */ }