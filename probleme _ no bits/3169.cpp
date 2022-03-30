/* 0nO1xVxki ily traian p2hnkE7lT */ #include <algorithm>
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
/* 0nO1xVxki ily traian p2hnkE7lT */ 
/* 0nO1xVxki ily traian p2hnkE7lT */ using namespace std;
/* 0nO1xVxki ily traian p2hnkE7lT */ 
/* 0nO1xVxki ily traian p2hnkE7lT */ int n  , p[20] , x[11] , a[20] , maxi , ok , s , c[20];
/* 0nO1xVxki ily traian p2hnkE7lT */ 
/* 0nO1xVxki ily traian p2hnkE7lT */ void afisare()
/* 0nO1xVxki ily traian p2hnkE7lT */ {
/* 0nO1xVxki ily traian p2hnkE7lT */     for(int i = 1 ; i <= n ; i++)
/* 0nO1xVxki ily traian p2hnkE7lT */         cout << x[i] << " ";
/* 0nO1xVxki ily traian p2hnkE7lT */     ok = 1;
/* 0nO1xVxki ily traian p2hnkE7lT */ }
/* 0nO1xVxki ily traian p2hnkE7lT */ 
/* 0nO1xVxki ily traian p2hnkE7lT */ void back(int k , int sp)
/* 0nO1xVxki ily traian p2hnkE7lT */ {
/* 0nO1xVxki ily traian p2hnkE7lT */     for(int i = 1 ; i <= c[k] && !ok; i++)
/* 0nO1xVxki ily traian p2hnkE7lT */     {
/* 0nO1xVxki ily traian p2hnkE7lT */         x[k] = i;
/* 0nO1xVxki ily traian p2hnkE7lT */         sp += x[k] * a[k];
/* 0nO1xVxki ily traian p2hnkE7lT */         if(sp <= s && k <= n)
/* 0nO1xVxki ily traian p2hnkE7lT */         {
/* 0nO1xVxki ily traian p2hnkE7lT */             if(k == n && sp == s) afisare();
/* 0nO1xVxki ily traian p2hnkE7lT */             else if(k < n)back(k + 1 , sp);
/* 0nO1xVxki ily traian p2hnkE7lT */         }
/* 0nO1xVxki ily traian p2hnkE7lT */         sp -= x[k] * a[k];
/* 0nO1xVxki ily traian p2hnkE7lT */     }
/* 0nO1xVxki ily traian p2hnkE7lT */ }
/* 0nO1xVxki ily traian p2hnkE7lT */ 
/* 0nO1xVxki ily traian p2hnkE7lT */ int main()
/* 0nO1xVxki ily traian p2hnkE7lT */ {
/* 0nO1xVxki ily traian p2hnkE7lT */     cin >> n >> s;
/* 0nO1xVxki ily traian p2hnkE7lT */     for(int i = 1 ; i <= n ; i++)
/* 0nO1xVxki ily traian p2hnkE7lT */         cin >> a[i];
/* 0nO1xVxki ily traian p2hnkE7lT */     for(int i = 1 ; i <= n ; i++)
/* 0nO1xVxki ily traian p2hnkE7lT */         cin >> c[i];
/* 0nO1xVxki ily traian p2hnkE7lT */     back(1 , 0);
/* 0nO1xVxki ily traian p2hnkE7lT */ }