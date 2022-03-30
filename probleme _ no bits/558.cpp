/* UF1zVMXgc ily traian PhOzFcolo */ #include <algorithm>
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
/* UF1zVMXgc ily traian PhOzFcolo */ 
/* UF1zVMXgc ily traian PhOzFcolo */ using namespace std;
/* UF1zVMXgc ily traian PhOzFcolo */ int main()
/* UF1zVMXgc ily traian PhOzFcolo */ {
/* UF1zVMXgc ily traian PhOzFcolo */     int n , a[1001] , m;
/* UF1zVMXgc ily traian PhOzFcolo */     cin >> n >> m;
/* UF1zVMXgc ily traian PhOzFcolo */     n-=m;
/* UF1zVMXgc ily traian PhOzFcolo */     for(int i = 0 ; i < n ; ++i)
/* UF1zVMXgc ily traian PhOzFcolo */         cin >> a[i];
/* UF1zVMXgc ily traian PhOzFcolo */     sort(a , a+n);
/* UF1zVMXgc ily traian PhOzFcolo */     int r = (a[n-1]-a[0])/(n+m-1) , p = 1;
/* UF1zVMXgc ily traian PhOzFcolo */     int x = a[0];
/* UF1zVMXgc ily traian PhOzFcolo */     for(int i = 0 ; i < n + m - 1 ; ++i)
/* UF1zVMXgc ily traian PhOzFcolo */     {
/* UF1zVMXgc ily traian PhOzFcolo */         x+=r;
/* UF1zVMXgc ily traian PhOzFcolo */         if(x!=a[p]) cout << x << " ";
/* UF1zVMXgc ily traian PhOzFcolo */         else p++;
/* UF1zVMXgc ily traian PhOzFcolo */     }
/* UF1zVMXgc ily traian PhOzFcolo */ }