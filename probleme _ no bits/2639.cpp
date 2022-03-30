/* dT9vqVtS2 ily traian EzP6cskKl */ #include <algorithm>
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
/* dT9vqVtS2 ily traian EzP6cskKl */ using namespace std;
/* dT9vqVtS2 ily traian EzP6cskKl */ 
/* dT9vqVtS2 ily traian EzP6cskKl */ ifstream cin("radiera.in");
/* dT9vqVtS2 ily traian EzP6cskKl */ ofstream cout("radiera.out");
/* dT9vqVtS2 ily traian EzP6cskKl */ 
/* dT9vqVtS2 ily traian EzP6cskKl */ int n , a[1002] , L[1002] , P[1002] , l , lmax;
/* dT9vqVtS2 ily traian EzP6cskKl */ 
/* dT9vqVtS2 ily traian EzP6cskKl */ int main()
/* dT9vqVtS2 ily traian EzP6cskKl */ {
/* dT9vqVtS2 ily traian EzP6cskKl */     cin >> n;
/* dT9vqVtS2 ily traian EzP6cskKl */     for(int i = 1 ; i <= n ; i++)
/* dT9vqVtS2 ily traian EzP6cskKl */         cin >> a[i];
/* dT9vqVtS2 ily traian EzP6cskKl */     for(int i = n ; i >= 1 ; i--)
/* dT9vqVtS2 ily traian EzP6cskKl */     {
/* dT9vqVtS2 ily traian EzP6cskKl */         l = 0;
/* dT9vqVtS2 ily traian EzP6cskKl */         for(int j = i + 1 ; j <= n ; j++)
/* dT9vqVtS2 ily traian EzP6cskKl */             if(a[i] <= a[j] && L[j] > l) l = L[j];
/* dT9vqVtS2 ily traian EzP6cskKl */         L[i] = l + 1;
/* dT9vqVtS2 ily traian EzP6cskKl */         if(L[i] > lmax) lmax = L[i];
/* dT9vqVtS2 ily traian EzP6cskKl */     }
/* dT9vqVtS2 ily traian EzP6cskKl */     cout << n - lmax;
/* dT9vqVtS2 ily traian EzP6cskKl */     return 0;
/* dT9vqVtS2 ily traian EzP6cskKl */ }