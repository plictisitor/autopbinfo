/* iSJAEqiqY ily traian 4Tz5678OZ */ #include <algorithm>
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
/* iSJAEqiqY ily traian 4Tz5678OZ */ using namespace std;
/* iSJAEqiqY ily traian 4Tz5678OZ */ 
/* iSJAEqiqY ily traian 4Tz5678OZ */ ifstream cin("jocprim.in");
/* iSJAEqiqY ily traian 4Tz5678OZ */ ofstream cout("jocprim.out");
/* iSJAEqiqY ily traian 4Tz5678OZ */ 
/* iSJAEqiqY ily traian 4Tz5678OZ */ int n , x , cnt , f[10000001] , maxi , cate;
/* iSJAEqiqY ily traian 4Tz5678OZ */ 
/* iSJAEqiqY ily traian 4Tz5678OZ */ int divprim(int n)
/* iSJAEqiqY ily traian 4Tz5678OZ */ {
/* iSJAEqiqY ily traian 4Tz5678OZ */     int d = 2 , rez;
/* iSJAEqiqY ily traian 4Tz5678OZ */     while(n > 1)
/* iSJAEqiqY ily traian 4Tz5678OZ */     {
/* iSJAEqiqY ily traian 4Tz5678OZ */         int p = 0;
/* iSJAEqiqY ily traian 4Tz5678OZ */         while(n % d == 0) n /= d , p++;
/* iSJAEqiqY ily traian 4Tz5678OZ */         if(p) rez = d;
/* iSJAEqiqY ily traian 4Tz5678OZ */         d++;
/* iSJAEqiqY ily traian 4Tz5678OZ */         if(d * d > n) d = n;
/* iSJAEqiqY ily traian 4Tz5678OZ */     }
/* iSJAEqiqY ily traian 4Tz5678OZ */     return rez;
/* iSJAEqiqY ily traian 4Tz5678OZ */ }
/* iSJAEqiqY ily traian 4Tz5678OZ */ 
/* iSJAEqiqY ily traian 4Tz5678OZ */ int main()
/* iSJAEqiqY ily traian 4Tz5678OZ */ {
/* iSJAEqiqY ily traian 4Tz5678OZ */     cin >> n;
/* iSJAEqiqY ily traian 4Tz5678OZ */     for(int i = 1 ; i <= n ; i++)
/* iSJAEqiqY ily traian 4Tz5678OZ */     {
/* iSJAEqiqY ily traian 4Tz5678OZ */         cin >> x;
/* iSJAEqiqY ily traian 4Tz5678OZ */         f[divprim(x)]++;
/* iSJAEqiqY ily traian 4Tz5678OZ */         maxi = max(maxi , divprim(x));
/* iSJAEqiqY ily traian 4Tz5678OZ */     }
/* iSJAEqiqY ily traian 4Tz5678OZ */     for(int i = 1 ; i <= maxi ; i++)
/* iSJAEqiqY ily traian 4Tz5678OZ */         if(f[i]) cate++;
/* iSJAEqiqY ily traian 4Tz5678OZ */     cout << cate << '\n';
/* iSJAEqiqY ily traian 4Tz5678OZ */     for(int i = 1 ; i <= maxi ; i++)
/* iSJAEqiqY ily traian 4Tz5678OZ */         if(f[i]) cout << i << " " << f[i] << '\n';
/* iSJAEqiqY ily traian 4Tz5678OZ */     return 0;
/* iSJAEqiqY ily traian 4Tz5678OZ */ }