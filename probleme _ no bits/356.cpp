/* 8JELJMUUP ily traian RTaZol11A */ #include <algorithm>
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
/* 8JELJMUUP ily traian RTaZol11A */ using namespace std;
/* 8JELJMUUP ily traian RTaZol11A */ 
/* 8JELJMUUP ily traian RTaZol11A */ int main()
/* 8JELJMUUP ily traian RTaZol11A */ {
/* 8JELJMUUP ily traian RTaZol11A */     int n;
/* 8JELJMUUP ily traian RTaZol11A */     cin >> n;
/* 8JELJMUUP ily traian RTaZol11A */     int a, b, maxim = -1;
/* 8JELJMUUP ily traian RTaZol11A */     for(int i = 1; i <= n; ++i){
/* 8JELJMUUP ily traian RTaZol11A */         int x, y;
/* 8JELJMUUP ily traian RTaZol11A */         cin >> x >> y;
/* 8JELJMUUP ily traian RTaZol11A */         if(x > y){
/* 8JELJMUUP ily traian RTaZol11A */             int grdis = x - y;
/* 8JELJMUUP ily traian RTaZol11A */             if(grdis > maxim){
/* 8JELJMUUP ily traian RTaZol11A */                 maxim = grdis;
/* 8JELJMUUP ily traian RTaZol11A */                 a = x, b = y;
/* 8JELJMUUP ily traian RTaZol11A */             }
/* 8JELJMUUP ily traian RTaZol11A */         }
/* 8JELJMUUP ily traian RTaZol11A */         else{
/* 8JELJMUUP ily traian RTaZol11A */             int grdis = y - x;
/* 8JELJMUUP ily traian RTaZol11A */             if(grdis > maxim){
/* 8JELJMUUP ily traian RTaZol11A */                 maxim = grdis;
/* 8JELJMUUP ily traian RTaZol11A */                 a = x, b = y;
/* 8JELJMUUP ily traian RTaZol11A */             }
/* 8JELJMUUP ily traian RTaZol11A */         }
/* 8JELJMUUP ily traian RTaZol11A */     }
/* 8JELJMUUP ily traian RTaZol11A */     cout << a << ' ' << b;
/* 8JELJMUUP ily traian RTaZol11A */     return 0;
/* 8JELJMUUP ily traian RTaZol11A */ }
/* 8JELJMUUP ily traian RTaZol11A */ 