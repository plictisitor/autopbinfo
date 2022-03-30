/* ofqHjISKa ily traian 2QJCNNgMq */ #include <algorithm>
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
/* ofqHjISKa ily traian 2QJCNNgMq */ 
/* ofqHjISKa ily traian 2QJCNNgMq */ using namespace std;
/* ofqHjISKa ily traian 2QJCNNgMq */ 
/* ofqHjISKa ily traian 2QJCNNgMq */ ifstream cin("secventa.in");
/* ofqHjISKa ily traian 2QJCNNgMq */ ofstream cout("secventa.out");
/* ofqHjISKa ily traian 2QJCNNgMq */ 
/* ofqHjISKa ily traian 2QJCNNgMq */ int main()
/* ofqHjISKa ily traian 2QJCNNgMq */ {
/* ofqHjISKa ily traian 2QJCNNgMq */     int n;
/* ofqHjISKa ily traian 2QJCNNgMq */     cin >> n;
/* ofqHjISKa ily traian 2QJCNNgMq */     int a[100001];
/* ofqHjISKa ily traian 2QJCNNgMq */     for(int i = 1; i <= n; ++i)
/* ofqHjISKa ily traian 2QJCNNgMq */         cin >> a[i];
/* ofqHjISKa ily traian 2QJCNNgMq */ 
/* ofqHjISKa ily traian 2QJCNNgMq */     int lmax = 1, l = 1, st = 1, dr = 1, summax = a[1], sum = a[1];
/* ofqHjISKa ily traian 2QJCNNgMq */     for(int i = 2; i <= n; ++i){
/* ofqHjISKa ily traian 2QJCNNgMq */         if(a[i] % 2 != a[i-1] % 2){
/* ofqHjISKa ily traian 2QJCNNgMq */             l++;
/* ofqHjISKa ily traian 2QJCNNgMq */             sum += a[i];
/* ofqHjISKa ily traian 2QJCNNgMq */         }
/* ofqHjISKa ily traian 2QJCNNgMq */         else{
/* ofqHjISKa ily traian 2QJCNNgMq */             if(l > lmax)
/* ofqHjISKa ily traian 2QJCNNgMq */                 lmax = l, st = i - l, dr = i - 1, summax = sum;
/* ofqHjISKa ily traian 2QJCNNgMq */             else if(l == lmax)
/* ofqHjISKa ily traian 2QJCNNgMq */                 if(sum >= summax)
/* ofqHjISKa ily traian 2QJCNNgMq */                     summax = sum, st = i - l, dr = i - 1;
/* ofqHjISKa ily traian 2QJCNNgMq */             l = 1, sum = a[i];
/* ofqHjISKa ily traian 2QJCNNgMq */         }
/* ofqHjISKa ily traian 2QJCNNgMq */     }
/* ofqHjISKa ily traian 2QJCNNgMq */     if(l > lmax)
/* ofqHjISKa ily traian 2QJCNNgMq */         lmax = l, st = n - l + 1, dr = n, summax = sum;
/* ofqHjISKa ily traian 2QJCNNgMq */     else if(l == lmax)
/* ofqHjISKa ily traian 2QJCNNgMq */         if(sum >= summax)
/* ofqHjISKa ily traian 2QJCNNgMq */             summax = sum, st = n - l + 1, dr = n;
/* ofqHjISKa ily traian 2QJCNNgMq */ 
/* ofqHjISKa ily traian 2QJCNNgMq */     cout << st << ' ' << dr;
/* ofqHjISKa ily traian 2QJCNNgMq */ 
/* ofqHjISKa ily traian 2QJCNNgMq */     return 0;
/* ofqHjISKa ily traian 2QJCNNgMq */ }