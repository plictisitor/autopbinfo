/* Oy3oFWsR2 ily traian vSpEvhXPy */ #include <algorithm>
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
/* Oy3oFWsR2 ily traian vSpEvhXPy */ using namespace std;
/* Oy3oFWsR2 ily traian vSpEvhXPy */ ifstream cin("caraghios.in");
/* Oy3oFWsR2 ily traian vSpEvhXPy */ ofstream cout("caraghios.out");
/* Oy3oFWsR2 ily traian vSpEvhXPy */ int main()
/* Oy3oFWsR2 ily traian vSpEvhXPy */ {
/* Oy3oFWsR2 ily traian vSpEvhXPy */     long long cnt = 0;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     char x , y;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     cin >> x;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     if(x=='1') cnt++;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     y = x;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     while(cin >> x)
/* Oy3oFWsR2 ily traian vSpEvhXPy */     {
/* Oy3oFWsR2 ily traian vSpEvhXPy */         if(x=='1') cnt++;
/* Oy3oFWsR2 ily traian vSpEvhXPy */         if(y=='8' && x=='1') cnt++;
/* Oy3oFWsR2 ily traian vSpEvhXPy */         y = x;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     }
/* Oy3oFWsR2 ily traian vSpEvhXPy */     cout << cnt;
/* Oy3oFWsR2 ily traian vSpEvhXPy */     return 0;
/* Oy3oFWsR2 ily traian vSpEvhXPy */ }