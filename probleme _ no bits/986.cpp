/* dNKwsWAi1 ily traian ztGX3RPEp */ #include <algorithm>
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
/* dNKwsWAi1 ily traian ztGX3RPEp */ #include <math.h>
/* dNKwsWAi1 ily traian ztGX3RPEp */ using namespace std;
/* dNKwsWAi1 ily traian ztGX3RPEp */  int main()
/* dNKwsWAi1 ily traian ztGX3RPEp */  {
/* dNKwsWAi1 ily traian ztGX3RPEp */     int n,cnt=0;
/* dNKwsWAi1 ily traian ztGX3RPEp */     float a[1001];
/* dNKwsWAi1 ily traian ztGX3RPEp */     cin>>n;
/* dNKwsWAi1 ily traian ztGX3RPEp */     for(int i=0;i<n;i++) cin>>a[i];
/* dNKwsWAi1 ily traian ztGX3RPEp */     if(a[0]>a[n-1]) {int aux=a[0];a[0]=a[n-1];a[n-1]=aux;}
/* dNKwsWAi1 ily traian ztGX3RPEp */     for(int i=0;i<n;i++)
/* dNKwsWAi1 ily traian ztGX3RPEp */     {
/* dNKwsWAi1 ily traian ztGX3RPEp */         if(a[i]<a[0]) cnt++;
/* dNKwsWAi1 ily traian ztGX3RPEp */         else if(a[i]>a[n-1]) cnt++;
/* dNKwsWAi1 ily traian ztGX3RPEp */     }
/* dNKwsWAi1 ily traian ztGX3RPEp */     cout<<cnt;
/* dNKwsWAi1 ily traian ztGX3RPEp */     return 0;
/* dNKwsWAi1 ily traian ztGX3RPEp */  }