/* m9XPkcZba ily traian kwjB2zovD */ #include <algorithm>
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
/* m9XPkcZba ily traian kwjB2zovD */ using namespace std;
/* m9XPkcZba ily traian kwjB2zovD */ 
/* m9XPkcZba ily traian kwjB2zovD */ int main ()
/* m9XPkcZba ily traian kwjB2zovD */ {
/* m9XPkcZba ily traian kwjB2zovD */     int n,tmp,s=0;
/* m9XPkcZba ily traian kwjB2zovD */     int max=0,min=100,smin=100,smax=0;
/* m9XPkcZba ily traian kwjB2zovD */     int a;
/* m9XPkcZba ily traian kwjB2zovD */     cin >> n;
/* m9XPkcZba ily traian kwjB2zovD */     for (int i=1; i <= n; ++i)
/* m9XPkcZba ily traian kwjB2zovD */     {
/* m9XPkcZba ily traian kwjB2zovD */         cin >> tmp;
/* m9XPkcZba ily traian kwjB2zovD */         a=tmp;
/* m9XPkcZba ily traian kwjB2zovD */         while (tmp)
/* m9XPkcZba ily traian kwjB2zovD */         {
/* m9XPkcZba ily traian kwjB2zovD */             s+=tmp%10;
/* m9XPkcZba ily traian kwjB2zovD */             tmp/=10;
/* m9XPkcZba ily traian kwjB2zovD */         }
/* m9XPkcZba ily traian kwjB2zovD */         if (s>smax)
/* m9XPkcZba ily traian kwjB2zovD */             smax = s ,max = a;
/* m9XPkcZba ily traian kwjB2zovD */         if (s<smin)
/* m9XPkcZba ily traian kwjB2zovD */             smin = s ,min = a;
/* m9XPkcZba ily traian kwjB2zovD */         s=0;
/* m9XPkcZba ily traian kwjB2zovD */     }
/* m9XPkcZba ily traian kwjB2zovD */     cout << min << endl << max;
/* m9XPkcZba ily traian kwjB2zovD */     return 0;
/* m9XPkcZba ily traian kwjB2zovD */ }