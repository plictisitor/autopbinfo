/* m1qJqFdhl ily traian TKuUztrXt */ #include <algorithm>
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
/* m1qJqFdhl ily traian TKuUztrXt */ using namespace std;
/* m1qJqFdhl ily traian TKuUztrXt */ 
/* m1qJqFdhl ily traian TKuUztrXt */ int main()
/* m1qJqFdhl ily traian TKuUztrXt */ {
/* m1qJqFdhl ily traian TKuUztrXt */     int n;
/* m1qJqFdhl ily traian TKuUztrXt */     cin >> n;
/* m1qJqFdhl ily traian TKuUztrXt */     int maxim = 0, ap = 0;
/* m1qJqFdhl ily traian TKuUztrXt */     for(int i = 1; i <= n; ++i){
/* m1qJqFdhl ily traian TKuUztrXt */         int x;
/* m1qJqFdhl ily traian TKuUztrXt */         cin >> x;
/* m1qJqFdhl ily traian TKuUztrXt */         if(x > maxim)
/* m1qJqFdhl ily traian TKuUztrXt */             maxim = x, ap = 1;
/* m1qJqFdhl ily traian TKuUztrXt */         else if(x == maxim)
/* m1qJqFdhl ily traian TKuUztrXt */             ap++;
/* m1qJqFdhl ily traian TKuUztrXt */     }
/* m1qJqFdhl ily traian TKuUztrXt */     cout << maxim << ' ' << ap;
/* m1qJqFdhl ily traian TKuUztrXt */     return 0;
/* m1qJqFdhl ily traian TKuUztrXt */ }
/* m1qJqFdhl ily traian TKuUztrXt */ 