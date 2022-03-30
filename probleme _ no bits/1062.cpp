/* to9Yu5f9e ily traian DwZjoabhJ */ #include <algorithm>
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
/* to9Yu5f9e ily traian DwZjoabhJ */ 
/* to9Yu5f9e ily traian DwZjoabhJ */ using namespace std;
/* to9Yu5f9e ily traian DwZjoabhJ */ ifstream cin("flori1.in");
/* to9Yu5f9e ily traian DwZjoabhJ */ ofstream cout("flori1.out");
/* to9Yu5f9e ily traian DwZjoabhJ */ int n , k , h , a[101] , sum , ok;
/* to9Yu5f9e ily traian DwZjoabhJ */ int main()
/* to9Yu5f9e ily traian DwZjoabhJ */ {
/* to9Yu5f9e ily traian DwZjoabhJ */     cin >> n >> h;
/* to9Yu5f9e ily traian DwZjoabhJ */     for(int i = 0 ; i < n ; ++i)
/* to9Yu5f9e ily traian DwZjoabhJ */     {
/* to9Yu5f9e ily traian DwZjoabhJ */         cin >> a[i];
/* to9Yu5f9e ily traian DwZjoabhJ */         sum += a[i];
/* to9Yu5f9e ily traian DwZjoabhJ */     }
/* to9Yu5f9e ily traian DwZjoabhJ */     sum += n * (n + 1) / 2;
/* to9Yu5f9e ily traian DwZjoabhJ */     while(ok == 0)
/* to9Yu5f9e ily traian DwZjoabhJ */     {
/* to9Yu5f9e ily traian DwZjoabhJ */         sort(a , a + n);
/* to9Yu5f9e ily traian DwZjoabhJ */         for(int i = 0; i <= k && ok == 0 ; ++i)
/* to9Yu5f9e ily traian DwZjoabhJ */             if(a[i] + 1 >= h) ok = 1;
/* to9Yu5f9e ily traian DwZjoabhJ */         if(ok == 0)
/* to9Yu5f9e ily traian DwZjoabhJ */         {
/* to9Yu5f9e ily traian DwZjoabhJ */             for(int i = 0; i <= k ; ++i) a[i]++;
/* to9Yu5f9e ily traian DwZjoabhJ */             k++;
/* to9Yu5f9e ily traian DwZjoabhJ */         }
/* to9Yu5f9e ily traian DwZjoabhJ */     }
/* to9Yu5f9e ily traian DwZjoabhJ */     cout << sum << '\n' << k;
/* to9Yu5f9e ily traian DwZjoabhJ */     return 0;
/* to9Yu5f9e ily traian DwZjoabhJ */ }