/* mMyozUlXA ily traian idteDZ6Iz */ #include <algorithm>
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
/* mMyozUlXA ily traian idteDZ6Iz */ using namespace std;
/* mMyozUlXA ily traian idteDZ6Iz */ 
/* mMyozUlXA ily traian idteDZ6Iz */ int main()
/* mMyozUlXA ily traian idteDZ6Iz */ {
/* mMyozUlXA ily traian idteDZ6Iz */     int n;
/* mMyozUlXA ily traian idteDZ6Iz */     cin >> n;
/* mMyozUlXA ily traian idteDZ6Iz */     int d=2;
/* mMyozUlXA ily traian idteDZ6Iz */     int p;
/* mMyozUlXA ily traian idteDZ6Iz */     int max=0;
/* mMyozUlXA ily traian idteDZ6Iz */     int dmax=0;
/* mMyozUlXA ily traian idteDZ6Iz */     while(n>1)
/* mMyozUlXA ily traian idteDZ6Iz */     {
/* mMyozUlXA ily traian idteDZ6Iz */         p=0;
/* mMyozUlXA ily traian idteDZ6Iz */         while(n%d==0)
/* mMyozUlXA ily traian idteDZ6Iz */         {
/* mMyozUlXA ily traian idteDZ6Iz */             p++;
/* mMyozUlXA ily traian idteDZ6Iz */             n/=d;
/* mMyozUlXA ily traian idteDZ6Iz */         }
/* mMyozUlXA ily traian idteDZ6Iz */         if(p>0)
/* mMyozUlXA ily traian idteDZ6Iz */         {
/* mMyozUlXA ily traian idteDZ6Iz */             if(p>=max && d>dmax)
/* mMyozUlXA ily traian idteDZ6Iz */             max=p , dmax=d;
/* mMyozUlXA ily traian idteDZ6Iz */         }
/* mMyozUlXA ily traian idteDZ6Iz */         d++;
/* mMyozUlXA ily traian idteDZ6Iz */         if(d*d>n)
/* mMyozUlXA ily traian idteDZ6Iz */         d=n;
/* mMyozUlXA ily traian idteDZ6Iz */     }
/* mMyozUlXA ily traian idteDZ6Iz */     cout << dmax;
/* mMyozUlXA ily traian idteDZ6Iz */ }