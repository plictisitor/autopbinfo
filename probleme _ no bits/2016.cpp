/* MXAJdTs13 ily traian b1oadtWaO */ #include <algorithm>
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
/* MXAJdTs13 ily traian b1oadtWaO */ using namespace std;
/* MXAJdTs13 ily traian b1oadtWaO */ ifstream cin("vuli.in");
/* MXAJdTs13 ily traian b1oadtWaO */ ofstream cout("vuli.out");
/* MXAJdTs13 ily traian b1oadtWaO */ int n, i, j;
/* MXAJdTs13 ily traian b1oadtWaO */ long long c[50][50], x;
/* MXAJdTs13 ily traian b1oadtWaO */ int prim(int n)
/* MXAJdTs13 ily traian b1oadtWaO */ {
/* MXAJdTs13 ily traian b1oadtWaO */     if(n == 0 || n == 1) return 0;
/* MXAJdTs13 ily traian b1oadtWaO */     if(n == 2) return 1;
/* MXAJdTs13 ily traian b1oadtWaO */     if(n % 2 == 0) return 0;
/* MXAJdTs13 ily traian b1oadtWaO */     for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
/* MXAJdTs13 ily traian b1oadtWaO */     return 1;
/* MXAJdTs13 ily traian b1oadtWaO */ }
/* MXAJdTs13 ily traian b1oadtWaO */ int sum(long long n)
/* MXAJdTs13 ily traian b1oadtWaO */ {
/* MXAJdTs13 ily traian b1oadtWaO */     int s = 0;
/* MXAJdTs13 ily traian b1oadtWaO */     while(n)s += n % 10 , n /= 10;
/* MXAJdTs13 ily traian b1oadtWaO */     return s;
/* MXAJdTs13 ily traian b1oadtWaO */ }
/* MXAJdTs13 ily traian b1oadtWaO */ int main()
/* MXAJdTs13 ily traian b1oadtWaO */ {
/* MXAJdTs13 ily traian b1oadtWaO */     cin >> n;
/* MXAJdTs13 ily traian b1oadtWaO */     c[1][0] = c[1][1] = 1;
/* MXAJdTs13 ily traian b1oadtWaO */     for(i = 2; i <= n; i ++)
/* MXAJdTs13 ily traian b1oadtWaO */     {
/* MXAJdTs13 ily traian b1oadtWaO */         c[i][0] = c[i][i] = 1;
/* MXAJdTs13 ily traian b1oadtWaO */         for(j = 1; j < i; j ++)
/* MXAJdTs13 ily traian b1oadtWaO */           c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
/* MXAJdTs13 ily traian b1oadtWaO */     }
/* MXAJdTs13 ily traian b1oadtWaO */     for(j = 0; j <= n/2; j ++)
/* MXAJdTs13 ily traian b1oadtWaO */     {
/* MXAJdTs13 ily traian b1oadtWaO */         x = c[n][j];
/* MXAJdTs13 ily traian b1oadtWaO */         if(prim(sum(x)) || sum(x) == 1) cout << x << " ";
/* MXAJdTs13 ily traian b1oadtWaO */     }
/* MXAJdTs13 ily traian b1oadtWaO */     return 0;
/* MXAJdTs13 ily traian b1oadtWaO */ }