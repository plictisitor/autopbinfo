/* HTjRGd2I7 ily traian h2rNBCO4B */ #include <algorithm>
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
/* HTjRGd2I7 ily traian h2rNBCO4B */ using namespace std;
/* HTjRGd2I7 ily traian h2rNBCO4B */ ifstream cin("alo.in");
/* HTjRGd2I7 ily traian h2rNBCO4B */ ofstream cout("alo.out");
/* HTjRGd2I7 ily traian h2rNBCO4B */ int main()
/* HTjRGd2I7 ily traian h2rNBCO4B */ {
/* HTjRGd2I7 ily traian h2rNBCO4B */     int e , t , x , y;
/* HTjRGd2I7 ily traian h2rNBCO4B */     cin >> e >> t;
/* HTjRGd2I7 ily traian h2rNBCO4B */     for(int i = 1 ; i <= t ; i++)
/* HTjRGd2I7 ily traian h2rNBCO4B */     {
/* HTjRGd2I7 ily traian h2rNBCO4B */         cin >> x >> y;
/* HTjRGd2I7 ily traian h2rNBCO4B */         if(x % 10 != 9)
/* HTjRGd2I7 ily traian h2rNBCO4B */         {
/* HTjRGd2I7 ily traian h2rNBCO4B */             if(x / 10000 == 1) e -= 2 * y;
/* HTjRGd2I7 ily traian h2rNBCO4B */             else e += y;
/* HTjRGd2I7 ily traian h2rNBCO4B */ 
/* HTjRGd2I7 ily traian h2rNBCO4B */         }
/* HTjRGd2I7 ily traian h2rNBCO4B */     }
/* HTjRGd2I7 ily traian h2rNBCO4B */     cout << e;
/* HTjRGd2I7 ily traian h2rNBCO4B */     return 0;
/* HTjRGd2I7 ily traian h2rNBCO4B */ }