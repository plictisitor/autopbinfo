/* I4Fn7gSvZ ily traian B3TvnBjDo */ #include <algorithm>
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
/* I4Fn7gSvZ ily traian B3TvnBjDo */ 
/* I4Fn7gSvZ ily traian B3TvnBjDo */ using namespace std;
/* I4Fn7gSvZ ily traian B3TvnBjDo */ 
/* I4Fn7gSvZ ily traian B3TvnBjDo */ bitset<10000001> f1 , f2 , f;
/* I4Fn7gSvZ ily traian B3TvnBjDo */ 
/* I4Fn7gSvZ ily traian B3TvnBjDo */ int main()
/* I4Fn7gSvZ ily traian B3TvnBjDo */ {
/* I4Fn7gSvZ ily traian B3TvnBjDo */     int A, B, C, D, n, x, m, y;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     cin >> A >> B >> C >> D >> n >> x >> m >> y;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     f1[x]=1 , f2[y]=1;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     for(int i = 0 ; i < n ; ++i)
/* I4Fn7gSvZ ily traian B3TvnBjDo */     {
/* I4Fn7gSvZ ily traian B3TvnBjDo */          x = A + (1LL * x * C + D) % (B - A + 1);
/* I4Fn7gSvZ ily traian B3TvnBjDo */          f1[x]=1;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     }
/* I4Fn7gSvZ ily traian B3TvnBjDo */     for(int i = 0 ; i < m ; ++i)
/* I4Fn7gSvZ ily traian B3TvnBjDo */     {
/* I4Fn7gSvZ ily traian B3TvnBjDo */          y = A + (1LL * y * C + D) % (B - A + 1);
/* I4Fn7gSvZ ily traian B3TvnBjDo */          f2[y]=1;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     }
/* I4Fn7gSvZ ily traian B3TvnBjDo */     int cnt=0;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     for(int i = 0 ; i < n ; ++i)
/* I4Fn7gSvZ ily traian B3TvnBjDo */     {
/* I4Fn7gSvZ ily traian B3TvnBjDo */          x = A + (1LL * x * C + D) % (B - A + 1);
/* I4Fn7gSvZ ily traian B3TvnBjDo */          if(f1[x]==1 && f2[x]==1 && f[x]==0)
/* I4Fn7gSvZ ily traian B3TvnBjDo */             cnt++ , f[x]=1;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     }
/* I4Fn7gSvZ ily traian B3TvnBjDo */     cout << cnt;
/* I4Fn7gSvZ ily traian B3TvnBjDo */     return 0;
/* I4Fn7gSvZ ily traian B3TvnBjDo */ }