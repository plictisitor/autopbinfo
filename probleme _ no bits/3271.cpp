/* 1tngOOIrK ily traian 9NSRNnJgO */ #include <algorithm>
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
/* 1tngOOIrK ily traian 9NSRNnJgO */ using namespace std;
/* 1tngOOIrK ily traian 9NSRNnJgO */ 
/* 1tngOOIrK ily traian 9NSRNnJgO */ int cmmdc(int a, int b){
/* 1tngOOIrK ily traian 9NSRNnJgO */     int ca = a, cb = b;
/* 1tngOOIrK ily traian 9NSRNnJgO */     while(b > 1){
/* 1tngOOIrK ily traian 9NSRNnJgO */         int r = a % b;
/* 1tngOOIrK ily traian 9NSRNnJgO */         a = b;
/* 1tngOOIrK ily traian 9NSRNnJgO */         b = r;
/* 1tngOOIrK ily traian 9NSRNnJgO */     }
/* 1tngOOIrK ily traian 9NSRNnJgO */     if(ca % a == cb % a)
/* 1tngOOIrK ily traian 9NSRNnJgO */         return a;
/* 1tngOOIrK ily traian 9NSRNnJgO */     return 1;
/* 1tngOOIrK ily traian 9NSRNnJgO */ }
/* 1tngOOIrK ily traian 9NSRNnJgO */ 
/* 1tngOOIrK ily traian 9NSRNnJgO */ int n, a, b, a1, b1, max1, maxi;
/* 1tngOOIrK ily traian 9NSRNnJgO */ 
/* 1tngOOIrK ily traian 9NSRNnJgO */ int main(){
/* 1tngOOIrK ily traian 9NSRNnJgO */     cin >> n;
/* 1tngOOIrK ily traian 9NSRNnJgO */     for(int i = 1; i <= n; ++i){
/* 1tngOOIrK ily traian 9NSRNnJgO */         cin >> a >> b;
/* 1tngOOIrK ily traian 9NSRNnJgO */         int c = cmmdc(a, b);
/* 1tngOOIrK ily traian 9NSRNnJgO */         if(c > maxi)
/* 1tngOOIrK ily traian 9NSRNnJgO */             maxi = c, a1 = a, b1 = b;
/* 1tngOOIrK ily traian 9NSRNnJgO */         else if(c == maxi && a + b > max1)
/* 1tngOOIrK ily traian 9NSRNnJgO */             max1 = a + b, a1 = a, b1 = b;
/* 1tngOOIrK ily traian 9NSRNnJgO */     }
/* 1tngOOIrK ily traian 9NSRNnJgO */     cout << a1 << ' ' << b1;
/* 1tngOOIrK ily traian 9NSRNnJgO */     return 0;
/* 1tngOOIrK ily traian 9NSRNnJgO */ }