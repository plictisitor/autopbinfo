/* 2K2U1QqLg ily traian vnJEl7AQw */ #include <algorithm>
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
/* 2K2U1QqLg ily traian vnJEl7AQw */ 
/* 2K2U1QqLg ily traian vnJEl7AQw */ using namespace std;
/* 2K2U1QqLg ily traian vnJEl7AQw */ 
/* 2K2U1QqLg ily traian vnJEl7AQw */ int n  , x[1001] , v[1001] , ok , s;
/* 2K2U1QqLg ily traian vnJEl7AQw */ 
/* 2K2U1QqLg ily traian vnJEl7AQw */ void afisare()
/* 2K2U1QqLg ily traian vnJEl7AQw */ {
/* 2K2U1QqLg ily traian vnJEl7AQw */     for(int i = 1 ; i <= n ; i++)
/* 2K2U1QqLg ily traian vnJEl7AQw */         cout << x[i] << " ";
/* 2K2U1QqLg ily traian vnJEl7AQw */     ok = 1;
/* 2K2U1QqLg ily traian vnJEl7AQw */ }
/* 2K2U1QqLg ily traian vnJEl7AQw */ 
/* 2K2U1QqLg ily traian vnJEl7AQw */ void back(int k , int sp)
/* 2K2U1QqLg ily traian vnJEl7AQw */ {
/* 2K2U1QqLg ily traian vnJEl7AQw */     for(int i = 0 ; i <= (s - sp) / v[k] && !ok ; i++)
/* 2K2U1QqLg ily traian vnJEl7AQw */     {
/* 2K2U1QqLg ily traian vnJEl7AQw */         x[k] = i;
/* 2K2U1QqLg ily traian vnJEl7AQw */         sp += x[k] * v[k];
/* 2K2U1QqLg ily traian vnJEl7AQw */         if(sp <= s)
/* 2K2U1QqLg ily traian vnJEl7AQw */             if(k == n)
/* 2K2U1QqLg ily traian vnJEl7AQw */             {
/* 2K2U1QqLg ily traian vnJEl7AQw */                 if(sp == s) afisare();
/* 2K2U1QqLg ily traian vnJEl7AQw */             }
/* 2K2U1QqLg ily traian vnJEl7AQw */         else back(k + 1 , sp);
/* 2K2U1QqLg ily traian vnJEl7AQw */         sp -= x[k] * v[k];
/* 2K2U1QqLg ily traian vnJEl7AQw */     }
/* 2K2U1QqLg ily traian vnJEl7AQw */ }
/* 2K2U1QqLg ily traian vnJEl7AQw */ 
/* 2K2U1QqLg ily traian vnJEl7AQw */ int main()
/* 2K2U1QqLg ily traian vnJEl7AQw */ {
/* 2K2U1QqLg ily traian vnJEl7AQw */     cin >> n >> s;
/* 2K2U1QqLg ily traian vnJEl7AQw */     for(int i = 1 ; i <= n ; i++)
/* 2K2U1QqLg ily traian vnJEl7AQw */         cin >> v[i];
/* 2K2U1QqLg ily traian vnJEl7AQw */ 
/* 2K2U1QqLg ily traian vnJEl7AQw */     back(1 , 0);
/* 2K2U1QqLg ily traian vnJEl7AQw */ }