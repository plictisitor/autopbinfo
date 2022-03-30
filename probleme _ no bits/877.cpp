/* 1A1U02m8E ily traian EgEw3XUOr */ #include <algorithm>
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
/* 1A1U02m8E ily traian EgEw3XUOr */ using namespace std;
/* 1A1U02m8E ily traian EgEw3XUOr */ 
/* 1A1U02m8E ily traian EgEw3XUOr */ int v[1001] , a[1001] , dr;
/* 1A1U02m8E ily traian EgEw3XUOr */ 
/* 1A1U02m8E ily traian EgEw3XUOr */ int main()
/* 1A1U02m8E ily traian EgEw3XUOr */ {
/* 1A1U02m8E ily traian EgEw3XUOr */     int n;
/* 1A1U02m8E ily traian EgEw3XUOr */     cin >> n;
/* 1A1U02m8E ily traian EgEw3XUOr */     cin >> a[0];
/* 1A1U02m8E ily traian EgEw3XUOr */     v[0]=0;
/* 1A1U02m8E ily traian EgEw3XUOr */     for(int i = 1 ; i < n ; ++i)
/* 1A1U02m8E ily traian EgEw3XUOr */     {
/* 1A1U02m8E ily traian EgEw3XUOr */         cin >> a[i];
/* 1A1U02m8E ily traian EgEw3XUOr */         if(a[i] > a[v[dr]])
/* 1A1U02m8E ily traian EgEw3XUOr */         {
/* 1A1U02m8E ily traian EgEw3XUOr */             while(a[v[dr]] < a[i] && dr >= 0)
/* 1A1U02m8E ily traian EgEw3XUOr */                 dr--;
/* 1A1U02m8E ily traian EgEw3XUOr */         }
/* 1A1U02m8E ily traian EgEw3XUOr */         dr++;
/* 1A1U02m8E ily traian EgEw3XUOr */         v[dr]=i;
/* 1A1U02m8E ily traian EgEw3XUOr */     }
/* 1A1U02m8E ily traian EgEw3XUOr */     cout << dr + 1 << endl;
/* 1A1U02m8E ily traian EgEw3XUOr */     for(int i = 0 ; i <= dr ; ++i)
/* 1A1U02m8E ily traian EgEw3XUOr */         cout << v[i] + 1 << ' ';
/* 1A1U02m8E ily traian EgEw3XUOr */     return 0;
/* 1A1U02m8E ily traian EgEw3XUOr */ }