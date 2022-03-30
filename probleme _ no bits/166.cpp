/* jekSY35Kq ily traian Ssy64dPgC */ #include <algorithm>
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
/* jekSY35Kq ily traian Ssy64dPgC */ 
/* jekSY35Kq ily traian Ssy64dPgC */ using namespace std;
/* jekSY35Kq ily traian Ssy64dPgC */ 
/* jekSY35Kq ily traian Ssy64dPgC */ ifstream cin("secvmax.in");
/* jekSY35Kq ily traian Ssy64dPgC */ ofstream cout("secvmax.out");
/* jekSY35Kq ily traian Ssy64dPgC */ 
/* jekSY35Kq ily traian Ssy64dPgC */ int main()
/* jekSY35Kq ily traian Ssy64dPgC */ {
/* jekSY35Kq ily traian Ssy64dPgC */     int n;
/* jekSY35Kq ily traian Ssy64dPgC */     cin >> n;
/* jekSY35Kq ily traian Ssy64dPgC */     int a[10001];
/* jekSY35Kq ily traian Ssy64dPgC */     for(int i = 1; i <= n; ++i)
/* jekSY35Kq ily traian Ssy64dPgC */         cin >> a[i];
/* jekSY35Kq ily traian Ssy64dPgC */ 
/* jekSY35Kq ily traian Ssy64dPgC */     int lmax = 0, l = 0, st = 0, dr = 0, sum = 0, summax = 0;
/* jekSY35Kq ily traian Ssy64dPgC */     for(int i = 1; i <= n; ++i){
/* jekSY35Kq ily traian Ssy64dPgC */         if(a[i] % 2 == 0){
/* jekSY35Kq ily traian Ssy64dPgC */             sum += a[i];
/* jekSY35Kq ily traian Ssy64dPgC */             l++;
/* jekSY35Kq ily traian Ssy64dPgC */             if(l > lmax)
/* jekSY35Kq ily traian Ssy64dPgC */                 lmax = l, st = i - l + 1, dr = i, summax = sum;
/* jekSY35Kq ily traian Ssy64dPgC */             else if(l == lmax)
/* jekSY35Kq ily traian Ssy64dPgC */                 if(sum > summax)
/* jekSY35Kq ily traian Ssy64dPgC */                     st = i - l + 1, dr = i, summax = sum;
/* jekSY35Kq ily traian Ssy64dPgC */         }
/* jekSY35Kq ily traian Ssy64dPgC */         else
/* jekSY35Kq ily traian Ssy64dPgC */             l = 0, sum = 0;
/* jekSY35Kq ily traian Ssy64dPgC */     }
/* jekSY35Kq ily traian Ssy64dPgC */ 
/* jekSY35Kq ily traian Ssy64dPgC */     cout << st << ' ' << dr;
/* jekSY35Kq ily traian Ssy64dPgC */ 
/* jekSY35Kq ily traian Ssy64dPgC */     return 0;
/* jekSY35Kq ily traian Ssy64dPgC */ }