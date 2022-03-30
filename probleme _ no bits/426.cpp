/* 28dXNZxMZ ily traian pxe1pbQEU */ #include <algorithm>
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
/* 28dXNZxMZ ily traian pxe1pbQEU */ using namespace std;
/* 28dXNZxMZ ily traian pxe1pbQEU */ 
/* 28dXNZxMZ ily traian pxe1pbQEU */ int main ()
/* 28dXNZxMZ ily traian pxe1pbQEU */ {
/* 28dXNZxMZ ily traian pxe1pbQEU */     int n;
/* 28dXNZxMZ ily traian pxe1pbQEU */     cin >> n;
/* 28dXNZxMZ ily traian pxe1pbQEU */     int b;
/* 28dXNZxMZ ily traian pxe1pbQEU */     cin >> b;
/* 28dXNZxMZ ily traian pxe1pbQEU */     int tmp;
/* 28dXNZxMZ ily traian pxe1pbQEU */     int max=0;
/* 28dXNZxMZ ily traian pxe1pbQEU */     while (n)
/* 28dXNZxMZ ily traian pxe1pbQEU */     {
/* 28dXNZxMZ ily traian pxe1pbQEU */         tmp = n % b;
/* 28dXNZxMZ ily traian pxe1pbQEU */         if (tmp > max)
/* 28dXNZxMZ ily traian pxe1pbQEU */         max=tmp;
/* 28dXNZxMZ ily traian pxe1pbQEU */         n/=b;
/* 28dXNZxMZ ily traian pxe1pbQEU */     }
/* 28dXNZxMZ ily traian pxe1pbQEU */     cout << max;
/* 28dXNZxMZ ily traian pxe1pbQEU */     return 0;    
/* 28dXNZxMZ ily traian pxe1pbQEU */ }