/* hhTnVRai1 ily traian qsddhVuFA */ #include <algorithm>
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
/* hhTnVRai1 ily traian qsddhVuFA */ 
/* hhTnVRai1 ily traian qsddhVuFA */ using namespace std;
/* hhTnVRai1 ily traian qsddhVuFA */ 
/* hhTnVRai1 ily traian qsddhVuFA */ int main()
/* hhTnVRai1 ily traian qsddhVuFA */ {
/* hhTnVRai1 ily traian qsddhVuFA */     int n,a,b,c;
/* hhTnVRai1 ily traian qsddhVuFA */     cin >> n;
/* hhTnVRai1 ily traian qsddhVuFA */     a=n/100;
/* hhTnVRai1 ily traian qsddhVuFA */     b=(n%100)/10;
/* hhTnVRai1 ily traian qsddhVuFA */     c=(n%100)%10;
/* hhTnVRai1 ily traian qsddhVuFA */     if (a%2==1 && b%2==1 && c%2==1)
/* hhTnVRai1 ily traian qsddhVuFA */         cout << 3;
/* hhTnVRai1 ily traian qsddhVuFA */     else if ((a%2==1 && b%2==1) || (a%2==1 && c%2==1) || (c%2==1 && b%2==1))
/* hhTnVRai1 ily traian qsddhVuFA */         cout << 2 ;
/* hhTnVRai1 ily traian qsddhVuFA */         else if (a%2==1 || b%2==1 || c%2==1)
/* hhTnVRai1 ily traian qsddhVuFA */             cout << 1;
/* hhTnVRai1 ily traian qsddhVuFA */             else 
/* hhTnVRai1 ily traian qsddhVuFA */                 cout << 0;
/* hhTnVRai1 ily traian qsddhVuFA */     
/* hhTnVRai1 ily traian qsddhVuFA */     return 0;
/* hhTnVRai1 ily traian qsddhVuFA */ }