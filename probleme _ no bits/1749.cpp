/* CON08FSAr ily traian X8TpatlGy */ #include <algorithm>
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
/* CON08FSAr ily traian X8TpatlGy */ 
/* CON08FSAr ily traian X8TpatlGy */ using namespace std;
/* CON08FSAr ily traian X8TpatlGy */ int main()
/* CON08FSAr ily traian X8TpatlGy */ {
/* CON08FSAr ily traian X8TpatlGy */     int n , a[201][201] , nord = 0, sud = 0, vest = 0, est = 0 , p;
/* CON08FSAr ily traian X8TpatlGy */     cin >> n >> p;
/* CON08FSAr ily traian X8TpatlGy */     for(int i = 0 ; i < n ; i++)
/* CON08FSAr ily traian X8TpatlGy */         for(int j = 0 ; j < n ; j++)
/* CON08FSAr ily traian X8TpatlGy */         cin >> a[i][j];
/* CON08FSAr ily traian X8TpatlGy */     for(int i = 0 ; i < n ; i++)
/* CON08FSAr ily traian X8TpatlGy */         for(int j = 0 ; j < n ; j++)
/* CON08FSAr ily traian X8TpatlGy */         {
/* CON08FSAr ily traian X8TpatlGy */             if(i < j && i + j < n - 1) nord += a[i][j];
/* CON08FSAr ily traian X8TpatlGy */             else if(i < j && i + j > n - 1)  est += a[i][j];
/* CON08FSAr ily traian X8TpatlGy */             else if(i > j && i + j < n - 1) vest += a[i][j];
/* CON08FSAr ily traian X8TpatlGy */             else if(i > j && i + j > n - 1) sud += a[i][j];
/* CON08FSAr ily traian X8TpatlGy */         }
/* CON08FSAr ily traian X8TpatlGy */     if(p == 1) cout << nord;
/* CON08FSAr ily traian X8TpatlGy */     if(p == 2) cout << est;
/* CON08FSAr ily traian X8TpatlGy */     if(p == 3) cout << sud;
/* CON08FSAr ily traian X8TpatlGy */     if(p == 4) cout << vest;
/* CON08FSAr ily traian X8TpatlGy */     return 0;
/* CON08FSAr ily traian X8TpatlGy */ 
/* CON08FSAr ily traian X8TpatlGy */ }