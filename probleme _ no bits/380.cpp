/* 79M8Cyt1w ily traian EhZdJVwyU */ #include <algorithm>
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
/* 79M8Cyt1w ily traian EhZdJVwyU */ using namespace std;
/* 79M8Cyt1w ily traian EhZdJVwyU */ 
/* 79M8Cyt1w ily traian EhZdJVwyU */ int main()
/* 79M8Cyt1w ily traian EhZdJVwyU */ {
/* 79M8Cyt1w ily traian EhZdJVwyU */     int n;
/* 79M8Cyt1w ily traian EhZdJVwyU */     cin >> n;
/* 79M8Cyt1w ily traian EhZdJVwyU */     int cnt = 0;
/* 79M8Cyt1w ily traian EhZdJVwyU */     for(int i = 1; i <= n; ++i){
/* 79M8Cyt1w ily traian EhZdJVwyU */         int x;
/* 79M8Cyt1w ily traian EhZdJVwyU */         cin >> x;
/* 79M8Cyt1w ily traian EhZdJVwyU */         int d = 2;
/* 79M8Cyt1w ily traian EhZdJVwyU */         int cn = 1;
/* 79M8Cyt1w ily traian EhZdJVwyU */         while(x > 1){
/* 79M8Cyt1w ily traian EhZdJVwyU */             int p = 0;
/* 79M8Cyt1w ily traian EhZdJVwyU */             while(x % d == 0)
/* 79M8Cyt1w ily traian EhZdJVwyU */                 p++, x/=d;
/* 79M8Cyt1w ily traian EhZdJVwyU */             d++;
/* 79M8Cyt1w ily traian EhZdJVwyU */             cn = cn * (p + 1);
/* 79M8Cyt1w ily traian EhZdJVwyU */             if(d * d > x)
/* 79M8Cyt1w ily traian EhZdJVwyU */                 d = x;
/* 79M8Cyt1w ily traian EhZdJVwyU */         }
/* 79M8Cyt1w ily traian EhZdJVwyU */         if(cn == 4)
/* 79M8Cyt1w ily traian EhZdJVwyU */             cnt ++;
/* 79M8Cyt1w ily traian EhZdJVwyU */     }
/* 79M8Cyt1w ily traian EhZdJVwyU */     cout << cnt;
/* 79M8Cyt1w ily traian EhZdJVwyU */     return 0;
/* 79M8Cyt1w ily traian EhZdJVwyU */ }