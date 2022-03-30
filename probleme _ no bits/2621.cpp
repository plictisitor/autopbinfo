/* fU10te5vt ily traian qU4Apbfhd */ #include <algorithm>
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
/* fU10te5vt ily traian qU4Apbfhd */ using namespace std;
/* fU10te5vt ily traian qU4Apbfhd */ 
/* fU10te5vt ily traian qU4Apbfhd */ ifstream cin("spower2.in");
/* fU10te5vt ily traian qU4Apbfhd */ ofstream cout("spower2.out");
/* fU10te5vt ily traian qU4Apbfhd */ 
/* fU10te5vt ily traian qU4Apbfhd */ int CB(int a[] , int n , int x)
/* fU10te5vt ily traian qU4Apbfhd */ {
/* fU10te5vt ily traian qU4Apbfhd */     int st = 1 , dr = n;
/* fU10te5vt ily traian qU4Apbfhd */     while(st <= dr)
/* fU10te5vt ily traian qU4Apbfhd */     {
/* fU10te5vt ily traian qU4Apbfhd */         int mij = (st + dr) / 2;
/* fU10te5vt ily traian qU4Apbfhd */         if(a[mij] >= x) dr = mij - 1;
/* fU10te5vt ily traian qU4Apbfhd */         else st = mij + 1;
/* fU10te5vt ily traian qU4Apbfhd */     }
/* fU10te5vt ily traian qU4Apbfhd */     return st;
/* fU10te5vt ily traian qU4Apbfhd */ }
/* fU10te5vt ily traian qU4Apbfhd */ 
/* fU10te5vt ily traian qU4Apbfhd */ int main()
/* fU10te5vt ily traian qU4Apbfhd */ {
/* fU10te5vt ily traian qU4Apbfhd */     int P[1001]={0} , p = 0 , n , x;
/* fU10te5vt ily traian qU4Apbfhd */     for(int i = 1 ; i <= 30 ; ++i)
/* fU10te5vt ily traian qU4Apbfhd */         for(int j = 0 ; j < i ; ++j)
/* fU10te5vt ily traian qU4Apbfhd */             P[++p]=(1<<i)+(1<<j);
/* fU10te5vt ily traian qU4Apbfhd */     cin >> n;
/* fU10te5vt ily traian qU4Apbfhd */     for(int i = 1 ; i <= n ; ++i)
/* fU10te5vt ily traian qU4Apbfhd */     {
/* fU10te5vt ily traian qU4Apbfhd */         cin >> x;
/* fU10te5vt ily traian qU4Apbfhd */         cout << P[CB(P , p , x)] << ' ';
/* fU10te5vt ily traian qU4Apbfhd */     }
/* fU10te5vt ily traian qU4Apbfhd */     return 0;
/* fU10te5vt ily traian qU4Apbfhd */ }