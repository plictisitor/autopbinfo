/* 1war1n8uJ ily traian qHGAHdEeJ */ #include <algorithm>
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
/* 1war1n8uJ ily traian qHGAHdEeJ */ 
/* 1war1n8uJ ily traian qHGAHdEeJ */ using namespace std;
/* 1war1n8uJ ily traian qHGAHdEeJ */ 
/* 1war1n8uJ ily traian qHGAHdEeJ */ int nr , a[500] , x[500] , n , ok;
/* 1war1n8uJ ily traian qHGAHdEeJ */ 
/* 1war1n8uJ ily traian qHGAHdEeJ */ void afisare(int k)
/* 1war1n8uJ ily traian qHGAHdEeJ */ {
/* 1war1n8uJ ily traian qHGAHdEeJ */     for(int i = 1 ; i <= k ; i++)
/* 1war1n8uJ ily traian qHGAHdEeJ */         cout << a[x[i]] << " ";
/* 1war1n8uJ ily traian qHGAHdEeJ */     cout << '\n';
/* 1war1n8uJ ily traian qHGAHdEeJ */     ok++;
/* 1war1n8uJ ily traian qHGAHdEeJ */ }
/* 1war1n8uJ ily traian qHGAHdEeJ */ 
/* 1war1n8uJ ily traian qHGAHdEeJ */ void back(int k, long long p)
/* 1war1n8uJ ily traian qHGAHdEeJ */ {
/* 1war1n8uJ ily traian qHGAHdEeJ */     for(int i = x[k - 1] + 1 ; i <= n && p * a[i] <= nr ; i++)
/* 1war1n8uJ ily traian qHGAHdEeJ */     {
/* 1war1n8uJ ily traian qHGAHdEeJ */         x[k] = i;
/* 1war1n8uJ ily traian qHGAHdEeJ */         p *= a[x[k]];
/* 1war1n8uJ ily traian qHGAHdEeJ */         if(p <= nr)
/* 1war1n8uJ ily traian qHGAHdEeJ */             if(p == nr) afisare(k);
/* 1war1n8uJ ily traian qHGAHdEeJ */             else back(k + 1 , p);
/* 1war1n8uJ ily traian qHGAHdEeJ */         p /= a[x[k]];
/* 1war1n8uJ ily traian qHGAHdEeJ */     }
/* 1war1n8uJ ily traian qHGAHdEeJ */ }
/* 1war1n8uJ ily traian qHGAHdEeJ */ 
/* 1war1n8uJ ily traian qHGAHdEeJ */ int main()
/* 1war1n8uJ ily traian qHGAHdEeJ */ {
/* 1war1n8uJ ily traian qHGAHdEeJ */     cin >> nr;
/* 1war1n8uJ ily traian qHGAHdEeJ */     for(int i = 2 ; i * i <= nr ; i++)
/* 1war1n8uJ ily traian qHGAHdEeJ */         if(nr % i == 0)
/* 1war1n8uJ ily traian qHGAHdEeJ */         {
/* 1war1n8uJ ily traian qHGAHdEeJ */             a[++n] = i;
/* 1war1n8uJ ily traian qHGAHdEeJ */             if(i * i != nr)  a[++n] = nr / i;
/* 1war1n8uJ ily traian qHGAHdEeJ */         }
/* 1war1n8uJ ily traian qHGAHdEeJ */     sort(a + 1 , a + n + 1);
/* 1war1n8uJ ily traian qHGAHdEeJ */     back(1 , 1);
/* 1war1n8uJ ily traian qHGAHdEeJ */     if(ok == 0) cout << "NU EXISTA";
/* 1war1n8uJ ily traian qHGAHdEeJ */     return 0;
/* 1war1n8uJ ily traian qHGAHdEeJ */ }