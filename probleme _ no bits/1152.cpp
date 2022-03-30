/* WEitpJn50 ily traian wvVzOEn7U */ #include <algorithm>
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
/* WEitpJn50 ily traian wvVzOEn7U */ using namespace std;
/* WEitpJn50 ily traian wvVzOEn7U */ 
/* WEitpJn50 ily traian wvVzOEn7U */ int ordonat(int a[], int st, int dr){
/* WEitpJn50 ily traian wvVzOEn7U */     if(st == dr)
/* WEitpJn50 ily traian wvVzOEn7U */         return 1;
/* WEitpJn50 ily traian wvVzOEn7U */     else{
/* WEitpJn50 ily traian wvVzOEn7U */         int mij = (st + dr) / 2;
/* WEitpJn50 ily traian wvVzOEn7U */         int a1 = ordonat(a, st, mij);
/* WEitpJn50 ily traian wvVzOEn7U */         int a2 = ordonat(a, mij + 1, dr);
/* WEitpJn50 ily traian wvVzOEn7U */         if(a1 == a2 && a[mij] <= a[mij + 1])
/* WEitpJn50 ily traian wvVzOEn7U */             return 1;
/* WEitpJn50 ily traian wvVzOEn7U */         else
/* WEitpJn50 ily traian wvVzOEn7U */             return 0;
/* WEitpJn50 ily traian wvVzOEn7U */     }
/* WEitpJn50 ily traian wvVzOEn7U */ }
/* WEitpJn50 ily traian wvVzOEn7U */ 
/* WEitpJn50 ily traian wvVzOEn7U */ int main()
/* WEitpJn50 ily traian wvVzOEn7U */ {
/* WEitpJn50 ily traian wvVzOEn7U */     int n, a[501];
/* WEitpJn50 ily traian wvVzOEn7U */     cin >> n;
/* WEitpJn50 ily traian wvVzOEn7U */     for(int i = 1; i <= n; ++i)
/* WEitpJn50 ily traian wvVzOEn7U */         cin >> a[i];
/* WEitpJn50 ily traian wvVzOEn7U */ 
/* WEitpJn50 ily traian wvVzOEn7U */     if(ordonat(a, 1, n))
/* WEitpJn50 ily traian wvVzOEn7U */         cout << "DA";
/* WEitpJn50 ily traian wvVzOEn7U */     else
/* WEitpJn50 ily traian wvVzOEn7U */         cout << "NU";
/* WEitpJn50 ily traian wvVzOEn7U */ 
/* WEitpJn50 ily traian wvVzOEn7U */     return 0;
/* WEitpJn50 ily traian wvVzOEn7U */ }