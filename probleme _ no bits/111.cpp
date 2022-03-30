/* XW8ZyN3sW ily traian Xo6Hf65xB */ #include <algorithm>
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
/* XW8ZyN3sW ily traian Xo6Hf65xB */ using namespace std;
/* XW8ZyN3sW ily traian Xo6Hf65xB */ 
/* XW8ZyN3sW ily traian Xo6Hf65xB */ int main()
/* XW8ZyN3sW ily traian Xo6Hf65xB */ {
/* XW8ZyN3sW ily traian Xo6Hf65xB */     int n, rez = 0, nrmax = 0;
/* XW8ZyN3sW ily traian Xo6Hf65xB */     cin >> n;
/* XW8ZyN3sW ily traian Xo6Hf65xB */     for(int i = 1; i <= n; ++i){
/* XW8ZyN3sW ily traian Xo6Hf65xB */         int x;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         cin >> x;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         int cx = x;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         int cnt = 0;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         int d = 2;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         while(x > 1){
/* XW8ZyN3sW ily traian Xo6Hf65xB */             int p = 0;
/* XW8ZyN3sW ily traian Xo6Hf65xB */             while(x % d == 0)
/* XW8ZyN3sW ily traian Xo6Hf65xB */                 p ++, x /= d;
/* XW8ZyN3sW ily traian Xo6Hf65xB */             if(p)
/* XW8ZyN3sW ily traian Xo6Hf65xB */                 cnt++;
/* XW8ZyN3sW ily traian Xo6Hf65xB */             d++;
/* XW8ZyN3sW ily traian Xo6Hf65xB */             if(d * d > x)
/* XW8ZyN3sW ily traian Xo6Hf65xB */                 d = x;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         }
/* XW8ZyN3sW ily traian Xo6Hf65xB */         if(cnt > nrmax)
/* XW8ZyN3sW ily traian Xo6Hf65xB */             nrmax = cnt, rez = cx;
/* XW8ZyN3sW ily traian Xo6Hf65xB */         else if(cnt == nrmax && cx < rez)
/* XW8ZyN3sW ily traian Xo6Hf65xB */             rez = cx;
/* XW8ZyN3sW ily traian Xo6Hf65xB */     }
/* XW8ZyN3sW ily traian Xo6Hf65xB */     cout << rez;
/* XW8ZyN3sW ily traian Xo6Hf65xB */     return 0;
/* XW8ZyN3sW ily traian Xo6Hf65xB */ }