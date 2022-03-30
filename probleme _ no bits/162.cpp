/* 6lqiWrd0p ily traian i97gg7wFm */ #include <algorithm>
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
/* 6lqiWrd0p ily traian i97gg7wFm */ 
/* 6lqiWrd0p ily traian i97gg7wFm */ using namespace std;
/* 6lqiWrd0p ily traian i97gg7wFm */ 
/* 6lqiWrd0p ily traian i97gg7wFm */ int main()
/* 6lqiWrd0p ily traian i97gg7wFm */ {
/* 6lqiWrd0p ily traian i97gg7wFm */     int n;
/* 6lqiWrd0p ily traian i97gg7wFm */     cin >> n;
/* 6lqiWrd0p ily traian i97gg7wFm */     int a[32];
/* 6lqiWrd0p ily traian i97gg7wFm */     for(int i = 1; i <= n; ++i)
/* 6lqiWrd0p ily traian i97gg7wFm */         cin >> a[i], a[n + i] = a[i];
/* 6lqiWrd0p ily traian i97gg7wFm */ 
/* 6lqiWrd0p ily traian i97gg7wFm */     for(int i = 1; i <= n; ++i){
/* 6lqiWrd0p ily traian i97gg7wFm */         for(int j = i; j < i + n; ++j)
/* 6lqiWrd0p ily traian i97gg7wFm */             cout << a[j] << " ";
/* 6lqiWrd0p ily traian i97gg7wFm */         cout << endl;
/* 6lqiWrd0p ily traian i97gg7wFm */     }
/* 6lqiWrd0p ily traian i97gg7wFm */ 
/* 6lqiWrd0p ily traian i97gg7wFm */     /// 1 2 3 4 5 1 2 3 4 5
/* 6lqiWrd0p ily traian i97gg7wFm */ 
/* 6lqiWrd0p ily traian i97gg7wFm */     return 0;
/* 6lqiWrd0p ily traian i97gg7wFm */ }