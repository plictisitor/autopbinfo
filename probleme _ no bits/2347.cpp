/* HvoSz5j57 ily traian 8ISgTr7YS */ #include <algorithm>
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
/* HvoSz5j57 ily traian 8ISgTr7YS */ using namespace std;
/* HvoSz5j57 ily traian 8ISgTr7YS */ ifstream cin("furnici.in");
/* HvoSz5j57 ily traian 8ISgTr7YS */ ofstream cout("furnici.out");
/* HvoSz5j57 ily traian 8ISgTr7YS */ int a[101001];
/* HvoSz5j57 ily traian 8ISgTr7YS */ int nrdiv(int n)
/* HvoSz5j57 ily traian 8ISgTr7YS */ {
/* HvoSz5j57 ily traian 8ISgTr7YS */     int d = 2 , prod = 1;
/* HvoSz5j57 ily traian 8ISgTr7YS */     while(n > 1)
/* HvoSz5j57 ily traian 8ISgTr7YS */     {
/* HvoSz5j57 ily traian 8ISgTr7YS */         int p = 0;
/* HvoSz5j57 ily traian 8ISgTr7YS */         while(n % d == 0) p++,n /= d;
/* HvoSz5j57 ily traian 8ISgTr7YS */         if(p) prod *= (p+1);
/* HvoSz5j57 ily traian 8ISgTr7YS */         d++;
/* HvoSz5j57 ily traian 8ISgTr7YS */         if(d*d > n) d = n;
/* HvoSz5j57 ily traian 8ISgTr7YS */     }
/* HvoSz5j57 ily traian 8ISgTr7YS */     return prod;
/* HvoSz5j57 ily traian 8ISgTr7YS */ }
/* HvoSz5j57 ily traian 8ISgTr7YS */ int main()
/* HvoSz5j57 ily traian 8ISgTr7YS */ {
/* HvoSz5j57 ily traian 8ISgTr7YS */     int n , x , l = 0 , lmax = 0;
/* HvoSz5j57 ily traian 8ISgTr7YS */     cin >> n;
/* HvoSz5j57 ily traian 8ISgTr7YS */     for(int i = 1 ; i <= n ; ++i)
/* HvoSz5j57 ily traian 8ISgTr7YS */     {
/* HvoSz5j57 ily traian 8ISgTr7YS */         cin >> x;
/* HvoSz5j57 ily traian 8ISgTr7YS */         a[i] = nrdiv(x);
/* HvoSz5j57 ily traian 8ISgTr7YS */     }
/* HvoSz5j57 ily traian 8ISgTr7YS */     for(int i = 1 ; i <= n ;++i)
/* HvoSz5j57 ily traian 8ISgTr7YS */     {
/* HvoSz5j57 ily traian 8ISgTr7YS */         if(a[i] < a[i-1]) l++;
/* HvoSz5j57 ily traian 8ISgTr7YS */         else if(a[i] >= a[i-1])
/* HvoSz5j57 ily traian 8ISgTr7YS */         {
/* HvoSz5j57 ily traian 8ISgTr7YS */             if(l) lmax++;
/* HvoSz5j57 ily traian 8ISgTr7YS */             l = 0;
/* HvoSz5j57 ily traian 8ISgTr7YS */         }
/* HvoSz5j57 ily traian 8ISgTr7YS */     }
/* HvoSz5j57 ily traian 8ISgTr7YS */     if(l) cout << lmax+1;
/* HvoSz5j57 ily traian 8ISgTr7YS */     else cout << lmax;
/* HvoSz5j57 ily traian 8ISgTr7YS */ }