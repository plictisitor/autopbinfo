/* TpL4dczeV ily traian WLhf5guFd */ #include <algorithm>
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
/* TpL4dczeV ily traian WLhf5guFd */ using namespace std;
/* TpL4dczeV ily traian WLhf5guFd */ 
/* TpL4dczeV ily traian WLhf5guFd */ 
/* TpL4dczeV ily traian WLhf5guFd */ long long ogl(long long n)
/* TpL4dczeV ily traian WLhf5guFd */ {
/* TpL4dczeV ily traian WLhf5guFd */     if(n < 1000) return n;
/* TpL4dczeV ily traian WLhf5guFd */     else
/* TpL4dczeV ily traian WLhf5guFd */     {
/* TpL4dczeV ily traian WLhf5guFd */         int a[10] , p = 0;
/* TpL4dczeV ily traian WLhf5guFd */         while(n != 0)
/* TpL4dczeV ily traian WLhf5guFd */         {
/* TpL4dczeV ily traian WLhf5guFd */             a[++p] = n % 10;
/* TpL4dczeV ily traian WLhf5guFd */             n /= 10;
/* TpL4dczeV ily traian WLhf5guFd */         }
/* TpL4dczeV ily traian WLhf5guFd */         long long nr = a[p];
/* TpL4dczeV ily traian WLhf5guFd */         for(int i = 2 ; i < p ; ++i)
/* TpL4dczeV ily traian WLhf5guFd */             nr = nr * 10 + a[i];
/* TpL4dczeV ily traian WLhf5guFd */         return nr * 10 + a[1];
/* TpL4dczeV ily traian WLhf5guFd */     }
/* TpL4dczeV ily traian WLhf5guFd */ }
/* TpL4dczeV ily traian WLhf5guFd */ 
/* TpL4dczeV ily traian WLhf5guFd */ int main()
/* TpL4dczeV ily traian WLhf5guFd */ {
/* TpL4dczeV ily traian WLhf5guFd */     long long n , x;
/* TpL4dczeV ily traian WLhf5guFd */     cin >> n;
/* TpL4dczeV ily traian WLhf5guFd */     for(int i = 1 ; i <= n ; i++)
/* TpL4dczeV ily traian WLhf5guFd */     {
/* TpL4dczeV ily traian WLhf5guFd */         cin >> x;
/* TpL4dczeV ily traian WLhf5guFd */         cout << ogl(x) << ' ';
/* TpL4dczeV ily traian WLhf5guFd */     }
/* TpL4dczeV ily traian WLhf5guFd */ }