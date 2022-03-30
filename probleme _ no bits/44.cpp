/* xOW4JIlMm ily traian 2cpxGB81F */ #include <algorithm>
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
/* xOW4JIlMm ily traian 2cpxGB81F */ using namespace std;
/* xOW4JIlMm ily traian 2cpxGB81F */ 
/* xOW4JIlMm ily traian 2cpxGB81F */ int prim(int n);
/* xOW4JIlMm ily traian 2cpxGB81F */ 
/* xOW4JIlMm ily traian 2cpxGB81F */ int main ()
/* xOW4JIlMm ily traian 2cpxGB81F */ {
/* xOW4JIlMm ily traian 2cpxGB81F */     int a,b,cnt=0;
/* xOW4JIlMm ily traian 2cpxGB81F */     cin >> a >> b;
/* xOW4JIlMm ily traian 2cpxGB81F */     if (a > b)
/* xOW4JIlMm ily traian 2cpxGB81F */     {
/* xOW4JIlMm ily traian 2cpxGB81F */         int c=a;
/* xOW4JIlMm ily traian 2cpxGB81F */         a=b;
/* xOW4JIlMm ily traian 2cpxGB81F */         b=c;
/* xOW4JIlMm ily traian 2cpxGB81F */     }
/* xOW4JIlMm ily traian 2cpxGB81F */     for (int i = a ; i <= b; ++i)
/* xOW4JIlMm ily traian 2cpxGB81F */     {
/* xOW4JIlMm ily traian 2cpxGB81F */         if (prim(i))
/* xOW4JIlMm ily traian 2cpxGB81F */         cnt++;
/* xOW4JIlMm ily traian 2cpxGB81F */     }
/* xOW4JIlMm ily traian 2cpxGB81F */     cout << cnt;
/* xOW4JIlMm ily traian 2cpxGB81F */     return 0;
/* xOW4JIlMm ily traian 2cpxGB81F */ }
/* xOW4JIlMm ily traian 2cpxGB81F */ int prim(int n)
/* xOW4JIlMm ily traian 2cpxGB81F */ {
/* xOW4JIlMm ily traian 2cpxGB81F */     int cnt=0; 
/* xOW4JIlMm ily traian 2cpxGB81F */     for (int i = 1; i * i <= n; ++i)
/* xOW4JIlMm ily traian 2cpxGB81F */     {
/* xOW4JIlMm ily traian 2cpxGB81F */         if (n%i==0)
/* xOW4JIlMm ily traian 2cpxGB81F */         cnt+=2;
/* xOW4JIlMm ily traian 2cpxGB81F */         if (i*i==n)
/* xOW4JIlMm ily traian 2cpxGB81F */         cnt--;
/* xOW4JIlMm ily traian 2cpxGB81F */     }
/* xOW4JIlMm ily traian 2cpxGB81F */     if (cnt==2)
/* xOW4JIlMm ily traian 2cpxGB81F */     return 1;
/* xOW4JIlMm ily traian 2cpxGB81F */     else
/* xOW4JIlMm ily traian 2cpxGB81F */     return 0;
/* xOW4JIlMm ily traian 2cpxGB81F */ }