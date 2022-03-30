/* iZDacTs3G ily traian sbeB26N7b */ #include <algorithm>
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
/* iZDacTs3G ily traian sbeB26N7b */ using namespace std;
/* iZDacTs3G ily traian sbeB26N7b */ 
/* iZDacTs3G ily traian sbeB26N7b */ int prim(int n)
/* iZDacTs3G ily traian sbeB26N7b */ {
/* iZDacTs3G ily traian sbeB26N7b */     int cnt=0;
/* iZDacTs3G ily traian sbeB26N7b */     for(int i = 1 ; i * i <= n ; ++i)
/* iZDacTs3G ily traian sbeB26N7b */     {
/* iZDacTs3G ily traian sbeB26N7b */         if(n%i==0)
/* iZDacTs3G ily traian sbeB26N7b */             cnt+=2;
/* iZDacTs3G ily traian sbeB26N7b */         if(i*i==n)
/* iZDacTs3G ily traian sbeB26N7b */             cnt--;
/* iZDacTs3G ily traian sbeB26N7b */     }
/* iZDacTs3G ily traian sbeB26N7b */     if(cnt==2)
/* iZDacTs3G ily traian sbeB26N7b */         return 1;
/* iZDacTs3G ily traian sbeB26N7b */     else
/* iZDacTs3G ily traian sbeB26N7b */         return 0;
/* iZDacTs3G ily traian sbeB26N7b */ }
/* iZDacTs3G ily traian sbeB26N7b */ 
/* iZDacTs3G ily traian sbeB26N7b */ int pal(int n)
/* iZDacTs3G ily traian sbeB26N7b */ {
/* iZDacTs3G ily traian sbeB26N7b */     int ogl=0;
/* iZDacTs3G ily traian sbeB26N7b */     int cn=n;
/* iZDacTs3G ily traian sbeB26N7b */     while(n)
/* iZDacTs3G ily traian sbeB26N7b */     {
/* iZDacTs3G ily traian sbeB26N7b */         ogl=ogl*10+n%10;
/* iZDacTs3G ily traian sbeB26N7b */         n/=10;
/* iZDacTs3G ily traian sbeB26N7b */     }
/* iZDacTs3G ily traian sbeB26N7b */     if(ogl==cn)
/* iZDacTs3G ily traian sbeB26N7b */         return 1;
/* iZDacTs3G ily traian sbeB26N7b */     else
/* iZDacTs3G ily traian sbeB26N7b */         return 0;
/* iZDacTs3G ily traian sbeB26N7b */ }
/* iZDacTs3G ily traian sbeB26N7b */ 
/* iZDacTs3G ily traian sbeB26N7b */ int main()
/* iZDacTs3G ily traian sbeB26N7b */ {
/* iZDacTs3G ily traian sbeB26N7b */     int n;
/* iZDacTs3G ily traian sbeB26N7b */     cin >> n;
/* iZDacTs3G ily traian sbeB26N7b */     int a[1000];
/* iZDacTs3G ily traian sbeB26N7b */     int cnt=0;
/* iZDacTs3G ily traian sbeB26N7b */     for(int i = 0 ; i < n ; ++i)
/* iZDacTs3G ily traian sbeB26N7b */         cin >> a[i];
/* iZDacTs3G ily traian sbeB26N7b */     for(int i = 0 ; i < n ; ++i)
/* iZDacTs3G ily traian sbeB26N7b */     {
/* iZDacTs3G ily traian sbeB26N7b */         if(pal(a[i])&&prim(a[i])&&a[i]%2==1)
/* iZDacTs3G ily traian sbeB26N7b */             cnt++;
/* iZDacTs3G ily traian sbeB26N7b */     }
/* iZDacTs3G ily traian sbeB26N7b */     cout << cnt;
/* iZDacTs3G ily traian sbeB26N7b */     return 0;
/* iZDacTs3G ily traian sbeB26N7b */ }