/* pfBTUt0Ge ily traian Y9YQvHVuq */ #include <algorithm>
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
/* pfBTUt0Ge ily traian Y9YQvHVuq */ using namespace std;
/* pfBTUt0Ge ily traian Y9YQvHVuq */ 
/* pfBTUt0Ge ily traian Y9YQvHVuq */ int primacifra(int n)
/* pfBTUt0Ge ily traian Y9YQvHVuq */ {
/* pfBTUt0Ge ily traian Y9YQvHVuq */     while(n > 9)
/* pfBTUt0Ge ily traian Y9YQvHVuq */         n/=10;
/* pfBTUt0Ge ily traian Y9YQvHVuq */     return n;
/* pfBTUt0Ge ily traian Y9YQvHVuq */ }
/* pfBTUt0Ge ily traian Y9YQvHVuq */ 
/* pfBTUt0Ge ily traian Y9YQvHVuq */ int main()
/* pfBTUt0Ge ily traian Y9YQvHVuq */ {
/* pfBTUt0Ge ily traian Y9YQvHVuq */     int n;
/* pfBTUt0Ge ily traian Y9YQvHVuq */     cin >> n;
/* pfBTUt0Ge ily traian Y9YQvHVuq */     int x , y;
/* pfBTUt0Ge ily traian Y9YQvHVuq */     cin >> x;
/* pfBTUt0Ge ily traian Y9YQvHVuq */     for(int i = 2 ; i <= n ; ++i)
/* pfBTUt0Ge ily traian Y9YQvHVuq */     {
/* pfBTUt0Ge ily traian Y9YQvHVuq */         cin >> y;
/* pfBTUt0Ge ily traian Y9YQvHVuq */         if(x % 10 == primacifra(y))
/* pfBTUt0Ge ily traian Y9YQvHVuq */             cout << x << ' ' << y << '\n';
/* pfBTUt0Ge ily traian Y9YQvHVuq */         x=y;
/* pfBTUt0Ge ily traian Y9YQvHVuq */     }
/* pfBTUt0Ge ily traian Y9YQvHVuq */     return 0;
/* pfBTUt0Ge ily traian Y9YQvHVuq */ }