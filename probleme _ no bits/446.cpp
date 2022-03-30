/* PhJbBCIFC ily traian KWq9LgAgn */ #include <algorithm>
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
/* PhJbBCIFC ily traian KWq9LgAgn */ 
/* PhJbBCIFC ily traian KWq9LgAgn */ 
/* PhJbBCIFC ily traian KWq9LgAgn */ using namespace std;
/* PhJbBCIFC ily traian KWq9LgAgn */ 
/* PhJbBCIFC ily traian KWq9LgAgn */ int main()
/* PhJbBCIFC ily traian KWq9LgAgn */ {
/* PhJbBCIFC ily traian KWq9LgAgn */     int x,a,b,c;
/* PhJbBCIFC ily traian KWq9LgAgn */     cin >> x;
/* PhJbBCIFC ily traian KWq9LgAgn */     a=x/100;
/* PhJbBCIFC ily traian KWq9LgAgn */     b=(x%100)/10;
/* PhJbBCIFC ily traian KWq9LgAgn */     c=(x%100)%10;
/* PhJbBCIFC ily traian KWq9LgAgn */     if (a>b && a>c)
/* PhJbBCIFC ily traian KWq9LgAgn */         cout << a;
/* PhJbBCIFC ily traian KWq9LgAgn */     else if(b>a && b>c)
/* PhJbBCIFC ily traian KWq9LgAgn */         cout << b;
/* PhJbBCIFC ily traian KWq9LgAgn */         else
/* PhJbBCIFC ily traian KWq9LgAgn */             cout << c;
/* PhJbBCIFC ily traian KWq9LgAgn */     return 0;
/* PhJbBCIFC ily traian KWq9LgAgn */   
/* PhJbBCIFC ily traian KWq9LgAgn */ }