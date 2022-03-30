/* 4KnxhnCBr ily traian yqfsJw0bd */ #include <algorithm>
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
/* 4KnxhnCBr ily traian yqfsJw0bd */ 
/* 4KnxhnCBr ily traian yqfsJw0bd */ using namespace std;
/* 4KnxhnCBr ily traian yqfsJw0bd */ 
/* 4KnxhnCBr ily traian yqfsJw0bd */ int main()
/* 4KnxhnCBr ily traian yqfsJw0bd */ {
/* 4KnxhnCBr ily traian yqfsJw0bd */     int n;
/* 4KnxhnCBr ily traian yqfsJw0bd */     cin >> n;
/* 4KnxhnCBr ily traian yqfsJw0bd */     int a[51];
/* 4KnxhnCBr ily traian yqfsJw0bd */     for(int i = 1; i <= n; ++i)
/* 4KnxhnCBr ily traian yqfsJw0bd */         cin >> a[i];
/* 4KnxhnCBr ily traian yqfsJw0bd */ 
/* 4KnxhnCBr ily traian yqfsJw0bd */     for(int i = 1; i <= n; ++i){
/* 4KnxhnCBr ily traian yqfsJw0bd */         int ca = a[i];
/* 4KnxhnCBr ily traian yqfsJw0bd */         int r = sqrt(ca);
/* 4KnxhnCBr ily traian yqfsJw0bd */         if(r * r == ca){
/* 4KnxhnCBr ily traian yqfsJw0bd */             n++;
/* 4KnxhnCBr ily traian yqfsJw0bd */             for(int j = n; j > i; --j)
/* 4KnxhnCBr ily traian yqfsJw0bd */                 a[j] = a[j - 1];
/* 4KnxhnCBr ily traian yqfsJw0bd */             a[i] = r;
/* 4KnxhnCBr ily traian yqfsJw0bd */             i++;
/* 4KnxhnCBr ily traian yqfsJw0bd */         }
/* 4KnxhnCBr ily traian yqfsJw0bd */     }
/* 4KnxhnCBr ily traian yqfsJw0bd */ 
/* 4KnxhnCBr ily traian yqfsJw0bd */     for(int i = 1; i <= n; ++i)
/* 4KnxhnCBr ily traian yqfsJw0bd */         cout << a[i] << " ";
/* 4KnxhnCBr ily traian yqfsJw0bd */ 
/* 4KnxhnCBr ily traian yqfsJw0bd */     return 0;
/* 4KnxhnCBr ily traian yqfsJw0bd */ }