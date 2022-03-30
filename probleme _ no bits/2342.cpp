/* RrWjl2t6j ily traian YcRgEAd5k */ #include <algorithm>
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
/* RrWjl2t6j ily traian YcRgEAd5k */ using namespace std;
/* RrWjl2t6j ily traian YcRgEAd5k */ ifstream cin("cadouri2.in");
/* RrWjl2t6j ily traian YcRgEAd5k */ ofstream cout("cadouri2.out");
/* RrWjl2t6j ily traian YcRgEAd5k */ int f1[500001] , f2[1000];
/* RrWjl2t6j ily traian YcRgEAd5k */ int main()
/* RrWjl2t6j ily traian YcRgEAd5k */ {
/* RrWjl2t6j ily traian YcRgEAd5k */     int n , x;
/* RrWjl2t6j ily traian YcRgEAd5k */     long long cnt = 1;
/* RrWjl2t6j ily traian YcRgEAd5k */     int a = 0;
/* RrWjl2t6j ily traian YcRgEAd5k */     cin >> x;
/* RrWjl2t6j ily traian YcRgEAd5k */     for(int i = 1 ; i <= x ; ++i)
/* RrWjl2t6j ily traian YcRgEAd5k */     {
/* RrWjl2t6j ily traian YcRgEAd5k */         cin >> n;
/* RrWjl2t6j ily traian YcRgEAd5k */         int d = 2;
/* RrWjl2t6j ily traian YcRgEAd5k */         while(n > 1)
/* RrWjl2t6j ily traian YcRgEAd5k */         {
/* RrWjl2t6j ily traian YcRgEAd5k */             int p = 0;
/* RrWjl2t6j ily traian YcRgEAd5k */             while(n % d == 0) n /= d , p++;
/* RrWjl2t6j ily traian YcRgEAd5k */             if(d <= 500000) f1[d] += p;
/* RrWjl2t6j ily traian YcRgEAd5k */             else
/* RrWjl2t6j ily traian YcRgEAd5k */             {
/* RrWjl2t6j ily traian YcRgEAd5k */                 f2[a]+=p;
/* RrWjl2t6j ily traian YcRgEAd5k */                 a++;
/* RrWjl2t6j ily traian YcRgEAd5k */             }
/* RrWjl2t6j ily traian YcRgEAd5k */             d++;
/* RrWjl2t6j ily traian YcRgEAd5k */             if(d * d > n) d = n;
/* RrWjl2t6j ily traian YcRgEAd5k */         }
/* RrWjl2t6j ily traian YcRgEAd5k */     }
/* RrWjl2t6j ily traian YcRgEAd5k */     for(int i = 0 ; i <= 500000 ; ++i)
/* RrWjl2t6j ily traian YcRgEAd5k */     {
/* RrWjl2t6j ily traian YcRgEAd5k */         if(f1[i]!=0)
/* RrWjl2t6j ily traian YcRgEAd5k */             cnt = (1LL * cnt * (f1[i]+1)) % 1000000007;
/* RrWjl2t6j ily traian YcRgEAd5k */     }
/* RrWjl2t6j ily traian YcRgEAd5k */     for(int i = 0 ; i < a ; ++i)
/* RrWjl2t6j ily traian YcRgEAd5k */     {
/* RrWjl2t6j ily traian YcRgEAd5k */         cnt = (1LL * cnt * (f2[i]+1)) % 1000000007;
/* RrWjl2t6j ily traian YcRgEAd5k */     }
/* RrWjl2t6j ily traian YcRgEAd5k */     cout << cnt;
/* RrWjl2t6j ily traian YcRgEAd5k */     return 0;
/* RrWjl2t6j ily traian YcRgEAd5k */ }