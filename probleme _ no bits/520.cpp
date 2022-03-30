/* 9BzUGoSTo ily traian 8h2Od9fOr */ #include <algorithm>
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
/* 9BzUGoSTo ily traian 8h2Od9fOr */ using namespace std;
/* 9BzUGoSTo ily traian 8h2Od9fOr */ 
/* 9BzUGoSTo ily traian 8h2Od9fOr */ int main()
/* 9BzUGoSTo ily traian 8h2Od9fOr */ {
/* 9BzUGoSTo ily traian 8h2Od9fOr */     int a[1000],b[1000], n ,m;
/* 9BzUGoSTo ily traian 8h2Od9fOr */     cin >> n;
/* 9BzUGoSTo ily traian 8h2Od9fOr */     int c=0;
/* 9BzUGoSTo ily traian 8h2Od9fOr */     for(int i = 0 ; i < n ; ++i)
/* 9BzUGoSTo ily traian 8h2Od9fOr */     cin >> a[i];
/* 9BzUGoSTo ily traian 8h2Od9fOr */     cin >> m;
/* 9BzUGoSTo ily traian 8h2Od9fOr */     for(int i = 0 ; i < m ; ++i)
/* 9BzUGoSTo ily traian 8h2Od9fOr */     cin >> b[i];
/* 9BzUGoSTo ily traian 8h2Od9fOr */     for(int i = 0 ; i <= n-m ; ++i)
/* 9BzUGoSTo ily traian 8h2Od9fOr */     {
/* 9BzUGoSTo ily traian 8h2Od9fOr */         int cnt=0;
/* 9BzUGoSTo ily traian 8h2Od9fOr */         for(int j = i ; j < i+m ; ++j)
/* 9BzUGoSTo ily traian 8h2Od9fOr */         {
/* 9BzUGoSTo ily traian 8h2Od9fOr */             if(a[j]==b[j-i])
/* 9BzUGoSTo ily traian 8h2Od9fOr */             cnt++;
/* 9BzUGoSTo ily traian 8h2Od9fOr */         }
/* 9BzUGoSTo ily traian 8h2Od9fOr */         if(cnt==m)
/* 9BzUGoSTo ily traian 8h2Od9fOr */         c++;
/* 9BzUGoSTo ily traian 8h2Od9fOr */     }
/* 9BzUGoSTo ily traian 8h2Od9fOr */     cout << c;
/* 9BzUGoSTo ily traian 8h2Od9fOr */ }