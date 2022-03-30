/* 2MJBE7GvL ily traian dunkIB7nH */ #include <algorithm>
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
/* 2MJBE7GvL ily traian dunkIB7nH */ using namespace std;
/* 2MJBE7GvL ily traian dunkIB7nH */ 
/* 2MJBE7GvL ily traian dunkIB7nH */ int prim(int x){
/* 2MJBE7GvL ily traian dunkIB7nH */     int d = 2, cnt = 0;
/* 2MJBE7GvL ily traian dunkIB7nH */     while(x > 1){
/* 2MJBE7GvL ily traian dunkIB7nH */         int p = 0;
/* 2MJBE7GvL ily traian dunkIB7nH */         while(x % d == 0)
/* 2MJBE7GvL ily traian dunkIB7nH */             p++, x/=d;
/* 2MJBE7GvL ily traian dunkIB7nH */         if(p)
/* 2MJBE7GvL ily traian dunkIB7nH */             cnt+=d;
/* 2MJBE7GvL ily traian dunkIB7nH */         d++;
/* 2MJBE7GvL ily traian dunkIB7nH */         if(d * d > x)
/* 2MJBE7GvL ily traian dunkIB7nH */             d = x;
/* 2MJBE7GvL ily traian dunkIB7nH */     }
/* 2MJBE7GvL ily traian dunkIB7nH */     return cnt;
/* 2MJBE7GvL ily traian dunkIB7nH */ }
/* 2MJBE7GvL ily traian dunkIB7nH */ 
/* 2MJBE7GvL ily traian dunkIB7nH */ int main(){
/* 2MJBE7GvL ily traian dunkIB7nH */     int x, y;
/* 2MJBE7GvL ily traian dunkIB7nH */     cin >> x >> y;
/* 2MJBE7GvL ily traian dunkIB7nH */     if(prim(x) > prim(y))
/* 2MJBE7GvL ily traian dunkIB7nH */         cout << x;
/* 2MJBE7GvL ily traian dunkIB7nH */     else if(prim(x) < prim(y))
/* 2MJBE7GvL ily traian dunkIB7nH */         cout << y;
/* 2MJBE7GvL ily traian dunkIB7nH */     else
/* 2MJBE7GvL ily traian dunkIB7nH */         cout << min(x, y);
/* 2MJBE7GvL ily traian dunkIB7nH */     return 0;
/* 2MJBE7GvL ily traian dunkIB7nH */ }