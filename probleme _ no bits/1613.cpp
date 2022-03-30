/* tHvcevioS ily traian 3IB9M27AQ */ #include <algorithm>
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
/* tHvcevioS ily traian 3IB9M27AQ */ 
/* tHvcevioS ily traian 3IB9M27AQ */ using namespace std;
/* tHvcevioS ily traian 3IB9M27AQ */ 
/* tHvcevioS ily traian 3IB9M27AQ */ int main()
/* tHvcevioS ily traian 3IB9M27AQ */ {
/* tHvcevioS ily traian 3IB9M27AQ */     int n;
/* tHvcevioS ily traian 3IB9M27AQ */     cin >> n;
/* tHvcevioS ily traian 3IB9M27AQ */     int nr1=0,nr2=0;
/* tHvcevioS ily traian 3IB9M27AQ */     int p1=1,p2=1;
/* tHvcevioS ily traian 3IB9M27AQ */     while (n)
/* tHvcevioS ily traian 3IB9M27AQ */     {
/* tHvcevioS ily traian 3IB9M27AQ */         if ((n%10)%2==0)
/* tHvcevioS ily traian 3IB9M27AQ */         {
/* tHvcevioS ily traian 3IB9M27AQ */         nr1=p1*(n%10)+nr1;
/* tHvcevioS ily traian 3IB9M27AQ */         p1*=10;
/* tHvcevioS ily traian 3IB9M27AQ */         }
/* tHvcevioS ily traian 3IB9M27AQ */         else
/* tHvcevioS ily traian 3IB9M27AQ */         {
/* tHvcevioS ily traian 3IB9M27AQ */         nr2=p2*(n%10)+nr2;
/* tHvcevioS ily traian 3IB9M27AQ */         p2*=10;
/* tHvcevioS ily traian 3IB9M27AQ */         }
/* tHvcevioS ily traian 3IB9M27AQ */         n/=10;
/* tHvcevioS ily traian 3IB9M27AQ */     }
/* tHvcevioS ily traian 3IB9M27AQ */     cout << abs(nr1-nr2);
/* tHvcevioS ily traian 3IB9M27AQ */     
/* tHvcevioS ily traian 3IB9M27AQ */     return 0;
/* tHvcevioS ily traian 3IB9M27AQ */ }