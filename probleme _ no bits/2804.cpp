/* 8VY31LU3H ily traian v5wWTN8nw */ #include <algorithm>
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
/* 8VY31LU3H ily traian v5wWTN8nw */ 
/* 8VY31LU3H ily traian v5wWTN8nw */ using namespace std;
/* 8VY31LU3H ily traian v5wWTN8nw */ 
/* 8VY31LU3H ily traian v5wWTN8nw */ char s[1000001];
/* 8VY31LU3H ily traian v5wWTN8nw */ 
/* 8VY31LU3H ily traian v5wWTN8nw */ int main()
/* 8VY31LU3H ily traian v5wWTN8nw */ {
/* 8VY31LU3H ily traian v5wWTN8nw */     cin >> s;
/* 8VY31LU3H ily traian v5wWTN8nw */     int n;
/* 8VY31LU3H ily traian v5wWTN8nw */     cin >> n;
/* 8VY31LU3H ily traian v5wWTN8nw */     int x;
/* 8VY31LU3H ily traian v5wWTN8nw */     for(int i = 1 ; i <= n ; ++i)
/* 8VY31LU3H ily traian v5wWTN8nw */     {
/* 8VY31LU3H ily traian v5wWTN8nw */         cin >> x;
/* 8VY31LU3H ily traian v5wWTN8nw */         if(x % 2 == 0)
/* 8VY31LU3H ily traian v5wWTN8nw */         {
/* 8VY31LU3H ily traian v5wWTN8nw */                 strncat(s , s , x);
/* 8VY31LU3H ily traian v5wWTN8nw */         }
/* 8VY31LU3H ily traian v5wWTN8nw */         else
/* 8VY31LU3H ily traian v5wWTN8nw */         {
/* 8VY31LU3H ily traian v5wWTN8nw */             int l = 0;
/* 8VY31LU3H ily traian v5wWTN8nw */             char d[1001];
/* 8VY31LU3H ily traian v5wWTN8nw */             for(int j = x - 1 ; j >= 0 ; --j)
/* 8VY31LU3H ily traian v5wWTN8nw */                 d[l]=s[j] , l++;
/* 8VY31LU3H ily traian v5wWTN8nw */             strncat(s , d , x);
/* 8VY31LU3H ily traian v5wWTN8nw */         }
/* 8VY31LU3H ily traian v5wWTN8nw */     }
/* 8VY31LU3H ily traian v5wWTN8nw */     cout << s;
/* 8VY31LU3H ily traian v5wWTN8nw */     return 0;
/* 8VY31LU3H ily traian v5wWTN8nw */ }