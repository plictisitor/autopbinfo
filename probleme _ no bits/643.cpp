/* p8bQcmMn6 ily traian z65twW8GC */ #include <algorithm>
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
/* p8bQcmMn6 ily traian z65twW8GC */ using namespace std;
/* p8bQcmMn6 ily traian z65twW8GC */ 
/* p8bQcmMn6 ily traian z65twW8GC */ ifstream cin("detdrum1.in");
/* p8bQcmMn6 ily traian z65twW8GC */ ofstream cout("detdrum1.out");
/* p8bQcmMn6 ily traian z65twW8GC */ 
/* p8bQcmMn6 ily traian z65twW8GC */ int t[101], n, k , rez[101] , cnt;
/* p8bQcmMn6 ily traian z65twW8GC */ 
/* p8bQcmMn6 ily traian z65twW8GC */ int main()
/* p8bQcmMn6 ily traian z65twW8GC */ {
/* p8bQcmMn6 ily traian z65twW8GC */     cin >> n >> k;
/* p8bQcmMn6 ily traian z65twW8GC */     for(int i = 1 ; i <= n ; i++)
/* p8bQcmMn6 ily traian z65twW8GC */         cin >> t[i];
/* p8bQcmMn6 ily traian z65twW8GC */     while(k)
/* p8bQcmMn6 ily traian z65twW8GC */     {
/* p8bQcmMn6 ily traian z65twW8GC */         rez[++cnt] = k;
/* p8bQcmMn6 ily traian z65twW8GC */         k = t[k];
/* p8bQcmMn6 ily traian z65twW8GC */     }
/* p8bQcmMn6 ily traian z65twW8GC */     for(int i = cnt ; i >= 1 ; i--)
/* p8bQcmMn6 ily traian z65twW8GC */         cout << rez[i] << " ";
/* p8bQcmMn6 ily traian z65twW8GC */ }