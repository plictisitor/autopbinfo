/* Rr4XFAoWP ily traian iMIjzDglu */ #include <algorithm>
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
/* Rr4XFAoWP ily traian iMIjzDglu */ 
/* Rr4XFAoWP ily traian iMIjzDglu */ using namespace std;
/* Rr4XFAoWP ily traian iMIjzDglu */ 
/* Rr4XFAoWP ily traian iMIjzDglu */ int main()
/* Rr4XFAoWP ily traian iMIjzDglu */ {
/* Rr4XFAoWP ily traian iMIjzDglu */     int n, prod;
/* Rr4XFAoWP ily traian iMIjzDglu */     cin >> n >> prod;
/* Rr4XFAoWP ily traian iMIjzDglu */     int a[1001];
/* Rr4XFAoWP ily traian iMIjzDglu */     for(int i = 1; i <= n; ++i)
/* Rr4XFAoWP ily traian iMIjzDglu */         cin >> a[i];
/* Rr4XFAoWP ily traian iMIjzDglu */ 
/* Rr4XFAoWP ily traian iMIjzDglu */     int st = 1, dr = 1000000, min = 1000001;
/* Rr4XFAoWP ily traian iMIjzDglu */     while(st <= dr){
/* Rr4XFAoWP ily traian iMIjzDglu */         int mij = (st + dr) / 2;
/* Rr4XFAoWP ily traian iMIjzDglu */         int val = 0;
/* Rr4XFAoWP ily traian iMIjzDglu */         for(int i = 1; i <= n; ++i)
/* Rr4XFAoWP ily traian iMIjzDglu */             val += mij / a[i];
/* Rr4XFAoWP ily traian iMIjzDglu */         if(val >= prod){
/* Rr4XFAoWP ily traian iMIjzDglu */             if(mij < min)
/* Rr4XFAoWP ily traian iMIjzDglu */                 min = mij;
/* Rr4XFAoWP ily traian iMIjzDglu */             dr = mij - 1;
/* Rr4XFAoWP ily traian iMIjzDglu */         }
/* Rr4XFAoWP ily traian iMIjzDglu */         else
/* Rr4XFAoWP ily traian iMIjzDglu */             st = mij + 1;
/* Rr4XFAoWP ily traian iMIjzDglu */     }
/* Rr4XFAoWP ily traian iMIjzDglu */ 
/* Rr4XFAoWP ily traian iMIjzDglu */     cout << min;
/* Rr4XFAoWP ily traian iMIjzDglu */ 
/* Rr4XFAoWP ily traian iMIjzDglu */     return 0;
/* Rr4XFAoWP ily traian iMIjzDglu */ }