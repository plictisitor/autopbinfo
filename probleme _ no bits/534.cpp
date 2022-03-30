/* CqmTSssp4 ily traian MeEiwnwwQ */ #include <algorithm>
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
/* CqmTSssp4 ily traian MeEiwnwwQ */ using namespace std;
/* CqmTSssp4 ily traian MeEiwnwwQ */ 
/* CqmTSssp4 ily traian MeEiwnwwQ */ int main()
/* CqmTSssp4 ily traian MeEiwnwwQ */ {
/* CqmTSssp4 ily traian MeEiwnwwQ */     int n, a[10001]={0}, c=1;
/* CqmTSssp4 ily traian MeEiwnwwQ */     cin >> n;
/* CqmTSssp4 ily traian MeEiwnwwQ */     a[1]=1;
/* CqmTSssp4 ily traian MeEiwnwwQ */     for(int i = 1; i <= n; i++)
/* CqmTSssp4 ily traian MeEiwnwwQ */     {
/* CqmTSssp4 ily traian MeEiwnwwQ */         int t = 0;
/* CqmTSssp4 ily traian MeEiwnwwQ */         for(int j = 1; j <= c; j++)
/* CqmTSssp4 ily traian MeEiwnwwQ */         {
/* CqmTSssp4 ily traian MeEiwnwwQ */             int cif = a[j] * i + t;
/* CqmTSssp4 ily traian MeEiwnwwQ */             a[j] = cif % 10;
/* CqmTSssp4 ily traian MeEiwnwwQ */             t = cif / 10;
/* CqmTSssp4 ily traian MeEiwnwwQ */         }
/* CqmTSssp4 ily traian MeEiwnwwQ */         while(t)
/* CqmTSssp4 ily traian MeEiwnwwQ */         {
/* CqmTSssp4 ily traian MeEiwnwwQ */             a[++c] = t % 10;
/* CqmTSssp4 ily traian MeEiwnwwQ */             t /=10;
/* CqmTSssp4 ily traian MeEiwnwwQ */         }
/* CqmTSssp4 ily traian MeEiwnwwQ */     }
/* CqmTSssp4 ily traian MeEiwnwwQ */     for(int i = c ; i >= 1; i--)
/* CqmTSssp4 ily traian MeEiwnwwQ */         cout << a[i];
/* CqmTSssp4 ily traian MeEiwnwwQ */     return 0;
/* CqmTSssp4 ily traian MeEiwnwwQ */ }