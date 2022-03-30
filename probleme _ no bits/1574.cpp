/* 6mkoi0kN6 ily traian 0bVymR02Y */ #include <algorithm>
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
/* 6mkoi0kN6 ily traian 0bVymR02Y */ using namespace std;
/* 6mkoi0kN6 ily traian 0bVymR02Y */ 
/* 6mkoi0kN6 ily traian 0bVymR02Y */ int main ()
/* 6mkoi0kN6 ily traian 0bVymR02Y */ {
/* 6mkoi0kN6 ily traian 0bVymR02Y */     int n;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     int m;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     cin >> n >> m;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     int s=0, u=0;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     for (int i = 1; i * i <= n; ++i)
/* 6mkoi0kN6 ily traian 0bVymR02Y */     {
/* 6mkoi0kN6 ily traian 0bVymR02Y */         if (n % i == 0)
/* 6mkoi0kN6 ily traian 0bVymR02Y */         {
/* 6mkoi0kN6 ily traian 0bVymR02Y */             s+=i;
/* 6mkoi0kN6 ily traian 0bVymR02Y */             s+=(n/i);
/* 6mkoi0kN6 ily traian 0bVymR02Y */         }
/* 6mkoi0kN6 ily traian 0bVymR02Y */         if (i * i == n)
/* 6mkoi0kN6 ily traian 0bVymR02Y */         s-=i;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     }
/* 6mkoi0kN6 ily traian 0bVymR02Y */     s-=n;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     for (int i = 1; i * i <= m; ++i)
/* 6mkoi0kN6 ily traian 0bVymR02Y */     {
/* 6mkoi0kN6 ily traian 0bVymR02Y */         if (m % i == 0)
/* 6mkoi0kN6 ily traian 0bVymR02Y */         {
/* 6mkoi0kN6 ily traian 0bVymR02Y */             u+=i;
/* 6mkoi0kN6 ily traian 0bVymR02Y */             u+=(m/i);
/* 6mkoi0kN6 ily traian 0bVymR02Y */         }
/* 6mkoi0kN6 ily traian 0bVymR02Y */         if (i * i == m)
/* 6mkoi0kN6 ily traian 0bVymR02Y */         u-=i;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     }
/* 6mkoi0kN6 ily traian 0bVymR02Y */     u-=m;
/* 6mkoi0kN6 ily traian 0bVymR02Y */     if (s==m && u==n)
/* 6mkoi0kN6 ily traian 0bVymR02Y */     cout << "PRIETENE";
/* 6mkoi0kN6 ily traian 0bVymR02Y */     else
/* 6mkoi0kN6 ily traian 0bVymR02Y */     cout << "NU SUNT PRIETENE";
/* 6mkoi0kN6 ily traian 0bVymR02Y */     return 0;
/* 6mkoi0kN6 ily traian 0bVymR02Y */ }