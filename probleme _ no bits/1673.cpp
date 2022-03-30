/* vHzBAlUMn ily traian 2kDvGQAvo */ #include <algorithm>
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
/* vHzBAlUMn ily traian 2kDvGQAvo */ using namespace std;
/* vHzBAlUMn ily traian 2kDvGQAvo */ ifstream cin("cmmdc1.in");
/* vHzBAlUMn ily traian 2kDvGQAvo */ ofstream cout("cmmdc1.out");
/* vHzBAlUMn ily traian 2kDvGQAvo */ int f[1000001], f1[1000001] , n , val , k , maxx;
/* vHzBAlUMn ily traian 2kDvGQAvo */ int main()
/* vHzBAlUMn ily traian 2kDvGQAvo */ {
/* vHzBAlUMn ily traian 2kDvGQAvo */     cin >> n >> k;
/* vHzBAlUMn ily traian 2kDvGQAvo */     for(int i = 1; i <= n; ++i)
/* vHzBAlUMn ily traian 2kDvGQAvo */     {
/* vHzBAlUMn ily traian 2kDvGQAvo */         cin >> val;
/* vHzBAlUMn ily traian 2kDvGQAvo */         f[val]++;
/* vHzBAlUMn ily traian 2kDvGQAvo */         maxx = max(maxx, val);
/* vHzBAlUMn ily traian 2kDvGQAvo */     }
/* vHzBAlUMn ily traian 2kDvGQAvo */     for(int i = 1; i <= maxx; ++i)
/* vHzBAlUMn ily traian 2kDvGQAvo */         for(int j = i; j <= maxx; j += i)
/* vHzBAlUMn ily traian 2kDvGQAvo */             f1[i] += f[j];
/* vHzBAlUMn ily traian 2kDvGQAvo */     for(int i = maxx; i; --i)
/* vHzBAlUMn ily traian 2kDvGQAvo */         if(f1[i] >= k)
/* vHzBAlUMn ily traian 2kDvGQAvo */         {
/* vHzBAlUMn ily traian 2kDvGQAvo */             cout << i << endl;
/* vHzBAlUMn ily traian 2kDvGQAvo */             for(int j = maxx / i * i; j; j -= i)
/* vHzBAlUMn ily traian 2kDvGQAvo */                 while(f[j] > 0)
/* vHzBAlUMn ily traian 2kDvGQAvo */                 {
/* vHzBAlUMn ily traian 2kDvGQAvo */                     cout << j << " ";
/* vHzBAlUMn ily traian 2kDvGQAvo */                     if(--k == 0) return 0;
/* vHzBAlUMn ily traian 2kDvGQAvo */                     --f[j];
/* vHzBAlUMn ily traian 2kDvGQAvo */                 }
/* vHzBAlUMn ily traian 2kDvGQAvo */         }
/* vHzBAlUMn ily traian 2kDvGQAvo */     return 0;
/* vHzBAlUMn ily traian 2kDvGQAvo */ }