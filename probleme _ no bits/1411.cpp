/* wDvQNpuhe ily traian 2w3lp65fn */ #include <algorithm>
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
/* wDvQNpuhe ily traian 2w3lp65fn */ using namespace std;
/* wDvQNpuhe ily traian 2w3lp65fn */ int andr(int x)
/* wDvQNpuhe ily traian 2w3lp65fn */ {
/* wDvQNpuhe ily traian 2w3lp65fn */     while (x > 9)
/* wDvQNpuhe ily traian 2w3lp65fn */         {
/* wDvQNpuhe ily traian 2w3lp65fn */             x=x/10;
/* wDvQNpuhe ily traian 2w3lp65fn */         }
/* wDvQNpuhe ily traian 2w3lp65fn */         return x;
/* wDvQNpuhe ily traian 2w3lp65fn */ }
/* wDvQNpuhe ily traian 2w3lp65fn */ int main()
/* wDvQNpuhe ily traian 2w3lp65fn */ {
/* wDvQNpuhe ily traian 2w3lp65fn */     int a , b , cnt = 0;
/* wDvQNpuhe ily traian 2w3lp65fn */     cin >> a >> b;
/* wDvQNpuhe ily traian 2w3lp65fn */     while(a != 0 && b != 0)
/* wDvQNpuhe ily traian 2w3lp65fn */     {
/* wDvQNpuhe ily traian 2w3lp65fn */         if(andr(a)==andr(b)) cnt++;
/* wDvQNpuhe ily traian 2w3lp65fn */         cin >> a >> b;
/* wDvQNpuhe ily traian 2w3lp65fn */     }
/* wDvQNpuhe ily traian 2w3lp65fn */     cout << cnt;
/* wDvQNpuhe ily traian 2w3lp65fn */ }