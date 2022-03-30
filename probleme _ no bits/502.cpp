/* 3vkhKkIwu ily traian uHRJ4L1Qs */ #include <algorithm>
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
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ 
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ using namespace std;
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ 
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ int main()
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ {
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     int n;
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     cin >> n;
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     int a[501];
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     for(int i = 1; i <= n; ++i)
/* 3vkhKkIwu ily traian uHRJ4L1Qs */         cin >> a[i];
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ 
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     bool toate_egale = true;
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ 
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     for(int i = 2; i <= n; ++i)
/* 3vkhKkIwu ily traian uHRJ4L1Qs */         if(a[i] != a[i-1])
/* 3vkhKkIwu ily traian uHRJ4L1Qs */             toate_egale = false;
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ 
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     if(toate_egale)
/* 3vkhKkIwu ily traian uHRJ4L1Qs */         cout << "DA";
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     else
/* 3vkhKkIwu ily traian uHRJ4L1Qs */         cout << "NU";
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ 
/* 3vkhKkIwu ily traian uHRJ4L1Qs */     return 0;
/* 3vkhKkIwu ily traian uHRJ4L1Qs */ }