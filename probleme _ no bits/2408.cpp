/* 8EfxDG3jy ily traian cq5OW3CPs */ #include <algorithm>
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
/* 8EfxDG3jy ily traian cq5OW3CPs */ using namespace std;
/* 8EfxDG3jy ily traian cq5OW3CPs */ 
/* 8EfxDG3jy ily traian cq5OW3CPs */ ifstream cin("divtrei.in");
/* 8EfxDG3jy ily traian cq5OW3CPs */ ofstream cout("divtrei.out");
/* 8EfxDG3jy ily traian cq5OW3CPs */ 
/* 8EfxDG3jy ily traian cq5OW3CPs */ int n , k , f[3] , a[3] , b[3] , c;
/* 8EfxDG3jy ily traian cq5OW3CPs */ 
/* 8EfxDG3jy ily traian cq5OW3CPs */ int main()
/* 8EfxDG3jy ily traian cq5OW3CPs */ {
/* 8EfxDG3jy ily traian cq5OW3CPs */     cin >> n >> k;
/* 8EfxDG3jy ily traian cq5OW3CPs */     for(int i = 1 ; i <= n ; i++)
/* 8EfxDG3jy ily traian cq5OW3CPs */     {
/* 8EfxDG3jy ily traian cq5OW3CPs */         cin >> c;
/* 8EfxDG3jy ily traian cq5OW3CPs */         f[c % 3]++;
/* 8EfxDG3jy ily traian cq5OW3CPs */     }
/* 8EfxDG3jy ily traian cq5OW3CPs */     a[0] = f[0];
/* 8EfxDG3jy ily traian cq5OW3CPs */     a[1] = f[1];
/* 8EfxDG3jy ily traian cq5OW3CPs */     a[2] = f[2];
/* 8EfxDG3jy ily traian cq5OW3CPs */     for(int i = 2 ; i <= k ; i++)
/* 8EfxDG3jy ily traian cq5OW3CPs */     {
/* 8EfxDG3jy ily traian cq5OW3CPs */         b[0] = a[0] * f[0] + a[1] * f[2] + a[2] * f[1];
/* 8EfxDG3jy ily traian cq5OW3CPs */         b[1] = a[0] * f[1] + a[1] * f[0] + a[2] * f[2];
/* 8EfxDG3jy ily traian cq5OW3CPs */         b[2] = a[0] * f[2] + a[1] * f[1] + a[2] * f[0];
/* 8EfxDG3jy ily traian cq5OW3CPs */         a[0] = b[0] % 4001 ;
/* 8EfxDG3jy ily traian cq5OW3CPs */         a[1] = b[1] % 4001 ;
/* 8EfxDG3jy ily traian cq5OW3CPs */         a[2] = b[2] % 4001 ;
/* 8EfxDG3jy ily traian cq5OW3CPs */     }
/* 8EfxDG3jy ily traian cq5OW3CPs */     cout << a[0];
/* 8EfxDG3jy ily traian cq5OW3CPs */     return 0;
/* 8EfxDG3jy ily traian cq5OW3CPs */ }