/* GDI6dWcss ily traian wcF334RUk */ #include <algorithm>
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
/* GDI6dWcss ily traian wcF334RUk */ using namespace std ;
/* GDI6dWcss ily traian wcF334RUk */ int main ()
/* GDI6dWcss ily traian wcF334RUk */ {
/* GDI6dWcss ily traian wcF334RUk */ int n , c1 , c2 , p = 1 , x = 0;
/* GDI6dWcss ily traian wcF334RUk */ cin >> n >> c1 >> c2 ;
/* GDI6dWcss ily traian wcF334RUk */     if ( n==0) x=c2;
/* GDI6dWcss ily traian wcF334RUk */     else {
/* GDI6dWcss ily traian wcF334RUk */ while (n)
/* GDI6dWcss ily traian wcF334RUk */     {
/* GDI6dWcss ily traian wcF334RUk */     if (n % 10 == c1)
/* GDI6dWcss ily traian wcF334RUk */ {x=x+c2*p;
/* GDI6dWcss ily traian wcF334RUk */ p=p*10;}
/* GDI6dWcss ily traian wcF334RUk */ 
/* GDI6dWcss ily traian wcF334RUk */ else {x=x+(n%10)*p;p=p*10;}
/* GDI6dWcss ily traian wcF334RUk */     n/=10;}}
/* GDI6dWcss ily traian wcF334RUk */     cout<< x;
/* GDI6dWcss ily traian wcF334RUk */ return 0;
/* GDI6dWcss ily traian wcF334RUk */ }