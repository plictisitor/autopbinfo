/* CQemJWYsx ily traian GFvaziqMe */ #include <algorithm>
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
/* CQemJWYsx ily traian GFvaziqMe */ using namespace std;
/* CQemJWYsx ily traian GFvaziqMe */ 
/* CQemJWYsx ily traian GFvaziqMe */ ifstream cin("3lan.in");
/* CQemJWYsx ily traian GFvaziqMe */ ofstream cout("3lan.out");
/* CQemJWYsx ily traian GFvaziqMe */ 
/* CQemJWYsx ily traian GFvaziqMe */ int n , a[1001] , s;
/* CQemJWYsx ily traian GFvaziqMe */ 
/* CQemJWYsx ily traian GFvaziqMe */ int treilan(int x , int y)
/* CQemJWYsx ily traian GFvaziqMe */ {
/* CQemJWYsx ily traian GFvaziqMe */     int rest = (x * y) % 4 , nr1 , nr2;
/* CQemJWYsx ily traian GFvaziqMe */     if(rest == 0) nr1 = 1;
/* CQemJWYsx ily traian GFvaziqMe */     else if(rest == 1) nr1 = 3;
/* CQemJWYsx ily traian GFvaziqMe */     else if(rest == 2) nr1 = 9;
/* CQemJWYsx ily traian GFvaziqMe */     else if(rest == 3) nr1 = 7;
/* CQemJWYsx ily traian GFvaziqMe */     nr1 %= 4;
/* CQemJWYsx ily traian GFvaziqMe */     if(nr1 == 0) nr2 = 1;
/* CQemJWYsx ily traian GFvaziqMe */     else if(nr1 == 1) nr2 = 3;
/* CQemJWYsx ily traian GFvaziqMe */     else if(nr1 == 2) nr2 = 9;
/* CQemJWYsx ily traian GFvaziqMe */     else if(nr1 == 3) nr2 = 7;
/* CQemJWYsx ily traian GFvaziqMe */     nr2 %= 4;
/* CQemJWYsx ily traian GFvaziqMe */     if(nr2 == 0) return 1;
/* CQemJWYsx ily traian GFvaziqMe */     else if(nr2 == 1) return 3;
/* CQemJWYsx ily traian GFvaziqMe */     else if(nr2 == 2) return 9;
/* CQemJWYsx ily traian GFvaziqMe */     else if(nr2 == 3) return 7;
/* CQemJWYsx ily traian GFvaziqMe */ }
/* CQemJWYsx ily traian GFvaziqMe */ 
/* CQemJWYsx ily traian GFvaziqMe */ int main()
/* CQemJWYsx ily traian GFvaziqMe */ {
/* CQemJWYsx ily traian GFvaziqMe */     cin >> n;
/* CQemJWYsx ily traian GFvaziqMe */     for(int i = 1 ; i <= n ; i++)
/* CQemJWYsx ily traian GFvaziqMe */         cin >> a[i];
/* CQemJWYsx ily traian GFvaziqMe */ 
/* CQemJWYsx ily traian GFvaziqMe */     for(int i = 1 ; i <= n ; i++)
/* CQemJWYsx ily traian GFvaziqMe */         for(int j = i + 1 ; j <= n ; j++)
/* CQemJWYsx ily traian GFvaziqMe */             s += treilan(i , j);
/* CQemJWYsx ily traian GFvaziqMe */     cout << s;
/* CQemJWYsx ily traian GFvaziqMe */     return 0;
/* CQemJWYsx ily traian GFvaziqMe */ }