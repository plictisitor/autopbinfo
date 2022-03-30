/* xMMJqjkdi ily traian wOGVXCOhx */ #include <algorithm>
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
/* xMMJqjkdi ily traian wOGVXCOhx */ 
/* xMMJqjkdi ily traian wOGVXCOhx */ using namespace std;
/* xMMJqjkdi ily traian wOGVXCOhx */ int fac(int n)
/* xMMJqjkdi ily traian wOGVXCOhx */ {
/* xMMJqjkdi ily traian wOGVXCOhx */     int x=1;
/* xMMJqjkdi ily traian wOGVXCOhx */     for(int i=2;i<=n;i++) x=x*i;
/* xMMJqjkdi ily traian wOGVXCOhx */     return x;
/* xMMJqjkdi ily traian wOGVXCOhx */ }
/* xMMJqjkdi ily traian wOGVXCOhx */ int main()
/* xMMJqjkdi ily traian wOGVXCOhx */ {
/* xMMJqjkdi ily traian wOGVXCOhx */     long long n,a[1001],v[1001];
/* xMMJqjkdi ily traian wOGVXCOhx */     cin >> n ;
/* xMMJqjkdi ily traian wOGVXCOhx */     for(int i=1;i<=n;i++) cin>>a[i];
/* xMMJqjkdi ily traian wOGVXCOhx */     for(int i=1;i<=n;i++)
/* xMMJqjkdi ily traian wOGVXCOhx */     {
/* xMMJqjkdi ily traian wOGVXCOhx */             if(fac(n)%a[i]==0) cout<<a[i]<< " ";
/* xMMJqjkdi ily traian wOGVXCOhx */     }
/* xMMJqjkdi ily traian wOGVXCOhx */     return 0;
/* xMMJqjkdi ily traian wOGVXCOhx */ 
/* xMMJqjkdi ily traian wOGVXCOhx */ }