/* klZxg4Dqm ily traian shAN8Mnhz */ #include <algorithm>
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
/* klZxg4Dqm ily traian shAN8Mnhz */ using namespace std;
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */ ifstream fin ("cercetasi.in");
/* klZxg4Dqm ily traian shAN8Mnhz */ ofstream fout ("cercetasi.out");
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */ #define MAX 10001
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */ int n, a[MAX], m, k, kcor, c[MAX], nr, beg, en;
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */ void finish(int i, int sc)
/* klZxg4Dqm ily traian shAN8Mnhz */ {
/* klZxg4Dqm ily traian shAN8Mnhz */     if (i == sc)
/* klZxg4Dqm ily traian shAN8Mnhz */     {
/* klZxg4Dqm ily traian shAN8Mnhz */         a[sc] = sc;
/* klZxg4Dqm ily traian shAN8Mnhz */         c[sc] = sc;
/* klZxg4Dqm ily traian shAN8Mnhz */         nr++;
/* klZxg4Dqm ily traian shAN8Mnhz */         return;
/* klZxg4Dqm ily traian shAN8Mnhz */     }
/* klZxg4Dqm ily traian shAN8Mnhz */     nr ++;
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */     int aux = c[sc];
/* klZxg4Dqm ily traian shAN8Mnhz */     a[sc] = sc;
/* klZxg4Dqm ily traian shAN8Mnhz */     c[sc] = sc;
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */     a[aux] = 0;
/* klZxg4Dqm ily traian shAN8Mnhz */     finish(i, aux);
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */ }
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */ int main()
/* klZxg4Dqm ily traian shAN8Mnhz */ {
/* klZxg4Dqm ily traian shAN8Mnhz */     fin >> n;
/* klZxg4Dqm ily traian shAN8Mnhz */     for (int i = 1; i <= n; i++)
/* klZxg4Dqm ily traian shAN8Mnhz */     {
/* klZxg4Dqm ily traian shAN8Mnhz */         fin >> a[i];
/* klZxg4Dqm ily traian shAN8Mnhz */         c[a[i]] = i;
/* klZxg4Dqm ily traian shAN8Mnhz */     }
/* klZxg4Dqm ily traian shAN8Mnhz */     for (int maux = 1; maux * maux <= n; maux *= 2)
/* klZxg4Dqm ily traian shAN8Mnhz */     {
/* klZxg4Dqm ily traian shAN8Mnhz */         k = n - maux * maux;
/* klZxg4Dqm ily traian shAN8Mnhz */         if (k % (2 * maux) == 0)kcor = k / (2 * maux), m = maux;
/* klZxg4Dqm ily traian shAN8Mnhz */     }
/* klZxg4Dqm ily traian shAN8Mnhz */     beg = 2 * kcor + 1;
/* klZxg4Dqm ily traian shAN8Mnhz */     en = 2 * (kcor + m - 1) + 1;
/* klZxg4Dqm ily traian shAN8Mnhz */     fout << m << '\n';
/* klZxg4Dqm ily traian shAN8Mnhz */     for (int i = beg; i <= en; i += 2)fout << i << ' ';
/* klZxg4Dqm ily traian shAN8Mnhz */     fout << '\n';
/* klZxg4Dqm ily traian shAN8Mnhz */ 
/* klZxg4Dqm ily traian shAN8Mnhz */     for (int i = beg; i <= en; i+=2)
/* klZxg4Dqm ily traian shAN8Mnhz */     {
/* klZxg4Dqm ily traian shAN8Mnhz */         if (a[i] != i || c[i] != i)
/* klZxg4Dqm ily traian shAN8Mnhz */         {
/* klZxg4Dqm ily traian shAN8Mnhz */             int aux = c[i];
/* klZxg4Dqm ily traian shAN8Mnhz */             c[i] = 0;
/* klZxg4Dqm ily traian shAN8Mnhz */             a[aux] = 0;
/* klZxg4Dqm ily traian shAN8Mnhz */             finish(i, aux);
/* klZxg4Dqm ily traian shAN8Mnhz */         }
/* klZxg4Dqm ily traian shAN8Mnhz */     }
/* klZxg4Dqm ily traian shAN8Mnhz */     fout << nr;
/* klZxg4Dqm ily traian shAN8Mnhz */     return 0;
/* klZxg4Dqm ily traian shAN8Mnhz */ }