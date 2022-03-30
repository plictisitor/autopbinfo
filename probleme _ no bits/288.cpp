/* DYtxtiRvp ily traian 1gEJxhQVF */ #include <algorithm>
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
/* DYtxtiRvp ily traian 1gEJxhQVF */ 
/* DYtxtiRvp ily traian 1gEJxhQVF */ using namespace std;
/* DYtxtiRvp ily traian 1gEJxhQVF */ 
/* DYtxtiRvp ily traian 1gEJxhQVF */ int main()
/* DYtxtiRvp ily traian 1gEJxhQVF */ {
/* DYtxtiRvp ily traian 1gEJxhQVF */     int n;
/* DYtxtiRvp ily traian 1gEJxhQVF */     cin >> n;
/* DYtxtiRvp ily traian 1gEJxhQVF */     int a[101];
/* DYtxtiRvp ily traian 1gEJxhQVF */     for(int i = 1; i <= n; ++i)
/* DYtxtiRvp ily traian 1gEJxhQVF */         cin >> a[i];
/* DYtxtiRvp ily traian 1gEJxhQVF */ 
/* DYtxtiRvp ily traian 1gEJxhQVF */     bool toate_pare = true;
/* DYtxtiRvp ily traian 1gEJxhQVF */ 
/* DYtxtiRvp ily traian 1gEJxhQVF */     for(int i = 1; i <= n; ++i)
/* DYtxtiRvp ily traian 1gEJxhQVF */         if(a[i] % 2 == 1)
/* DYtxtiRvp ily traian 1gEJxhQVF */             toate_pare = false;
/* DYtxtiRvp ily traian 1gEJxhQVF */ 
/* DYtxtiRvp ily traian 1gEJxhQVF */     if(toate_pare)
/* DYtxtiRvp ily traian 1gEJxhQVF */         cout << "DA";
/* DYtxtiRvp ily traian 1gEJxhQVF */     else
/* DYtxtiRvp ily traian 1gEJxhQVF */         cout << "NU";
/* DYtxtiRvp ily traian 1gEJxhQVF */ 
/* DYtxtiRvp ily traian 1gEJxhQVF */     return 0;
/* DYtxtiRvp ily traian 1gEJxhQVF */ }