/* 9GQaSPDI4 ily traian giU7RbeAk */ #include <algorithm>
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
/* 9GQaSPDI4 ily traian giU7RbeAk */ using namespace std;
/* 9GQaSPDI4 ily traian giU7RbeAk */ 
/* 9GQaSPDI4 ily traian giU7RbeAk */ int main()
/* 9GQaSPDI4 ily traian giU7RbeAk */ {
/* 9GQaSPDI4 ily traian giU7RbeAk */     int n;
/* 9GQaSPDI4 ily traian giU7RbeAk */     cin >> n;
/* 9GQaSPDI4 ily traian giU7RbeAk */     float tmp;
/* 9GQaSPDI4 ily traian giU7RbeAk */     int p=0;
/* 9GQaSPDI4 ily traian giU7RbeAk */     int u=0;
/* 9GQaSPDI4 ily traian giU7RbeAk */     int max=0;
/* 9GQaSPDI4 ily traian giU7RbeAk */     for (int i = 1 ; i <= n; ++i)
/* 9GQaSPDI4 ily traian giU7RbeAk */     {
/* 9GQaSPDI4 ily traian giU7RbeAk */         cin >> tmp;
/* 9GQaSPDI4 ily traian giU7RbeAk */         if(tmp>max)
/* 9GQaSPDI4 ily traian giU7RbeAk */         {
/* 9GQaSPDI4 ily traian giU7RbeAk */             p=i;
/* 9GQaSPDI4 ily traian giU7RbeAk */             max=tmp;
/* 9GQaSPDI4 ily traian giU7RbeAk */         }
/* 9GQaSPDI4 ily traian giU7RbeAk */         if (tmp==max)
/* 9GQaSPDI4 ily traian giU7RbeAk */         u=i;
/* 9GQaSPDI4 ily traian giU7RbeAk */     }
/* 9GQaSPDI4 ily traian giU7RbeAk */     cout << p << ' ' << u;
/* 9GQaSPDI4 ily traian giU7RbeAk */     return 0;
/* 9GQaSPDI4 ily traian giU7RbeAk */ }