/* F0AjjDJ05 ily traian C1OZgDIYQ */ #include <algorithm>
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
/* F0AjjDJ05 ily traian C1OZgDIYQ */ 
/* F0AjjDJ05 ily traian C1OZgDIYQ */ 
/* F0AjjDJ05 ily traian C1OZgDIYQ */ using namespace std;
/* F0AjjDJ05 ily traian C1OZgDIYQ */ int ogl(int n)
/* F0AjjDJ05 ily traian C1OZgDIYQ */ {
/* F0AjjDJ05 ily traian C1OZgDIYQ */     int ogl=0;
/* F0AjjDJ05 ily traian C1OZgDIYQ */     while(n!=0)
/* F0AjjDJ05 ily traian C1OZgDIYQ */     {
/* F0AjjDJ05 ily traian C1OZgDIYQ */         ogl=ogl*10+n%10;
/* F0AjjDJ05 ily traian C1OZgDIYQ */         n=n/10;
/* F0AjjDJ05 ily traian C1OZgDIYQ */     }
/* F0AjjDJ05 ily traian C1OZgDIYQ */     return ogl;
/* F0AjjDJ05 ily traian C1OZgDIYQ */ }
/* F0AjjDJ05 ily traian C1OZgDIYQ */ int main()
/* F0AjjDJ05 ily traian C1OZgDIYQ */ {
/* F0AjjDJ05 ily traian C1OZgDIYQ */     int n,minim=1000000000,xmax=-1,x;
/* F0AjjDJ05 ily traian C1OZgDIYQ */     cin >>n;
/* F0AjjDJ05 ily traian C1OZgDIYQ */     for(int i=1;i<=n;i++)
/* F0AjjDJ05 ily traian C1OZgDIYQ */     {
/* F0AjjDJ05 ily traian C1OZgDIYQ */         cin>>x;
/* F0AjjDJ05 ily traian C1OZgDIYQ */         if(abs(x-ogl(x))<minim)
/* F0AjjDJ05 ily traian C1OZgDIYQ */         {
/* F0AjjDJ05 ily traian C1OZgDIYQ */             minim=abs(x-ogl(x));
/* F0AjjDJ05 ily traian C1OZgDIYQ */             xmax=x;
/* F0AjjDJ05 ily traian C1OZgDIYQ */         }
/* F0AjjDJ05 ily traian C1OZgDIYQ */         else if(abs(x-ogl(x))==minim)
/* F0AjjDJ05 ily traian C1OZgDIYQ */         {
/* F0AjjDJ05 ily traian C1OZgDIYQ */             if(x<xmax) xmax=x;
/* F0AjjDJ05 ily traian C1OZgDIYQ */         }
/* F0AjjDJ05 ily traian C1OZgDIYQ */     }
/* F0AjjDJ05 ily traian C1OZgDIYQ */     cout<<xmax;
/* F0AjjDJ05 ily traian C1OZgDIYQ */     return 0;
/* F0AjjDJ05 ily traian C1OZgDIYQ */ }