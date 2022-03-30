/* nxJPnAWj1 ily traian N74xCAeIj */ #include <algorithm>
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
/* nxJPnAWj1 ily traian N74xCAeIj */ using namespace std;
/* nxJPnAWj1 ily traian N74xCAeIj */ 
/* nxJPnAWj1 ily traian N74xCAeIj */ int main()
/* nxJPnAWj1 ily traian N74xCAeIj */ {
/* nxJPnAWj1 ily traian N74xCAeIj */     int n;
/* nxJPnAWj1 ily traian N74xCAeIj */     cin >> n;
/* nxJPnAWj1 ily traian N74xCAeIj */     int nr = 1;
/* nxJPnAWj1 ily traian N74xCAeIj */     int d = 2;
/* nxJPnAWj1 ily traian N74xCAeIj */     while(n > 1)
/* nxJPnAWj1 ily traian N74xCAeIj */     {
/* nxJPnAWj1 ily traian N74xCAeIj */         int p = 0;
/* nxJPnAWj1 ily traian N74xCAeIj */         while(n % d == 0)
/* nxJPnAWj1 ily traian N74xCAeIj */             n/=d , p++;
/* nxJPnAWj1 ily traian N74xCAeIj */         if(p)
/* nxJPnAWj1 ily traian N74xCAeIj */             nr = nr * d;
/* nxJPnAWj1 ily traian N74xCAeIj */         d++;
/* nxJPnAWj1 ily traian N74xCAeIj */         if(d * d > n)
/* nxJPnAWj1 ily traian N74xCAeIj */             d = n;
/* nxJPnAWj1 ily traian N74xCAeIj */     }
/* nxJPnAWj1 ily traian N74xCAeIj */     cout << nr;
/* nxJPnAWj1 ily traian N74xCAeIj */     return 0;
/* nxJPnAWj1 ily traian N74xCAeIj */ }